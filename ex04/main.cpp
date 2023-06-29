/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:32:27 by arobu             #+#    #+#             */
/*   Updated: 2023/06/28 14:54:07 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

void	replace_str(char **argv, std::string str, std::string filename)
{
	std::fstream			file;
	std::string				new_name;
	std::string::iterator	it;
	int						i;

	
	i = filename.find_last_of('.', filename.length());
	if ((i != (int)std::string::npos))
		new_name = filename.substr(0, i);
	else
		new_name = filename;
	file.open(new_name + ".replace", std::ios::in | std::ios::out | std::ios::trunc);
	i = 0;
	for (it = str.begin(); it != str.end(); it++)
	{
		i = str.find(argv[2], it - str.begin());
		if ((it - str.begin()) == (int)i)
		{
			file << std::string(argv[3]);
			it += std::string(argv[2]).size() - 1;
		}
		else
			file << (*it);
	}
	file.close();
}

int main(int argc, char **argv)
{
	std::string 		line;
	std::string			str;
	std::fstream		file;

	if (argc != 4)
	{
		std::cerr << "Incorrect arguments.\n" 
				  << "Usage: ./file file find replace\n"
				  << "Every occurance of find in file is swapped with replace" << std::endl;
		return (1);
	}
	if (std::string(argv[2]) == "")
		return (1);
	file.open(argv[1]);
	if (!file.is_open() || file.fail())
	{
		std::cerr << "Failed opening the file." << std::endl;
		return (1);
	}
	while (std::getline(file, line))
		str += line + "\n";
	file.close();
	replace_str(argv, str, std::string(argv[1]));
	return (0);
}
