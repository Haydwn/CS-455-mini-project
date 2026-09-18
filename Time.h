#ifndef TIME_H
#define TIME_H

#include <iostream>
using namespace std;

namespace club
{
	class Time
	{
	private:
		unsigned short hour;
	public:
		unsigned short minute;

		Time(unsigned short hour,unsigned short minute,char am_pm);
		ostream& operator<<(ostream& os, const club::Time& menu_item);
	};
}

#endif