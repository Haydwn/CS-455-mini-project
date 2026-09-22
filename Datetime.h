#ifndef DATETIME_H
#define DATETIME_H

#include "Date.h"
#include "Time.h"
using namespace std;

namespace club
{
	class Datetime
	{
	private:
		Date date;
		Time time;
	public:
		Datetime(Date date,Time time);

		ostream &operator<<(ostream &os, const club::Datetime &menu_item);

		friend ostream& operator<<(ostream& os, const Datetime& menu_item);
	};
}

#endif