/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 11:12:21 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/17 17:07:35 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

#include <iostream>
#include <iostream>
#include <fstream>
#include <cstring>

class File
{
	public:
		File();
		File(std::string name);
		
		std::string	getName( void );
		
		std::fstream	*openFile( std::ios::openmode mode );
		std::ofstream	*createFile( void );
	private:
		std::string name;
};

#endif