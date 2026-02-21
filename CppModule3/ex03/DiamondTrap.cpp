/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:03:42 by oucan             #+#    #+#             */
/*   Updated: 2025/10/01 16:03:43 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Default_clap_name"), ScavTrap(), FragTrap(), diamondName("Default")
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = FragTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), diamondName(name)
{
    std::cout << "DiamondTrap parameterized constructor called for " << this->diamondName << std::endl;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = FragTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other), diamondName(other.diamondName)
{
    std::cout << "DiamondTrap copy constructor called for " << this->diamondName << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    std::cout << "DiamondTrap assignment operator called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
        ScavTrap::operator=(other);
        FragTrap::operator=(other);
        this->diamondName = other.diamondName;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor called for " << this->diamondName << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name is " << this->diamondName << " and ClapTrap name is " << ClapTrap::_name << "." << std::endl;
}

std::string DiamondTrap::getDiamondName(void) const
{
    return (this->diamondName);
}