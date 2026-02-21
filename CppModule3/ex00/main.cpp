/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:03:04 by oucan             #+#    #+#             */
/*   Updated: 2025/10/01 16:03:05 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    std::cout << "== Creating ClapTrap ==" << std::endl;
    ClapTrap robot("R2-D2");

    std::cout << "\n == Testing basic functions ==" << std::endl;
    robot.attack("Enemy");
    robot.takeDamage(5);
    robot.beRepaired(3);

    std::cout << "\n == Testing copy constructor ==" << std::endl;
    ClapTrap robot2(robot);
    robot2.attack("Another Enemy");

    std::cout << "\n == Testing assignment operator ==" << std::endl;
    ClapTrap robot3("C-3P0");
    robot3 = robot;
    robot3.attack("Third Enemy");

    std::cout << "\n == End of program ==" << std::endl;
    return (0);
}