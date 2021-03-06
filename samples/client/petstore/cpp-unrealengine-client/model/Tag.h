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
 * FTag.h
 *
 * A tag for a pet
 */



#include "ModelBase.h"

#include "FString.h"

namespace model {

/*
 * A tag for a pet
 */
struct  FFTag
    : public FJsonSerializable
{
public:
    BEGIN_JSON_SERIALIZER
        JSON_SERIALIZE("Id", Id);
            JSON_SERIALIZE("Name", Name);
    END_JSON_SERIALIZER
private:
     
    int64 Id;
    FString Name;
    
};

}

