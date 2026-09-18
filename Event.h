#ifndef EVENT_H
#define EVENT_H

#include "Datetime.h"
#include <iostream>
#include <string>
using namespace std;

namespace club
{
	class Event
	{
	private:
		string name;
		string description;
		Datetime start;
		Datetime end;
		string location;
	public:
		Event(string name,string description,Datetime start,Datetime end,
														string location);
		string get_name() const;
		string get_description() const;
		Datetime get_start() const;
		Datetime get_end() const;
		string get_location() const;
	};
}

#endif