#pragma once

#include "Header.h"


class MainMenu {
public:
	static std::vector<std::string> menuNames;
	static bool start();
	static void init();

private:
	static bool redirectInput(const int&);
	static void renameMenus();
	static void printMenu();
};

