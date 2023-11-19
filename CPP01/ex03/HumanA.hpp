/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:32:20 by cocheong          #+#    #+#             */
/*   Updated: 2023/11/14 16:32:20 by cocheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon&     _weapon;
    HumanA();

public:
    HumanA( std::string name, Weapon& weapon );
    ~HumanA();

    void    attack( void ) const;
};