/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:04:10 by jorgutie          #+#    #+#             */
/*   Updated: 2025/04/26 19:28:02 by jorgutie         ###   ########.fr       */
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
	std::cout << "Welcome to My Awsome Phonebook!" << std::endl;

	// The main Loop program
	while (true)
	{
		// Display the prompt to choose
		std::cout << "Please enter a command (ADD, SEARCH or EXIT): ";

		// Get the command from the user input
		std::getline(std::cin, command);
		
		// Check the command:
		if (command == "ADD")
			phonebook.add_contact();
		
		else if (command == "SEARCH")
			phonebook.search_contact();
		
		else if (command == "EXIT")
		{
			std::cout << "Good bye!." << std::endl;
			break;
		}

		else // If no valid command received
		{
			std::cout << "Unknown command. Please try again" << std::endl;
		}
	}
	return (0);
}