/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 08:45:44 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/28 11:44:31 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with his " << this->type->getType() <<std::endl;
}

void HumanB::setWeapon(Weapon &type)
{
	this->type = &type;
}
