/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:35:40 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/16 15:17:56 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{
	public :

	//constructors
	Weapon();
	Weapon(std::string type_input);

	//member functions
	std::string &getType(void);
	void		setType(std::string type_input);
	
	private :

	std::string type;
		
};

#endif