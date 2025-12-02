/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:22:02 by brturcio          #+#    #+#             */
/*   Updated: 2025/12/02 23:34:25 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	contactCount = 0;
	index = 0;
	oldIndex = 0;
}

std::string	PhoneBook::getInput(const std::string &prompt)
{
	std::string	input;

	do
	{
		std::cout << HCYA << std::right << std::setw(25) << prompt << " ";
		printWithColor("> ", INF, NO_NEWLINE);
		std::getline(std::cin, input);
		if (input.empty())
			printWithColor(" Error: Field cannot be empty. Please try again.", HRED);
	} while (input.empty());

	return (input);
}

void	PhoneBook::addContact()
{
	std::string	input;

	printWithColor("\n" + std::string(20, ' ') + "📝 Add Contact", INF);
	printWithColor(std::string(52, '-') + "\n", INF);
	if (contactCount >= MAXCONT)
		 printWithColor(" ⚠️  PhoneBook is full! Replacing oldest contact...\n", WRN);
	input = getInput(std::string(2, ' ') + "Enter First Name ");
	contact[index].addFirstName(input);
	input = getInput(std::string(2, ' ') + "Enter Last Name ");
	contact[index].addLastName(input);
	input = getInput(std::string(2, ' ') + "Enter Nick Name ");
	contact[index].addNickName(input);
	input = getInput(std::string(2, ' ') + "Enter Phone Number ");
	contact[index].addPhoneNumber(input);
	input = getInput(std::string(2, ' ') + "Enter Darkest Secret ");
	contact[index].addDarkestSecret(input);
	if (contactCount < MAXCONT)
		contactCount++;
	else
		oldIndex = (oldIndex + 1) % MAXCONT;
	index = (index + 1) % MAXCONT;
	printWithColor("\n" + std::string(12, ' ') + "✔ Contact added successfully!", SUC);
	printWithColor(std::string(52, '-') + "\n", INF);
}

std::string	cutNames(std::string name)
{
	if (name.length() > 10)
		return (name.substr(0, 9) + ".");
	return (name);
}

void	PhoneBook::searchContact()
{
	if (contactCount == 0) {
		printWithColor("\n📭 PhoneBook is empty. Add contacts first.", WRN);
		return;
	}
	printWithColor("\n" + std::string(20, ' ') + "🔍 SEARCH CONTACTS", INF);
	printWithColor(std::string(52, '-'), INF);
	   std::cout << INF
				<< " ┌──────────┬──────────┬──────────┬──────────┐\n"
				<< " │   INDEX  │FIRST NAME│ LAST NAME│ NICKNAME │\n"
				<< " ├──────────┼──────────┼──────────┼──────────┤\n";
		for ( int i = 0; i < contactCount; i++){
			std::cout << " │" << std::setw(10) << std::right << i + 1 << "│"
			<< std::setw(10) << cutNames(contact[i].getFirstName()) << "│"
			<< std::setw(10) << cutNames(contact[i].getLastName()) << "│"
			<< std::setw(10) << cutNames(contact[i].getNickName()) << "│\n";
		};
		std::cout << " └──────────┴──────────┴──────────┴──────────┘\n" << RST;
	displayOneContact();
}




