#include "MainMenu.h"
#include "Header.h"


int main() {
	bool isRunning = MainMenu::init();
	while (isRunning)
		isRunning = MainMenu::start();

	return 0;
}
