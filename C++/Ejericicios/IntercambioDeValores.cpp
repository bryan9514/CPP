/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IntercambioDeValores.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:14:00 by brturcio          #+#    #+#             */
/*   Updated: 2025/11/27 10:17:40 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	int	a, y, aux;

	std::cout << "Digite valor de x :"; std::cin >> a;
	std::cout << "Digite valor de y :"; std::cin >> y;
	aux = a;
	a = y;
	y = aux;
	std::cout << "Digite valor de x :" << a << std::endl;
	std::cout << "Digite valor de y :" << y << std::endl;
	return (0);
}
