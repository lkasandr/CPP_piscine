/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkasandr <lkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:02:41 by lkasandr          #+#    #+#             */
/*   Updated: 2021/08/31 13:28:28 by lkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
	Karen karen;
	std::string level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index;
	
	srand(time(0));
	index = rand() % 4;
	karen.complain(level[index]);
	return (1);
}