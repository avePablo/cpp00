#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    int index;
    int total;

public:
    PhoneBook();

    void add();
    void search();
};

#endif