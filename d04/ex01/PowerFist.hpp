/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:54:10 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/11 19:12:53 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
public:
	PowerFist( void );
	PowerFist( PowerFist const & rhs );
	~PowerFist( void );
	PowerFist	&operator=( PowerFist const & rhs );
	void	attack( void ) const;
};

#endif
