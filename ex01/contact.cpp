#include <iostream>
#include "contact.hpp"

//CONSTRUCTOR
contact::contact()
{
}

//DESTRUCTOR
contact::~contact()
{
}

//GETTERS
std::string contact::get_first_name()
{
    return this->first_name;
}

std::string contact::get_last_name()
{
    return this->last_name;
}

std::string contact::get_nickname()
{
    return this->nickname;
}

std::string contact::get_phone_number()
{
    return this->phone_number;
}

std::string contact::get_darkest_secret()
{
    return this->darkest_secret;
}

//SETTERS
void contact::set_first_name(std::string value)
{
    this->first_name = value;
}
void contact::set_last_name(std::string value)
{
    this->last_name = value;
}
void contact::set_nickname(std::string value)
{
    this->nickname = value;
}
void contact::set_phone_number(std::string value)
{
    this->phone_number = value;
}
void contact::set_darkest_secret(std::string value)
{
    this->darkest_secret = value;
}