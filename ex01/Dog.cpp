/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 02:09:00 by bebuber           #+#    #+#             */
/*   Updated: 2024/12/05 16:21:15 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain()) {
	std::cout << "Dog class constructed." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain)) {
		std::cout << "Dog class copy constructed." << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
		std::cout << "Dog class copyied." << std::endl;
	}
	return *this;
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog class destructed." << std::endl;
}
void Dog::makeSound() const {
		std::cout << "BARK BARK!!!" << std::endl;
}