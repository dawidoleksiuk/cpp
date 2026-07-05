/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 18:08:39 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/04 16:54:57 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>


HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}


void	HumanB::attack(void)
{
	if (_weapon == NULL)
		std::cout << _name << " attacks with their hands " << std::endl;
	else
	{
		std::cout << _name << " attacks with their ";
		std::cout << _weapon->getType() << std::endl;
	}
}
