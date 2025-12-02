/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:31:02 by brturcio          #+#    #+#             */
/*   Updated: 2025/12/02 21:22:27 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>
# include <iostream>
# include <sstream>
# include <string>

# define MAXCONT 3

/* ========== RESET ========== */
# define RST "\033[0m"

/* ========== NORMAL COLORS ========== */
# define RED "\033[0;31m"
# define GRE "\033[0;32m"
# define YEL "\033[0;33m"
# define BLU "\033[0;34m"
# define MAG "\033[0;35m"
# define CYA "\033[0;36m"
# define WHT "\033[0;37m"
# define BLK "\033[0;30m"

/* ========== BRIGHT COLORS ========== */
# define HBLK "\033[0;90m"
# define HRED "\033[0;91m"
# define HGRN "\033[0;92m"
# define HYEL "\033[0;93m"
# define HBLU "\033[0;94m"
# define HMAG "\033[0;95m"
# define HCYA "\033[0;96m"
# define HWHT "\033[0;97m"

/* ============ STILES ===============*/
#define ERR "\033[0;91m"    // Error (rojo)
#define WRN "\033[0;93m"    // Warning (amarillo)
#define SUC "\033[0;92m"    // Success (verde)
#define INF "\033[0;96m"    // Info (cian)
#define INP "\033[0;94m"    // Input (azul)
#define HIL "\033[0;95m"    // Highlight (magenta)

#define NEWLINE true
#define NO_NEWLINE false
#define RESET true
#define NO_RESET false

/* ========== FUNCTION DECLARATIONS ========== */
void	printWithColor(const std::string &msg, const std::string &color,
						bool newline = true, bool reset = true);

/* ========== CLASS DECLARATIONS ========== */
class PhoneBook
{
	private:
		Contact	contact[MAXCONT];
		int		contactCount;
		int		index;
		int		oldIndex;

		std::string	getInput(const std::string &prompt);

		public:
		PhoneBook();
		void		addContact();
		void		searchContact();
};


#endif
