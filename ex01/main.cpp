#include <iostream>
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
            std::cout << "Enter the index of the contact to view details: ";
            int index;
            std::cin >> index;
            std::cin.ignore(); // Ignore leftover newline character
            phonebook.displayContactDetails(index);
        } else if (command == "EXIT") {
            break;
        } else {
            std::cout << "Unknown command." << std::endl;
        }
    }
    return 0;
}
