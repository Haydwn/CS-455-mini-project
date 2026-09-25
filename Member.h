#ifndef MEMBER_H
#define MEMBER_H

#include "Date.h"

#include <string>

namespace club
{
	class Member
	{
	protected:
		std::string First_name;
		std::string Last_name;
		std::string Email;
		Date Joined;

	public:
		Member(std::string first, std::string last, std::string email,
			Date Joined);
		std::string get_name() const;
		std::string get_first() const;
		std::string get_last() const;
		std::string get_email() const;
		Date get_joined() const;
	};
}

#endif
