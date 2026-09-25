//Henry A. worked on this.

#ifndef SCREEN_H
#define SCREEN_H

#include "Menu.h"

#include <string>
#include <vector>
#include <utility>

namespace textui
{
	class Screen
	{
	private:
		Menu Menu;
	public:
		Screen(std::string screen_title, 
			std::vector<std::pair<char, std::string>> menu_options);
		void show();
		char get_choice();
	};

}

#endif