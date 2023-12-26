/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 01:23:48 by cocheong          #+#    #+#             */
/*   Updated: 2023/11/20 01:23:48 by cocheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
    // const AAnimal* j = new Dog();
    // const AAnimal* i = new Cat();
    const AAnimal* j[4] = { new Dog(), new Dog(), new Dog(), new Dog() };
    const AAnimal* i[4] = { new Cat(), new Cat(), new Cat(), new Cat() };


    // std::cout << "--------------- Animal ---------------" << std::endl;

    // const AAnimal* meta = new AAnimal();
    for ( int a = 0; a < 4; a++ ) {
        std::cout << (a + 1) << std::endl;
        std::cout << "J Type: " << j[a]->getType() << " " << std::endl;
        j[a]->makeSound();
        delete j[a];
    }

    for ( int a = 0; a < 4; a++ ) {
        std::cout << (a + 1) << std::endl;
        std::cout << "I Type: " << i[a]->getType() << " " << std::endl;
        i[a]->makeSound();
        delete i[a];
    }
    // meta->makeSound();

    // delete j;
    // delete i;


    // std::cout << std::endl << "------------- Wrong Animal -------------" << std::endl;

    // const WrongAnimal *wrong = new WrongAnimal();
    // const WrongAnimal *wrongCat = new WrongCat();

    // std::cout << "Wrong Type: " << wrong->getType() << " " << std::endl;
    // std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
    // wrong->makeSound();
    // wrongCat->makeSound();

    // delete  wrong;
    // delete  wrongCat;

    // Dog basic;
    // {
    //     Dog tmp = basic;
    // }

    // const AAnimal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    // for ( int i = 0; i < 4; i++ ) {
    //     std::cout << (i + 1) << std::endl;
    //     delete animals[i];
    // }

    return 0;
}