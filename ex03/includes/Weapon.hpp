/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 02:50:02 by ple-stra          #+#    #+#             */
/*   Updated: 2022/12/11 04:53:12 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
private:
	std::string _type;

public:
	Weapon();
	Weapon(std::string type);
	~Weapon();

	std::string const &getType(void);
	void setType(std::string type);
};

#endif
