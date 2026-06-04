/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 21:39:14 by doleksiu          #+#    #+#             */
/*   Updated: 2026/06/04 22:17:53 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice Default constructor called" << std::endl;
	type = "ice";
}

Ice::Ice(const Ice &other)
{
	std::cout << "Ice Copy constructor called" << std::endl;
	*this = other;
}

Ice& Ice::operator=(const Ice &other)
{
	std::cout << "Ice Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		type = other.type;
	}
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
	AMateria *materia = new Ice();

	return materia;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}