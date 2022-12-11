/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 02:35:44 by ple-stra          #+#    #+#             */
/*   Updated: 2022/12/11 02:46:53 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "[str] memory address: " << &str << std::endl;
	std::cout << "Memory adress held by [stringPTR]: "
			  << stringPTR << std::endl;
	std::cout << "Memory adress held by [stringREF]: "
			  << &stringREF << std::endl;

	std::cout << "[str] value: " << str << std::endl;
	std::cout << "Value pointed by [stringPTR]: " << *stringPTR << std::endl;
	std::cout << "Value pointed by [stringREF]: " << stringREF << std::endl;
	return (0);
}