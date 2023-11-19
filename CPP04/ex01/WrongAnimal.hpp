/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 01:19:19 by cocheong          #+#    #+#             */
/*   Updated: 2023/11/20 01:19:19 by cocheong         ###   ########.fr       */
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
    ~WrongAnimal( void );

    WrongAnimal( const WrongAnimal& src );
    WrongAnimal& operator=( const WrongAnimal& rhs );

    void            makeSound( void ) const;
    std::string     getType( void ) const; 
};

#endif 