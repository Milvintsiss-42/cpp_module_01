/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 04:13:41 by ple-stra          #+#    #+#             */
/*   Updated: 2022/12/11 19:40:24 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon _weapon;

public:
	HumanB(std::string name);
	~HumanB();

	void setWeapon(Weapon weapon);
	void attack(void);
};

#endif
