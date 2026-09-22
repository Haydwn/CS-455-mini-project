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
		char am_pm;

		Time(unsigned short hour,unsigned short minute,char am_pm);

		ostream& operator<<(ostream& os, const Time& menu_item);

		friend ostream& operator<<(ostream& os, const Time& menu_item);
	};
}

#endif