/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 13:30:16 by brturcio          #+#    #+#             */
/*   Updated: 2025/11/29 13:43:04 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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
	phone = phone;
}

void	Contact::addDarkestSecret(std::string secrect) {
	darkestSecret = secrect;
}

std::string	
