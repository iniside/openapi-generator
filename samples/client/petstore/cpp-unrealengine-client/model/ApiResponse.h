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
 * ApiResponse.h
 *
 * Describes the result of uploading an image resource
 */



#include "ModelBase.h"

#include "FString.h"

namespace model {

/*
 * Describes the result of uploading an image resource
 */
struct  FApiResponse
    : public FJsonSerializable
{
public:
    BEGIN_JSON_SERIALIZER
        JSON_SERIALIZE("Code", Code);
            JSON_SERIALIZE("Type", Type);
            JSON_SERIALIZE("Message", Message);
    END_JSON_SERIALIZER
private:
     
    int32 Code;
    FString Type;
    FString Message;
    
};

}
