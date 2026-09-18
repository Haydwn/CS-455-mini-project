#include "Time.h"
using namespace club;

Time::Time(unsigned short hour,unsigned short minute,char am_pm)
{
	this->hour = hour;
	this->minute = minute;
}

ostream& operator<<(ostream& os, const club::Time& menu_item)
{

}