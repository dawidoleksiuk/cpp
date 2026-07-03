/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 15:19:58 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/03 11:12:49 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <sstream>

PhoneBook::PhoneBook() : _numOfContacts(0) {}

void	PhoneBook::addContact(void)
{
	if (!_contacts[_numOfContacts % 8].setContact(_numOfContacts))
		return ;
	_numOfContacts++;
	return ;
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
	std::cout << "Please select a contact index you would like to display:" << std::endl;
	while (1)
	{
		if (!std::getline(std::cin, userInput))
			continue ;
		std::istringstream iss(userInput);
		if (iss >> index)
			index--;
		else
		{
			std::cout << "Please provide a positive number." << std::endl;
			continue ;
		}
		if (index < 0 || index > (_numOfContacts - 1) || index >= 8)
		{
			std::cout << "This index is incorrect. ";
			std::cout << "Please provide a positive number." << std::endl;
		}
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
