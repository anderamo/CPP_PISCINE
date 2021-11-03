/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:15:05 by aamorin-          #+#    #+#             */
/*   Updated: 2021/11/02 15:46:46 by aamorin-         ###   ########.fr       */
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
			std::cout << "Error: Arguments. The parameter"
						<< "is not 'DEBUG/INFO/WARNING/ERROR'\n";
	}
	else
		std::cout << "Error: Arguments. Example: ./Karen 'DEBUG/INFO/WARNING/ERROR'\n";
	return (0);
}
