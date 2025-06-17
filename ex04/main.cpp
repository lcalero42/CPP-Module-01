/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 11:07:32 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/17 16:29:09 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replaceTool.hpp"
#include <stdexcept>

int main(int ac, char* av[])
{
	if (ac != 4) {
		std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	
	try {
		std::string s1 = av[2];
		std::string s2 = av[3];

		File infile(av[1]);
		ReplaceTool tool(infile, s1, s2);

		File* outfile = tool.initOutputFile();  // May throw
		tool.run(outfile);
		delete outfile;  // Clean up
		return 0;

	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return (1);
	}
	return (0);
}
