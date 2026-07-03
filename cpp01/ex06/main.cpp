/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 21:53:47 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/03 15:22:04 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include "Harl.hpp"
#include <iostream>

int	main(int argc, char* argv[])
{
	Harl harl;

	if (argc != 2)
	{
		std::cout << "Usage: ./harl <level>" << std::endl;
		return 1;
	}
	harl.filter(argv[1]);
}