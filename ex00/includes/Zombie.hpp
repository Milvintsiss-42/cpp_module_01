/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 23:28:01 by ple-stra          #+#    #+#             */
/*   Updated: 2022/12/11 02:13:06 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Zombie
{
private:
	std::string _name;
public:
	Zombie(std::string name);
	~Zombie();

	void announce(void) const;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);
