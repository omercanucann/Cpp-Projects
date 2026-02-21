/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:31:49 by oucan             #+#    #+#             */
/*   Updated: 2025/09/14 16:31:50 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &n, Weapon &gun)
    : name(n), weapon(gun)
{
}

void HumanA:: attack() const 
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

