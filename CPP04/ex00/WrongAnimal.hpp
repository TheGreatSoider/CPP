/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 23:18:22 by cocheong          #+#    #+#             */
/*   Updated: 2023/11/17 23:18:22 by cocheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string _type;

public:
    WrongAnimal( void );
    WrongAnimal( std::string type );
    virtual ~WrongAnimal( void );

    WrongAnimal( const WrongAnimal& src );
    WrongAnimal& operator=( const WrongAnimal& rhs );

    virtual void            makeSound( void ) const;
    std::string     getType( void ) const; 
};

#endif 