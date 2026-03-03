#include <iostream>
#include "contact.hpp"

Contact::Contact():first_name(""), last_name(""), nickname(""), phone_number(""), darkest_secret("")    //CONSTRUCTOR
{
    std::cout << "constructor called";
}

Contact::Contact(Contact &contact)                                                                     //COPY CONSTRUCTOR
{
    *this=contact;
}

Contact &Contact::operator=(const Contact &contact)                                                    //OPERATOR
{
    *this = contact;
    return (*this);
}

Contact::~Contact()                                                                                     //DESTRUCTOR
{
}

//GETTERS

std::string Contact::get_first_name()
{
    return this->first_name;
}

std::string Contact::get_last_name()
{
    return this->last_name;
}

std::string Contact::get_nickname()
{
    return this->nickname;
}

std::string Contact::get_phone_number()
{
    return this->phone_number;
}

std::string Contact::get_darkest_secret()
{
    return this->darkest_secret;
}

//SETTERS

void Contact::set_first_name(std::string value)
{
    this->first_name = value;
}
void Contact::set_last_name(std::string value)
{
    this->last_name = value;
}
void Contact::set_nickname(std::string value)
{
    this->nickname = value;
}
void Contact::set_phone_number(std::string value)
{
    this->phone_number = value;
}
void Contact::set_darkest_secret(std::string value)
{
    this->darkest_secret = value;
}