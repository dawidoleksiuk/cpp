/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:40:26 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/20 19:08:35 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
public:
	ClapTrap(std::string n);
	ClapTrap(const ClapTrap &other);
	// ClapTrap &operator=(const ClapTrap &other);
	~ClapTrap();
	void attack(const std::string& target);

private:
	std::string name;
	int hit;
	int energy;
	int damage;
};

#endif