/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 04:10:31 by ple-stra          #+#    #+#             */
/*   Updated: 2022/12/12 04:51:56 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl
{
private:
	void _debug();
	void _info();
	void _warning();
	void _error();
	
public:
	Harl();
	~Harl();

	void complain(std::string level);
};

#endif