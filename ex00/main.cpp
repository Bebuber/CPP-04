/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 02:07:54 by bebuber           #+#    #+#             */
/*   Updated: 2024/12/05 14:29:20 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << GREEN << "\nConstruction of the Classes" << RESET << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << GREEN << "\nTypes of the Classes" << RESET << std::endl;
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << meta->getType() << std::endl;

	std::cout << GREEN << "\nSounds of the Animals" << RESET << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound(); //will output the animal Sound!

	std::cout << GREEN << "\nDestruction of the Classes" << RESET << std::endl;
	delete i;
	delete j;
	delete meta;
	
	std::cout << RED << "\nConstructing the WrongCat" << RESET << std::endl;
	const WrongAnimal* n = new WrongCat();
	const WrongCat* m = new WrongCat();
	
	std::cout << RED << "\nSounds of the WrongCat" << RESET << std::endl;
	n->makeSound();
	m->makeSound();

	std::cout << RED << "\nDestructing the WrongCat" << RESET << std::endl;
	delete n;
	delete m;
	
	
	return 0;
}
