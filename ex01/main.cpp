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
            std::cout << "\nEOF detectado. Saliendo.\n";
            break;
        }
        if (cmd == "ADD")
            phonebook.add();
        else if (cmd == "SEARCH")
            phonebook.search();
        else if (cmd == "EXIT")
            break;
        else if (!cmd.empty())
            std::cout << "Invalid command\n";
    }
    return 0;
}