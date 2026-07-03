/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 15:56:59 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/03 14:31:23 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP
# include <string>

class	Replace
{
public:
	Replace(std::string filename, std::string s1, std::string s2);
	void	Execute(void);
private:
	std::string	_filename;
	std::string	_s1;
	std::string	_s2;
	int	_s1len;
	void	_ReplaceText(std::string& text);
};

#endif