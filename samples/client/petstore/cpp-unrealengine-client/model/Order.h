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
 * FOrder.h
 *
 * An order for a pets from the pet store
 */



#include "ModelBase.h"

#include "FString.h"
#include "FDateTime.h"

namespace model {

/*
 * An order for a pets from the pet store
 */
struct  FFOrder
    : public FJsonSerializable
{
public:
    BEGIN_JSON_SERIALIZER
        JSON_SERIALIZE("Id", Id);
        JSON_SERIALIZE("PetId", PetId);
        JSON_SERIALIZE("Quantity", Quantity);
            JSON_SERIALIZE_SERIALIZABLE("ShipDate", ShipDate);
            JSON_SERIALIZE("Status", Status);
        JSON_SERIALIZE("Complete", Complete);
    END_JSON_SERIALIZER
private:
     
    int64 Id;
    int64 PetId;
    int32 Quantity;
    FDateTime ShipDate;
    FString Status;
    bool Complete;
    
};

}

