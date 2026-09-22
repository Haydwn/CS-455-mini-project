#include "Event.h"
using namespace club;

Event::Event(string name,string description,Datetime start,Datetime end,
										string location): start(start), end(end)
{
	this->name = name;
	this->description = description;
	this->location = location;
}

string Event::get_name() const
{
	return name;
}
string Event::get_description() const
{
	return description;
}
Datetime Event::get_start() const
{
	return start;
}
Datetime Event::get_end() const
{
	return end;
}
string Event::get_location() const
{
	return location;
}