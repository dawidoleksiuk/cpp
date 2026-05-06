/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 15:57:26 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/01 20:15:31 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Replace.hpp"

int	main(int argc, char *argv[])
{

	// (void)argc;
	// // (void)argv;
	if (argc != 4)
	{
		std::cout << "Usage: ./replace <filename> <str1> <str2>" << std::endl;
		return 1;
	}
	Replace replace = Replace(argv[1], argv[2], argv[3]);
	replace.Execute();

	return 0;
}