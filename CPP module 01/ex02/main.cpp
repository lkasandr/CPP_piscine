/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkasandr <lkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:02:41 by lkasandr          #+#    #+#             */
/*   Updated: 2021/08/27 14:31:05 by lkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";;
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	
	std::cout << "The address in memory of the string: "<< &str << std::endl;
	std::cout << "stringPTR: " << stringPTR << std::endl;
	std::cout << "stringREF: " << &stringREF << std::endl;
	std::cout << "The string using the pointer stringPTR: " << *stringPTR << std::endl;
	std::cout << "The string using the reference stringREF: " << stringREF << std::endl;
	return (0);
}
