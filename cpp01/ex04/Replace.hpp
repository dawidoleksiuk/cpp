/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 15:56:59 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/05 09:51:47 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP
# include <string>

class	Replace
{
public:
	Replace(std::string filename, std::string s1, std::string s2);
	int	Execute(void);
private:
	std::string	_filename;
	std::string	_s1;
	std::string	_s2;
	int	_s1len;
	void ReplaceText(std::string& text);
};

#endif