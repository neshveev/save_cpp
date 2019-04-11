/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:54:10 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/11 19:07:16 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
public:
	PlasmaRifle( void );
	PlasmaRifle( PlasmaRifle const & rhs );
	~PlasmaRifle( void );
	PlasmaRifle	&operator=( PlasmaRifle const & rhs );
	void	attack( void ) const;
};

#endif
