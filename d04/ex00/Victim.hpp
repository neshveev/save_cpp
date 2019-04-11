/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:36:55 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/11 17:48:22 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
	std::string	_name;
protected:
	Victim( void );
public:
	Victim ( std::string name );
	~Victim( void );
	Victim ( Victim const & rhs );
	Victim &operator=( Victim const & rhs );
	std::string	getName( void ) const;
	void	setName( std::string const & name );
	void	getPolymorphed( void ) const;
};

std::ostream	&operator<<( std::ostream & out, Victim const & rhs );

#endif
