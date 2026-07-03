/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 17:32:40 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/03 12:40:16 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>

class	Weapon
{
public:
	Weapon(const std::string& weapon);
	const std::string& getType(void) const;
	void setType(const std::string& type);
private:
	std::string	_type;
};

#endif