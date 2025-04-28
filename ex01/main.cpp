/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:04:10 by jorgutie          #+#    #+#             */
/*   Updated: 2025/04/28 20:42:33 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"


// The Main of the project
int main()
{
	// Creation of the phonebook type Phonebook Object
	PhoneBook phonebook;

	// Definition of the command.
	std::string command;

	// Print welcome message
	std::cout << std::endl;
	std::cout << MAGENTA << "______WELCOME TO MY AWSOME PHONEBOOK!!______" << RESET << std::endl;

	// The main Loop program
	while (true)
	{
		
		// Display the prompt to choose
		std::cout << std::endl;
		std::cout << YELLOW <<"Please enter a command (ADD, SEARCH or EXIT): " << RESET;

		// Get the command from the user input
		std::getline(std::cin, command);
		
		// Check the command:
		if (command == "ADD")
			phonebook.add_contact();
		
		else if (command == "SEARCH")
			phonebook.search_contact();
		
		else if (command == "EXIT")
		{
			std::cout << MAGENTA << "\n________Phonebook Closed. Good bye!!________" << RESET << std::endl;
			break;
		}

		else // If no valid command received
		{
			std::cout << RED << "Unknown command. Please try again" << RESET << std::endl;
		}
	}
	return (0);
}