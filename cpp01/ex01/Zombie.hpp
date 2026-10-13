/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 17:42:03 by doleksiu          #+#    #+#             */
/*   Updated: 2026/09/30 18:27:06 by doleksiu         ###   ########.fr       */
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
	void	announce(void);
	void	setName(std::string name);
private:
	std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif