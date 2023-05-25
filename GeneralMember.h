#include <string>
#include "Member.h"

class GeneralMember : public Member
{
public:
	GeneralMember(int type, std::string name, std::string number, std::string id, std::string password)
		: Member(type, name, number, id, password) {}

private:


};
