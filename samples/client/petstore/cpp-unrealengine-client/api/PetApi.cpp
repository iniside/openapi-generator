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


#include "PetApi.h"

namespace api {

using namespace model;

bool FPetApi::AddPet(        
        Pet Body
        , const FOnAddPet& SuccessDelegate = FOnAddPet()
{
    POST
    auto HttpRequest = PlayFabRequestHandler::SendRequest(/pet, request.toJSONString(), TEXT("X-SecretKey"), PlayFabSettings::GetDeveloperSecretKey());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FPetApi::OnAddPet, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}
bool FPetApi::DeletePet(        
        int64 PetId,
        FString ApiKey
        , const FOnDeletePet& SuccessDelegate = FOnDeletePet()
{
    DELETE
    auto HttpRequest = PlayFabRequestHandler::SendRequest(/pet/{petId}, request.toJSONString(), TEXT("X-SecretKey"), PlayFabSettings::GetDeveloperSecretKey());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FPetApi::OnDeletePet, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}
bool FPetApi::FindPetsByStatus(        
        TArray&lt;FString&gt; Status
        , const FOnFindPetsByStatus& SuccessDelegate = FOnFindPetsByStatus()
{
    GET
    auto HttpRequest = PlayFabRequestHandler::SendRequest(/pet/findByStatus, request.toJSONString(), TEXT("X-SecretKey"), PlayFabSettings::GetDeveloperSecretKey());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FPetApi::OnFindPetsByStatus, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}
bool FPetApi::FindPetsByTags(        
        TArray&lt;FString&gt; Tags
        , const FOnFindPetsByTags& SuccessDelegate = FOnFindPetsByTags()
{
    GET
    auto HttpRequest = PlayFabRequestHandler::SendRequest(/pet/findByTags, request.toJSONString(), TEXT("X-SecretKey"), PlayFabSettings::GetDeveloperSecretKey());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FPetApi::OnFindPetsByTags, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}
bool FPetApi::GetPetById(        
        int64 PetId
        , const FOnGetPetById& SuccessDelegate = FOnGetPetById()
{
    GET
    auto HttpRequest = PlayFabRequestHandler::SendRequest(/pet/{petId}, request.toJSONString(), TEXT("X-SecretKey"), PlayFabSettings::GetDeveloperSecretKey());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FPetApi::OnGetPetById, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}
bool FPetApi::UpdatePet(        
        Pet Body
        , const FOnUpdatePet& SuccessDelegate = FOnUpdatePet()
{
    PUT
    auto HttpRequest = PlayFabRequestHandler::SendRequest(/pet, request.toJSONString(), TEXT("X-SecretKey"), PlayFabSettings::GetDeveloperSecretKey());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FPetApi::OnUpdatePet, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}
bool FPetApi::UpdatePetWithForm(        
        int64 PetId,
        FString Name,
        FString Status
        , const FOnUpdatePetWithForm& SuccessDelegate = FOnUpdatePetWithForm()
{
    POST
    auto HttpRequest = PlayFabRequestHandler::SendRequest(/pet/{petId}, request.toJSONString(), TEXT("X-SecretKey"), PlayFabSettings::GetDeveloperSecretKey());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FPetApi::OnUpdatePetWithForm, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}
bool FPetApi::UploadFile(        
        int64 PetId,
        FString AdditionalMetadata,
        HttpContent File
        , const FOnUploadFile& SuccessDelegate = FOnUploadFile()
{
    POST
    auto HttpRequest = PlayFabRequestHandler::SendRequest(/pet/{petId}/uploadImage, request.toJSONString(), TEXT("X-SecretKey"), PlayFabSettings::GetDeveloperSecretKey());
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FPetApi::OnUploadFile, SuccessDelegate, ErrorDelegate);
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

    TArray<Pet> OutResult;
    TArray<TSharedPtr<FJsonValue>> JsonValues;
    TSharedRef<TJsonReader<> > JsonReader = TJsonReaderFactory<>::Create(ResponseStr);

    if (FJsonSerializer::Deserialize(JsonReader, JsonValues))
    {
        for(int32 Idx = 0; Idx < JsonValues.Num(); Idx++)
        {
            switch(JsonValues[Idx]->Type)
            {
                	case None:
                    {
                        break;
                    }
	                case Null:
                    {
                        break;
                    }
	                case String:
                    {
                        break;
                    }
	                case Number:
                    {
                        break;
                    }
	                case Boolean:
                    {
                        break;
                    }
	                case Array:
                    {
                        break;
                    }
	                case Objec:
                    {
                        TSharedPtr<FJsonObject>* OutObject;
                        JsonValue->AsObject()->TryGetObject(OutObject);
                         NewElem;
                        NewElem.FromJson(*OutObject);
                        OutResult.Add(NewElem);
                        break;
                    }
            }
        }
        if (PlayFabRequestHandler::DecodeError(JsonObject, OutError))
        {
            return false;
        }
    }
    
    
    
}
void FPetApi::OnFindPetsByTagsResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded, FOnFindPetsByTags SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate)
{
    FPlayFabCppError errorResult;
    ResponseStr = HttpResponse->GetContentAsString();

    TArray<Pet> OutResult;
    TArray<TSharedPtr<FJsonValue>> JsonValues;
    TSharedRef<TJsonReader<> > JsonReader = TJsonReaderFactory<>::Create(ResponseStr);

    if (FJsonSerializer::Deserialize(JsonReader, JsonValues))
    {
        for(int32 Idx = 0; Idx < JsonValues.Num(); Idx++)
        {
            switch(JsonValues[Idx]->Type)
            {
                	case None:
                    {
                        break;
                    }
	                case Null:
                    {
                        break;
                    }
	                case String:
                    {
                        break;
                    }
	                case Number:
                    {
                        break;
                    }
	                case Boolean:
                    {
                        break;
                    }
	                case Array:
                    {
                        break;
                    }
	                case Objec:
                    {
                        TSharedPtr<FJsonObject>* OutObject;
                        JsonValue->AsObject()->TryGetObject(OutObject);
                         NewElem;
                        NewElem.FromJson(*OutObject);
                        OutResult.Add(NewElem);
                        break;
                    }
            }
        }
        if (PlayFabRequestHandler::DecodeError(JsonObject, OutError))
        {
            return false;
        }
    }
    
    
    
}
void FPetApi::OnGetPetByIdResult(FHttpRequestPtr HttpRequest
        , FHttpResponsePtr HttpResponse
        , bool bSucceeded, FOnGetPetById SuccessDelegate
        , FPlayFabErrorDelegate ErrorDelegate)
{
    FPlayFabCppError errorResult;
    ResponseStr = HttpResponse->GetContentAsString();

    Pet OutResult;
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

    ApiResponse OutResult;
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

