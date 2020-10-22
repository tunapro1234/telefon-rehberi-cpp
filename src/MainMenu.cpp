#include "MainMenu.h"
#include "Header.h"

std::vector<std::string> MainMenu::menuNames = { "deneme" };

void MainMenu::init() {
	std::cout << "MainMenu::init" << std::endl;
	MainMenu::renameMenus();
}

bool MainMenu::start() {
	std::cout << "MainMenu::start" << std::endl;
	MainMenu::printMenu();

	int a;
	std::cin >> a;

	return MainMenu::redirectInput(a);
}

bool MainMenu::redirectInput(const int& inp) {
	std::cout << "MainMenu::redirectInputs::" << inp << std::endl;
	return (inp == 0 ? false : true);
}

void MainMenu::renameMenus() {
	std::cout << "MainMenu::renameMenus" << std::endl;
}

void MainMenu::printMenu() {
	std::cout << "MainMenu::printMenu" << std::endl;
}
