/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 15:15:13 by doleksiu          #+#    #+#             */
/*   Updated: 2026/04/25 22:54:48 by doleksiu         ###   ########.fr       */
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
	int			index;
	std::string	firstName_;
	std::string	lastName_;
	std::string	nickname_;
	std::string	phoneNumber_;
	std::string	darkestSecret_;
	std::string	setContactField(const std::string &msg);	
};

#endif