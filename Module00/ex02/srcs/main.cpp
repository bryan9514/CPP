/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 15:21:19 by brturcio          #+#    #+#             */
/*   Updated: 2025/12/07 15:47:21 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstring>

using namespace std;

int	main(void)
{
	time_t timestamp = time(NULL);
struct tm datetime = *localtime(&timestamp);

char output[50];

strftime(output, 50, "[%Y%m%d_%H%M%S]", &datetime);
cout << output << "\n";

}

//[19920104_091532]
//ano-mes-dia-hora-minitos-segundos

