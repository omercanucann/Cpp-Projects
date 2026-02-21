/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:32:02 by oucan             #+#    #+#             */
/*   Updated: 2025/09/14 16:32:03 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& t)
    : type(t)
{
}

const std::string& Weapon::getType() const 
{
    return (type);
}

void Weapon::setType(const std::string& newtype)
{
    this->type = newtype;
}

