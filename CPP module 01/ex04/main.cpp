/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkasandr <lkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:02:41 by lkasandr          #+#    #+#             */
/*   Updated: 2021/08/30 13:48:34 by lkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argv, char *argc[])
{
	std::string fileName;
	std::string s1;
	std::string s2;
	std::string line;
	std::string buf;
	size_t pos;

	pos = 0;
	if (argv != 4)
	{
		std::cout << "Wrong arguments!" << std::endl;
		return (0);
	}
	fileName = argc[1];
	s1 = argc[2];
	s2 = argc[3];
	std::ifstream fileIn(fileName);
	if (!fileIn.is_open())
	{
		std::cout << "Wrong name of file!" << std::endl;
		return (0);
	}
	std::ofstream fileOut("FILENAME.replace");
	while (std::getline(fileIn, line))
	{
		pos = line.find(s1, 0);
		while (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = line.find(s1, pos + s1.length());
		}
		buf.append(line);
		buf.append("\n");
	}
	if (buf != "\0")
		buf.erase(buf.rfind("\n"), 1);
	fileOut << buf;
	fileIn.close();
	fileOut.close();
	return (1);
}