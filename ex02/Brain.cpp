/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:44:35 by bebuber           #+#    #+#             */
/*   Updated: 2024/12/05 16:02:39 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain class constructed." << std::endl;
}

Brain::Brain(const Brain& other) {
	for (int i = 0; i < 100; ++i) {
		this->ideas[i] = other.ideas[i];
	}
}

Brain& Brain::operator=(const Brain& other) {
	if (this != &other)
		for (int i = 0; i < 100; ++i) {
			this->ideas[i] = other.ideas[i];
		}
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain class destructed." << std::endl;
}

void Brain::setIdeas(int index, const std::string& idea) {
	if(index >= 0 && index < 100)
		ideas[index] = idea;
}

std::string& Brain::getIdeas(int index) {
	static std::string emptyString = "";
	if(index >= 0 && index < 100)
		return ideas[index];
	else
		std::cout << "Index out of range." << std::endl;
		return emptyString;
}