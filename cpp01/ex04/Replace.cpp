/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 15:56:52 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/05 10:20:01 by doleksiu         ###   ########.fr       */
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
	std::string	newFilename = _filename + ".replace";
	

	std::ifstream inFile(_filename.c_str());
	if (!inFile.is_open())
	{
		std::cerr << "Could not open file: " << _filename << std::endl;
		return 1;
	}
	std::ofstream outFile(newFilename.c_str()); 
	if (!outFile.is_open())
	{
		inFile.close();
		std::cerr << "Could not create file: " << newFilename << std::endl;
		return 1;
	}
	while (std::getline(inFile, text))
	{
		ReplaceText(text);
		outFile << text;
		if (!inFile.eof())
			outFile << "\n";
	}
	inFile.close();
	outFile.close();
	return 0;
}

void	Replace::ReplaceText(std::string& text)
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
