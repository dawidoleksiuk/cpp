/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 17:32:34 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/01 09:29:05 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

// Weapon::Weapon()
// {
// }

Weapon::Weapon(std::string	weapon)
{
	_type = weapon;
}


std::string	Weapon::getType(void) const
{
	return _type;
}

void	Weapon::setType(std::string	type)
{
	_type = type;
}
