/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 17:44:21 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/03 13:04:12 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>


HumanA::HumanA(const std::string& name, Weapon& weapon) : _name(name), _weapon(weapon)
{
}

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with their ";
	std::cout << _weapon.getType() << std::endl;
}
