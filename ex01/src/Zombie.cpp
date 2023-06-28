/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:52:10 by arobu             #+#    #+#             */
/*   Updated: 2023/06/23 15:22:26 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "iostream"

// Creates a zombie and sets the name member to std::string name
Zombie::Zombie(std::string name): _name(name){}

// Creates a zombie object with no name
Zombie::Zombie(void){}

// Deconsructor function
Zombie::~Zombie(void){
	std::cout << "Rest in pieces, dear " << this->_name << ". Your hunger for brains shall"
			  << "trouble this world no more. May you find eternal slumber in the realm of the undead." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name + ": "
			  <<  "BraiiiiiiinnnzzzZ..."
			  << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
