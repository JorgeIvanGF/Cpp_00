/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 17:37:49 by jorgutie          #+#    #+#             */
/*   Updated: 2025/04/26 17:05:51 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

// The PhoneBook Class
class PhoneBook
{
	private:
		Contact contacts[8]; // Array to store up to 8 contacts
		int current_index;    // Where to save the next contact
    	int contact_count;    // How many contacts phonebook has
	
	public:
		PhoneBook(); // Constructor
		void add_contact(); // Adds contact
		void search_contact() const; // Displays contacts
};

#endif