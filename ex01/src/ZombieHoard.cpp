/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHoard.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:19:52 by arobu             #+#    #+#             */
/*   Updated: 2023/06/23 15:29:02 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHoard(int n, std::string name)
{
	int	i = -1;

	Zombie *hoard = new Zombie[n];
	while (++i < n)
		hoard[i].setName(name);
	return (hoard);
}
