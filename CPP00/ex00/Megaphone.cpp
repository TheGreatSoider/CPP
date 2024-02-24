/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:42:42 by cocheong          #+#    #+#             */
/*   Updated: 2023/10/24 09:42:42 by cocheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av){
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else{
		for (int i = 1; av[i]; i++){
			for (int j = 0; av[i][j]; j++){
				std::cout << (char) toupper(av[i][j]);
				if (av[i][j] == ' ' && av[i][j + 1] == '\0')
					break;
				}
			if (i < ac - 1 && *av[i] == '\0')
				std::cout << ' ';
		}
	}
	std::cout << std::endl;
	return (0);
}