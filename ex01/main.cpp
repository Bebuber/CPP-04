/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:35:08 by bebuber           #+#    #+#             */
/*   Updated: 2024/12/05 18:24:42 by bebuber          ###   ########.fr       */
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
   
	std::cout << GREEN << "Deleting all the Animals." << RESET << std::endl;	
	for(int i = 0; i < arraySize; ++i) {
		std::cout << i << std::endl;
		delete animals[i];
	}
	
	// std::cout << GREEN << "Testing deep copy." << RESET << std::endl;
	// Dog basic;
	// std::cout << GREEN << "Check point 1" << RESET << std::endl;
	// {
	// Dog tmp = basic;
	// 	std::cout << GREEN << "Check point 2" << RESET << std::endl;

	// }
	// std::cout << GREEN << "Check point 3" << RESET << std::endl;
	
	return 0;
}