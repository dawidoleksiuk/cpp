/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 21:53:58 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/06 16:30:55 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <string>

enum Level {
	DEBUG = 0,
	INFO = 1,
	WARNING = 2,
	ERROR = 3
};

class	Harl
{
public:
	void	filter(std::string level);
private:
	void	complain(std::string level);
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

};

#endif