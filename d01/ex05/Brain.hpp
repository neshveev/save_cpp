/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:12:20 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/05 17:25:57 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <string>

class Brain
{
	std::string	_adr;
public:
	Brain( void );
	~Brain( void );
	void	setAdr( void );
	std::string	identify( void );
};

#endif
