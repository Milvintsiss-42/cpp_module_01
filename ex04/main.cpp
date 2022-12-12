/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 02:57:37 by ple-stra          #+#    #+#             */
/*   Updated: 2022/12/12 04:03:35 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replaceWordInLine(std::string &line, std::string s1, std::string s2);

void verifyArgs(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Incorrect number of arguments" << std::endl;
		exit(1);
	}
	if (!*argv[1] || !*argv[2] || !*argv[3])
	{
		std::cout << "One or many arguments are empty" << std::endl;
		exit(1);
	}
}

int main(int argc, char **argv)
{
	verifyArgs(argc, argv);
	std::string infileName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream infile(infileName);
	if (!infile)
	{
		std::cout << "Error while opening infile" << std::endl;
		return 1;
	}
	std::string outfileName = infileName + ".replace";
	std::ofstream outfile(outfileName);
	if (!outfile)
	{
		std::cout << "Error while creating outfile" << std::endl;
		return 1;
	}
	
	std::string line;
	while (std::getline(infile, line))
	{
		replaceWordInLine(line, s1, s2);
		outfile << line << std::endl;
	}
	return 0;
}

void replaceWordInLine(std::string &line, std::string s1, std::string s2)
{
	size_t pos = 0;
	pos = line.find(s1, pos);
	while (pos != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos += s2.length();
		pos = line.find(s1, pos);
	}
}