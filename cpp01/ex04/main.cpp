/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 15:57:26 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/04 17:06:54 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Replace.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./replace <filename> <str1> <str2>" << std::endl;
		return 1;
	}
	if (std::string(argv[2]).empty())
	{
		std::cerr << "The string to replace cannot be empty" <<std::endl;
		return 1;
	}
	Replace replace (argv[1], argv[2], argv[3]);
	if (replace.Execute() != 0)
		return 1;
	return 0;
}