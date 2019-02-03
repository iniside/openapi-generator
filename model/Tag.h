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

/*
 * Tag.h
 *
 * 
 */



#include "ModelBase.h"

#include "FString.h"

namespace model {

/*
 * 
 */
struct  FTag
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
