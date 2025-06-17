/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 11:12:28 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/17 16:46:46 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

File::File() {}

File::File(std::string name) : name(name) {}

std::string	File::getName(void)
{
	return (name);
}

std::fstream* File::openFile(std::ios::openmode mode)
{
	std::fstream* file = new std::fstream(name.c_str(), mode);
	if (!file->is_open())
	{
		delete file;
		throw std::runtime_error("File opening failure: " + name);
	}
	return (file);
}

std::ofstream* File::createFile()
{
	std::ofstream* file = new std::ofstream(name.c_str());
	if (!file->is_open())
	{
		delete file;
		throw std::runtime_error("File creating failure: " + name);
	}
	return (file);
}
