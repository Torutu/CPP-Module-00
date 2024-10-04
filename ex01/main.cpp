#include <iostream>
#include <limits>
#include "PhoneBook.hpp"

void addContact(PhoneBook& phonebook) {
	Contact contact;
	std::string input;

	std::cout << "Enter first name: ";
	std::getline(std::cin, input);
	contact.setFirstName(input);

	std::cout << "Enter last name: ";
	std::getline(std::cin, input);
	contact.setLastName(input);

	std::cout << "Enter nickname: ";
	std::getline(std::cin, input);
	contact.setNickname(input);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, input);
	contact.setPhoneNumber(input);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, input);
	contact.setDarkestSecret(input);

	phonebook.addContact(contact);
}

/**
 * The main function that drives the logic of the phone book application.
 * It continuously prompts the user to enter a command, handles input processing,
 * and executes the corresponding functionality: adding a contact, searching for
 * a contact, or exiting the application.
 *
 * The valid commands are:
 *   - "ADD": Prompts the user to add a new contact to the phonebook.
 *   - "SEARCH": Finds the contact
 *   - "EXIT": Terminates the application.
 *
 * Input handling includes:
 *   - String input with std::getline to capture user commands.
 *   - Conversion of string input to an integer for selecting a contact by index, with proper error handling
 *     for invalid input (e.g., non-numeric or out-of-range values).
 *   - Ensures robust input validation to prevent crashes or undefined behavior.
 *
 * @return 0 upon successful completion of the application.
 *
 * @throws None
 */

int main() {
	PhoneBook phonebook;
	std::string command;

	while (true) {
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);

		if (command == "ADD") {
			addContact(phonebook);
		} else if (command == "SEARCH") {
			phonebook.displayContacts();
			std::string input;
			std::cout << "Enter the index of the contact to view details: ";
			
			// Use std::getline to detect when Enter is pressed
			std::getline(std::cin, input);

			if (input.empty()) {
				// Handle empty input (Enter pressed)
				std::cout << "Invalid input. Please enter a valid number." << std::endl;
				continue; // Retry the loop
			}

			try {
				// Try to convert the input to an integer
				int index = std::stoi(input);
				phonebook.displayContactDetails(index);
			} catch (const std::invalid_argument&) {
				// Handle invalid input that can't be converted to an integer
				std::cout << "Invalid input. Please enter a valid number." << std::endl;
			} catch (const std::out_of_range&) {
				// Handle input that is out of integer range
				std::cout << "Input number is out of range." << std::endl;
			}

		} else if (command == "EXIT") {
			break;
		} else {
			std::cout << "Unknown command." << std::endl;
		}
	}
	return 0;
}