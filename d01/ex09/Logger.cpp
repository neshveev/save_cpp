/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 16:04:34 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/06 17:04:08 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <fstream>
#include <iostream>
#include <string>

Logger::Logger( std::string name)
{
	this->_name = name;
}

void	Logger::logToConsole( std::string message )
{
	std::cout << message << std::endl;
}

void	Logger::logToFile( std::string message )
{
	std::ofstream	out(this->_name, std::ios_base::app);
	if (out.fail())
	{
		std::cout << "file was not created" << std::endl;
		return ;
	}
	out << message << std::endl;
	out.close();
}

std::string	Logger::makeLogEntry( std::string message )
{
	std::time_t	sec;
	std::tm		*time;
	char		format[19];
	std::string	res;

	sec = std::time(NULL);
	time = localtime(&sec);
	strftime(format, 19, "[%Y%m%d - %H:%M]", time);
	res = format;
	res += "		" + message;
	return (res);
}

void	Logger::log(std::string const & dest, std::string const & message)
{
	std::string	p[2] = {"Consol", "File"};
	void (Logger::*ptr[2])( std::string message ) = {
		&Logger::logToConsole,
		&Logger::logToFile};
	size_t	index;

	index = 0;
	while (index < 2 && p[index] != dest)
		index++;
	(this->*ptr[index])(this->makeLogEntry(message));
}
