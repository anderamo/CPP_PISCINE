/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:40:52 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/23 12:17:14 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

# include <string>
# include <vector>
# include <algorithm>
# include <functional>
# include <iomanip>
# include <iostream>

class Zombie {
	public:

	Zombie(void);

	Zombie* newZombie( std::string name );
	void randomChump( std::string name );

	Zombie (std::string name);
	~Zombie(void);

	void	announce( void );
	void	destroy( void );

	private:

	std::string		name;
};

#endif
