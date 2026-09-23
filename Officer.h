#ifndef OFFICER_H
#define OFFICER_H

#include "Officer_role.h"
#include "Date.h"
#include "Member.h"

#include <string>
using namespace std;

namespace club
{
	class Officer : public Member
	{
	private:
		enum OFFICER_ROLE role;
		Date expiration;
	public:
		Officer(string first,string last,string email,Date joined,
									enum OFFICER_ROLE role,Date expiration);
		enum OFFICER_ROLE get_role() const;
		Date get_expiration() const;
	};
}

#endif