/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 15:15:13 by doleksiu          #+#    #+#             */
/*   Updated: 2026/06/27 12:07:09 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
#include <iostream>
#include <iomanip> 
#include <cstdio>


class Contact{
public:
	bool	setContact(int numOfContacts);
	void	displayPreviewHeader(void);
	void	displayPreviewRow(void);
	void	displayPreviewField(const std::string &field, bool pipe);
	void	displayInfo(void);
private:
	int			_index;
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
	std::string	setContactField(const std::string &msg);	
};

#endif