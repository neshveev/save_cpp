/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:29:58 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/12 14:09:29 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion: public Enemy
{
public:
	RadScorpion( void );
	RadScorpion( RadScorpion const & rhs );
	RadScorpion	&operator=( RadScorpion const & rhs );
	virtual ~RadScorpion( void );
};

#endif
