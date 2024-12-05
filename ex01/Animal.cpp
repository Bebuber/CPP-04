/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 02:08:50 by bebuber           #+#    #+#             */
/*   Updated: 2024/12/05 14:00:56 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("undefined") {
	std::cout << "Animal class constructed." << std::endl;
}
Animal::Animal(std::string type) : type(type) {
	std::cout << "Animal class constructed." << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {}
Animal& Animal::operator=(const Animal& other) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal class destructed." << std::endl;
}

std::string Animal::getType() const {return this->type;}

void Animal::makeSound() const {
	std::cout << "Animal Sound!" << std::endl;
}
