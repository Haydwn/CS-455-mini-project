#include "Screen.h"

#include <iostream>
using namespace textui;

Screen::Screen(std::string screen_title, 
	std::vector<std::pair<char, std::string>> menu_options)
{
	Menu.set_title(screen_title);
	for (const auto& option : menu_options) {
		Menu.add_item(option.first, option.second);
	}
}

void Screen::show()
{
	for (const auto& option : Menu) {
		std::cout << option << std::endl;
	}
}

char Screen::get_choice()
{
	std::string input;
	std::cout << "pick an option: ";
	std::getline(std::cin, input);
	return input[0];
}