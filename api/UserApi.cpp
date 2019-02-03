/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include "UserApi.h"

namespace api {

using namespace model;

bool FUserApi::CreateUser(        
        User Body
        , const FOnCreateUser& SuccessDelegate = FOnCreateUser()
{
    POST
    auto HttpRequest = PlayFabRequestHandler::SendRequest(/user, request.toJSONString(), TEXT("X-SecretKey"), PlayFabSettings::GetDeveloperSecretKey());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FUserApi::OnCreateUser, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}
bool FUserApi::CreateUsersWithArrayInput(        
        TArray&lt;User&gt; Body
        , const FOnCreateUsersWithArrayInput& SuccessDelegate = FOnCreateUsersWithArrayInput()
{
    POST
    auto HttpRequest = PlayFabRequestHandler::SendRequest(/user/createWithArray, request.toJSONString(), TEXT("X-SecretKey"), PlayFabSettings::GetDeveloperSecretKey());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FUserApi::OnCreateUsersWithArrayInput, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}
bool FUserApi::CreateUsersWithListInput(        
        TArray&lt;User&gt; Body
        , const FOnCreateUsersWithListInput& SuccessDelegate = FOnCreateUsersWithListInput()
{
    POST
    auto HttpRequest = PlayFabRequestHandler::SendRequest(/user/createWithList, request.toJSONString(), TEXT("X-SecretKey"), PlayFabSettings::GetDeveloperSecretKey());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FUserApi::OnCreateUsersWithListInput, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}
bool FUserApi::DeleteUser(        
        FString Username
        , const FOnDeleteUser& SuccessDelegate = FOnDeleteUser()
{
    DELETE
    auto HttpRequest = PlayFabRequestHandler::SendRequest(/user/{username}, request.toJSONString(), TEXT("X-SecretKey"), PlayFabSettings::GetDeveloperSecretKey());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FUserApi::OnDeleteUser, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}
bool FUserApi::GetUserByName(        
        FString Username
        , const FOnGetUserByName& SuccessDelegate = FOnGetUserByName()
{
    GET
    auto HttpRequest = PlayFabRequestHandler::SendRequest(/user/{username}, request.toJSONString(), TEXT("X-SecretKey"), PlayFabSettings::GetDeveloperSecretKey());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FUserApi::OnGetUserByName, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}
bool FUserApi::LoginUser(        
        FString Username,
        FString Password
        , const FOnLoginUser& SuccessDelegate = FOnLoginUser()
{
    GET
    auto HttpRequest = PlayFabRequestHandler::SendRequest(/user/login, request.toJSONString(), TEXT("X-SecretKey"), PlayFabSettings::GetDeveloperSecretKey());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FUserApi::OnLoginUser, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}
bool FUserApi::LogoutUser(        
        , const FOnLogoutUser& SuccessDelegate = FOnLogoutUser()
{
    GET
    auto HttpRequest = PlayFabRequestHandler::SendRequest(/user/logout, request.toJSONString(), TEXT("X-SecretKey"), PlayFabSettings::GetDeveloperSecretKey());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FUserApi::OnLogoutUser, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}
bool FUserApi::UpdateUser(        
        FString Username,
        User Body
        , const FOnUpdateUser& SuccessDelegate = FOnUpdateUser()
{
    PUT
    auto HttpRequest = PlayFabRequestHandler::SendRequest(/user/{username}, request.toJSONString(), TEXT("X-SecretKey"), PlayFabSettings::GetDeveloperSecretKey());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FUserApi::OnUpdateUser, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void FUserApi::OnCreateUserResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded, FOnCreateUser SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate)
{
     OutResult;
    FPlayFabCppError errorResult;

    ResponseStr = HttpResponse->GetContentAsString();
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<> > JsonReader = TJsonReaderFactory<>::Create(ResponseStr);

    if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
    {
        OutResult.FromJson(JsonObject);
        if (PlayFabRequestHandler::DecodeError(JsonObject, OutError))
        {
            return false;
        }
    }

    {
        SuccessDelegate.ExecuteIfBound(OutResult);
    }
    
}
void FUserApi::OnCreateUsersWithArrayInputResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded, FOnCreateUsersWithArrayInput SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate)
{
     OutResult;
    FPlayFabCppError errorResult;

    ResponseStr = HttpResponse->GetContentAsString();
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<> > JsonReader = TJsonReaderFactory<>::Create(ResponseStr);

    if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
    {
        OutResult.FromJson(JsonObject);
        if (PlayFabRequestHandler::DecodeError(JsonObject, OutError))
        {
            return false;
        }
    }

    {
        SuccessDelegate.ExecuteIfBound(OutResult);
    }
    
}
void FUserApi::OnCreateUsersWithListInputResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded, FOnCreateUsersWithListInput SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate)
{
     OutResult;
    FPlayFabCppError errorResult;

    ResponseStr = HttpResponse->GetContentAsString();
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<> > JsonReader = TJsonReaderFactory<>::Create(ResponseStr);

    if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
    {
        OutResult.FromJson(JsonObject);
        if (PlayFabRequestHandler::DecodeError(JsonObject, OutError))
        {
            return false;
        }
    }

    {
        SuccessDelegate.ExecuteIfBound(OutResult);
    }
    
}
void FUserApi::OnDeleteUserResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded, FOnDeleteUser SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate)
{
     OutResult;
    FPlayFabCppError errorResult;

    ResponseStr = HttpResponse->GetContentAsString();
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<> > JsonReader = TJsonReaderFactory<>::Create(ResponseStr);

    if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
    {
        OutResult.FromJson(JsonObject);
        if (PlayFabRequestHandler::DecodeError(JsonObject, OutError))
        {
            return false;
        }
    }

    {
        SuccessDelegate.ExecuteIfBound(OutResult);
    }
    
}
void FUserApi::OnGetUserByNameResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded, FOnGetUserByName SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate)
{
    User OutResult;
    FPlayFabCppError errorResult;

    ResponseStr = HttpResponse->GetContentAsString();
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<> > JsonReader = TJsonReaderFactory<>::Create(ResponseStr);

    if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
    {
        OutResult.FromJson(JsonObject);
        if (PlayFabRequestHandler::DecodeError(JsonObject, OutError))
        {
            return false;
        }
    }

    {
        SuccessDelegate.ExecuteIfBound(OutResult);
    }
    
}
void FUserApi::OnLoginUserResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded, FOnLoginUser SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate)
{
    FString OutResult;
    FPlayFabCppError errorResult;

    ResponseStr = HttpResponse->GetContentAsString();
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<> > JsonReader = TJsonReaderFactory<>::Create(ResponseStr);

    if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
    {
        OutResult.FromJson(JsonObject);
        if (PlayFabRequestHandler::DecodeError(JsonObject, OutError))
        {
            return false;
        }
    }

    {
        SuccessDelegate.ExecuteIfBound(OutResult);
    }
    
}
void FUserApi::OnLogoutUserResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded, FOnLogoutUser SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate)
{
     OutResult;
    FPlayFabCppError errorResult;

    ResponseStr = HttpResponse->GetContentAsString();
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<> > JsonReader = TJsonReaderFactory<>::Create(ResponseStr);

    if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
    {
        OutResult.FromJson(JsonObject);
        if (PlayFabRequestHandler::DecodeError(JsonObject, OutError))
        {
            return false;
        }
    }

    {
        SuccessDelegate.ExecuteIfBound(OutResult);
    }
    
}
void FUserApi::OnUpdateUserResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded, FOnUpdateUser SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate)
{
     OutResult;
    FPlayFabCppError errorResult;

    ResponseStr = HttpResponse->GetContentAsString();
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<> > JsonReader = TJsonReaderFactory<>::Create(ResponseStr);

    if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
    {
        OutResult.FromJson(JsonObject);
        if (PlayFabRequestHandler::DecodeError(JsonObject, OutError))
        {
            return false;
        }
    }

    {
        SuccessDelegate.ExecuteIfBound(OutResult);
    }
    
}

}

