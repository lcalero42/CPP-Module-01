/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:36:01 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/16 15:33:02 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANA_HPP
# define HUMANA_HPP

class HumanA
{
	public :
	
	HumanA(std::string name, Weapon &weapon);	
	
	void	attack(void);
	
	private :
	
	std::string name;
	Weapon		&weapon;

};

#endif