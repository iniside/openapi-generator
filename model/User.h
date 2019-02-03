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
 * User.h
 *
 * 
 */



#include "ModelBase.h"

#include "FString.h"

namespace model {

/*
 * 
 */
struct  FUser
    : public FJsonSerializable
{
public:
    BEGIN_JSON_SERIALIZER
        JSON_SERIALIZE("Id", Id);
            JSON_SERIALIZE("Username", Username);
            JSON_SERIALIZE("FirstName", FirstName);
            JSON_SERIALIZE("LastName", LastName);
            JSON_SERIALIZE("Email", Email);
            JSON_SERIALIZE("Password", Password);
            JSON_SERIALIZE("Phone", Phone);
        JSON_SERIALIZE("UserStatus", UserStatus);
    END_JSON_SERIALIZER
private:
     
    int64 Id;
    FString Username;
    FString FirstName;
    FString LastName;
    FString Email;
    FString Password;
    FString Phone;
    int32 UserStatus;
    
};

}
