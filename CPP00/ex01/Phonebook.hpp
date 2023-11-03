/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:15:10 by cocheong          #+#    #+#             */
/*   Updated: 2023/11/01 17:15:10 by cocheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact _contact[8];
	int		_readInput(void) const;
public:
	PhoneBook();
	~PhoneBook();
	void	addContact(void);
	void	printContacts(void) const;
	void	search(void) const;
	void	welcome(void) const;
};

#endif