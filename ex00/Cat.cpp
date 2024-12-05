/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 02:08:53 by bebuber           #+#    #+#             */
/*   Updated: 2024/12/05 13:37:30 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat class constructed." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {}
Cat& Cat::operator=(const Cat& other) {
		if (this != &other)
		this->type = other.type;
		return *this;
}

Cat::~Cat() {
	std::cout << "Cat class destructed." << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meowwwww..." << std::endl;
}
