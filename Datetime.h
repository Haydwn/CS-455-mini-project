#ifndef DATETIME_H
#define DATETIME_H

#include "Date.h"
#include "Time.h"

namespace club
{
	class Datetime
	{
	private:
		Date date;
		Time time;
	public:
		Datetime(Date date, Time time);

		friend std::ostream& operator<<
			(std::ostream& os, const Datetime& menu_item);
	};
}

#endif