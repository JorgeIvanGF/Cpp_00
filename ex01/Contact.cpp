/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:38:40 by jorgutie          #+#    #+#             */
/*   Updated: 2025/04/28 20:40:10 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Helper for check only digits in phone number
static bool is_digit_only(const std::string &input) 
{
	for (size_t i = 0; i < input.length(); i++)
	{
		if(!std::isdigit(input[i]))
		{		
			return (false);
		}
	}
	return (true);
}

// Helper fn to READ user inputs
// The "&"  points to the same memory ADDRESS as the original object,
// it means, act like the Object itself
static std::string get_input(const std::string &prompt, const std::string &field)
{
	std::string input;
	
	while(1)
	{
		std::cout << prompt;
		std::getline(std::cin, input);

		// Check if its not Empty and looks for the first character in the string that is NOT a space/tab
		// if the entire string is only spaces or tabs, it returns std::string::npos (meaning "Not Found")
		if (!input.empty() && input.find_first_not_of(" \t") != std::string::npos)
		{
			if (field ==  "phone_number")
			{
				if(!is_digit_only(input))
				{
					std::cout << RED << "Phone number must contains only numbers. Try again." << RESET << std::endl;
					continue;
				}
			}
			return input; // a Valid input
		}
		else 
			std::cout << RED << "Field cannot be empty. Please try again." << RESET << std::endl;
	}
}

// For adding a contact to the phonebook.
void Contact::set_contact(void)
{
	first_name = get_input("Please provide the First name: ", "first_name");
	last_name = get_input("Please provide the Last Name: ", "last_name");
	nickname = get_input("Please provide the Nickname: ", "nickname");
	phone_number = get_input("Please provide the Phone number: ", "phone_number");
	darkest_secret = get_input("Please provide the Darkest secret: ", "darkest_secret");
	
}

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

// To print the complete information of the contact.
void Contact::get_contact_details()const
{
	std::cout << BLUE << "First Name:      " << RESET << first_name << std::endl;
	std::cout << BLUE << "Last Name:       " << RESET << last_name << std::endl;
	std::cout << BLUE << "Nickname:        " << RESET << nickname << std::endl;
	std::cout << BLUE << "Phone Number:    " << RESET << phone_number << std::endl;
	std::cout << BLUE << "Darkest Secret:  " << RESET << darkest_secret << std::endl;
}

