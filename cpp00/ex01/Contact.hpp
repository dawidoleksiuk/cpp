/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 15:15:13 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/03 11:27:37 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact{
public:
	Contact();
	bool	setContact(int numOfContacts);
	void	displayPreviewRow(void);
	static void	displayPreviewField(const std::string &field, bool pipe);
	void	displayInfo(void);
private:
	int			_index;
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
	static std::string	setContactField(const std::string &msg);	
};

#endif