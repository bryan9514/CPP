/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookUtils.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 17:21:08 by brturcio          #+#    #+#             */
/*   Updated: 2025/12/06 20:58:27 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	cutNames(std::string name)
{
	if (name.length() > 10)
		return (name.substr(0, 9) + ".");
	return (name);
}

void	PhoneBook::printContactDetails(int indexInput) 
{
	Contact &c = contact[indexInput - 1];

	printWithColor("\n" + std::string(10, ' ') + "══════════ CONTACT DETAILS ══════════", INF);
	printWithColor(std::string(15, ' ') + "First Name:     " + c.getFirstName(), INF);
	printWithColor(std::string(15, ' ') + "Last Name:      " + c.getLastName(), INF);
	printWithColor(std::string(15, ' ') + "Nickname:       " + c.getNickName(), INF);
	printWithColor(std::string(15, ' ') + "Phone:          " + c.getPhoneNumber(), INF);
	printWithColor(std::string(15, ' ') + "Darkest Secret: " + c.getDarkestSecret(), INF);
	printWithColor(std::string(52, '-'), INF);
}

void	PhoneBook::displayOneContact() 
{
	int indexInput;
	std::string input;

	indexInput = -1;
	while (true) {
		printWithColor("\nEnter contact index to view details (1-", INF, false, false);
		std::cout << contactCount << " or 0 to cancel): " << RST;
		std::getline(std::cin, input);
		if (std::cin.eof()) {
			printWithColor("\nEOF detected. Exiting...", WRN);
			std::exit(0);
		}
		indexInput = checkInput(input);
		if (indexInput == 0) {
			printWithColor("\n" + std::string(10, ' ') + "Operation cancelled.", WRN);
			return;
		} 
		else if (indexInput == -1)
			printWithColor("\n" + std::string(18, ' ') + "❌ Invalid index.", ERR);
		else if (indexInput > 0)
			break;
	}
	printContactDetails(indexInput);
}

