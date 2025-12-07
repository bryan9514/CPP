/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:12:36 by brturcio          #+#    #+#             */
/*   Updated: 2025/12/06 19:16:33 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	printWithColor(const std::string &msg, const std::string &color,
		bool newline, bool reset)
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

static void	displayMenu(void)
{
	printWithColor("\n" + std::string(15, ' ') + "📞 Welcome to PhoneBook!", INF);
	std::cout << INF << "\n"
				<< "╔══════════════════════════════════════════════════╗\n"
				<< "║                    PHONEBOOK                     ║\n"
				<< "╠══════════════════════════════════════════════════╣\n"
				<< "║                                                  ║\n"
				<< "║    ◉  ADD     ──  Add a new contact              ║\n"
				<< "║    ◉  SEARCH  ──  display a specific contact     ║\n"
				<< "║    ◉  EXIT    ──  quit program                   ║\n"
				<< "║                                                  ║\n"
				<< "╚══════════════════════════════════════════════════╝\n";
}

void	getCommand(std::string &command)
{
	printWithColor("\n" + std::string(8, ' ') + "====>> Please enter a command: <<====", INF);
	printWithColor(std::string(16, ' ') + "ADD - SEARCH - EXIT", INF);
	printWithColor("> ", INF, NO_NEWLINE);
	std::getline(std::cin, command);
	if (std::cin.eof()) {
		printWithColor("\nExiting...", WRN);
		exit(0);
	}
	while (!command.empty() && command[command.length() - 1] == ' ') {
		command.erase(command.length() - 1, 1);
	}
	while (!command.empty() && command[0] == ' ') {
		command.erase(0, 1);
	}
	for (size_t i = 0; i < command.length(); i++) {
		command[i] = std::toupper(command[i]);
	}
}

int	main(void)
{
	PhoneBook	phoneBook;
	std::string command;

	displayMenu();
	while (true)
	{
		getCommand(command);
		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else if (command == "EXIT") {
			printWithColor("\n" + std::string(20, ' ') + "Goodbye! 👋\n", SUC);
			break ;
		}
		else 
			printWithColor("\n" + std::string(13, ' ') + "Error: Not a valid command!", ERR);	
	}
	return (0);
}
