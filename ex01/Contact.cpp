/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:38:40 by jorgutie          #+#    #+#             */
/*   Updated: 2025/04/25 21:12:02 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip> // for std::setw()

// Helper function for giving format to each field
// (cut longs and right-align)
static std::string set_format(const std::string &field) 
{
	if (field.length() > 10)
		return field.substr(0, 9) + "."; // 9 chars + '.'
	return field;
}

// To display the contacts summary in a "tabled" way. 
void Contact::get_contact_summary(int index)const
{
	std::cout << "|" << std::setw(10) << index << "|"
			  << std::setw(10) << set_format(first_name) << "|"
			  << std::setw(10) << set_format(last_name) << "|"
			  << std::setw(10) << set_format(nickname) << "|"
			  << std::endl;
}


void Contact::get_contact_details()const
{
	std::cout << "First Name:      " << first_name << std::endl;
	std::cout << "Last Name:       " << last_name << std::endl;
	std::cout << "Nickname:        " << nickname << std::endl;
	std::cout << "Phone Number:    " << phone_number << std::endl;
	std::cout << "Darkest Secret:  " << darkest_secret << std::endl;
}

