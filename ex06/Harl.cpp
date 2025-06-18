/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 10:50:26 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/18 15:58:22 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special"
	<< "-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
	<< "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
	<< "years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
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

void Harl::complain(std::string level)
{
	void (Harl::*funcs[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	int i = getLevel(level);
	switch (i)
	{
		case DEBUG:
			(this->*funcs[DEBUG])();
			std::cout << std::endl;
		case INFO:
			(this->*funcs[INFO])();
			std::cout << std::endl;
		case WARNING:
			(this->*funcs[WARNING])();
			std::cout << std::endl;
		case ERROR:
			(this->*funcs[ERROR])();
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
