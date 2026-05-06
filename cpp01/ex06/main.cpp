/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 21:53:47 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/05 22:20:05 by doleksiu         ###   ########.fr       */
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
		std::cout << "Usage: ./harl <level>";
		return 1;
	}
	harl.filter(argv[1]);
}