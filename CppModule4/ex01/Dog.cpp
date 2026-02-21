/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 20:30:54 by oucan             #+#    #+#             */
/*   Updated: 2025/10/18 20:30:55 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(), brain(new Brain)
{
    type = "Dog";
    std::cout << "[Dog] Haav! (Dog constructor)" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    this->brain = new Brain(*other.brain);
    std::cout << "[Dog] Dog copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        type = other.type;
        if (brain)
            delete brain;
        brain = new Brain(*other.brain);
    }
    std::cout << "[Dog] Dog assignment operator" << std::endl;
    return (*this);
}

Dog::~Dog()
{
    delete brain;
    std::cout << "[Dog] The dog goes to sleep (Dog destructor)" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "[Dog] Woof woof!" << std::endl;
}

Brain* Dog::getBrain() const
{
    return brain;
}