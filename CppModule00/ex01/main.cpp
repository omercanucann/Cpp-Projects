/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:10:16 by oucan             #+#    #+#             */
/*   Updated: 2025/09/02 18:20:22 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main()
{
    PhoneBook phoneBook;
    std::string command;
    
    std::cout << "=== Welcome to My Awesome PhoneBook ===" << std::endl;
    std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
    
    while (true)
    {
        std::cout << "\nEnter command: ";
        std::getline(std::cin, command);
        if (std::cin.eof())
        {
            std::cout << "\nGoodbye! All contacts will be lost forever..." << std::endl;
            break;
        }
        
        if (command == "ADD")
        {
            phoneBook.addContact();
        }
        else if (command == "SEARCH")
        {
            phoneBook.searchContacts();
        }
        else if (command == "EXIT")
        {
            std::cout << "Goodbye! All contacts will be lost forever..." << std::endl;
            break;
        }
        else if (!command.empty())
        {
            std::cout << "Invalid command! Use ADD, SEARCH, or EXIT." << std::endl;
        }
    }
    
    return 0;
}