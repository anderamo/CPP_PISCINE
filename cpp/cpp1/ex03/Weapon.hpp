/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:15:12 by aamorin-          #+#    #+#             */
/*   Updated: 2021/11/01 16:15:29 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#ifndef __WEAPON_H__
# define __WEAPON_H__

# include <string>
# include <vector>
# include <iomanip>
# include <iostream>


class Weapon
{
	private:
		std::string type;
	public:
	Weapon(std::string type);
	~Weapon();

	void setType(std::string type);
	const std::string &getType(void);
};

#endif

