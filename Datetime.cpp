#include "Datetime.h"

namespace club{
Datetime::Datetime(Date date,Time time): date(date),time(time)
{}

ostream& operator<<(ostream& os, const club::Datetime& menu_item)
{
	os << menu_item.date << " " << menu_item.time;
	return os;
}
}