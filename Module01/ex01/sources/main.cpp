/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 00:54:36 by brturcio          #+#    #+#             */
/*   Updated: 2025/12/13 15:45:57 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cctype>
#include <cstdlib>

int	main(void)
{
	int		num;
	Zombie	*zombies;

	num = 20;	
	zombies = zombieHorde(num, "heapyZombies");
	for (int i = 0; i < num; i++){
		zombies[i].announce();
	}
	delete [] zombies;
	return (0);
}
