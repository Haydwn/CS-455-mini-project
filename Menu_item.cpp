#include "Menu_item.h"

namespace textui{

Menu_item::Menu_item(char selector, string description):selector(selector), description(description)
{}

ostream& operator<<(ostream &os, const Menu_item &menu_item)
{
	os << menu_item.selector << " " << menu_item.description;
	return os;
}
}