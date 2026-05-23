/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:40:28 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/20 19:09:00 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std:: string n)
{
	std::cout << "Default constructor called" << std::endl;
	name = n;
	hitPoints = 10;
	enPoints = 10;
	attDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

// ClapTrap &ClapTrap::operator=(const ClapTrap &other)
// {
// 	std::cout << "Copy assignment operator called" << std::endl;
// 	if (this != &other)
// 		_fpNum = other._fpNum;
// 	return *this;
// }

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << name << " attacks" << target << ", causing ";
	std::cout << damage << " points of damage!";
}