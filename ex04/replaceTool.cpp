/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceTool.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:54:48 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/17 17:23:22 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replaceTool.hpp"
#include <sstream>

ReplaceTool::ReplaceTool(File &fileToRead, std::string &s1, std::string &s2)
	: inputFile(fileToRead), toReplace(s1), newPattern(s2) {}

/*Initializes the output file and checks for eventual errors for opening infile
or creating outfile*/
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

/*finds the pattern we want to replace and replace it by the new pattern
in the line we pass in parameter, the file process is done in the function below*/
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

/*main logic of replacing the patterns between the files is processed
in this function*/
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
