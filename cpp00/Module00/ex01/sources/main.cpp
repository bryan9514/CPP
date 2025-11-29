/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:12:36 by brturcio          #+#    #+#             */
/*   Updated: 2025/11/27 22:29:08 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	printWithColor(std::string msg, std::string color, bool endll)
{
	std::cout << color;
	std::cout << msg;
	if (endll)
		std::cout << std::endl;
	std::cout << RST;
}

int	main(void)
{
	std::string	command;
	int			i;

	i = 3;
	while (i != 0)
	{
		std::stringstream ss;
		ss << i;
		printWithColor("You have " + ss.str() + " try", HGRN, true);
		printWithColor("Enter a command : ", YEL, false);
		std::cout << YEL;
		std::cin >> command;
		if (command == "EXIT") {
			printWithColor("EXIT", MAG, true);
			return (0);
		}
		else if(command == "SEARCH")
			printWithColor("SEARCH", MAG, true);
		else if(command == "ADD")
			printWithColor("ADD", MAG, true);
		else {
			printWithColor("It is not a valid command", RED, true);
			printWithColor("Valid commands : EXIT - SEARCH - ADD", GRE, true);
		}
		i--;
	}
	return (0);
}
