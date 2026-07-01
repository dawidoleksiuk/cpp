/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 15:20:05 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/01 14:48:50 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


std::string	Contact::setContactField(const std::string &msg)
{
	std::string	field;
	
	while (field.empty())
	{
		std::cout << msg;
		if (!std::getline(std::cin, field))
			break ;
	}
	return (field);

}

bool	Contact::setContact(int numOfContacts)
{
	if (numOfContacts < 8)
		_index = numOfContacts;
	else
		_index = numOfContacts % 8;
	_firstName = setContactField("Enter first name: ");
	if (_firstName.empty())
		return false;
	_lastName = setContactField("Enter last name: ");
	if (_lastName.empty())
		return false;
	_nickname = setContactField("Enter nickname: ");
	if (_nickname.empty())
		return false;
	_phoneNumber = setContactField("Enter phone number: ");
	if (_phoneNumber.empty())
		return false;
	_darkestSecret = setContactField("Enter darkest secret: ");
	if (_darkestSecret.empty())
		return false;
	return true;
}

void	Contact::displayPreviewField(const std::string &field, bool pipe)
{
	if (field.size() > 10)
		std::cout << field.substr(0,9) << ".";
	else
		std::cout << std::setw(10) << field;
	if (pipe)
		std::cout << "|";	
}

void	Contact::displayPreviewRow()
{	
	std::cout << std::setw(10) << (_index % 8) + 1 << "|";
	displayPreviewField(_firstName, true);
	displayPreviewField(_lastName, true);
	displayPreviewField(_nickname, false);
	std::cout << std::endl;
}
void	Contact::displayInfo(void)
{
	std::cout << std::endl << "The selected contact information:" << std::endl << std::endl;
	std::cout << "_Index: " << (_index % 8) + 1 << std::endl;
	std::cout << "First name: " << _firstName << std::endl;
	std::cout << "Last name: " << _lastName << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Darkest secret: " << _darkestSecret << std::endl << std::endl;
}
