/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 01:24:12 by cocheong          #+#    #+#             */
/*   Updated: 2023/11/20 01:24:12 by cocheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : AAnimal("Cat") {
    std::cout << this->_type << " constructor called" << std::endl;
    try {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Memory Allocation has failed : " << e.what() << std::endl;
    }
}

Cat::~Cat( void )
{
    std::cout << this->_type << " destructor called" << std::endl;
    delete  this->_brain;
}

void    Cat::makeSound( void ) const
{
    std::cout << "Meow!" << std::endl;
}

Cat::Cat( const Cat& src ) : AAnimal ("Cat")
{
    *this = src;
}

Cat& Cat::operator=( const Cat& src )
{
    std::cout << "<Cat.cpp:32> Cat copy called." << std::endl;
    if (this != &src)
    {
        this->_type = src._type;
        this->_brain = new Brain( *src._brain );
    }
    return *this;
}

void   Cat::printBrain( void ) const{
    std::cout << this->_brain << std::endl;
}

