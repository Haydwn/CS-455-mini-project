#include "Menu.h"
using namespace textui;

void Menu::set_title(std::string title)
{
	this->title = title;
}

std::string Menu::get_title() const
{
	return title;
}

void Menu::add_item(char selector,std::string description)
{
	item_list.push_back(Menu_item(selector,description));
}

void Menu::add_item(Menu_item item)
{
	item_list.push_back(item);
}

// needs to call menu since "using" is in the menu class
Menu::const_iterator Menu::begin() const
{
	return item_list.begin();
}

Menu::const_iterator Menu::end() const
{
	return item_list.end();
}