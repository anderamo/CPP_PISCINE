/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:32:32 by aamorin-          #+#    #+#             */
/*   Updated: 2021/11/03 13:02:36 by aamorin-         ###   ########.fr       */
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
	int i = 0;
	std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4)
	{
		if (!array[i].compare(level))
			break ;
		i++;
	}
	switch (i)
	{
	case 0:
		this->debug();
		break;
	case 1:
		this->info();
		break;
	case 2:
		this->warning();
		break;
	case 3:
		this->error();
		break;
	}
}

void Karen::debug(void)
{
		std::cout << "[DEBUG]" << std::endl;
		std::cout << "I love to get extra bacon for my 7XL-double-cheese"
					<< "-triple-pickle-special-ketchup burger. I just love it!.\n";
		this->info();
}

void Karen::info(void)
{
		std::cout << "[INFO]" << std::endl;
		std::cout << "I cannot believe adding extra bacon cost more money. You don’t"
				<< " put enough! If you did I would not have to ask for it!.\n";
		this->warning();
}

void Karen::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming"
				<< " here for years and you just started working here last month.\n";
	this->error();
}

void Karen::error(void)
{
		std::cout << "[ERROR]" << std::endl;
		std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}
