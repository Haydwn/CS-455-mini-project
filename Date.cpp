#include "Date.h"
using namespace club;

Date::Date(unsigned short year,unsigned short month,unsigned short day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}

ostream& operator<<(ostream& os, const Date& menu_item)
{

}