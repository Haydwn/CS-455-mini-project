#ifndef CLUB_ROSTER_H
#define CLUB_ROSTER_H

#include "Officer.h"
#include "Event.h"

#include <iostream>
#include <vector>

namespace club 
{
	class Club_roster
	{
	private:
		std::string club_name;
		std::string club_description;
		std::vector<Officer> officer_list;
		std::vector<Member> member_list;
		std::vector<Event> event_list;
	public:
		Club_roster(std::string club_name, std::string club_description);
		bool insert_member(Member member);
		bool remove_member(std::string email);
		bool insert_officer(Officer officer);
		bool remove_officer(std::string email);
		bool insert_event(Event event);
		bool remove_event(std::string name);
		void display_roster() const;
	};
}

#endif