/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 20:03:31 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/05 22:05:53 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <string>

class	Harl
{
public:
	void complain(std::string level);
private:
void	debug(void);
void	info(void);
void	warning(void);
void	error(void);

};

#endif