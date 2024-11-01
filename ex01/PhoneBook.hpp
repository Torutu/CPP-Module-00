/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:43:09 by walnaimi          #+#    #+#             */
/*   Updated: 2024/10/31 15:50:13 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
public:
    PhoneBook();

    // Add a new contact to the phonebook
    void addContact(const Contact& contact);

    // Display all saved contacts
    void displayContacts() const;

    // Display a specific contact by index
    void displayContactDetails(int index) const;

private:
    static const int MAX_CONTACTS = 8;
    Contact contacts[MAX_CONTACTS]; // Array of 8 contacts
    int currentIndex;               // Index to track the oldest contact for replacement
    int totalContacts;              // Total number of contacts in the phonebook
};

#endif // PHONEBOOK_HPP
