/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Swith.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:16:53 by brturcio          #+#    #+#             */
/*   Updated: 2025/11/27 15:29:29 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

int	main(void)
{
	int	num;

	std::cout << "Digite un numero : ";
	std::cin >> num;
	switch (num)
	{
	case 1:
		std::cout << "Es el numero 1" << std::endl;
		break ;
	case 2:
		std::cout << "Es el numero 2" << std::endl;
		break ;
	case 3:
		std::cout << "Es el numero 3" << std::endl;
		break ;
	case 4:
		std::cout << "Es el numero 4" << std::endl;
		break ;
	case 5:
		std::cout << "Es el numero 5" << std::endl;
		break ;
	default:
		std::cout << "No esta en el rango" << std::endl;
	}
	// ⭐ EQUIVALENTE A getch() EN LINUX ⭐
	std::cout << "Presiona Enter para continuar...";
	std::cin.ignore(); // Limpia el '\n' que quedó del std::cin >> num
	std::cin.get();    // Espera que presiones Enter (como getch())
	return (0);
}
