/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 12:26:03 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/26 12:27:30 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name )
{
	Zombie *zombie = new Zombie[N];
	std::stringstream ss;
	int i = 0;

	while (N > i)
	{
		ss.str(std::string());
		ss << i;
		zombie[i].newNameZombie(name + ss.str());
		zombie[i].announce();
		i++;
	}
	delete [] zombie;
	return (zombie);
}
