/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:40:07 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/24 16:44:05 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("A");

	std::cout << "---Basic test---\n";
	a.attack("target");
	a.takeDamage(3);
	a.beRepaired(2);

	std::cout << "---Energy depletion test---\n";
	ClapTrap b("B");
	for (int i = 0; i < 11; i++)
		b.attack("target");
	
	std::cout << "---Death test---\n";
	ClapTrap c("C");
	c.takeDamage(5);
	c.takeDamage(10);
	c.attack("target");
	c.beRepaired(3);
	c.takeDamage(1);

	std::cout << "---Copy constructor test---\n";
	ClapTrap d(a);
	d.attack("target");
	std::cout << "---Copy assignment operator test---\n";
	d = b;
	d.attack("target");
}