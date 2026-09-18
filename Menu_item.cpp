#include "Menu_item.h"
using namespace textui;


Menu_item::Menu_item(char selector, string description)
{
	this->description = description;
	this->selector = selector;
}
ostream& operator<<(ostream& os, const Menu_item& menu_item)
{

}