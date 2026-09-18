//Henry A. worked on this.

#ifndef CLUB_APP_H
#define CLUB_APP_H

#include "Club_roster.h"
#include "Screen.h"
#include <string>
using namespace std;

namespace club
{
	class Club_app
	{
	private:
		//attributes
		textui::Screen text_ui;
		Club_roster club;

		//methods
		void execute();
		string get_string();
		enum OFFICER_ROLE get_position();
		void add_member();
		void delete_member();
		void add_officer();
		void delete_officer();
		void add_event();
		void delete_event();
		void display_club();

	public:
		Club_app();
		void run();
	};

};

#endif