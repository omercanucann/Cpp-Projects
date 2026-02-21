/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 20:30:59 by oucan             #+#    #+#             */
/*   Updated: 2025/10/18 20:31:00 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "== Creating array of Animals ==" << std::endl;
    const int arraySize = 6;
    Animal* animals[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        std::cout << "\n--- Creating Dog " << i << "---" << std::endl;
        animals[i] = new Dog();
    }
    for (int i = arraySize / 2; i < arraySize; i++)
    {
        std::cout << "\n--- Creating Cat " << i << std::endl;
        delete animals[i];
        animals[i] = new Cat();
    }
    std::cout << "\n== Testing sounds ==" << std::endl;
    for (int i = 0; i < arraySize; i++)
    {
        std::cout << animals[i]->getType() << " says: ";
        animals[i]->makeSound();
    }

    std::cout << "\n== Testing deep copy ==" << std::endl;
    Dog originalDog;
    originalDog.getBrain()->setIdea(0, "I Want to chase cats!");
    originalDog.getBrain()->setIdea(1, "I Love bones!");

    std::cout << "\n--- Creating copy of Dog ---" << std::endl;
    Dog copyDog = originalDog;

    std::cout << "\nOriginal Dog's ideas:" << std::endl;
    std::cout << "Idea 0: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Idea 1: " << originalDog.getBrain()->getIdea(1) << std::endl;

    std::cout << "\nCopy Dog's ideas:" << std::endl;
    std::cout << "Idea 0: " << copyDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Idea 1: " << copyDog.getBrain()->getIdea(1) << std::endl;

    std::cout << "\n--- Modifying original Dog's ideas ---" << std::endl;
    originalDog.getBrain()->setIdea(0, "I changed my mind!");

    std::cout << "\nOriginal Dog's idea 0: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy Dog's idea 0 : " << copyDog.getBrain()->getIdea(0) << std::endl;

    std::cout << "\nBrain addresses :" << std::endl;
    std::cout << "Original Dog brain: " << originalDog.getBrain() << std::endl;
    std::cout << "Copy Dog brain: " << copyDog.getBrain() << std::endl;

    std::cout << "\n== Deleted all animals ==" << std::endl;
    for (int i = 0; i < arraySize; i++)
    {
        std::cout << "\n--- Deleting Animal " << i << " (" << animals[i]->getType() << ") ---" << std::endl;
        delete animals[i];
    }
    std::cout << "\n== Program finished ==" << std::endl;
    return (0);
}