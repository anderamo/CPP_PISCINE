/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 08:22:47 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/20 08:57:09 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int a, char **argv)
{
	int i;
	int j;

	i = 1;
	if (a > 1)
	{
		while (i < a)
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] <= 122 && argv[i][j] >= 97)
					argv[i][j] = argv[i][j] - 'a' + 'A';
				j++;
			}
			std::cout << argv[i] << " ";
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
