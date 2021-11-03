/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:08:50 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/26 17:09:03 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <string>
# include <iomanip>
# include <iostream>

int main(int a, char **argv)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "&string = " << &string << std::endl;
	std::cout << "stringPTR = " <<stringPTR << std::endl;
	std::cout << "&stringREF = " <<&stringREF << std::endl;
	std::cout << "*stringPTR = " <<*stringPTR << std::endl;
	std::cout << "stringREF = " <<stringREF << std::endl;

	return (0);
}
