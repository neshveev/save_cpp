/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:36:55 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/11 17:48:28 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
	Peon( void );
public:
	Peon ( std::string name );
	~Peon( void );
	Peon ( Peon const & rhs );
	Peon &operator=( Peon const & rhs );
	void	getPolymorphed( void ) const;
};

#endif
