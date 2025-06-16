/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:20:56 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/16 12:15:01 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:

	Zombie(const std::string &name);
	
	void announce(void);
	
	private :

	std::string name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif