/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 17:53:27 by doleksiu          #+#    #+#             */
/*   Updated: 2026/06/02 20:26:35 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor called" << std::endl;
	type = "dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	_brain = NULL;
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		if (!_brain)
			_brain = new Brain();
		*_brain = *other._brain;
		Animal::operator=(other);
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete _brain;
}

void Dog::makeSound() const 
{
	std::cout << "hau" << std::endl;
}

std::string Dog::getIdea(int index)
{
	return _brain->getIdea(index);
}

void Dog::setIdea(int index, std::string idea)
{
	_brain->setIdea(index, idea);
}
