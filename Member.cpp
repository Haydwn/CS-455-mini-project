#include "Member.h"

using namespace club;

Member::Member(std::string first, std::string last, std::string email,
	Date joined):Joined(joined)
{
	First_name=first;
	Last_name=last;
	Email=email;
}

std::string Member::get_name() const
{
	return First_name + " " + Last_name;
}

std::string Member::get_first() const
{
	return First_name;
}

std::string Member::get_last() const
{
	return Last_name;
}

std::string Member::get_email() const
{
	return Email;
}

Date Member::get_joined() const
{
	return Joined;
}
