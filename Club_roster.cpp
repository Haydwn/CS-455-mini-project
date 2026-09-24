#include "Club_roster.h"
using namespace club;
using namespace std;

Club_roster::Club_roster(string club_name,string club_description)
{
	this->club_name = club_name;
	this->club_description = club_description;
}

bool Club_roster::insert_member(Member member)
{
	member_list.push_back(member);
	return true;
}

// searched for the email that matched then erased by iterator
bool Club_roster::remove_member(string email)
{
	for (auto it = member_list.begin(); it != member_list.end(); it++) {
		if (it->get_email() == email) {
			member_list.erase(it);
			return true;
		}
	}
	return false;
}

bool Club_roster::insert_officer(Officer officer)
{
	officer_list.push_back(officer);
	return true;
}

// searched for the email that matched then erased by iterator
bool Club_roster::remove_officer(string email)
{
	for (auto it = officer_list.begin(); it != officer_list.end(); it++) {
		if (it->get_email() == email) {
			officer_list.erase(it);
			return true;
		}
	}
	return false;
}

bool Club_roster::insert_event(Event event)
{
	event_list.push_back(event);
	return true;
}

// need a way to compare start 
// Changed to Datetime but it is Date in UML
bool Club_roster::remove_event(string name)
{
	for (auto it = event_list.begin(); it != event_list.end(); it++) {
		if (it->get_name() == name) {
			event_list.erase(it);
			return true;
		}
	}
	return false;
}

// we didn't have an operator<< written for member and officer
// so i called .get_name() and .get_email() 
// i also used the range based for loop to loop over the vector
void Club_roster::display_roster() const
{
	cout << "Club_roster: " << endl;
	for(const auto& it : officer_list)
	{
		cout << it.get_name() << " " << it.get_email() << endl;
	}
	for(const auto& it : member_list)
	{
		cout << it.get_name() << " " << it.get_email() << endl;
	}
}