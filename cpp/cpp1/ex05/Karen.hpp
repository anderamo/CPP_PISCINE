/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:16:15 by aamorin-          #+#    #+#             */
/*   Updated: 2021/11/02 15:59:47 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __KAREN_H__
# define __KAREN_H__

# include <string>
# include <vector>
# include <iomanip>
# include <iostream>


class Karen
{
	private:
		std::string level;
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
	Karen();
	~Karen();
	void complain( std::string level );
};

#endif

