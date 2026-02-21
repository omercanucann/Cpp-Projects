/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 20:31:09 by oucan             #+#    #+#             */
/*   Updated: 2025/10/18 20:31:10 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Unknown") 
{
    std::cout << "Animal constructed" << std::endl;
}

Animal::Animal(const Animal& other)
{
    type = other.type;
    std::cout << "[Animal] Copy constructor called, type copied: " << type << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
    {
        type = other.type;
    }
    std::cout << "[Animal] Assignment operator called" << std::endl;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destroyed." << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Animal makes a sound." << std::endl;
}

std::string Animal::getType() const {
    return (type);
}
