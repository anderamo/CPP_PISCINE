/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 08:31:11 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/28 11:44:34 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMANB_H__
# define __HUMANB_H__

# include <string>
# include "Weapon.hpp"
# include <vector>
# include <iomanip>
# include <iostream>


class HumanB
{
private:
	std::string name;
	Weapon *type;
public:
	HumanB(std::string name);
	~HumanB();

	void attack(void);
	void setWeapon(Weapon &type);
};

#endif

