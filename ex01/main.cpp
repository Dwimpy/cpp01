/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:51:55 by arobu             #+#    #+#             */
/*   Updated: 2023/06/28 14:51:11 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N_ZOMBIES 10

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int	i = -1;
	Zombie *hoard = zombieHoard(N_ZOMBIES, "Gravewalker");
	while (++i < N_ZOMBIES)
		hoard[i].announce();
	delete[] hoard;
	return (0);
}
