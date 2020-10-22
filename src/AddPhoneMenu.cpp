#include "AddPhoneMenu.h"

std::vector<std::string> AddPhoneMenu::inputNames = { "name", "last name", "phone" };

bool AddPhoneMenu::start() {
	if (_DEBUG)
		std::cout << "AddPhoneMenu::start" << std::endl;

	AddPhoneMenu::printMenu();
	return true;
}

void AddPhoneMenu::printMenu() {
	if (_DEBUG)
		std::cout << "AddPhoneMenu::printMenu" << std::endl;
}
