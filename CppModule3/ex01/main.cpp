/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:03:12 by oucan             #+#    #+#             */
/*   Updated: 2025/10/01 16:03:13 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    std::cout << "== ScavTrap Test Programı ==" << std::endl;

    std::cout << "--- Test 1: Default Constructor ---" << std::endl;
    ScavTrap defaultScav;
    std::cout << std::endl;

    std::cout << "--- Test 2: Named Constructor --" << std::endl;
    ScavTrap serena("Serena");
    std::cout << "Created ScavTrap: " << serena.getName() << std::endl;
    std::cout << "Hit Points: " << serena.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << serena.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << serena.getAttackDamage() << std::endl;
    std::cout << std::endl;

    std::cout << "--- Test 3: Attack Tests ---" << std::endl;
    serena.attack("Enemy Robot");
    serena.attack("Another Target");
    std::cout << "Energy after attacks: " << serena.getEnergyPoints() << std::endl;
    std::cout << std::endl;

    std::cout << "--- Test 4: Damage Test ---" << std::endl;
    serena.takeDamage(30);
    serena.takeDamage(25);
    std::cout << "Current HP: " << serena.getHitPoints() << std::endl;
    std::cout << std::endl;

    std::cout << "--- Test 5: Repair Test ---" << std::endl;
    serena.beRepaired(40);
    serena.beRepaired(15);
    std::cout << "Current HP: " << serena.getHitPoints() << std::endl;
    std::cout << "Current Energy: " << serena.getEnergyPoints() << std::endl;
    std::cout << std::endl;

    std::cout << "--- Test 6: Guard Gate (ScavTrap Special) ---" << std::endl;
    serena.guardGate();
    std::cout << std::endl;
}