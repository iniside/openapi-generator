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
 * FPet.h
 *
 * A pet for sale in the pet store
 */



#include "ModelBase.h"

#include "FString.h"
#include "TArray.h"
#include "FTag.h"
#include "FCategory.h"

namespace model {

/*
 * A pet for sale in the pet store
 */
struct  FFPet
    : public FJsonSerializable
{
public:
    BEGIN_JSON_SERIALIZER
        JSON_SERIALIZE("Id", Id);
            JSON_SERIALIZE_SERIALIZABLE("Category", Category);
            JSON_SERIALIZE("Name", Name);
        JSON_SERIALIZE_ARRAY("PhotoUrls", PhotoUrls);
        
       JSON_SERIALIZE_ARRAY_SERIALIZABLE("Tags", Tags, FTag); 
        
            JSON_SERIALIZE("Status", Status);
    END_JSON_SERIALIZER
private:
     
    int64 Id;
    FCategory Category;
    FString Name;
    TArray<FString> PhotoUrls;
    TArray<FTag> Tags;
    FString Status;
    
};

}

