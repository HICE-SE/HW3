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

	void deleteMember(Member* member) {
		string deleteMemberSSN = member->getNumber();

		for (int i = 0; i < memberList.size(); i++) {
			string storedMemberSSN = memberList[i]->getNumber();

			if (deleteMemberSSN.compare(storedMemberSSN) == 0) {
				memberList.erase(memberList.begin() + i);
			}
		}
	}

	std::vector<Member*> listMembers() {
		return memberList;
	}

private:
	std::vector<Member*> memberList;
};