/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:32:32 by aamorin-          #+#    #+#             */
/*   Updated: 2021/11/02 16:28:31 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{

}

Karen::~Karen()
{

}

void Karen::complain(std::string level)
{
	void (Karen::*f[4])() = {&Karen::debug, &Karen::info,
				&Karen::warning, &Karen::error};
	int i = 0;

	std::transform(level.begin(), level.end(), level.begin(), ::tolower);
	this->level = level;
	while (i < 4)
	{
		(this->*f[i])();
		i++;
	}
}

void Karen::debug(void)
{
	if (!this->level.compare(__func__))
	{
		std::cout << "[DEBUG]" << std::endl;
		std::cout << "I love to get extra bacon for my 7XL-double-cheese"
					<< "-triple-pickle-special-ketchup burger. I just love it!.\n";
	}
}

void Karen::info(void)
{
	if (!this->level.compare(__func__))
	{
		std::cout << "[INFO]" << std::endl;
		std::cout << "I cannot believe adding extra bacon cost more money. You don’t"
				<< " put enough! If you did I would not have to ask for it!.\n";
	}
}

void Karen::warning(void)
{
	if (!this->level.compare(__func__))
	{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming"
				<< " here for years and you just started working here last month.\n";
	}
}

void Karen::error(void)
{
	if (!this->level.compare(__func__))
	{
		std::cout << "[ERROR]" << std::endl;
		std::cout << "This is unacceptable, I want to speak to the manager now.\n";
	}
}
