/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:37:41 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/04 16:15:00 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <string>

class Pony
{
	std::string	_name;
	std::string	_age;
public:
	Pony( void );
	~Pony( void );
};

#endif
