/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 15:59:03 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/06 17:04:09 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

#include <string>

class Logger
{
	std::string	_name;
	void	logToConsole( std::string );
	void	logToFile( std::string );
public:
	Logger( std::string );
	std::string	makeLogEntry( std::string );
	void	log(std::string const & dest, std::string const & message);
};

#endif
