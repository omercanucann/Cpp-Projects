/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:32:21 by oucan             #+#    #+#             */
/*   Updated: 2025/09/14 16:32:22 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << "---- TEST 1: DEBUG ----" << std::endl;
    harl.complain("DEBUG");

    std::cout << "\n---- TEST 2: INFO ----" << std::endl;
    harl.complain("INFO");

    std::cout << "\n---- TEST 3: WARNING ----" << std::endl;
    harl.complain("WARNING");

    std::cout << "\n---- TEST 4: ERROR ----" << std::endl;
    harl.complain("ERROR");

    std::cout << "\n---- TEST 5: Geçersiz Seviye ----" << std::endl;
    harl.complain("RANDOM");

    return (0);
}