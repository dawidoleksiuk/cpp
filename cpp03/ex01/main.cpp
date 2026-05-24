/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:40:07 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/24 16:47:31 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	std::cout << "---Basic test---\n";
	ScavTrap a("A");
	a.attack("target");
	a.takeDamage(20);
	a.beRepaired(10);
	a.guardGate();

	std::cout << "---Energy depletion test---\n";
	ScavTrap b("B");
	for (int i = 0; i < 51; i++)
		b.attack("target");
	b.beRepaired(5);
	b.guardGate();
	
	std::cout << "---Death test---\n";
	ScavTrap c("C");
	c.takeDamage(50);
	c.takeDamage(60);
	c.attack("target");
	c.beRepaired(10);
	c.guardGate();

	std::cout << "---Copy constructor test---\n";
	ScavTrap d(a);
	d.attack("target");
	std::cout << "---Copy assignment operator test---\n";
	d = b;
	d.attack("target");
	d.guardGate();
}
