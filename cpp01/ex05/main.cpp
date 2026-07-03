/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 20:48:36 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/03 15:18:11 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int argc, char* argv[])
{
	Harl harl;

	// (void) argc;
	// (void) argv;
	if (argc != 2)
	{
		std::cout << "Usage: ./harl <level>" << std::endl;
		return 1;
	}
	harl.complain(argv[1]);
	// harl.complain("DEBUG");
	// harl.complain("INFO");
	// harl.complain("WARNING");
	// harl.complain("ERROR");
}