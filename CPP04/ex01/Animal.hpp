/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:03:58 by cocheong          #+#    #+#             */
/*   Updated: 2023/12/09 22:03:58 by cocheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
    std::string _type;

public:
    Animal( void );
    Animal( std::string type );

    virtual ~Animal( void );

    Animal( const Animal& src );
    Animal& operator=( const Animal& rhs );

    virtual void    makeSound( void ) const;
    std::string     getType( void ) const; 
};

#endif