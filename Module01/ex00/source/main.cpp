/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 19:42:53 by brturcio          #+#    #+#             */
/*   Updated: 2025/12/12 23:23:19 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;
	Zombie	*twoZombie;

	randomChump("stackyZombie");
	zombie = newZombie("heapyZombie");
	twoZombie = newZombie("heapyZZZZZ");
	delete twoZombie;
	twoZombie = newZombie("heapyMMMMM");
	randomChump("stackyRRRR");
	randomChump("stackySSSS");
	delete zombie;
	delete twoZombie;
	return (0);
}
