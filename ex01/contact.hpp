#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class contact
{
    //atributtttt es       ñ
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    //CONSTRUCTOR VACIO
    contact();
    //CONSTRUCTOR CON ATRIBUTOS
    contact(string name); 
    //CONSTRUCTOR COPIA
    contact(&contact contacto); //crear obj a partir de otro
    //ASSIGN OPERATOR
    operator=(&contact contacto) //operadores de los atbts entre dos objetos

    //DESTRUCTOR
    ~contact();

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