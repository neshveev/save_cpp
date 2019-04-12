/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 15:13:31 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/12 17:03:56 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
private:
	int				_nb;
	typedef struct	s_container
	{
		ISpaceMarine*		unit;
		s_container* next;
		s_container( ISpaceMarine* _unit ) : next(0), unit(_unit) {}
	}				t_container;
	t_container*	_squad;
	void	_copy_units( Squad const & src );
	void	_destroy( void );
	bool	_isAlready( ISpaceMarine* unit, t_container* squad);
public:
	Squad( void );
	Squad( Squad const & rhs );
	~Squad( void );
	Squad&	operator=( Squad const & rhs );
	int	getCount( void ) const;
	ISpaceMarine*	getUnit( int ) const;
	int	push( ISpaceMarine* );
};

#endif
