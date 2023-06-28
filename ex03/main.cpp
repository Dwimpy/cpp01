/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:32:27 by arobu             #+#    #+#             */
/*   Updated: 2023/06/23 19:34:41 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "iostream"

int main(int argc, char **argv)
{
	Weapon	w1 = Weapon("Club");
	Weapon	w2 = Weapon("pickaxe");
	HumanA  h1 = HumanA("Ralph", w1);
	HumanB	h2 = HumanB("Dork");
	
	h1.attack();
	w1.setType("Laserbeam");
	h1.attack();
	w2.setType("Knuckles");
	h2.setWeapon(w2);
	h2.attack();
	w1.setType("Karaoke");
	h2.setWeapon(w1);
	h2.attack();

	return (0);
}
