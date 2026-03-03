#include <iostream>
#include "phonebook.hpp"
#include "contact.hpp"


void add_contacts()
{
    Phonebook phonebook;
    std::string imput;
    phonebook.set_contacts(phonebook.index);
}

int main(int argc, char *argv[])
{
    std::string cmd;
    
    if (argc != 1)
        return 1;
    while(1)
        {   
            std::cin>>cmd;
            if(cmd == "ADD")
                {
                    add_contacts();
                }
            if(cmd == "SEARCH")
                {
                    search_contacts();
                }
            if(cmd == "EXIT")
                break;
        }
    return 0;
}
