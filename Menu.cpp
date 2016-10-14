#include "AddressBook.h"

void printMenu(AddressBook addressbook){
	std::cout << "What do you want to do with your address book?" << std::endl;
	std::cout << "0 - Display address book" << std::endl;
	std::cout << "1 - Add a contact" << std::endl;
	std::cout << "2 - Remove a contact" << std::endl;
	std::cout << "3 - Look for a specific contact" << std::endl;
	std::cout << "4 - Edit a contact" << std::endl;
	std::cout << "5 - Quit" << std::endl;
	int input;
	std::cin >> input;
	switch (input){
		case 0 :
			addressbook.printAll();
			break;
		case 1:
			addressbook.addContact();
			break;
		case 2:
			addressbook.removeContact();
			break;
		case 3:
			addressbook.search();
			break;
		case 4:
			addressbook.editContact(Person p);
			break;
		default:
			std::cout << "Oups! No fonction under that number" << std::endl;
			break;
	}

}