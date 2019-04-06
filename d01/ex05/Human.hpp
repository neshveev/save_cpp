/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:15:32 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/05 17:25:56 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include "Brain.hpp"

class Human
{
	Brain	_brain;
public:
	Human( void );
	~Human( void );
	Brain	getBrain( void );
	std::string	identify( void );
};

#endif
