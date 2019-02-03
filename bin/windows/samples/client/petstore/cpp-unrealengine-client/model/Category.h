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
 * Category.h
 *
 * A category for a pet
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Category_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Category_H_


#include "../ModelBase.h"

#include "FString.h"
#include "int64.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// A category for a pet
/// </summary>
class  Category
    : public ModelBase
{
public:
    Category();
    virtual ~Category();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Category members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<int64> getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const std::shared_ptr<int64>& value);

    /// <summary>
    /// 
    /// </summary>
    FString getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const FString& value);


protected:
    std::shared_ptr<int64> m_Id;
    bool m_IdIsSet;
    FString m_Name;
    bool m_NameIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Category_H_ */
