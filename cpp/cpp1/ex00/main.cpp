/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:08:50 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/22 18:06:15 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie( void )
{
	std::cout << "Destroyed:" << this->name << "\n";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

int main(int a, char **argv)
{
	Zombie	*zombie;

	if (a == 2)
	{
		zombie->randomChump(argv[1]);
		delete zombie;
	}
}
