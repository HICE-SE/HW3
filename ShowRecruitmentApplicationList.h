#include "Member.h"

class ShowRecruitmentApplicationList
{
public:
	ShowRecruitmentApplicationList(Member* loggedInMember) : loggedInMember(loggedInMember) {}
	void run();

private:
	Member* loggedInMember;
};

