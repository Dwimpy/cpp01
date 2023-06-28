/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 16:29:40 by arobu             #+#    #+#             */
/*   Updated: 2023/06/23 16:50:05 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type){}

Weapon::~Weapon(void){}

const std::string& Weapon::getType(void){
	return (this->_type);
}

void	Weapon::setType(std::string type){
	this->_type = type;
}
