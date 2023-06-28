/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 16:29:47 by arobu             #+#    #+#             */
/*   Updated: 2023/06/23 19:19:02 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanB{
		public:
			HumanB(std::string name);
			~HumanB(void);
			void	attack(void);
			void	setWeapon(Weapon &weapon);
		private:
			std::string _name;
			Weapon *_weapon;
};
