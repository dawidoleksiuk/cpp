/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 12:59:20 by doleksiu          #+#    #+#             */
/*   Updated: 2026/06/04 22:49:23 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Default")
{
	std::cout << "Character Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

Character::Character(const Character &other)
{
	std::cout << "Character Copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	*this = other;
}

Character &Character::operator=(const Character &other)
{
	std::cout << "Character Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_materia[i])
				delete _materia[i];
		}
		for (int i = 0; i < 4; i++)
		{
			if (other._materia[i])
				_materia[i] = other._materia[i]->clone();
			else
				_materia[i] = NULL;
		}
		_name = other._name;
	}
	return *this;
}

Character::~Character()
{
	std::cout << "Character Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] != NULL)
			delete _materia[i];
	}
}

std::string const& Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] == NULL)
		{
			_materia[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if ((idx >= 0 && idx < 4) && _materia[idx] != NULL)
	{
		_manager.add_data(_materia[idx]);
		_materia[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if ((idx >=0 && idx < 4) && _materia[idx] != NULL)
		_materia[idx]->use(target);
}
