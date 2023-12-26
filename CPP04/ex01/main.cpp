/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 01:20:17 by cocheong          #+#    #+#             */
/*   Updated: 2023/11/20 01:20:17 by cocheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongCat.hpp"

int main( void )
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    // std::cout << "--------------- Animal ---------------" << std::endl;

    // const Animal* meta = new Animal();
    // std::cout << "J Type: " << j->getType() << " " << std::endl;
    // j->makeSound();
    // std::cout << "I Type: " << i->getType() << " " << std::endl;
    // i->makeSound();
    // meta->makeSound();

    delete j;
    delete i;


    // std::cout << std::endl << "------------- Wrong Animal -------------" << std::endl;

    // const WrongAnimal *wrong = new WrongAnimal();
    // const WrongAnimal *wrongCat = new WrongCat();

    // std::cout << "Wrong Type: " << wrong->getType() << " " << std::endl;
    // std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
    // wrong->makeSound();
    // wrongCat->makeSound();

    // delete  wrong;
    // delete  wrongCat;

    Dog basic;
    {
        Dog tmp = basic;
    }

    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
        // std::cout << (i + 1) << std::endl;
    }

    return 0;
}