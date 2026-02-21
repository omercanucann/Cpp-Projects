/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:10:21 by oucan             #+#    #+#             */
/*   Updated: 2025/09/02 18:28:43 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

class PhoneBook
{
    private:
        Contact contacts[8];
        int index;
        int total;
    
    public:
        PhoneBook();
        std::string truncateString(const std::string &str);
        void printColumn(const std::string &str);
        std::string getInput(const std::string &promt);
        void addContact();
        void searchContacts();
        void displayContact(int index);
        int getTotalContacts();

};

#endif