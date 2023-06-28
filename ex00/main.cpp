/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:51:55 by arobu             #+#    #+#             */
/*   Updated: 2023/06/23 15:14:23 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	Zombie *z_heap = newZombie("Bloodbane");
	randomChump("Rotclaw");
	delete z_heap;
}
