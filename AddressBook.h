#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include "Person.h"

class AddressBook {
	std::vector<Person> entries;

public:
	void printAll();
	std::vector<Person> search(std::string keyword);
	void addContact();
	void removeContact(Person p);
	void editContact(Person p);
	void exportToFile();
};
