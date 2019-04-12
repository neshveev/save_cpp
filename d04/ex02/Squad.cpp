/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 15:31:56 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/12 17:03:55 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <string>

Squad::Squad( void )
{
	this->_nb = 0;
	this->_squad = NULL;
}

Squad::~Squad( void )
{
	this->_destroy();
}

Squad::Squad( Squad const & rhs )
{
	this->_copy_units(rhs);
	this->_nb = rhs.getCount();
}

int	Squad::getCount( void ) const
{
	return this->_nb;
}

Squad&	Squad::operator=( Squad const & rhs )
{
	if (this == &rhs)
		return *this;
	this->_destroy();
	this->_copy_units(rhs);
	this->_nb = rhs.getCount();
	return *this;
}

ISpaceMarine*	Squad::getUnit( int nb ) const
{
	t_container*	tmp;

	tmp = this->_squad;
	while (tmp && nb--)
		tmp = tmp->next;
	if (tmp == NULL)
		return NULL;
	return tmp->unit;
}

int		Squad::push( ISpaceMarine* unit )
{
	t_container*	tmp;
	int				res;

	tmp = this->_squad;
	res = 0;
	if (this->_isAlready(unit, this->_squad))
		return 0;
	if (tmp == NULL)
	{
		this->_squad = new t_container(unit);
		return 1;
	}
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
			res++;
		}
		tmp->next = new t_container(unit);
		return res + 1;
	}
}

void	Squad::_copy_units( Squad const & src )
{
	for (int i = 0; i < src.getCount(); i++)
		this->push(src.getUnit(i));
}

void	Squad::_destroy( void )
{
	t_container*	tmp;

	while (this->_squad)
	{
		tmp = this->_squad;
		this->_squad = tmp->next;
		delete tmp->unit;
		delete tmp;
	}
}

bool	Squad::_isAlready( ISpaceMarine* unit, t_container* squad)
{
	if (squad == NULL)
		return false;
	if (unit == squad->unit)
		return true;
	else
		return this->_isAlready(unit, squad->next);
}

