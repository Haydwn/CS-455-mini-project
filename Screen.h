//Henry A. worked on this.

#ifndef SCREEN_H
#define SCREEN_H

#include "Menu.h"

#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;


namespace textui
{
	class Screen
	{
	private:
		Menu Menu;
	public:
		Screen(std::string screen_title, 
			vector<std::pair<char, std::string>> menu_options);
		void show();
		char get_choice();
	};

}

#endif