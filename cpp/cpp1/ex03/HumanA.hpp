/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 08:31:11 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/28 10:36:27 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMANA_H__
# define __HUMANA_H__

# include <string>
# include "Weapon.hpp"
# include <vector>
# include <iomanip>
# include <iostream>


class HumanA
{
private:
	std::string name;
	Weapon &weapon;
public:
	HumanA(std::string name, Weapon &club);
	~HumanA();

	void attack(void);
};

#endif

