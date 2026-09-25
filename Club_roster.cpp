#include "Club_roster.h"

using namespace club;

Club_roster::Club_roster(std::string club_name, std::string club_description)
{
	this->club_name = club_name;
	this->club_description = club_description;
}

bool Club_roster::insert_member(Member member)
{
	member_list.push_back(member);
	return true;
}

bool Club_roster::remove_member(std::string email)
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

bool Club_roster::remove_officer(std::string email)
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

bool Club_roster::remove_event(std::string name)
{
	for (auto it = event_list.begin(); it != event_list.end(); it++) {
		if (it->get_name() == name) {
			event_list.erase(it);
			return true;
		}
	}
	return false;
}

void Club_roster::display_roster() const
{
	std::cout << "Club_roster: " << std::endl;
	for (const auto& it : officer_list) {
		std::cout << it.get_name() << " " << it.get_email() << std::endl;
	}
	for (const auto& it : member_list) {
		std::cout << it.get_name() << " " << it.get_email() << std::endl;
	}
}