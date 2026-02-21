/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 20:29:40 by oucan             #+#    #+#             */
/*   Updated: 2025/10/18 20:29:59 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "--- Basic polymorphism demo ---" << std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << "\n--- Array of Animals ---" << std::endl;
    const int N = 4;
    Animal* zoo[N];
    for (int k = 0; k < N; k++)
    {
        if (k % 2 == 0)
            zoo[k] = new Dog();
        else
            zoo[k] = new Cat();
    }
    for (int k = 0; k < N; k++)
    {
        std::cout << zoo[k]->getType() << ": ";
        zoo[k]->makeSound();
    }
    for (int k = 0; k < N; ++k)
        delete zoo[k];
    
    delete meta;
    delete j;
    delete i;

    std::cout << "\n--- WrongAnimal ---" << std::endl;
    const WrongAnimal* wmeta = new WrongAnimal();
    const WrongAnimal* wc = new WrongCat();

    std::cout << wc->getType() << "prints: ";
    wc->makeSound();

    delete wmeta;
    delete wc;

    return (0);
}