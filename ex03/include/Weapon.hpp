/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 16:29:49 by arobu             #+#    #+#             */
/*   Updated: 2023/06/23 16:50:18 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "string"

class Weapon{
		public:
			Weapon(std::string type);
			~Weapon(void);
			//	Getters
			const std::string& getType(void);
			//	Setters
			void setType(std::string type);
		private:
			std::string _type;	
};
