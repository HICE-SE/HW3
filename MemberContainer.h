#include <vector>
#include "Member.h"
#include "GeneralMember.h"
#include "BusinessMember.h"

class MemberContainer
{
public:
	void addMember(int type, std::string name, std::string number, std::string id, std::string password) {
		if (type == 1) {
			GeneralMember newMember(type, name, number, id, password);
			memberList.push_back((Member*) &newMember);
		}
		else {
			BusinessMember newMember(type, name, number, id, password);
			memberList.push_back((Member*)&newMember);
		}

	}

private:
	std::vector<Member*> memberList;
};