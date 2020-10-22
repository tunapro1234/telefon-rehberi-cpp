#pragma once

#include "Header.h"

class AddPhoneMenu {
public:
	static std::vector<std::string> inputNames;
	static bool start();
private:
	AddPhoneMenu() {}
	static void printMenu();
};

