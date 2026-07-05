/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 17:32:34 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/04 16:47:21 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(const std::string& weapon)
{
	_type = weapon;
}

//first const - this reference is to read only
//the second const says that this method doesn't modify the class variables

const std::string& Weapon::getType(void) const
{
	return _type;
}

void Weapon::setType(const std::string& type)
{
	_type = type;
}
