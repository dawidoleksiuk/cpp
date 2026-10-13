/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 21:51:00 by doleksiu          #+#    #+#             */
/*   Updated: 2026/10/02 17:29:22 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure Default constructor called" << std::endl;
	_type = "cure";
}

Cure::Cure(const Cure &other)
{
	std::cout << "Cure Copy constructor called" << std::endl;
	*this = other;
}

Cure& Cure::operator=(const Cure &other)
{
	std::cout << "Cure Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_type = other._type;
	}
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}

AMateria* Cure::clone() const
{
	AMateria *materia = new Cure();

	return materia;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
