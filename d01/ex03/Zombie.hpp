/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:55:56 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/05 14:58:49 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	std::string	_name;
	std::string	_type;
public:
	Zombie();
	Zombie( std::string, std:: string );
	void	setParams( std::string, std:: string );
	~Zombie();
	void	announce( void );
};

#endif
