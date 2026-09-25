#ifndef DATE_H
#define DATE_H

#include <iostream>

namespace club
{
	class Date
	{
	private:
		unsigned short year;
		unsigned short month;
		unsigned short day;
	public:
		Date(unsigned short year, unsigned short month, unsigned short day);
		friend std::ostream& operator<<
			(std::ostream& os, const Date& menu_item);
	};
}

#endif