/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:08:37 by jorgutie          #+#    #+#             */
/*   Updated: 2025/04/26 20:58:42 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// Constructor and initialization list (for private member variables)
PhoneBook::PhoneBook() : current_index(0), contact_count(0) {}

// To ADD a contact to the phonebook
void PhoneBook::add_contact()
{
    contacts[current_index].set_contact(); // Set a new contact at current index
    current_index = (current_index + 1) % 8; // Move to next index (circular: 0-7)
    
    if (contact_count < 8)
        contact_count++; // Increase count until reach 8
}

// To display the summary of the phonebok
void PhoneBook::search_contact() const
{
    // Check if its empty
    if(contact_count == 0)
    {
        std::cout << RED << "Phonebook is empty. Please add some contacts." << RESET << std::endl;
        return;
    }  
    
    // Prints the heads of the table
    std::cout << BLUE << "_____________________________________________" << RESET << std::endl;
    std::cout << BLUE << "|     Index|First Name| Last Name|  Nickname|" << RESET << std::endl;
    std::cout << BLUE << "|__________|__________|__________|__________|" << RESET << std::endl;

    // Prints each one of the contacts summary
    for(int i = 0; i < contact_count; i++)
    {
        contacts[i].get_contact_summary(i);
    }
    
    // Select the index of the contact to see complete info
    std::cout << std::endl;
    std::cout << "Enter the index of the contact you want to view: ";
    std::string input;
    std::getline(std::cin, input);

    // Validate input
    if ((input.length() != 1) || !std::isdigit(input[0]))
    {
        std::cout << RED << "Invalid index. Please enter a valid number." << RESET <<  std::endl;
        return;
    } 

    // Convert char '0' -> int 0
    int index  = input[0] - '0';
    
    // Check if the conatct with that index exists
    if (index < 0 || index >= contact_count)
    {
        std::cout << RED << "Invalid index. No contact at this position." << RESET << std::endl;
        return;
    }

    // If everything is validated -> print details
    std::cout << std::endl;
    contacts[index].get_contact_details();
}
