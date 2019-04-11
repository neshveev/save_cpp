/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:29:58 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/11 20:11:13 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant: public Enemy
{
public:
	SuperMutant( void );
	SuperMutant( SuperMutant const & rhs );
	SuperMutant	&operator=( SuperMutant const & rhs );
	~SuperMutant( void );
	void	takeDamage( int damage );
};

#endif
