/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 15:56:52 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/04 17:02:23 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <string>
#include <iostream>
#include <fstream>

//ifstream to read
//ofstream to write 
//fstream to read and write
//isopen checks success od file opening

Replace::Replace(std::string filename, std::string s1, std::string s2)
{
	_filename = filename;
	_s1 = s1;
	_s2 = s2;
	_s1len = _s1.size();
}

int	Replace::Execute(void)
{
	std::string	text;
	bool firstLine = true;
	std::string	newFilename = _filename + ".replace";
	

	std::ifstream MyReadFile(_filename.c_str());
	if (!MyReadFile.is_open())
	{
		std::cerr << "Could not open file: " << _filename << std::endl;
		return 1;
	}
	std::ofstream MySaveFile(newFilename.c_str()); 
	if (!MySaveFile.is_open())
	{
		MyReadFile.close();
		std::cerr << "Could not create file: " << newFilename << std::endl;
		return 1;
	}
	while (std::getline(MyReadFile, text))
	{
		if (!firstLine)
			MySaveFile << "\n";
		_ReplaceText(text);
		MySaveFile << text;
		firstLine = false;
	}
	MyReadFile.close();
	MySaveFile.close();
	return 0;
}

void	Replace::_ReplaceText(std::string& text)
{
	std::size_t	found;

	if (_s1len == 0)
		return ;
	while (1)
	{
		found = text.find(_s1);
		if (found != std::string::npos)
		{
			text.erase(found, _s1len);
			text.insert(found, _s2);
		}
		else
			break;
	}
}
