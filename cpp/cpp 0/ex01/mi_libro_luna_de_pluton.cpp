/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mi_libro_luna_de_pluton.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:06:59 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/20 08:56:47 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

class Contact
{
	public:
		string	name_1;
		string	name_2;
		string	nickname;
		string	phone;
		string	secret;
};

class PhoneBook
{
	public:
		Contact list[8];
		int		count;
};

void show_info(PhoneBook book, std::string i)
{
	int index;

	index = std::atoi(i.c_str());
	if (index < book.count)
	{
		std::cout << "first name: " << book.list[index].name_1 << std::endl;
		std::cout << "last name: " << book.list[index].name_2 << std::endl;
		std::cout << "nickname: " << book.list[index].nickname << std::endl;
		std::cout << "phone: " << book.list[index].phone << std::endl;
		std::cout << "darkest secret: " << book.list[index].secret << std::endl;
	}
	else
		std::cout << "That id doesn´t exist" << std::endl;
}

void write(std::string str)
{
	int	size;

	size = std::strlen(str.c_str());
	if (size <= 10)
		std::cout << "|" << str.substr(0, 10);
	else
		std::cout << "|" << str.substr(0, 9);
	while (size < 10)
		{
		size++;
		std::cout << " ";
	}
	if (std::strlen(str.c_str()) > 10)
		std::cout << ".";
}

void search(PhoneBook book)
{
	int i;
	std::string index;

	i = 0;
	while(i < book.count)
	{
		std::cout << i;
		if (i < 10)
			std::cout << "         ";
		else
			std::cout << "        ";
		write(book.list[i].name_1);
		write(book.list[i].name_2);
		write(book.list[i].nickname);
		std::cout << "|" << std::endl;
		i++;
	}
	if (book.count > 0)
	{
		std::cout << "Who you want to search(index): ";
		std::getline (std::cin,index);
		show_info(book, index);
	}
}

int	main(void)
{
	std::string str;
	PhoneBook book;
	int i;

	i = 0;
	while (1)
	{
		std::getline (std::cin,str);
		if (str.compare("EXIT") == 0)
			break ;
		if (str.compare("ADD") == 0)
		{
			book.count = i + 1;
			std::cout << "first name: ";
			std::getline (std::cin,book.list[i].name_1);
			std::cout << "last name: ";
			std::getline (std::cin,book.list[i].name_2);
			std::cout << "nickname: ";
			std::getline (std::cin,book.list[i].nickname);
			std::cout << "phone: ";
			std::getline (std::cin,book.list[i].phone);
			std::cout << "darkest secret: ";
			std::getline (std::cin,book.list[i].secret);
			i++;
			if (i == 7)
			{
				book.count = i + 1;
				i = 0;
			}
		}
		if (str.compare("SEARCH") == 0)
			search(book);
	}
	return (0);
}
