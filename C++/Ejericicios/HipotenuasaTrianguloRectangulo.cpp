/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HipotenuasaTrianguloRectangulo.cpp                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:28:53 by brturcio          #+#    #+#             */
/*   Updated: 2025/11/27 11:51:01 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

int	main(void)
{
	float	_catetoA, _catetoB;
	double	hipotenusa;

	std::cout << "Cateto A :"; std::cin >> _catetoA;
	std::cout << "Cateto B :"; std::cin >> _catetoB;

	std::cout.precision(4);
	hipotenusa = sqrt(pow(_catetoA, 2) + pow(_catetoB, 2));
	std::cout << "Resultado : " << hipotenusa << std::endl;
	return (0);
}
