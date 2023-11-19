/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 23:23:08 by cocheong          #+#    #+#             */
/*   Updated: 2023/11/17 23:23:08 by cocheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

WrongCat::~WrongCat( void )
{
    std::cout << this->_type << " destructor called" << std::endl;
}

void    WrongCat::makeSound( void ) const
{
    std::cout << "Meow!" << std::endl;
}