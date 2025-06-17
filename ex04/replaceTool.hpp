/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceTool.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:52:18 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/17 16:35:32 by lcalero          ###   ########.fr       */
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

	// getters
	// std::string getToReplace( void );
	// std::string getNewPattern( void );

	//setters
	// void	setToReplace( std::string input );
	// void	setNewPattern( std::string input );

	File 	*initOutputFile( void );
	void	run( File *outputFilePtr );
	
	private:
	
	static std::string replacePatterns(std::string &str, std::string &from, std::string &to);
	
	File		&inputFile;
	File		outputFile;
	std::string toReplace;
	std::string newPattern;
};

#endif