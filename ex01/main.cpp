/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:20:37 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/16 12:44:49 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde = zombieHorde(14, "Antoine");
	for (int i = 0; i < 14; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
