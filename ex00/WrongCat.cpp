/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:05:37 by bebuber           #+#    #+#             */
/*   Updated: 2024/12/05 14:09:51 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat class constructed." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {}
WrongCat& WrongCat::operator=(const WrongCat& other) {
		if (this != &other)
		this->type = other.type;
		return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat class destructed." << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Meowwwww..." << std::endl;
}