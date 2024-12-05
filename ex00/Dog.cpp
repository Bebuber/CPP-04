/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 02:09:00 by bebuber           #+#    #+#             */
/*   Updated: 2024/12/05 13:37:02 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog class constructed." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {}
Dog& Dog::operator=(const Dog& other) {
		if (this != &other)
		this->type = other.type;
		return *this;
}

Dog::~Dog() {
	std::cout << "Dog class destructed." << std::endl;
}
void Dog::makeSound() const {
		std::cout << "BARK BARK!!!" << std::endl;
}