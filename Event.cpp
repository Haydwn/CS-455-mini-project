#include "Event.h"

#include <iostream>

using namespace club;

Event::Event(std::string name, std::string description, Datetime start,
	Datetime end, std::string location): start(start), end(end)
{
	this->name = name;
	this->description = description;
	this->location = location;
}

std::string Event::get_name() const
{
	return name;
}

std::string Event::get_description() const
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

std::string Event::get_location() const
{
	return location;
}