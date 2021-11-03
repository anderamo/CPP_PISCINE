/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:40:52 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/26 12:24:52 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

# include <string>
# include <sstream>
# include <vector>
# include <algorithm>
# include <functional>
# include <iomanip>
# include <iostream>

class Zombie {
	public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	void newNameZombie(std::string);
	void	announce( void );

	private:
	std::string		name;
};

Zombie* zombieHorde(int N, std::string name );
int	is_number(std::string number);

#endif
