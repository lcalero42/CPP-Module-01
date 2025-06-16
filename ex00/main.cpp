/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:20:37 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/16 12:17:58 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zb_ptr = newZombie("Damien");
	zb_ptr->announce();
	randomChump("Claude");
	zb_ptr->announce();
	delete zb_ptr;
	return (0);
}
