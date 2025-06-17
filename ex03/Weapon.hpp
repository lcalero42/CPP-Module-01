/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:35:40 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/17 11:05:02 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

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