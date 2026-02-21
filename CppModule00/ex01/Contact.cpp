/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:10:10 by oucan             #+#    #+#             */
/*   Updated: 2025/09/02 18:10:11 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(const std::string &str)
{
   this->firstName = str;
}

void Contact::setLastName(const std::string &str)
{
    this->lastName = str;
}

void Contact::setNickname(const std::string &str)
{
    this->nickname = str;
}

void Contact::setPhoneNumber(const std::string &str)
{
    this->phoneNumber = str;
}

void Contact::setDarkestSecret(const std::string &str)
{
    this->darkestSecret = str;
}

std::string Contact::getFirstName() const
{
    return this->firstName;
}

std::string Contact::getLastName() const
{
    return this->lastName;
}

std::string Contact::getNickName() const
{
    return this->nickname;
}

std::string Contact::getPhoneNumber() const
{
    return this->phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
    return this->darkestSecret;
}

