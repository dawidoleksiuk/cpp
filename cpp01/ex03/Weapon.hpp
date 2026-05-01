/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 17:32:40 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/01 09:28:22 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class	Weapon
{
public:
	Weapon();
	Weapon(std::string	weapon);
	std::string	getType(void) const;
	void	setType(std::string	type);
private:
	std::string	_type;
};

#endif