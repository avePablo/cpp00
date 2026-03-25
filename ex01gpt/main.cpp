#include "phonebook.hpp"
#include <iostream>

int main()
{
    PhoneBook phonebook;
    std::string cmd;

    while (1)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::cin >> cmd;

        if (cmd == "ADD")
            phonebook.add();
        else if (cmd == "SEARCH")
            phonebook.search();
        else if (cmd == "EXIT")
            break;
        else
            std::cout << "Invalid command\n";
    }
    return 0;
}