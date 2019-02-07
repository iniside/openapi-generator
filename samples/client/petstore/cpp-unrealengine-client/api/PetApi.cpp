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


#include "FPetApi.h"

namespace api {

using namespace model;

bool FPetApi::AddPet(        
        FFPet body
        , const FOnAddPet& SuccessDelegate = FOnAddPet()
{
    FString VerbType = "POST";
    bool bHasFormParams = false;
    bool bHasBodyParam = true;
    bool bHasQueryParams = false;
    bool bHasPathParams = false;
    
    FString BasePath = /pet;
	TPair<FString, FString> AccetpType;
    //defaults
	AccetpType.Key = "accept";
	AccetpType.Value = "application/json";
	TArray<TPair<FString, FString>> Headers;
	Headers.Add(AccetpType);
    //if model params, assume it must be json in unreal.
    TPair<FString, FString> ContentType;
    ContentType.Key = "content-type";
    ContentType.Value = "application/json";
    Headers.Add(ContentType);

    
    CreateRequest(EVerbType::POST, BasePath, Headers, FHttpRequestCompleteDelegate::CreateRaw(this, &FPetApi::OnAddPet));
    
    return HttpRequest->ProcessRequest();
}
bool FPetApi::DeletePet(        
        int64 petId,
        FString apiKey
        , const FOnDeletePet& SuccessDelegate = FOnDeletePet()
{
    FString VerbType = "DELETE";
    bool bHasFormParams = false;
    bool bHasBodyParam = false;
    bool bHasQueryParams = false;
    bool bHasPathParams = true;
    
    FString BasePath = /pet/{petId};
	TPair<FString, FString> AccetpType;
    //defaults
	AccetpType.Key = "accept";
	AccetpType.Value = "application/json";
	TArray<TPair<FString, FString>> Headers;
	Headers.Add(AccetpType);
    //if model params, assume it must be json in unreal.
    TPair<FString, int64> Param;
    Param.Key = FString("{" + "petId" + "}");
    Param.Value = petId
    ConstructPathParams(Param, BasePath);

    
    CreateRequest(EVerbType::DELETE, BasePath, Headers, FHttpRequestCompleteDelegate::CreateRaw(this, &FPetApi::OnDeletePet));
    
    return HttpRequest->ProcessRequest();
}
bool FPetApi::FindPetsByStatus(        
        TArray&lt;FString&gt; status
        , const FOnFindPetsByStatus& SuccessDelegate = FOnFindPetsByStatus()
{
    FString VerbType = "GET";
    bool bHasFormParams = false;
    bool bHasBodyParam = false;
    bool bHasQueryParams = true;
    bool bHasPathParams = false;
    
    FString BasePath = /pet/findByStatus;
	TPair<FString, FString> AccetpType;
    //defaults
	AccetpType.Key = "accept";
	AccetpType.Value = "application/json";
	TArray<TPair<FString, FString>> Headers;
	Headers.Add(AccetpType);
    //if model params, assume it must be json in unreal.
     TArray<TPair<FString,TArray&lt;FString&gt;>> Params;
   
	{
        TPair<FString,TArray&lt;FString&gt;> statusParam;
	    statusParam.Key = "status";
	    for(FString p : status)
        {
            statusParam.Value.Add(p);
        }
        Params.Add(statusParam);
    }
    FString QueryParams = ConstructQueryParams(Params);
    BasePath += QueryParams;

    
    CreateRequest(EVerbType::GET, BasePath, Headers, FHttpRequestCompleteDelegate::CreateRaw(this, &FPetApi::OnFindPetsByStatus));
    
    return HttpRequest->ProcessRequest();
}
bool FPetApi::FindPetsByTags(        
        TArray&lt;FString&gt; tags
        , const FOnFindPetsByTags& SuccessDelegate = FOnFindPetsByTags()
{
    FString VerbType = "GET";
    bool bHasFormParams = false;
    bool bHasBodyParam = false;
    bool bHasQueryParams = true;
    bool bHasPathParams = false;
    
    FString BasePath = /pet/findByTags;
	TPair<FString, FString> AccetpType;
    //defaults
	AccetpType.Key = "accept";
	AccetpType.Value = "application/json";
	TArray<TPair<FString, FString>> Headers;
	Headers.Add(AccetpType);
    //if model params, assume it must be json in unreal.
     TArray<TPair<FString,TArray&lt;FString&gt;>> Params;
   
	{
        TPair<FString,TArray&lt;FString&gt;> statusParam;
	    statusParam.Key = "tags";
	    for(FString p : tags)
        {
            statusParam.Value.Add(p);
        }
        Params.Add(statusParam);
    }
    FString QueryParams = ConstructQueryParams(Params);
    BasePath += QueryParams;

    
    CreateRequest(EVerbType::GET, BasePath, Headers, FHttpRequestCompleteDelegate::CreateRaw(this, &FPetApi::OnFindPetsByTags));
    
    return HttpRequest->ProcessRequest();
}
bool FPetApi::GetPetById(        
        int64 petId
        , const FOnGetPetById& SuccessDelegate = FOnGetPetById()
{
    FString VerbType = "GET";
    bool bHasFormParams = false;
    bool bHasBodyParam = false;
    bool bHasQueryParams = false;
    bool bHasPathParams = true;
    
    FString BasePath = /pet/{petId};
	TPair<FString, FString> AccetpType;
    //defaults
	AccetpType.Key = "accept";
	AccetpType.Value = "application/json";
	TArray<TPair<FString, FString>> Headers;
	Headers.Add(AccetpType);
    //if model params, assume it must be json in unreal.
    TPair<FString, int64> Param;
    Param.Key = FString("{" + "petId" + "}");
    Param.Value = petId
    ConstructPathParams(Param, BasePath);

    
    CreateRequest(EVerbType::GET, BasePath, Headers, FHttpRequestCompleteDelegate::CreateRaw(this, &FPetApi::OnGetPetById));
    
    return HttpRequest->ProcessRequest();
}
bool FPetApi::UpdatePet(        
        FFPet body
        , const FOnUpdatePet& SuccessDelegate = FOnUpdatePet()
{
    FString VerbType = "PUT";
    bool bHasFormParams = false;
    bool bHasBodyParam = true;
    bool bHasQueryParams = false;
    bool bHasPathParams = false;
    
    FString BasePath = /pet;
	TPair<FString, FString> AccetpType;
    //defaults
	AccetpType.Key = "accept";
	AccetpType.Value = "application/json";
	TArray<TPair<FString, FString>> Headers;
	Headers.Add(AccetpType);
    //if model params, assume it must be json in unreal.
    TPair<FString, FString> ContentType;
    ContentType.Key = "content-type";
    ContentType.Value = "application/json";
    Headers.Add(ContentType);

    
    CreateRequest(EVerbType::PUT, BasePath, Headers, FHttpRequestCompleteDelegate::CreateRaw(this, &FPetApi::OnUpdatePet));
    
    return HttpRequest->ProcessRequest();
}
bool FPetApi::UpdatePetWithForm(        
        int64 petId,
        FString name,
        FString status
        , const FOnUpdatePetWithForm& SuccessDelegate = FOnUpdatePetWithForm()
{
    FString VerbType = "POST";
    bool bHasFormParams = true;
    bool bHasBodyParam = false;
    bool bHasQueryParams = false;
    bool bHasPathParams = true;
    
    FString BasePath = /pet/{petId};
	TPair<FString, FString> AccetpType;
    //defaults
	AccetpType.Key = "accept";
	AccetpType.Value = "application/json";
	TArray<TPair<FString, FString>> Headers;
	Headers.Add(AccetpType);
    //if model params, assume it must be json in unreal.
    TPair<FString, int64> Param;
    Param.Key = FString("{" + "petId" + "}");
    Param.Value = petId
    ConstructPathParams(Param, BasePath);

    
    CreateRequest(EVerbType::POST, BasePath, Headers, FHttpRequestCompleteDelegate::CreateRaw(this, &FPetApi::OnUpdatePetWithForm));
    
    return HttpRequest->ProcessRequest();
}
bool FPetApi::UploadFile(        
        int64 petId,
        FString additionalMetadata,
        HttpContent file
        , const FOnUploadFile& SuccessDelegate = FOnUploadFile()
{
    FString VerbType = "POST";
    bool bHasFormParams = true;
    bool bHasBodyParam = false;
    bool bHasQueryParams = false;
    bool bHasPathParams = true;
    
    FString BasePath = /pet/{petId}/uploadImage;
	TPair<FString, FString> AccetpType;
    //defaults
	AccetpType.Key = "accept";
	AccetpType.Value = "application/json";
	TArray<TPair<FString, FString>> Headers;
	Headers.Add(AccetpType);
    //if model params, assume it must be json in unreal.
    TPair<FString, int64> Param;
    Param.Key = FString("{" + "petId" + "}");
    Param.Value = petId
    ConstructPathParams(Param, BasePath);

    
    CreateRequest(EVerbType::POST, BasePath, Headers, FHttpRequestCompleteDelegate::CreateRaw(this, &FPetApi::OnUploadFile));
    
    return HttpRequest->ProcessRequest();
}

void FPetApi::OnAddPetResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded, FOnAddPet SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate)
{
    FPlayFabCppError errorResult;
    ResponseStr = HttpResponse->GetContentAsString();

    
    
    
}
void FPetApi::OnDeletePetResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded, FOnDeletePet SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate)
{
    FPlayFabCppError errorResult;
    ResponseStr = HttpResponse->GetContentAsString();

    
    
    
}
void FPetApi::OnFindPetsByStatusResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded, FOnFindPetsByStatus SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate)
{
    FPlayFabCppError errorResult;
    ResponseStr = HttpResponse->GetContentAsString();

    TArray<FPet> OutResult;
    FString ResponseStr = HttpResponse->GetContentAsString();
	DecodeJsonArray<TArray<FPet>>(OutResult, HttpResponse);
    
    
    
}
void FPetApi::OnFindPetsByTagsResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded, FOnFindPetsByTags SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate)
{
    FPlayFabCppError errorResult;
    ResponseStr = HttpResponse->GetContentAsString();

    TArray<FPet> OutResult;
    FString ResponseStr = HttpResponse->GetContentAsString();
	DecodeJsonArray<TArray<FPet>>(OutResult, HttpResponse);
    
    
    
}
void FPetApi::OnGetPetByIdResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded, FOnGetPetById SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate)
{
    FPlayFabCppError errorResult;
    ResponseStr = HttpResponse->GetContentAsString();

    FPet OutResult;
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
void FPetApi::OnUpdatePetResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded, FOnUpdatePet SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate)
{
    FPlayFabCppError errorResult;
    ResponseStr = HttpResponse->GetContentAsString();

    
    
    
}
void FPetApi::OnUpdatePetWithFormResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded, FOnUpdatePetWithForm SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate)
{
    FPlayFabCppError errorResult;
    ResponseStr = HttpResponse->GetContentAsString();

    
    
    
}
void FPetApi::OnUploadFileResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded, FOnUploadFile SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate)
{
    FPlayFabCppError errorResult;
    ResponseStr = HttpResponse->GetContentAsString();

    FApiResponse OutResult;
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

