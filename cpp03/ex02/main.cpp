/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:40:07 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/24 20:17:02 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	std::cout << "---Basic test---\n";
	FragTrap a("A");
	a.attack("target");
	a.takeDamage(20);
	a.beRepaired(10);
	a.highFivesGuys();

	std::cout << "---Energy depletion test---\n";
	FragTrap b("B");
	for (int i = 0; i < 101; i++)
		b.attack("target");
	b.beRepaired(5);
	b.highFivesGuys();
	
	std::cout << "---Death test---\n";
	FragTrap c("C");
	c.takeDamage(100);
	c.takeDamage(60);
	c.attack("target");
	c.beRepaired(10);
	c.highFivesGuys();

	std::cout << "---Copy constructor test---\n";
	FragTrap d(a);
	d.attack("target");
	std::cout << "---Copy assignment operator test---\n";
	d = b;
	d.attack("target");
	d.highFivesGuys();
}
