/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 16:29:45 by arobu             #+#    #+#             */
/*   Updated: 2023/06/23 19:08:09 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanA{
		public:
			HumanA(std::string name, Weapon &weapon);
			~HumanA(void);
			void	attack(void);
		private:
			std::string _name;
			Weapon &_weapon;
};
