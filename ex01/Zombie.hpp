/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:20:56 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/16 12:30:57 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:

	Zombie();
	Zombie(const std::string &name);
	
	void	setName(const std::string &input);

	void announce(void);

	private :

	std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif