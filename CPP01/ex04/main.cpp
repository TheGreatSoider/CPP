/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:35:36 by cocheong          #+#    #+#             */
/*   Updated: 2023/11/14 16:35:36 by cocheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedV2.hpp"

int main ( int ac, char **av )
{
    if (ac != 4) {
        std::cerr << "Usage: ./SedV2 <filename> <to_find> <replace>." << std::endl;
        return EXIT_FAILURE;
    } else {
        SedV2   sed2(av[1]);
        sed2.replace(av[2], av[3]);
    }
    return EXIT_SUCCESS;
}