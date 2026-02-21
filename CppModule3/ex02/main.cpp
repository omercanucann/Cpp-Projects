/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:03:34 by oucan             #+#    #+#             */
/*   Updated: 2025/10/01 16:03:35 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    std::cout << "== FragTrap Test ==" << std::endl;
    FragTrap frag("Fraggy");
    std::cout << "\n== Initial Stats ==" << std::endl;
    std::cout << "Name " << frag.getName() << std::endl;
    std::cout << "Hit Points " << frag.getHitPoints() << std::endl;
    std::cout << "Energy Points " << frag.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage " << frag.getAttackDamage() << std::endl;

    std::cout << "== Testing Attack ==" << std::endl;
    frag.attack("Enemy Robot");
    frag.attack("Another Enemy");

    std::cout << "== Testing Take Damage ==" << std::endl;
    frag.takeDamage(25);
    frag.takeDamage(30);

    std::cout << "== Testing Repair ==" << std::endl;
    frag.beRepaired(25);
    frag.beRepaired(30);

    std::cout << "== Testing Special Function ==" << std::endl;
    frag.highFivesGuys();

    std::cout << "== Testing Copy Constructor ==" << std::endl;
    FragTrap frag2(frag);
    frag2.highFivesGuys();

    std::cout << "\n== Testing Assignment Operator ==" << std::endl;
    FragTrap frag3("Original");
    frag3 = frag;
    frag3.highFivesGuys();

    std::cout << "== Current Stats ==" << std::endl;
    std::cout << "Frag Hit Points " << frag.getHitPoints() << std::endl;
    std::cout << "Frag Energy Points: " << frag.getEnergyPoints() << std::endl;

    std::cout << "\n== Testing Edge Cases ==" << std::endl;
    FragTrap lowenergy("LowEnergy");
    for (int i = 0; i < 101; i++)
        lowenergy.attack("Target");

    FragTrap dying("Dying");
    dying.takeDamage(100);
    dying.attack("Someone");
    dying.beRepaired(10);
    dying.highFivesGuys();

    std::cout << "\n== End Of Tests ==" << std::endl;
    return (0);
}