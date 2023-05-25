#include "Member.h"
class ShowRecruitmentApplicationStatInfo
{
public:
	ShowRecruitmentApplicationStatInfo(Member* loggedInMember) : loggedInMember(loggedInMember) {}
	void run();
private:
	Member* loggedInMember;
};

