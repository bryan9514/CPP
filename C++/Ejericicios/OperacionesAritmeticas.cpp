/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OperacionesAritmeticas.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 09:45:23 by brturcio          #+#    #+#             */
/*   Updated: 2025/11/27 09:51:16 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	int	num1;
	int	num2;

	std::cout << "Digite el primero numero : " << std::endl;
	std::cin >> num1;
	std::cout << "Digite el segundo numero : " << std::endl;
	std::cin >> num2;

	std::cout << "Suma es :" << num1 + num2 << std::endl;
	std::cout << "Resta es :" << num1 - num2 << std::endl;
	std::cout << "Multiplicacion es :" << num1 * num2 << std::endl;
	std::cout << "division es :" << num1 / num2 << std::endl;

	return (0);
}
