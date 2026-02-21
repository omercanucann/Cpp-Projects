/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:31:42 by oucan             #+#    #+#             */
/*   Updated: 2025/09/14 16:31:43 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
    if (n <= 0)
        return (NULL);

    Zombie* horde = new Zombie[n];

    for (int i = 0; i < n; i++)
    {
        std::stringstream ss;
        ss << (i + 1);
        horde[i].setName(name + "_" + ss.str());
    }
    return (horde);
}
