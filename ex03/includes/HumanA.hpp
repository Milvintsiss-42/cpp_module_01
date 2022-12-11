/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 04:08:14 by ple-stra          #+#    #+#             */
/*   Updated: 2022/12/11 04:55:05 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon _weapon;

public:
	HumanA(std::string name, Weapon weapon);
	~HumanA();

	void attack(void);
};

#endif
