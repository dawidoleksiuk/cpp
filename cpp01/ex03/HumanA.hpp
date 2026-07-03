/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 17:44:26 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/03 13:03:35 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

//we use reference here because it can be only used at the time of declaration and it needs to be intiated

class	HumanA
{
public:
	HumanA(const std::string& name, Weapon& weapon);
	void	attack(void);
private:
	std::string	_name;
	Weapon& _weapon;
};

#endif