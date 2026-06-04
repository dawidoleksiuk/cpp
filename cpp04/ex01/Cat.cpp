/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 17:53:27 by doleksiu          #+#    #+#             */
/*   Updated: 2026/06/04 12:09:58 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default constructor called" << std::endl;
	type = "cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	_brain = NULL;
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		if (!_brain)
			_brain = new Brain();
		*_brain = *other._brain;
		Animal::operator=(other);
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete _brain;
}

void Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}

std::string Cat::getIdea(int index)
{
	return _brain->getIdea(index);
}

void Cat::setIdea(int index, std::string idea)
{
	_brain->setIdea(index, idea);
}
