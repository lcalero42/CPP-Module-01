/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 10:50:18 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/18 11:43:52 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
	public:
	Harl();	

	void	complain( std::string level );

	private:
	
	enum level
	{
		DEBUG,
		INFO,
		WARNING,
		ERROR,
		UNKNOWN
	};

	//utility functions
	static	level	getLevel(std::string &str);
	
	//level functions
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
		
};

#endif