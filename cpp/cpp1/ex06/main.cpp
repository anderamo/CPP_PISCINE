/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:18:49 by aamorin-          #+#    #+#             */
/*   Updated: 2021/11/03 13:18:52 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int a, char **argv)
{
	if (a == 2)
	{
		Karen comp;
		std::string str = std::string(argv[1]);

		if (!str.compare("DEBUG") || !str.compare("INFO")
			|| !str.compare("WARNING") || !str.compare("ERROR"))
			comp.complain(str);
		else
			std::cout << "[ Probably complaining about insignificant problems ]"
						<< std::endl;
	}
	else
		std::cout << "Error: Arguments. Example: ./Karen 'DEBUG/INFO/WARNING/ERROR'\n";
	return (0);
}
