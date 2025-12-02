/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:31:19 by brturcio          #+#    #+#             */
/*   Updated: 2025/12/02 20:23:50 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;

		public:
		Contact();
		void	addFirstName(std::string fname);
		void	addLastName(std::string lname);
		void	addNickName(std::string nname);
		void	addPhoneNumber(std::string phone);
		void	addDarkestSecret(std::string secret);

		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getPhoneNumber();
		std::string	getDarkestSecret();
};

#endif
