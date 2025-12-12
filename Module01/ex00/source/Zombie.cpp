/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 19:44:31 by brturcio          #+#    #+#             */
/*   Updated: 2025/12/12 23:25:17 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string name) {
	_name = name;

	std::cout << "\n" << std::string(10, ' ') << "🧟 Breaking news: "
		<< WRN << _name << RST << " has been created...🧟" << std::endl; 
}

void	Zombie::announce(void) {
	std::cout << std::string(18, ' ') << WRN << _name << RST
		<< ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << std::string(20, ' ') << WRN << _name << RST
		<< " destroyed...⚰️ 💀" << std::endl;
}

//valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./Zombiey

