#include "Member.h"
#include "MemberContainer.h"

class Unregister
{
public:
	Unregister(Member* pMember, MemberContainer* pMemberContainer) : loggedInMember(pMember), memberContainer(pMemberContainer) {}
	void run();
private:
	Member* loggedInMember;
	MemberContainer* memberContainer;
};
