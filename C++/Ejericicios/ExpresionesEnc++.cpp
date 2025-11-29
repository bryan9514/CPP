/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ExpresionesEnc++.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:01:55 by brturcio          #+#    #+#             */
/*   Updated: 2025/11/27 10:12:10 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	int a, b, c, d;
	std::cout << "a : "; std::cin >> a;
	std::cout << "b : "; std::cin >> b;
	std::cout << "c : "; std::cin >> c;
	std::cout << "d : "; std::cin >> d;

	std::cout <<"Resultado : " << (a + b) / (c + d) << std::endl;
}
