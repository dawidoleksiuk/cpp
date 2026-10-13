/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:40:28 by doleksiu          #+#    #+#             */
/*   Updated: 2026/10/01 21:11:47 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hit(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std:: string n) : _name(n), _hit(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hit = other._hit;
		_energy = other._energy;
		_damage = other._damage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{

	if (_hit == 0 || _energy == 0)
	{
		std::cout << "ClapTrap " << _name << " can't attack" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing ";
	std::cout << _damage << " points of damage!" << std::endl;
	_energy--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit >= amount)
	{
		_hit -= amount;
		std::cout << "ClapTrap " << _name << " has been attacked and lost ";
		std::cout << amount << " hit points" << std::endl;
		if (_hit == 0)
		{
			std::cout << "ClapTrap " << _name << " died" << std::endl;
			return ;
		}
		std::cout << "Current ClapTrap " << _name << " hit points amount: ";
		std::cout << _hit << std::endl;
	}
	else
	{
		_hit = 0;
		std::cout << "ClapTrap " << _name << " has been destroyed";
		std::cout << " and can't take more hits" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	 if (_hit == 0)
	 {
	 	std::cout << "ClapTrap " << _name << " has been destroyed ";
		std::cout << "and can't be repaired" << std::endl;
		return ;
	 }
	 if (_energy == 0)
	 {
		std::cout << "ClapTrap " << _name << " doesn't have energy for repair" << std::endl;
		return ;
	 }
	std::cout << "ClapTrap " << _name << " repairs itself and gets ";
	std::cout << amount << " hit points" << std::endl;
	 _hit += amount;
	 _energy--;
}
