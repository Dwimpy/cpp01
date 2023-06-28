/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:52:17 by arobu             #+#    #+#             */
/*   Updated: 2023/06/23 15:11:10 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include "iostream"

class Zombie{
		public:
			Zombie(std::string name);
			~Zombie(void);
			void	announce(void);
			void	setName(std::string name);
		private:
			std::string	_name;
};

// Returns a zombie on the heap
Zombie *newZombie(std::string name);

// Creates a zombie which announces itself on the stack
void	randomChump(std::string name);

#endif
