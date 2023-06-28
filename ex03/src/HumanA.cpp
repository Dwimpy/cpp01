/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 16:29:34 by arobu             #+#    #+#             */
/*   Updated: 2023/06/23 19:06:46 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "iostream"

HumanA::HumanA(std::string name, Weapon &weapon):
				_name(name), 
				_weapon(weapon){}

HumanA::~HumanA(void){}

void	HumanA::attack(void){
	std::cout << this->_name 
			  << " attacks with their "
			  << this->_weapon.getType() << std::endl;
}
