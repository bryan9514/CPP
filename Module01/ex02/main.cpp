/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 16:09:42 by brturcio          #+#    #+#             */
/*   Updated: 2025/12/13 17:02:26 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

# define RST "\033[0m"
# define YEL "\033[0;93m"
# define GRE "\033[0;92m"
# define CYA "\033[0;96m"

int	main(void)
{
	std::string		string;
	std::string		*ptrString;

	string = "HI THIS IS BRAIN";
	ptrString = &string;
	std::string		&refString = string;

	std::cout << CYA << "\n";
	std::cout << "=====================================" << std::endl;
	std::cout << "               ADDRESS               " << std::endl;
	std::cout << "=====================================" << std::endl;
	std::cout << "1. Address String    : " << &string << std::endl;
	std::cout << "2. Address ptrString : " << &ptrString << std::endl;
	std::cout << "3. Address refString : " << &refString << std::endl << RST;

	std::cout << GRE << "\n";
	std::cout << "=====================================" << std::endl;
	std::cout << "               STRING                " << std::endl;
	std::cout << "=====================================" << std::endl;
	std::cout << "1. Value String    : " << string << std::endl;
	std::cout << "2. Value ptrString : " << *ptrString << std::endl;
	std::cout << "3. Value refString : " << refString << std::endl << RST;
	return (0);
}
