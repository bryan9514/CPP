/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 13:35:29 by brturcio          #+#    #+#             */
/*   Updated: 2025/12/13 15:45:39 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	_name = "";
}

Zombie::~Zombie()
{
	std::cout << INF << _index + 1 << ". " << "⚰️ Zombie "
			<< _name << " died 💀" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << INF << _index + 1 << ". " << _name << RST
		<< ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(int n, std::string name)
{
	_name = name;
	_index = n;

	std::cout << INF << _index + 1 << ". 🧟 Zombie "
			<< _name << " is born...🧟" << std::endl;
	
}
