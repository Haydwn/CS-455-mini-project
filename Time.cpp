#include "Time.h"


namespace club
{

Time::Time(unsigned short hour,unsigned short minute,char am_pm):
hour(hour),minute(minute),am_pm(am_pm)
{
}

ostream& operator<<(ostream& os, const Time& menu_item)
{
	os << menu_item.hour << ':' << menu_item.minute << ':' << menu_item.am_pm;
	return os;
}
}