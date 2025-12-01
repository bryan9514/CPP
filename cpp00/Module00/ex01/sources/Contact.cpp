/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 13:30:16 by brturcio          #+#    #+#             */
/*   Updated: 2025/12/01 16:13:28 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//
void	Contact::addFirstName(std::string fname) {
	firstName = fname;
}

void	Contact::addLastName(std::string lname) {
	lastName = lname;
}

void	Contact::addNickName(std::string nname) {
	nickName = nname;
}

void	Contact::addPhoneNumber(std::string phone) {
	phoneNumber = phone;
}

void	Contact::addDarkestSecret(std::string secrect) {
	darkestSecret = secrect;
}


//Getters

std::string	Contact::getFirstName() {
	return (firstName);
}

std::string	Contact::getLastName() {
	return (lastName);
}

std::string	Contact::getNickName() {
	return (nickName);
}

std::string	Contact::getPhoneNumber() {
	return (phoneNumber);
}

std::string	Contact::getDarkestSecret() {
	return (darkestSecret);
}


