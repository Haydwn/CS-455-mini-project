#ifndef MENU_ITEM_H
#define MENU_ITEM_H

#include <iostream>
using namespace std;

namespace textui
{
	class Menu_item
	{
	private:
		char selector;
		string description;
	public:
		Menu_item(char selector, string description);
		friend ostream& operator<<(ostream& os, const Menu_item& menu_item);
	};
}


#endif