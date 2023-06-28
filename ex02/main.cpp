/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:32:27 by arobu             #+#    #+#             */
/*   Updated: 2023/06/23 15:46:57 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int main(int argc, char **argv)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "String Memory Address: " << &string << std::endl;
	std::cout << "StringPTR Memory Address: " << stringPTR << std::endl;
	std::cout << "StringREF Memory Address: " << &stringREF << std::endl;
	std::cout << "String Value: " << string << std::endl;
	std::cout << "StringPTR Value: " << *stringPTR << std::endl;
	std::cout << "StringREF Value: " << stringREF << std::endl;
	return (0);
}
