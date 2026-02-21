/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:31:27 by oucan             #+#    #+#             */
/*   Updated: 2025/09/14 16:31:28 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int n = 5;

    Zombie* horde = zombieHorde(n, "Zombie");

    for (int i = 0; i < n; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    return (0);
}