#include "phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook() : index(0), total(0) {}

static void print_field(const std::string &str)
{
    if (str.length() > 10)
        std::cout << str.substr(0, 9) << ".";
    else
        std::cout << std::setw(10) << str;
}



int PhoneBook::add()
{
    std::string input;

    std::cout << "First name: ";
    if (!std::getline(std::cin, input))
            return (1);
    while(input == "\0")
    {
        std::cout << "Field \033[1;31mCANNOT\033[0m be empty.\nType a first name: ";
        std::getline(std::cin, input);
    }
    contacts[index].set_first_name(input);

    std::cout << "Last name: ";
    if (!std::getline(std::cin, input))
            return (1);
    while(input == "\0")
    {
        std::cout << "Field \033[1;31mCANNOT\033[0m be empty.\nType a last name: ";
        std::getline(std::cin, input);
    }
    contacts[index].set_last_name(input);


    std::cout << "Nickname: ";
    if (!std::getline(std::cin, input))
           return (1);
    while(input == "\0")
    {
        std::cout << "Field \033[1;31mCANNOT\033[0m be empty.\nType a nickname: ";
        std::getline(std::cin, input);
    }
    contacts[index].set_nickname(input);

    std::cout << "Phone number: ";
    if (!std::getline(std::cin, input))
           return (1);
    while(input == "\0")
    {
        std::cout << "Field \033[1;31mCANNOT\033[0m be empty.\nType a phone number: ";
        std::getline(std::cin, input);
    }
    contacts[index].set_phone_number(input);

    std::cout << "Darkest secret: ";
    if (!std::getline(std::cin, input))
           return (1);
    while(input == "\0")
    {
        std::cout << "Field \033[1;31mCANNOT\033[0m be empty.\nType a darkest secret: ";
        std::getline(std::cin, input);
    }
    contacts[index].set_darkest_secret(input);

    index = (index + 1) % 8;
    if (total < 8)
        total++;
    return(0);
}

int PhoneBook::search()
{
    if (total == 0)
    {
        std::cout << "No contacts\n";
        return 0;
    }

    for (int i = 0; i < total; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|";
        print_field(contacts[i].get_first_name());
        std::cout << "|";
        print_field(contacts[i].get_last_name());
        std::cout << "|";
        print_field(contacts[i].get_nickname());
        std::cout << std::endl;
    }

    std::string line;
    std::cout << "Index: ";
    std::getline(std::cin, line);
    if (line.empty())
    {
        return 1;
    }

    int i = std::atoi(line.c_str()) - 1;
    if (i < 0 || i >= total)
    {
        std::cout << "Invalid index\n";
        return 0;
    }

    std::cout << "First name: " << contacts[i].get_first_name() << std::endl;
    std::cout << "Last name: " << contacts[i].get_last_name() << std::endl;
    std::cout << "Nickname: " << contacts[i].get_nickname() << std::endl;
    std::cout << "Phone number: " << contacts[i].get_phone_number() << std::endl;
    std::cout << "Darkest secret: " << contacts[i].get_darkest_secret() << std::endl;
    return 0;
}