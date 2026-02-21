/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:03:51 by oucan             #+#    #+#             */
/*   Updated: 2025/10/01 16:03:52 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    std::cout << "== DiamondTrap Test==" << std::endl;

    DiamondTrap d1;
    std::cout << "DiamondTrap d1 created with name" << d1.getDiamondName() << std::endl;
    DiamondTrap d2("Diamondy");
    std::cout << "DiamondTrap d2 created with name" << d2.getDiamondName() << std::endl;
    
    std::cout << "\n== whoAmI Test ==" <<std::endl;
    d2.whoAmI();

    std::cout << "\n== Attribute Test==" << std::endl;
    std::cout << "Name: " << d2.getDiamondName() << std::endl;
    std::cout << "Hit Points: " << d2.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << d2.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << d2.getAttackDamage() << std::endl;

    std::cout << "\n== Attack Test==" << std::endl;
    d2.takeDamage(30);
    d2.beRepaired(20);

    std::cout << "\n== Copy Constructor Test ==" << std::endl;
    DiamondTrap d3(d2);
    d3.whoAmI();

    std::cout << "\n== Assignment Operator Test ==" << std::endl;
    DiamondTrap d4("Another");
    d4 = d2;
    d4.whoAmI();

    std::cout << "\n== Parent Special Functions ==" << std::endl;
    d2.guardGate();
    d2.highFivesGuys();

    std::cout << "\n== End of DiamondTrap Tests ==" << std::endl;
    return (0);
}