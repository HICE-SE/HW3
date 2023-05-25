#include "Member.h"

class CheckRecruitment
{
public:
	CheckRecruitment(Member* loggedInMember) : loggedInMember(loggedInMember) {}
	void run();
private:
	Member* loggedInMember;
};

