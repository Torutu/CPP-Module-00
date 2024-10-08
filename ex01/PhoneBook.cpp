#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip> // For formatting

PhoneBook::PhoneBook() : currentIndex(0), totalContacts(0) {}

void PhoneBook::addContact(const Contact& contact) {
    contacts[currentIndex] = contact;
    currentIndex = (currentIndex + 1) % MAX_CONTACTS;
    if (totalContacts < MAX_CONTACTS) {
        totalContacts++;
    }
}

void PhoneBook::displayContacts() const {
    std::cout << std::setw(10) << "Index" << "|" 
              << std::setw(10) << "First Name" << "|" 
              << std::setw(10) << "Last Name" << "|" 
              << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < totalContacts; i++) {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << (contacts[i].getFirstName().length() > 10 ? contacts[i].getFirstName().substr(0, 9) + "." : contacts[i].getFirstName()) << "|"
                  << std::setw(10) << (contacts[i].getLastName().length() > 10 ? contacts[i].getLastName().substr(0, 9) + "." : contacts[i].getLastName()) << "|"
                  << std::setw(10) << (contacts[i].getNickname().length() > 10 ? contacts[i].getNickname().substr(0, 9) + "." : contacts[i].getNickname()) << std::endl;
    }
}

void PhoneBook::displayContactDetails(int index) const {
    if (index < 0 || index >= totalContacts) {
        std::cout << "Invalid index!" << std::endl;
        return;
    }
    const Contact& contact = contacts[index];
    std::cout << "First Name: " << contact.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "Nickname: " << contact.getNickname() << std::endl;
    std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}
