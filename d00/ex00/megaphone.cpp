/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:25:52 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/02 14:34:42 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

void	printStrUp(char *str)
{
	size_t	i;
	size_t	len;

	len = strlen(str);
	for (i = 0; i < len; i++)
		std::cout << (char)toupper(str[i]);
}

int		main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
		for (i = 1; i < argc; i++)
			printStrUp(argv[i]);
	std::cout << std::endl;
	return (0);
}
