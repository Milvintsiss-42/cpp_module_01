/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 02:50:28 by ple-stra          #+#    #+#             */
/*   Updated: 2022/12/11 04:53:17 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon()
{
}

std::string const& Weapon::getType(void)
{
	return this->_type;
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}
