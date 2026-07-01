/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 15:19:58 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/01 15:26:51 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib>

PhoneBook::PhoneBook() : _numOfContacts(0) {}

void	PhoneBook::addContact(void)
{
	if (!_contacts[_numOfContacts % 8].setContact(_numOfContacts))
		return ;
	_numOfContacts++;
	return ;
}

bool	isNumber(const std::string &str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!isdigit(str[i]))
		{
			std::cout << "Please provide a positive number." << std::endl;
			return false;
		}
	}
	return true;
}

void	PhoneBook::searchContact(void)
{
	std::string	userInput;
	int	index;
	
	if (_numOfContacts == 0)
	{
		std::cout << "There are no contacts to search." << std::endl;
		return ;
	}
	std::cout << std::endl;
	displayContactsPreview();
	std::cout << "Please select contact index you would like to display:" << std::endl;
	std::cout << std::endl;
	while (1)
	{
		if (!std::getline(std::cin, userInput))
			continue ;
		if (!isNumber(userInput))
			continue ;
		index = atoi(userInput.c_str()) - 1;
		if (index < 0 || index > (_numOfContacts - 1) || index >= 8)
			std::cout << "This index is incorrect." << std::endl;
		else
			break ;
	}
	_contacts[index].displayInfo();
}

void	PhoneBook::displayContactsPreview(void)
{
	int numOfRows;

	if (_numOfContacts < 8)
		numOfRows = _numOfContacts;
	else
		numOfRows = 8;
	displayPreviewHeader();
	for (int i = 0; i < numOfRows; i++)
	{
		std::cout << std::setw(10);
		_contacts[i].displayPreviewRow();
	}
	std::cout << std::endl;
}

void	PhoneBook::displayPreviewHeader()
{
	Contact::displayPreviewField("index", true);
	Contact::displayPreviewField("first name", true);
	Contact::displayPreviewField("last name", true);
	Contact::displayPreviewField("nickname", false);
	std::cout << std::endl;
}
