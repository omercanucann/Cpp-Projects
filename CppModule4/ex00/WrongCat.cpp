/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 20:29:47 by oucan             #+#    #+#             */
/*   Updated: 2025/10/18 20:29:59 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "[WrongCat] A wrong cat appears" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "[WrongCat] WrongCat destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "[WrongCat] Meow? (but wrong)" << std::endl;
}

