/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * UserApi.h
 *
 * 
 */


#include "../ApiClient.h"

#include "FString.h"
#include "TArray.h"
#include "User.h"



namespace api {

class  FUserApi : public IUserApi 
{
public:
    DECLARE_DELEGATE_OneParam(FOnCreateUser, const & )
    DECLARE_DELEGATE_OneParam(FOnCreateUsersWithArrayInput, const & )
    DECLARE_DELEGATE_OneParam(FOnCreateUsersWithListInput, const & )
    DECLARE_DELEGATE_OneParam(FOnDeleteUser, const & )
    DECLARE_DELEGATE_OneParam(FOnGetUserByName, const User& )
    DECLARE_DELEGATE_OneParam(FOnLoginUser, const FString& )
    DECLARE_DELEGATE_OneParam(FOnLogoutUser, const & )
    DECLARE_DELEGATE_OneParam(FOnUpdateUser, const & )
   
    bool CreateUser(
        User Body
        , const FOnCreateUser& SuccessDelegate = FOnCreateUser()
    )
   
    bool CreateUsersWithArrayInput(
        TArray&lt;User&gt; Body
        , const FOnCreateUsersWithArrayInput& SuccessDelegate = FOnCreateUsersWithArrayInput()
    )
   
    bool CreateUsersWithListInput(
        TArray&lt;User&gt; Body
        , const FOnCreateUsersWithListInput& SuccessDelegate = FOnCreateUsersWithListInput()
    )
   
    bool DeleteUser(
        FString Username
        , const FOnDeleteUser& SuccessDelegate = FOnDeleteUser()
    )
   
    bool GetUserByName(
        FString Username
        , const FOnGetUserByName& SuccessDelegate = FOnGetUserByName()
    )
   
    bool LoginUser(
        FString Username,
        FString Password
        , const FOnLoginUser& SuccessDelegate = FOnLoginUser()
    )
   
    bool LogoutUser(
        , const FOnLogoutUser& SuccessDelegate = FOnLogoutUser()
    )
   
    bool UpdateUser(
        FString Username,
        User Body
        , const FOnUpdateUser& SuccessDelegate = FOnUpdateUser()
    )

void OnCreateUserResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded
        , FOnCreateUser SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate);
void OnCreateUsersWithArrayInputResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded
        , FOnCreateUsersWithArrayInput SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate);
void OnCreateUsersWithListInputResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded
        , FOnCreateUsersWithListInput SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate);
void OnDeleteUserResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded
        , FOnDeleteUser SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate);
void OnGetUserByNameResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded
        , FOnGetUserByName SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate);
void OnLoginUserResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded
        , FOnLoginUser SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate);
void OnLogoutUserResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded
        , FOnLogoutUser SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate);
void OnUpdateUserResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded
        , FOnUpdateUser SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
