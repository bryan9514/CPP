/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 00:54:18 by brturcio          #+#    #+#             */
/*   Updated: 2025/12/13 15:09:30 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int n, std::string name)
{
	Zombie	*zombies = new Zombie[n];

	for (int i = 0; i < n; i++) {
		zombies[i].setName(i, name);
	}

	return (zombies);
}
