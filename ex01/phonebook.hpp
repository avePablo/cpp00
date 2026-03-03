#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "contact.hpp"
#include <iostream>

class Phonebook
{
private:                            //ATRIBUTES
    Contact contacts[8];
    int     contact_index;

public:
    Phonebook();                                        //CONSTRUCOR VACIO
    Phonebook(std::string name);                        //CONSTRUCTOR CON ATRIBUTOS
    Phonebook(Phonebook &Phonebook);                    //COPY CONSTRUCTOR
    Phonebook &operator=(const Phonebook &Phonebook);   //ASSIGN OPERATOR
    ~Phonebook();                                       //DESTRUCTOR

    //GETTERS
    std::string Phonebook::get_contacts();
    
    //SETTERS
    void Phonebook::set_contacts(std::string value);
};

#endif