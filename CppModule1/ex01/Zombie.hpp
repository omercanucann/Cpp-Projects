/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:31:40 by oucan             #+#    #+#             */
/*   Updated: 2025/09/14 16:31:41 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Zombie {

    private:
        std::string name;

    public:
        Zombie();
        Zombie(const std::string &name);
        ~Zombie();

        void setName(const std::string &name);
        void announce(void);
};

Zombie* zombieHorde(int n, std::string name);

#endif