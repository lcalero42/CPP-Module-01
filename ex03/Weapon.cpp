/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:47:25 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/16 15:21:27 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}
Weapon::Weapon(std::string type) : type(type) {}

std::string &Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string type_input)
{	
	type = type_input;
}
