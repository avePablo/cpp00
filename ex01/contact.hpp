#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:                                   //ATRIBUTES
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    Contact();                                      //CONSTRUCTOR VACIO
    Contact(std::string name);                      //CONSTRUCTOR CON ATRIBUTOS
    Contact(Contact &contact);                     //CONSTRUCTOR COPIA
    Contact &operator=(const Contact &contact);    //ASIGN OPERATOR
    ~Contact();                                     //DESTRUCTOR

    //GETTERS
    std::string get_first_name();
    std::string get_last_name();
    std::string get_nickname();
    std::string get_phone_number();
    std::string get_darkest_secret();
    //SETTERS
    void set_first_name(std::string value);
    void set_last_name(std::string value);
    void set_nickname(std::string value);
    void set_phone_number(std::string value);
    void set_darkest_secret(std::string value);
};

#endif