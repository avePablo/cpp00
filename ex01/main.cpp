#include "phonebook.hpp"
#include <iostream>

int main()
{
    PhoneBook phonebook;
    std::string cmd;

    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, cmd))
        {
            std::cout << "\nEOF detected. Closing program...\n";
            break;
        }
        if (cmd == "ADD")
        {
            if(phonebook.add() == 1)
            {
                std::cout << "\nEOF detected. Closing program...\n";
                return 0;
            }
        }
        else if (cmd == "SEARCH")
        {            
            if(phonebook.search() == 1)
            {                                
                std::cout << "\nEOF detected. Closing program...\n";
                return 0;
            }
        }
        else if (cmd == "EXIT")
            break;
        else if (!cmd.empty())
            std::cout << "Invalid command\n";
    }
    return 0;
}