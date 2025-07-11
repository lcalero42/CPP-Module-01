/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:36:09 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/17 11:05:19 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public :

	HumanB(std::string name);	

	void	attack(void);
	void	setWeapon(Weapon &weapon_input);

	private :

	std::string name;
	Weapon		*weapon;

};

#endif