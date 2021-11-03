/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:10:03 by aamorin-          #+#    #+#             */
/*   Updated: 2021/11/01 16:02:38 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

int main(int a, char **argv)
{
	if (a == 4)
	{
		std::ifstream in;
		std::string line;
		in.open (argv[1], std::ifstream::in);
		if (!(in))
		{
			std::cout << "Error: File doesnt exists.\n";
			return (0);
		}
		if (in.is_open())
		{
			std::stringstream ss;
			std::ofstream out;
			std::string s1 = argv[2];
			std::string s2 = argv[3];
			ss << argv[1] << ".replace";
			out.open (ss.str(), std::ifstream::out);
			while (std::getline(in, line))
			{
				std::string::size_type pos = 0;
				while ((pos = line.find(s1, pos)) != std::string::npos)
				{
					line.erase(pos, s1.length());
					line.insert(pos, s2);
					pos += s1.length();
				}
				out << line << std::endl;
			}

			out.close();
			in.close();
		}
	}
	else
		std::cout << "Error: Arguments. Example: ./replace file string1 string2\n";
	return (0);
}
