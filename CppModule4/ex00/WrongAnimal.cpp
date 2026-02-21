/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 20:29:42 by oucan             #+#    #+#             */
/*   Updated: 2025/10/18 20:29:53 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongUnknown") 
{
    std::cout << "[WrongAnimal] A strange wrong animal is created" << std::endl;
}

WrongAnimal::~WrongAnimal() 
{
    std::cout << "[WrongAnimal] Wrong animal destroyed" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "[WrongAnimal] ...wrong generic sound..." << std::endl;
}

std::string WrongAnimal::getType() const 
{
    return (type);
}

