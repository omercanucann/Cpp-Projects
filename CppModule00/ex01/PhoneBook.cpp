/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:00:52 by oucan             #+#    #+#             */
/*   Updated: 2025/09/02 18:25:49 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
    total = 0;
}

std::string PhoneBook::truncateString(const std::string &str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void PhoneBook::printColumn(const std::string &str)
{
    std::cout << std::setw(10) << std::right << truncateString(str);
}

std::string PhoneBook::getInput(const std::string &promt)
{
    std::string input;

    while (true)
    {
        std::cout << promt;
        std::getline(std::cin, input);
        if (std::cin.eof())
        {
            std::cout << "\nInput interrupted. Exiting..." << std::endl;
            exit(0);
        }
        if (!input.empty())
            break;
        std::cout << "Field cannot be empty. Please try again." << std::endl;
    }

    return input;
}

void PhoneBook::addContact()
{
    Contact newContact;

    std::cout << "Adding new contact..." << std::endl;

    newContact.setFirstName(getInput("Enter First Name: "));
    newContact.setLastName(getInput("Enter Last Name: "));
    newContact.setNickname(getInput("Enter Nickname: "));
    newContact.setPhoneNumber(getInput("Enter Phone Number: "));
    newContact.setDarkestSecret(getInput("Enter Darkest Secret: "));

    contacts[index] = newContact;
    index = (index + 1) % 8;
    
    if (total < 8)
        total++;
        
    std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::searchContacts()
{
    if (total == 0)
    {
        std::cout << "PhoneBook is empty!" << std::endl;
        return;        
    }

    std::cout << std::setw(10) << std::right << "Index" << "|";
    std::cout << std::setw(10) << std::right << "First Name" << "|";
    std::cout << std::setw(10) << std::right << "Last Name" << "|";
    std::cout << std::setw(10) << std::right << "Nickname" << std::endl;

    for (int i = 0; i < total; i++)
    {
        std::cout << std::setw(10) << std::right << i << "|";
        printColumn(contacts[i].getFirstName());
        std::cout << "|";
        printColumn(contacts[i].getLastName());
        std::cout << "|";
        printColumn(contacts[i].getNickName());
        std::cout << std::endl;
    }

    std::string indexStr;
    int index;

    std::cout << "Enter index to display: ";
    std::getline(std::cin, indexStr);
    if (std::cin.eof())
    {
        std::cout << "\nInput interrupted. Exiting..." << std::endl;
        exit(0);
    }
    
    if (indexStr.length() == 1 && indexStr[0] >= '0' && indexStr[0] <= '7')
    {
        index = indexStr[0] - '0';
        if (index < total)
            displayContact(index);
        else
            std::cout << "Invalid index!" << std::endl;
    }
    else
    {
        std::cout << "Invalid input!" << std::endl;
    }
}

void PhoneBook::displayContact(int i)
{
    if (i < 0 || i >= total)
    {
        std::cout << "Invalid index!" << std::endl;
        return;
    }
    
    const Contact &contact = contacts[i];
    
    std::cout << "First Name: " << contact.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "Nickname: " << contact.getNickName() << std::endl;
    std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}

int PhoneBook::getTotalContacts()
{
    return total;
}