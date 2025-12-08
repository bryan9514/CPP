/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:31:02 by brturcio          #+#    #+#             */
/*   Updated: 2025/12/06 20:21:40 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iomanip>
#include <iostream>
#include <string>
#include <cstdlib>
#include "Contact.hpp"

# define MAXCONT 8

/* ========== RESET ========== */
# define RST "\033[0m"

/* ============ STILES ===============*/
# define ERR "\033[0;91m" // Error (red)
# define WRN "\033[0;93m" // Warning (yellow)
# define SUC "\033[0;92m" // Success (green)
# define INF "\033[0;96m" // Info (cian)
# define INP "\033[0;94m" // Input (blue)
# define HIL "\033[0;95m" // Highlight (magenta)

# define NEWLINE true
# define NO_NEWLINE false
# define RESET true
# define NO_RESET false

/* ========== FUNCTION DECLARATIONS ========== */
void		printWithColor(const std::string &msg, const std::string &color,
                    bool newline = true, bool reset = true);
std::string	cutNames(std::string name);

/* ========== CLASS DECLARATIONS ========== */
class PhoneBook 
{
	private:
		Contact		contact[MAXCONT];
		int			contactCount;
		int			index;
		int			oldIndex;
		int			checkInput(std::string &input);
		void		displayOneContact();
		void		printContactDetails(int indexInput);
		std::string	getInput(const std::string &prompt);	
	
	public:
		PhoneBook();
		void		addContact();
		void		searchContact();
};

#endif

