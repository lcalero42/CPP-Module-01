/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceTool.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:52:18 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/17 17:10:02 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

#ifndef REPLACETOOL_H
# define REPLACETOOL_H

class ReplaceTool
{
	public:
	//Constructor
	ReplaceTool(File &fileToRead, std::string &s1, std::string &s2);

	File 	*initOutputFile( void );
	void	run( File *outputFilePtr );
	
	private:
	
	static std::string replacePatterns(std::string &str, std::string &from, std::string &to);
	
	File		&inputFile;
	std::string toReplace;
	std::string newPattern;
};

#endif