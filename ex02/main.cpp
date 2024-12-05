/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:35:08 by bebuber           #+#    #+#             */
/*   Updated: 2024/12/05 18:30:04 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const int arraySize = 4;
	const Animal* animals[arraySize];
	
	std::cout << GREEN << "Creating Dogs." << RESET << std::endl;
	for (int i = 0; i < arraySize /2; ++i) {
		std::cout << i << std::endl;
		animals[i] = new Dog();
	}
	
	std::cout << GREEN << "Creating Cats." << RESET << std::endl;	
	for (int i = arraySize /2; i < arraySize; ++i) {
		std::cout << i << std::endl;
		animals[i] = new Cat();
	}
	
	// animals[1]->makeSound();
	
	std::cout << GREEN << "Deleting all the Animals." << RESET << std::endl;	
	for(int i = 0; i < arraySize; ++i) {
		std::cout << i << std::endl;
		delete animals[i];
	}
	
	// std::cout << GREEN << "Trying to instantiate an Animal class object." << RESET << std::endl;
	// Animal myAnimal;
	
	return 0;
}