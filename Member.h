#ifndef MEMBER_H
#define MEMBER_H

#include "Officer.h"
#include "Date.h"
#include <string>
using namespace std;

namespace club
{
	class Member
	{
	protected:
		string First_name;
		string Last_name;
		string Email;
		Date Joined;

	public:
		Member(string first,string last,string email,Date joined);
		string get_name() const;
		string get_first() const;
		string get_last() const;
		string get_email() const;
		Date get_joined() const;
	};
}

#endif
