/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:02:22 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/05 15:16:42 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*p = &str;
	std::string	&r = str;

	std::cout << str << std::endl;
	std::cout << *p << std::endl;
	std::cout << r << std::endl;
	return (0);
}
