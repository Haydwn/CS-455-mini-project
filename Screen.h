//Henry A. worked on this.

#ifndef SCREEN_H
#define SCREEN_H

#include "Menu.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;


namespace textui
{
	class Screen
	{
	private:
		Menu Menu;
	public:
		Screen(string screen_title, vector<char, string> menu_options);
		void Show();
		char get_choice();
	};

}

#endif