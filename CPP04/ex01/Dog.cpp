/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 01:17:56 by cocheong          #+#    #+#             */
/*   Updated: 2023/11/20 01:17:56 by cocheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" )
{
    std::cout << this->_type << " constructor called" << std::endl;
    try {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
    }
}

Dog::~Dog( void )
{
    delete  this->_brain;
    std::cout << this->_type << " destructor called" << std::endl;
}

void    Dog::makeSound( void ) const
{
    std::cout << "Woof!" << std::endl;
}

Dog::Dog( const Dog& src ) : Animal ("Dog")
{
    *this = src;
}

Dog& Dog::operator=( const Dog& src )
{
    std::cout << "<Dog.cpp:32> Dog copy called." << std::endl;
    if (this != &src)
    {
        this->_type = src._type;
        this->_brain = new Brain( *src._brain );
    }
    return *this;
}