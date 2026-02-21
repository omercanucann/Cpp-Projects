/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:31:25 by oucan             #+#    #+#             */
/*   Updated: 2025/09/14 16:31:26 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

    private:
        std::string name;
    public:
        Zombie(const std::string &name);
        ~Zombie();

        void announce(void);
};

Zombie* newZombie(const std::string &name);
void randomChump(const std::string &name);

#endif