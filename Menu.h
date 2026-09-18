#ifndef MENU_H
#define MENU_H

#include "Menu_item.h"
#include <vector>
#include <iterator>

namespace textui
{
	class Menu
	{
	private:
		string title;
		vector<Menu_item> item_list;
	public:
		using const_iterator = std::vector<Menu_item>::const_iterator;
		// this was taken from GeeksforGeeks

		void set_title(string title);
		string get_title() const;
		void add_item(char selector,string description);
		void add_item(Menu_item item);
		const_iterator begin() const;
		const_iterator end() const;
	};
}



#endif