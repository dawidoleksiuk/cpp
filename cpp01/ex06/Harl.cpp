/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 21:53:52 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/05 10:46:29 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

typedef void(Harl::*t_func)(void);

// https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html

void	Harl::filter(std::string level)
{
	int levelIndex = -1;

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			levelIndex = i;
			break ;
		}
	}
	switch (levelIndex) {
		case 0:
			complain("DEBUG");
			/* FALLTHRU */
		case 1:
			complain("INFO");
			/* FALLTHRU */
		case 2:
			complain("WARNING");
			/* FALLTHRU */
		case 3:
			complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	t_func	funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	size_t levelsNum = sizeof(levels) / sizeof(levels[0]);
	for (size_t i = 0; i < levelsNum; i++)
	{
		if (level == levels[i])
		{
			(this->*funcs[i]) ();
			return ;
		}
	}
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-specialketchup burger. I really do!\n" << std::endl;	
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! If you did";
	std::cout << ", I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years, whereas you started ";
	std::cout << "working here just last month.\n" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
	std::cout << std::endl;
}
