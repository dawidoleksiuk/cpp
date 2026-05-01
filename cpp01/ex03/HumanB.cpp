/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 18:08:39 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/01 09:29:00 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>


HumanB::HumanB(std::string name)
{
	_name = name;
}

void	HumanB::setWeapon(Weapon weapon)
{
	_weapon->setType(weapon.getType());
}


void	HumanB::attack(void)
{
	std::cout << _name << " attacks with their ";
	std::cout << _weapon->getType() << std::endl;
}
