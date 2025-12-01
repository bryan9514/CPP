/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:12:36 by brturcio          #+#    #+#             */
/*   Updated: 2025/12/01 16:38:12 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	printWithColor(const std::string &msg, const std::string &color,
						bool newline = true, bool reset = true)
{
	if (!color.empty())
		std::cout << color;
	if (!msg.empty())
		std::cout << msg;
	if (newline)
		std::cout << std::endl;
	if (reset)
		std::cout << RST;
}

void	displayMenu()
{
	std::cout << HYEL << "\n"
	<< "╔══════════════════════════════════════════════════╗\n"
	<< "║                    PHONEBOOK                     ║\n"
	<< "╠══════════════════════════════════════════════════╣\n"
	<< "║                                                  ║\n"
	<< "║    ◉  ADD     ──  Add a new contact              ║\n"
	<< "║    ◉  SEARCH  ──  display a specific contact     ║\n"
	<< "║    ◉  EXIT    ──  quit program                   ║\n"
	<< "║                                                  ║\n"
	<< "╚══════════════════════════════════════════════════╝\n";

	std::cout << "\nPlease enter a command:\n";
}

void	getCommand(std::string &command)
{
	printWithColor("> ", HYEL, false, false);
	std::getline(std::cin, command);

	for (size_t i = 0; i < command.length(); i++){
		command[i] = std::toupper(command[i]);
	}
}

int	main(void)
{
	std::string	command;

	printWithColor("\n" + std::string(15, ' ') + "📞 Welcome to PhoneBook!", HCYA);
	displayMenu();
	while (true)
	{
		getCommand(command);
		if (command == "ADD") {
			printWithColor("ADDING CONTACT...", HGRN);
		}
		else if (command == "SEARCH") {
			printWithColor("SEARCHING...", HGRN);
		}
		else if (command == "EXIT"){
			printWithColor("Goodbye! 👋", HYEL);
			break;
		}
		else{
			printWithColor(" Error: Not a valid command!", HRED);
			printWithColor(" Valid commands : EXIT - SEARCH - ADD", HYEL);
		}
	}
	return (0);
}


