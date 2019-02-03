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


#include "StoreApi.h"

namespace api {

using namespace model;

bool FStoreApi::DeleteOrder(        
        int64 OrderId
        , const FOnDeleteOrder& SuccessDelegate = FOnDeleteOrder()
{
    DELETE
    auto HttpRequest = PlayFabRequestHandler::SendRequest(/store/order/{orderId}, request.toJSONString(), TEXT("X-SecretKey"), PlayFabSettings::GetDeveloperSecretKey());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FStoreApi::OnDeleteOrder, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}
bool FStoreApi::GetInventory(        
        , const FOnGetInventory& SuccessDelegate = FOnGetInventory()
{
    GET
    auto HttpRequest = PlayFabRequestHandler::SendRequest(/store/inventory, request.toJSONString(), TEXT("X-SecretKey"), PlayFabSettings::GetDeveloperSecretKey());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FStoreApi::OnGetInventory, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}
bool FStoreApi::GetOrderById(        
        int64 OrderId
        , const FOnGetOrderById& SuccessDelegate = FOnGetOrderById()
{
    GET
    auto HttpRequest = PlayFabRequestHandler::SendRequest(/store/order/{orderId}, request.toJSONString(), TEXT("X-SecretKey"), PlayFabSettings::GetDeveloperSecretKey());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FStoreApi::OnGetOrderById, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}
bool FStoreApi::PlaceOrder(        
        Order Body
        , const FOnPlaceOrder& SuccessDelegate = FOnPlaceOrder()
{
    POST
    auto HttpRequest = PlayFabRequestHandler::SendRequest(/store/order, request.toJSONString(), TEXT("X-SecretKey"), PlayFabSettings::GetDeveloperSecretKey());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FStoreApi::OnPlaceOrder, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void FStoreApi::OnDeleteOrderResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded, FOnDeleteOrder SuccessDelegate
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
void FStoreApi::OnGetInventoryResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded, FOnGetInventory SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate)
{
    TMap<FString, int32> OutResult;
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
void FStoreApi::OnGetOrderByIdResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded, FOnGetOrderById SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate)
{
    Order OutResult;
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
void FStoreApi::OnPlaceOrderResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded, FOnPlaceOrder SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate)
{
    Order OutResult;
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

