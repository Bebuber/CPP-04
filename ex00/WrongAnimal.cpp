/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:58:33 by bebuber           #+#    #+#             */
/*   Updated: 2024/12/05 14:00:41 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("undefined") {
	std::cout << "WrongAnimal class constructed." << std::endl;
}
WrongAnimal::WrongAnimal(std::string type) : type(type) {
	std::cout << "WrongAnimal class constructed." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal class destructed." << std::endl;
}

std::string WrongAnimal::getType() const {return this->type;}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal Sound!" << std::endl;
}
