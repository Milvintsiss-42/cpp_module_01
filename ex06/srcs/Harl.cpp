/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.c_pp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 04:12:26 by ple-stra          #+#    #+#             */
/*   Updated: 2022/12/12 04:51:42 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*f[4])(void) =
		{&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			(this->*f[i])();
	}
}

void Harl::_debug()
{
	std::cout << "This is a DEBUG message" << std::endl;
}

void Harl::_info()
{
	std::cout << "This is an INFO message" << std::endl;
}

void Harl::_warning()
{
	std::cerr << "This is a WARNING message" << std::endl;
}

void Harl::_error()
{
	std::cerr << "This is an ERROR message" << std::endl;
}
