/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:41:28 by arobu             #+#    #+#             */
/*   Updated: 2023/06/26 12:10:15 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>



const std::string cyan("\033[1;36m");
const std::string green("\033[1;32m");
const std::string yellow("\033[1;33m");
const std::string red("\033[1;31m");
const std::string reset("\33[0;m");
const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};


class Harl{
		typedef void (Harl::*fct_ptr)(void);
		public:
			Harl(void);
			~Harl(void);
			void	complain(std::string level);
		private:
			fct_ptr	_fcts[4];
			void	debug(void);
			void	info(void);
			void	warning(void);
			void	error(void);
};



