/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 15:43:24 by doleksiu          #+#    #+#             */
/*   Updated: 2026/10/01 21:20:42 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	_hit = 100;
	_energy = 50;
	_damage = 20;
}

ScavTrap::ScavTrap(std:: string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Name constructor called" << std::endl;
	_hit = 100;
	_energy = 50;
	_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{

	if (_hit == 0 || _energy == 0)
	{
		std::cout << "ScavTrap " << _name << " can't attack" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing ";
	std::cout << _damage << " points of damage!" << std::endl;
	_energy--;
}

void ScavTrap::guardGate()
{
	if (_hit > 0 && _energy > 0)
		std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}
