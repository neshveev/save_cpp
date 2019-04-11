/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 15:45:16 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/11 17:12:08 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include "Victim.hpp"

class Sorcerer
{
	std::string	_name;
	std::string	_title;
	Sorcerer( void );
public:
	Sorcerer( std::string const & name, std::string const & title );
	Sorcerer( Sorcerer const & rhs );
	~Sorcerer( void );
	Sorcerer	&operator=( Sorcerer const & rhs );
	std::string	getName( void ) const;
	std::string	getTitle( void ) const;
	void	polymorph(Victim const &) const;
};

std::ostream	&operator<<( std::ostream & out, Sorcerer const & rhs );

#endif
