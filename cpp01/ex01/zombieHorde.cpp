/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 19:36:46 by doleksiu          #+#    #+#             */
/*   Updated: 2026/04/29 20:34:41 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*arrayZombie = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		arrayZombie[i].setName(name);
	}
	return arrayZombie;

}