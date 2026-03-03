#include <iostream>
#include "phonebook.hpp"

Phonebook::Phonebook():contacts()                                   //CONSTRUCTOR
{
    std::cout << "constructor called";
}

Phonebook::Phonebook(Phonebook &Phonebook)                          //COPY CONSTRUCTOR
{
    *this=Phonebook;
}

Phonebook &Phonebook::operator=(const Phonebook &Phonebook)         //OPERATOR
{
    *this = Phonebook;                                                 
    return (*this);
}

Phonebook::~Phonebook()                                             //DESTRUCTOR
{                                                                       
}

//GETTERS


std::string Phonebook::get_contacts()
{
    return *contacts;                                               
}


//SETTERS


void Phonebook::set_contacts(index)
{
    Phonebook phonebook;
    std::string imput;
    
    std::cout<<"pon el nombre";
    std::cin>>imput;
    phonebook.contacts[contact_index].set_first_name(imput);
    std::cout<<"pon el segundo nombre";
    std::cin>>imput;
    contact.set_last_name(imput);
    std::cout<<"pon el niconombre";
    std::cin>>imput;
    contact.set_nickname(imput);
    std::cout<<"pon el numerico de tel";
    std::cin>>imput;
    contact.set_phone_number(imput);
    std::cout<<"pon el secreto secretisimo";
    std::cin>>imput;
    contact.set_darkest_secret(imput); 
}

