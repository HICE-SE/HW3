#include "Member.h"
#include "MemberContainer.h"

class Unregister
{
public:
	Unregister(Member* pMember, MemberContainer* pMemberContainer)
		: loggedInMember(pMember), memberContainer(pMemberContainer) {}

	void run() {
		string deletedId = loggedInMember->getId();

		cout << "1.2. È¸¿øÅ»Åð\n";

		memberContainer->deleteMember(loggedInMember);

		cout << " >" << deletedId << '\n';
	}

private:
	Member* loggedInMember;
	MemberContainer* memberContainer;
};
