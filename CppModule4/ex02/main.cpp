/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 20:30:15 by oucan             #+#    #+#             */
/*   Updated: 2025/10/18 20:30:16 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    std::cout << "Creating individual animals" << std::endl;
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "\nTesting sounds" << std::endl;
    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;

    std::cout << "\nCreating an array of animals" << std::endl;
    const int arraySize = 4;
    Animal* animals[arraySize];
    for (int i = 0; i < arraySize; i++) {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\nTesting sounds in the array" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        std::cout << animals[i]->getType() << " says: ";
        animals[i]->makeSound();
    }

    std::cout << "\nDeleting the array of animals" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        delete animals[i];
    }

    std::cout << "\nTesting deep copy of Dog" << std::endl;
    Dog originalDog;
    originalDog.getBrain()->setIdea(0, "I want to chase cats!");
    originalDog.getBrain()->setIdea(1, "I love bones!");

    std::cout << "\nOriginal Dog's ideas:" << std::endl;
    std::cout << "Idea 0: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Idea 1: " << originalDog.getBrain()->getIdea(1) << std::endl;

    std::cout << "\nCreating a copy of the original Dog" << std::endl;
    Dog copyDog = originalDog;

    std::cout << "\nCopy Dog's ideas:" << std::endl;
    std::cout << "Idea 0: " << copyDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Idea 1: " << copyDog.getBrain()->getIdea(1) << std::endl;

    std::cout << "\nModifying the original Dog's ideas" << std::endl;
    originalDog.getBrain()->setIdea(0, "I changed my mind!");

    std::cout << "\nOriginal Dog's idea 0: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy Dog's idea 0: " << copyDog.getBrain()->getIdea(0) << std::endl;

    std::cout << "\nBrain addresses" << std::endl;
    std::cout << "Original Dog brain: " << originalDog.getBrain() << std::endl;
    std::cout << "Copy Dog brain: " << copyDog.getBrain() << std::endl;

    std::cout << "\nProgram finished" << std::endl;
    return 0;
}
