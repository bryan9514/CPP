/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 00:54:28 by brturcio          #+#    #+#             */
/*   Updated: 2025/12/13 15:13:05 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

/* ========== RESET ========== */
# define RST "\033[0m"

/* ============ STILES ===============*/
# define ERR "\033[0;91m" // Error (red)
# define WRN "\033[0;93m" // Warning (yellow)
# define SUC "\033[0;92m" // Success (green)
# define INF "\033[0;96m" // Info (cian)
# define INP "\033[0;94m" // Input (blue)
# define HIL "\033[0;95m" // Highlight (magenta)

class Zombie
{
	private:
		std::string	_name;
		int			_index;

	public:
		Zombie();
		~Zombie();

		void	announce();
		void	setName(int n, std::string name);
};

Zombie*	zombieHorde(int n, std::string name);

#endif
