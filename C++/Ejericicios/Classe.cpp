/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classe.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:12:18 by brturcio          #+#    #+#             */
/*   Updated: 2025/11/28 13:26:04 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

class coche
{
	//Por defecto aqui es privada pero siempre hay que poner privada
	std::string	marca;
	std::string	modelo;
	int			año;

	public:
	//Metodo para mostrar informacion
	//este es un constructor
	coche(){
		marca = "Desconocido";
		modelo = "Desconocido";
		año = 2000;
	}
	// este es un otro constructor
	coche(std::string ClMarca, std::string ClModelo, int Claño){
		marca = ClMarca;
		modelo = ClModelo;
		año = Claño;
	}
	//Funcion para mosotrar informacion
	void	mostrarInfo() {
		std::cout << "Marca: " << marca << ", Modelo: " << modelo << ", Año: " << año << std::endl;
	}
};

int	main(void)
{
	coche	miCoche;
	coche	coche1("Toyota", "Corolla", 2022);

	miCoche.mostrarInfo();
	coche1.mostrarInfo();
	return (0);
}
