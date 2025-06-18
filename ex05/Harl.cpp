/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 10:50:26 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/18 11:47:15 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special"
	<< "-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
	<< "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
	<< "years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::level	Harl::getLevel(std::string &str)
{
	if (str == "ERROR")
		return (ERROR);
	else if (str == "INFO")
		return (INFO);
	else if (str == "WARNING")
		return (WARNING);
	else if (str == "DEBUG")
		return (DEBUG);
	else
		return (UNKNOWN);
}

void	Harl::complain(std::string level)
{
	(void)level;

	void (Harl::* ptfptr) (void) = NULL;

	switch (getLevel(level))
	{
		case DEBUG:
			ptfptr = &Harl::debug;
			break ;
		case WARNING:
			ptfptr = &Harl::warning;
			break ;
		case ERROR:
			ptfptr = &Harl::error;
			break ;
		case INFO:
			ptfptr = &Harl::info;
			break;
		default:
			return ;
	}
	(this->*ptfptr) ();
}
