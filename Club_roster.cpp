#include "Club_roster.h"
using namespace club;
using namespace std;


Club_roster::Club_roster(string clab_name,string club_description)
{
	this->club_name = clab_name;
	this->club_description = club_description;
}
bool Club_roster::insert_member(Member member)
{
	member_list.push_back(member);
	return true;
}

bool Club_roster::remove_member(string email)
{
	return member_list.erase(member_list, email);
}
bool Club_roster::insert_officer(Officer officer)
{
	officer_list.push_back(officer);
	return true;
}
bool Club_roster::remove_officer(string email)
{
	return officer_list.erase(officer_list, email);
}
bool Club_roster::insert_event(Event event)
{
	event_list.push_back(event);
	return true;
}
bool Club_roster::remove_event(string name,Date start)
{
	return event_list.erase(event_list.begin(), name, start);
}
void Club_roster::display_roster() const
{
	cout << "Club_roster: " << endl;
	for(auto it = officer_list.begin(); it != officer_list.end(); it++)
	{
		cout << *it << endl;
	}
	for(auto it = member_list.begin(); it != member_list.end(); it++)
	{
		cout << *it << endl;
	}
}