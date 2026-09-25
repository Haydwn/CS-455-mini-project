#ifndef OFFICER_H
#define OFFICER_H

#include "Officer_role.h"
#include "Member.h"

namespace club
{
	class Officer : public Member
	{
	private:
		enum OFFICER_ROLE role;
		Date expiration;
	public:
		Officer(std::string first, std::string last, std::string email,
			Date joined, enum OFFICER_ROLE role,Date expiration);
		enum OFFICER_ROLE get_role() const;
		Date get_expiration() const;
	};
}

#endif