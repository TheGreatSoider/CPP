/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 01:21:53 by cocheong          #+#    #+#             */
/*   Updated: 2023/11/20 01:21:53 by cocheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
protected:
    std::string _type;

public:
    AAnimal( void );
    AAnimal( std::string type );

    virtual ~AAnimal( void );

    AAnimal( const AAnimal& src );
    AAnimal& operator=( const AAnimal& rhs );

    virtual void    makeSound( void ) const = 0;
    std::string     getType( void ) const; 
};

#endif