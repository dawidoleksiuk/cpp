/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:40:07 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/26 20:11:13 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	std::cout << "---Basic test---\n";
	DiamondTrap a("A");
	a.attack("target");
	a.takeDamage(20);
	a.beRepaired(10);
	a.whoAmI();
	a.guardGate();
	a.highFivesGuys();

	std::cout << "---Energy depletion test---\n";
	DiamondTrap b("B");
	for (int i = 0; i < 51; i++)
		b.attack("target");
	b.beRepaired(5);
	b.whoAmI();
	b.guardGate();
	b.highFivesGuys();
	
	std::cout << "---Death test---\n";
	DiamondTrap c("C");
	c.takeDamage(100);
	c.takeDamage(60);
	c.attack("target");
	c.beRepaired(10);
	c.whoAmI();
	c.guardGate();
	c.highFivesGuys();

	std::cout << "---Copy constructor test---\n";
	DiamondTrap d(a);
	d.attack("target");
	std::cout << "---Copy assignment operator test---\n";
	d = b;
	d.attack("target");
	d.whoAmI();
	d.guardGate();
	d.highFivesGuys();
}
