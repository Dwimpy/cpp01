/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:42:36 by arobu             #+#    #+#             */
/*   Updated: 2023/06/28 20:40:58 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(void){
	this->_fcts[0] = &Harl::debug;
	this->_fcts[1] = &Harl::info;
	this->_fcts[2] = &Harl::warning;
	this->_fcts[3] = &Harl::error;
}

Harl::~Harl(void){}

void	Harl::debug(void){
	std::cout << cyan << "[DEBUG]: "
					  << "I love having extra bacon for"
					  << " my 7XL-double-cheese-triple-pickle"
					  << "-specialketchup burger. I really do!" << reset << std::endl;
}

void	Harl::info(void){
	std::cout << green << "[INFO]: "
					   << "I cannot believe adding extra bacon costs more money."
					   << " You didn’t put enough bacon in my burger!"
					   << " If you did, I wouldn’t be asking for more!" << reset << std::endl;
}

void	Harl::warning(void){
	std::cout << yellow << "[WARNING]: "
					    << "I think I deserve to have some extra bacon for free."
					    << " I’ve been coming for years whereas"
					    << " you started working here since last month." << reset << std::endl;
}

void	Harl::error(void){
	std::cout << red << "[ERROR]: "
					 << "This is unacceptable! I want to speak to the manager now." << reset << std::endl;
}

void	Harl::complain(std::string level)
{
	int		lvl;

	lvl = 4;
	for (size_t i = 0; i < (*levels).length(); i++)
	{
		if (levels[i] == level)
			lvl = i;
	}
	switch(lvl){
		case 0:
			(this->*_fcts[0])();
		case 1:
			(this->*_fcts[1])();
		case 2:
			(this->*_fcts[2])();
		case 3:
			(this->*_fcts[3])();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
