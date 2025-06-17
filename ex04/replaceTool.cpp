/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceTool.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:54:48 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/17 16:39:55 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replaceTool.hpp"
#include <sstream>

ReplaceTool::ReplaceTool(File &fileToRead, std::string &s1, std::string &s2)
	: inputFile(fileToRead), toReplace(s1), newPattern(s2) {}

File* ReplaceTool::initOutputFile(void)
{
	File* outputFile = NULL;
	std::fstream* readIn = NULL;
	std::ofstream* writeOut = NULL;

	try {
		// Allocate output file
		std::string outName = inputFile.getName() + ".replace";
		outputFile = new File(outName);

		// Open streams
		readIn = inputFile.openFile(std::ios::in);       // can throw
		writeOut = outputFile->createFile();             // can throw

		// Copy content
		std::string line;
		while (std::getline(*readIn, line))
			*writeOut << line << '\n';

		readIn->close();
		writeOut->close();

		// Clean up and return
		delete readIn;
		delete writeOut;
		return (outputFile);

	} catch (...) {
		// Clean up partially allocated resources
		delete readIn;
		delete writeOut;
		delete outputFile;
		throw;  // Re-throw the exception
	}
}	

std::string	ReplaceTool::replacePatterns(std::string &str, std::string &from, std::string &to)
{
	std::string result;
	std::size_t pos = 0, prev = 0;
	
	while ((pos = str.find(from, prev)) != std::string::npos)
	{
		result += str.substr(prev, pos - prev);
		result += to;
		prev = pos + from.length();
	}
	
	result += str.substr(prev);
	return (result);
}

void	ReplaceTool::run(File *outputFilePtr)
{
	std::fstream *file = NULL;
	
	file = outputFilePtr->openFile(std::ios::in);
	
	std::ostringstream	buffer;
	std::string			line;

	while (std::getline(*file, line))
		buffer << replacePatterns(line, toReplace, newPattern) << '\n';

	file->close();
	delete file;

	file = outputFilePtr->openFile(std::ios::out);
	*file << buffer.str();
	file->close();
	delete file;
}
