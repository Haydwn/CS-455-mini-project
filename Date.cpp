#include "Date.h"
namespace club{

Date::Date(unsigned short year,unsigned short month,unsigned short day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}

ostream& operator<<(ostream& os, const Date& menu_item)
{
	os << menu_item.month << "/" << menu_item.day << "/" << menu_item.year;
	return os;
}
}