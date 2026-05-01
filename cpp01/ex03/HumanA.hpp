/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 17:44:26 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/01 09:23:52 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class	HumanA
{
public:
	HumanA(std::string name, Weapon &weapon);
	void	attack(void);
private:
	std::string	_name;
	Weapon	&_weapon;
};

#endif