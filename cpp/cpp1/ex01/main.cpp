/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:08:50 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/26 12:27:13 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int is_number(std::string number)
{
	int i = 0;

	while (i < number.length())
	{
		if (isdigit(number[i]) == false)
			return (0);
		i++;
	}
	return (1);
}

int main(int a, char **argv)
{
	if (a == 2)
	{
		if (is_number(argv[1]))
		{
			int n, i = 0;
			n = std::stoi(argv[1]);
			std::cout << n << std::endl;
			std::string index;
			std::cout << "Enter a name\n";
			std::getline (std::cin,index);
			Zombie *zombie = zombieHorde(n, index);
		}
		else
		{
			std::cout << "The parameter is not number\n";
		}
	}
	else
	{
		std::cout << "Example: ./More_BraiiiiiiinnnzzzZ 'NUMBER_OF_ZOMBIES' \n";
	}
	return (0);
}
