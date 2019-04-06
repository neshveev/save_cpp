/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 16:46:38 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/06 17:04:09 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int	main()
{
	Logger	m = Logger("test");

	m.log("Consol", "trulala");
	m.log("File", "boo");
	m.log("Consol", "tralala");
	m.log("File", "foo");
	m.log("File", "qoo");
	return (0);
}
