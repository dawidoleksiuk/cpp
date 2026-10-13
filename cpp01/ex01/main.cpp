/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 20:32:14 by doleksiu          #+#    #+#             */
/*   Updated: 2026/09/30 18:41:12 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	int N = 10;
	Zombie *array = zombieHorde(N, "Regis");

	for (int i = 0; i < N; i++)
	{
		std::cout << "index: " << i << std::endl; 
		array[i].announce();
	}
	delete[] array;
}