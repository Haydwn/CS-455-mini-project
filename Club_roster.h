#ifndef CLUB_ROSTER_H
#define CLUB_ROSTER_H


#include "Officer.h"
#include "Event.h"
#include "Member.h"

#include <iostream>
#include <vector>
using namespace std;

namespace club
{
	class Club_roster
	{
	private:
		string club_name;
		string club_description;
		vector<Officer> officer_list;
		vector<Member> member_list;
		vector<Event> event_list;
	public:
		Club_roster(string club_name,string club_description);
		bool insert_member(Member member);
		bool remove_member(string email);
		bool insert_officer(Officer officer);
		bool remove_officer(string email);
		bool insert_event(Event event);
		bool remove_event(string name,Date start);
		void display_roster() const;
	};

};

#endif