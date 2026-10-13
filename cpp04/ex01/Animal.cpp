/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 20:18:27 by doleksiu          #+#    #+#             */
/*   Updated: 2026/10/01 22:03:01 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal& other)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_type = other._type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "buuu" << std::endl;
}

std::string Animal::getType() const
{
	return _type;
}
