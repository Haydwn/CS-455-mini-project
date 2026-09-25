#ifndef EVENT_H
#define EVENT_H

#include "Datetime.h"

#include <string>

namespace club
{
	class Event
	{
	private:
		std::string name;
		std::string description;
		Datetime start;
		Datetime end;
		std::string location;
	public:
		Event(std::string name, std::string description, Datetime start,
			Datetime end, std::string location);
		std::string get_name() const;
		std::string get_description() const;
		Datetime get_start() const;
		Datetime get_end() const;
		std::string get_location() const;
	};
}

#endif