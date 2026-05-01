/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 18:08:41 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/01 09:28:14 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class	HumanB
{
public:
	HumanB(std::string name);
	void	setWeapon(Weapon weapon);
	void	attack(void);
private:
	std::string	_name;
	Weapon	*_weapon;
};

#endif
