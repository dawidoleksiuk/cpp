/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 20:30:38 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/26 20:02:06 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	_hit = 100;
	_energy = 50;
	_damage = 30;
}

DiamondTrap::DiamondTrap(std:: string n) : ClapTrap(n + "_clap_name"), ScavTrap(n), FragTrap(n)
{
	std::cout << "DiamondTrap Name constructor called" << std::endl;
	_hit = 100;
	_energy = 50;
	DiamondTrap::_name = n;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		ClapTrap::operator=(other);
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " Destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
	std::cout << "DiamondTrap name: " << DiamondTrap::_name << std::endl;
}