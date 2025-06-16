/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:36:09 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/16 15:39:48 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANB_HPP
# define HUMANB_HPP

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