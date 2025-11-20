/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 09:01:21 by brturcio          #+#    #+#             */
/*   Updated: 2025/11/20 11:32:48 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>

// int	main(void)
// {
// 	// char	buff[512];

// 	std::cout << "Hello" << std::endl;

// }

// #include <iostream>

// int main(void)
// {
// 	char buff[512];

// 	std::cout << "Hello World!" << std::endl;
// 	std::cout << "Input a word: ";
// 	std::cin >> buff;
// 	std::cout << "You entered: [" << buff << "]" << std::endl;
// 	return 0;
// }
#include <iostream>
#include <string>

int main() {
    std::string str;

    std::cout << "Input a word: ";

    // En lugar de std::cin >> str; usa esto:
    std::getline(std::cin, str);

    std::cout << "You entered: [" << str << "]" << std::endl;
    return 0;
}
