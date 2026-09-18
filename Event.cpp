#include "Event.h"
using namespace club;

Event::Event(string name,string description,Datetime start,Datetime end,
										string location): start(), end()
{
	this->name = name;
	this->description = description;
	this->start = start;
	this->end = end;
	this->location = location;
}

string Event::get_name() const
{

}
string Event::get_description() const
{

}
Datetime Event::get_start() const
{

}
Datetime Event::get_end() const
{

}
string Event::get_location() const
{

}