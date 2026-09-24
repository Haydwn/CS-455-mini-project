#include "Officer.h"

using namespace club;

Officer::Officer(string first,string last,string email,Date joined,
									enum OFFICER_ROLE role,Date expiration)
	: Member(first,last,email,joined), role(role), expiration(expiration)
{}

enum OFFICER_ROLE Officer::get_role() const
{
	return role;
}
Date Officer::get_expiration() const
{
	return expiration;
}