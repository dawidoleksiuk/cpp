/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 15:56:52 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/05 19:59:17 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <string>
#include <iostream>
#include <fstream>

Replace::Replace(std::string filename, std::string s1, std::string s2)
{
	_filename = filename;
	_s1 = s1;
	_s2 = s2;
	_s1len = _s1.size();
}

void	Replace::Execute(void)
{
	std::string	text;
	std::string	newFilename = _filename + ".replace";

	std::ifstream MyReadFile(_filename.c_str());
	std::ofstream MySaveFile(newFilename.c_str()); 
	while (std::getline(MyReadFile, text))
	{
		_Replace(&text);
		MySaveFile << text << std::endl;
	}
	MyReadFile.close();
	MySaveFile.close();
}

void	Replace::_Replace(std::string *text)
{
	std::size_t	found;

	while (1)
	{
		found = text->find(_s1);
		if (found != std::string::npos)
		{
			text->erase(found, _s1len);
			text->insert(found, _s2);
		}
		else
			break;
	}
}
