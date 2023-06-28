/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 16:29:38 by arobu             #+#    #+#             */
/*   Updated: 2023/06/23 19:19:42 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "iostream"

HumanB::HumanB(std::string name): _name(name){}

HumanB::~HumanB(void){}

void	HumanB::attack()
{
		std::cout << this->_name 
			<< " attacks with their "
			<< this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
