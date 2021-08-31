/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkasandr <lkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:02:41 by lkasandr          #+#    #+#             */
/*   Updated: 2021/08/31 14:19:12 by lkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argv, char *argc[])
{
	Karen karen;
	std::string level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index;

	index = 0;
	if (argv != 2)
	{
		std::cout << "Wrong number of arguments!" << std::endl;
		return (-1);
	}
	while(level[index].compare(argc[1]) && (index < 4))
		index++;
	switch (index)
	{
	case 0:
		std::cout << "[ DEBUG ]"  << std::endl;
		karen.complain(level[0]);
		index = 1;
	case 1:
		std::cout << "[ INFO ]"  << std::endl;
		karen.complain(level[1]);
		index = 2;
	case 2:
		std::cout << "[ WARNING ]"  << std::endl;
		karen.complain(level[2]);
		index = 3;
	case 3:
		std::cout << "[ ERROR ]"  << std::endl;
		karen.complain(level[3]);
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}

	return (1);
}