/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 17:42:03 by doleksiu          #+#    #+#             */
/*   Updated: 2026/04/29 20:40:05 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>

class	Zombie{

public:
	Zombie();
	Zombie(std::string name);
	~Zombie(void);

	void	anounce(void);
	void	setName(std::string name);
private:
	std::string	name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif