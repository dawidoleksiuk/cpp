/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 21:53:52 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/06 16:41:40 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

typedef void(Harl::*t_func)(void);

// https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html

void	Harl::filter(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level.compare(levels[i]) == 0)
		{
			switch (i) {
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
					return;
			}
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Harl::complain(std::string level)
{
	Harl inst;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	t_func	funcs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (level.compare(levels[i]) == 0)
		{
			(inst.*funcs[i]) ();
			return ;
		}
	}
	
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-specialketchup burger. I really do!" << std::endl;	
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! If you did";
	std::cout << ", I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I’ve been coming for years, whereas you started ";
	std::cout << "working here just last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}
