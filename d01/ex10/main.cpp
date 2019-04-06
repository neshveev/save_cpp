/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 17:07:07 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/06 18:21:25 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>

int	cat_file(char *name)
{
	std::ifstream	in(name);
	std::stringstream	buf;

	if (in.fail())
	{
		std::cout << "cato9tails: " << name << ": No such file or directory"
			<< std::endl;
		return (1);
	}
	buf << in.rdbuf();
	std::cout << buf.str();
	return (0);
}

void	cat_stdin(void)
{
	std::string	in;

	while (std::cin >> in)
		std::cout << in << std::endl;
}

int	main(int c, char **v)
{
	int	error;

	error = 0;

	for (int i = 1; i < c; i++)
	{
		if (!strcmp(v[i], "-"))
		{
			cat_stdin();
			i++;
			if (i == c)
				return (0);
		}
		if (cat_file(v[i]))
			error++;
	}
	if (error)
		return (1);
	if (c == 1)
		cat_stdin();
	return (0);
}
