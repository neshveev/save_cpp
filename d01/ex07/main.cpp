/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 12:54:18 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/06 14:44:35 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <sstream>
#include <iostream>
#include <string>

int	main(int c, char **v)
{
	std::string	s1;
	std::string	s2;
	std::string	out;
	std::string	fname;

	if (c != 4)
	{
		std::cout << "usage: FILE, s1, s2" << std::endl;
		return (1);
	}
	s1 = v[2];
	s2 = v[3];
	fname = v[1];
	out = fname + ".replace";


	std::stringstream	buf;
	std::string	content;

	std::ifstream	readFile(fname);
	if (readFile.fail())
	{
		std::cout << "File is not valid" << std::endl;
		return (1);
	}
	std::ofstream	outFile(out);
	if (outFile.fail())
	{
		std::cout << "File was not created" << std::endl;
		return (1);
	}


	buf << readFile.rdbuf();
	content = buf.str();
	while (content.find(s1) != std::string::npos)
		content.replace(content.find(s1), s1.length(), s2);
	outFile << content;
	readFile.close();
	outFile.close();
	return (0);
}
