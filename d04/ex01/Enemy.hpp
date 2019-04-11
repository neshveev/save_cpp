/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:14:54 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/11 20:23:16 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>

class Enemy
{
private:
	std::string	_type;
	int			_hp;
protected:
	Enemy( void );
public:
	Enemy(int hp, std::string const & type);
	Enemy( Enemy const & rhs );
	Enemy	&operator=( Enemy const & rhs );
	virtual ~Enemy();
	std::string const getType() const;
	int getHP() const;
	void	setHP( int const & hp );
	void	setType( std::string const & type );
	virtual void	takeDamage( int );
};

#endif
