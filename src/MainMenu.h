#pragma once

#include "Header.h"


class MainMenu {
public:
	static std::string name;
	static std::vector<std::string> menuNames;
	static bool start();
	static bool init();

private:
	MainMenu() {}
	static bool redirectInput(const int&);
	static void printMenu();
};

