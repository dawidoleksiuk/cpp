/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 15:56:59 by doleksiu          #+#    #+#             */
/*   Updated: 2026/10/01 17:58:47 by doleksiu         ###   ########.fr       */
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
	std::size_t	_s1len;
	std::size_t _s2len;
	void ReplaceText(std::string& text);
};

#endif