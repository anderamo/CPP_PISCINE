/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 08:28:37 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/28 11:40:35 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->setType(type);
}

Weapon::~Weapon()
{
	return ;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string &Weapon::getType(void)
{
	std::string &type = this->type;
	return (type);
}

