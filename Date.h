#ifndef DATE_H
#define DATE_H
#include "Datetime.h"
#include <iostream>
using namespace std;

namespace club
{
	class Date
	{
	private:
		unsigned short year;
		unsigned short month;
		unsigned short day;
	public:
		Date(unsigned short year,unsigned short month,unsigned short day);
		friend ostream& operator<<(ostream& os, const Date& menu_item);
	};
}

#endif