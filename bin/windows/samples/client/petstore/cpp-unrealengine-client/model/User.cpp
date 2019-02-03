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



#include "User.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

User::User()
{
    m_IdIsSet = false;
    m_Username = utility::conversions::to_string_t("");
    m_UsernameIsSet = false;
    m_FirstName = utility::conversions::to_string_t("");
    m_FirstNameIsSet = false;
    m_LastName = utility::conversions::to_string_t("");
    m_LastNameIsSet = false;
    m_Email = utility::conversions::to_string_t("");
    m_EmailIsSet = false;
    m_Password = utility::conversions::to_string_t("");
    m_PasswordIsSet = false;
    m_Phone = utility::conversions::to_string_t("");
    m_PhoneIsSet = false;
    m_UserStatusIsSet = false;
}

User::~User()
{
}

void User::validate()
{
    // TODO: implement validation
}

web::json::value User::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_UsernameIsSet)
    {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(m_Username);
    }
    if(m_FirstNameIsSet)
    {
        val[utility::conversions::to_string_t("firstName")] = ModelBase::toJson(m_FirstName);
    }
    if(m_LastNameIsSet)
    {
        val[utility::conversions::to_string_t("lastName")] = ModelBase::toJson(m_LastName);
    }
    if(m_EmailIsSet)
    {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(m_Email);
    }
    if(m_PasswordIsSet)
    {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(m_Password);
    }
    if(m_PhoneIsSet)
    {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(m_Phone);
    }
    if(m_UserStatusIsSet)
    {
        val[utility::conversions::to_string_t("userStatus")] = ModelBase::toJson(m_UserStatus);
    }

    return val;
}

void User::fromJson(const web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<int64> newItem(0L);
            newItem->fromJson(fieldValue);
            setId( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("username")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            setUsername(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("firstName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firstName"));
        if(!fieldValue.is_null())
        {
            setFirstName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastName"));
        if(!fieldValue.is_null())
        {
            setLastName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("email")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email"));
        if(!fieldValue.is_null())
        {
            setEmail(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("password")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            setPassword(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phone")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone"));
        if(!fieldValue.is_null())
        {
            setPhone(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userStatus")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userStatus"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<int32> newItem(0);
            newItem->fromJson(fieldValue);
            setUserStatus( newItem );
        }
    }
}

void User::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_IdIsSet)
    {
        if (m_Id.get())
        {
            m_Id->toMultipart(multipart, utility::conversions::to_string_t("id."));
        }
    }
    if(m_UsernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("username"), m_Username));
    }
    if(m_FirstNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("firstName"), m_FirstName));
    }
    if(m_LastNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lastName"), m_LastName));
    }
    if(m_EmailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("email"), m_Email));
    }
    if(m_PasswordIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("password"), m_Password));
    }
    if(m_PhoneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("phone"), m_Phone));
    }
    if(m_UserStatusIsSet)
    {
        if (m_UserStatus.get())
        {
            m_UserStatus->toMultipart(multipart, utility::conversions::to_string_t("userStatus."));
        }
    }
}

void User::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("id")))
        {
            std::shared_ptr<int64> newItem(0L);
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("id."));
            setId( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("username")))
    {
        setUsername(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("username"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("firstName")))
    {
        setFirstName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("firstName"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("lastName")))
    {
        setLastName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("lastName"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("email")))
    {
        setEmail(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("email"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("password")))
    {
        setPassword(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("password"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("phone")))
    {
        setPhone(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("phone"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("userStatus")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("userStatus")))
        {
            std::shared_ptr<int32> newItem(0);
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("userStatus."));
            setUserStatus( newItem );
        }
    }
}

std::shared_ptr<int64> User::getId() const
{
    return m_Id;
}

void User::setId(const std::shared_ptr<int64>& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool User::idIsSet() const
{
    return m_IdIsSet;
}

void User::unsetId()
{
    m_IdIsSet = false;
}

FString User::getUsername() const
{
    return m_Username;
}

void User::setUsername(const FString& value)
{
    m_Username = value;
    m_UsernameIsSet = true;
}

bool User::usernameIsSet() const
{
    return m_UsernameIsSet;
}

void User::unsetUsername()
{
    m_UsernameIsSet = false;
}

FString User::getFirstName() const
{
    return m_FirstName;
}

void User::setFirstName(const FString& value)
{
    m_FirstName = value;
    m_FirstNameIsSet = true;
}

bool User::firstNameIsSet() const
{
    return m_FirstNameIsSet;
}

void User::unsetFirstName()
{
    m_FirstNameIsSet = false;
}

FString User::getLastName() const
{
    return m_LastName;
}

void User::setLastName(const FString& value)
{
    m_LastName = value;
    m_LastNameIsSet = true;
}

bool User::lastNameIsSet() const
{
    return m_LastNameIsSet;
}

void User::unsetLastName()
{
    m_LastNameIsSet = false;
}

FString User::getEmail() const
{
    return m_Email;
}

void User::setEmail(const FString& value)
{
    m_Email = value;
    m_EmailIsSet = true;
}

bool User::emailIsSet() const
{
    return m_EmailIsSet;
}

void User::unsetEmail()
{
    m_EmailIsSet = false;
}

FString User::getPassword() const
{
    return m_Password;
}

void User::setPassword(const FString& value)
{
    m_Password = value;
    m_PasswordIsSet = true;
}

bool User::passwordIsSet() const
{
    return m_PasswordIsSet;
}

void User::unsetPassword()
{
    m_PasswordIsSet = false;
}

FString User::getPhone() const
{
    return m_Phone;
}

void User::setPhone(const FString& value)
{
    m_Phone = value;
    m_PhoneIsSet = true;
}

bool User::phoneIsSet() const
{
    return m_PhoneIsSet;
}

void User::unsetPhone()
{
    m_PhoneIsSet = false;
}

std::shared_ptr<int32> User::getUserStatus() const
{
    return m_UserStatus;
}

void User::setUserStatus(const std::shared_ptr<int32>& value)
{
    m_UserStatus = value;
    m_UserStatusIsSet = true;
}

bool User::userStatusIsSet() const
{
    return m_UserStatusIsSet;
}

void User::unsetUserStatus()
{
    m_UserStatusIsSet = false;
}

}
}
}
}

