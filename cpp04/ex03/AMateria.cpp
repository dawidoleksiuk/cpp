/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 12:29:37 by doleksiu          #+#    #+#             */
/*   Updated: 2026/10/02 17:27:40 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria Default constructor called" << std::endl;
	_type = "default";
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria Type constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
	std::cout << "AMateria Copy constructor called" << std::endl;
	*this = other;
}

AMateria& AMateria::operator=(const AMateria &other)
{
	std::cout << "AMateria Copy assignment operator called" << std::endl;
	if (this != &other) {}
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter& target)
{
	(void) target;
}
