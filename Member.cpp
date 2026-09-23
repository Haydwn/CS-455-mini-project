#include "Member.h"
using namespace club;

Member::Member(string first,string last,string email,Date joined):Joined(joined)
{
	First_name=first;
	Last_name=last;
	Email=email;
}
string Member::get_name() const
{
	return First_name + " " + Last_name;
}
string Member::get_first() const
{
	return First_name;
}
string Member::get_last() const
{
	return Last_name;
}
string Member::get_email() const
{
	return Email;
}
Date Member::get_joined() const
{
	return Joined;
}
