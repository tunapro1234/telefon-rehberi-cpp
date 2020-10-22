#include "AddPhoneMenu.h"
#include "MainMenu.h"
#include "Header.h"

std::vector<std::string> MainMenu::menuNames = { "Add Phone", "Edit Phone", "List Phones", "Exit" };
std::string MainMenu::name = "TUNA";

bool MainMenu::init() {
	if (_DEBUG)
		std::cout << "MainMenu::init" << std::endl;

	// json dosyasi ve bir iki kontrol yapilabilir
	return true;
}

bool MainMenu::start() {
	if (_DEBUG)
		std::cout << "MainMenu::start" << std::endl;

	MainMenu::printMenu();

	int input = 0;
	while (!(input)) {
		std::cout << "Menu number: ";
		std::cin >> input;

		if (input > MainMenu::menuNames.size())
			input = 0;

		std::cin.clear();
		fflush(stdin);
	}

	return MainMenu::redirectInput(input - 1);
}

bool MainMenu::redirectInput(const int& input) {
	if (_DEBUG)
		std::cout << "MainMenu::redirectInputs::" << input << std::endl;

	// string compare kullanmak cok iyi degil biliyorum ama guzel duruyor
	if (MainMenu::menuNames[input].compare("Add Phone") == 0) {
		return AddPhoneMenu::start();
	}
	else if (MainMenu::menuNames[input].compare("Exit") == 0) {
		if (_DEBUG)
			std::cout << "exit" << std::endl;
		return false;
	}
	return true;
}

void MainMenu::printMenu() {
	if (_DEBUG)
		std::cout << "MainMenu::printMenu" << std::endl;

	int maxLen = 0;
	for (std::string menuName : MainMenu::menuNames)
		if (menuName.size() > maxLen)
			maxLen = menuName.size();

	// Son menun numarasini da ekledik
	maxLen += std::to_string(MainMenu::menuNames.size()).size() + 2;
	// +2 bosluk ve nokta icin

	std::string ender = "";
	std::string header = "";
	for (int i = 0; i < maxLen; i++)
		ender += "o";

	int offset = (int)(maxLen - (MainMenu::name.size() + 2)) / 2;
	while (header.size() < offset)
		header += "o";

	header += "|" + MainMenu::name + "|";
	while (header.size() < maxLen)
		header += "o";

	std::cout << header << std::endl;
	for (int i = 0; i < MainMenu::menuNames.size(); i++)
		std::cout << i + 1 << ". " << MainMenu::menuNames[i] << std::endl;
	std::cout << ender << std::endl;

}
