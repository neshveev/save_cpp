/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 15:06:40 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/12 15:32:46 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP

class ISpaceMarine
{
public:
	virtual ~ISpaceMarine( void ) { return ; }
	virtual ISpaceMarine* clone( void ) const = 0;
	virtual void battleCry( void ) const = 0;
	virtual void rangedAttack( void ) const = 0;
	virtual void meleeAttack( void ) const = 0;
};

#endif
