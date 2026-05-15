#include "phonebook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : index(0), total(0) {}

static void print_field(const std::string &str)
{
    if (str.length() > 10)
        std::cout << str.substr(0, 9) << ".";
    else
        std::cout << std::setw(10) << str;
}



void PhoneBook::add()
{
    std::string input;

    std::cout << "First name: ";
    std::cin >> input;
    contacts[index].set_first_name(input);

    std::cout << "Last name: ";
    std::cin >> input;
    contacts[index].set_last_name(input);

    std::cout << "Nickname: ";
    std::cin >> input;
    contacts[index].set_nickname(input);

    std::cout << "Phone number: ";
    std::cin >> input;
    contacts[index].set_phone_number(input);

    std::cout << "Darkest secret: ";
    std::cin >> input;
    contacts[index].set_darkest_secret(input);

    index = (index + 1) % 8;
    if (total < 8)
        total++;
}

void PhoneBook::search()
{
    if (total == 0)
    {
        std::cout << "No contacts\n";
        return;
    }

    for (int i = 0; i < total; i++)
    {
        std::cout << std::setw(10) << i << "|";
        print_field(contacts[i].get_first_name());
        std::cout << "|";
        print_field(contacts[i].get_last_name());
        std::cout << "|";
        print_field(contacts[i].get_nickname());
        std::cout << std::endl;
    }

    int i;
    std::cout << "Index: ";
    std::cin >> i;

    if (std::cin.fail() || i < 0 || i >= total)
    {
        std::cout << "Invalid index\n";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        return;
    }

    std::cout << "First name: " << contacts[i].get_first_name() << std::endl;
    std::cout << "Last name: " << contacts[i].get_last_name() << std::endl;
    std::cout << "Nickname: " << contacts[i].get_nickname() << std::endl;
    std::cout << "Phone number: " << contacts[i].get_phone_number() << std::endl;
    std::cout << "Darkest secret: " << contacts[i].get_darkest_secret() << std::endl;
}