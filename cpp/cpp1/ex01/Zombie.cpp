/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:23:54 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/26 12:36:02 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie( void )
{
	return ;
}

Zombie::Zombie(std::string name )
{
	this->name = name;
	return ;
}

void Zombie::newNameZombie(std::string name)
{
	this->name = name;
}

void	Zombie::announce( void )
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ...\n";
}

