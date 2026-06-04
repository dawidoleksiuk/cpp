/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:02:19 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/24 20:19:50 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	_hit = 100;
	_energy = 100;
	_damage = 30;
}

FragTrap::FragTrap(std:: string n) : ClapTrap(n)
{
	std::cout << "FragTrap Name constructor called" << std::endl;
	_hit = 100;
	_energy = 100;
	_damage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (_hit > 0 && _energy > 0)
		std::cout << "FragTrap " << _name << " h5" << std::endl;
}
