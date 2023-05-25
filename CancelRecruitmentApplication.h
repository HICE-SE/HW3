#include "Member.h"

class CancelRecruitmentApplication
{
public:
	CancelRecruitmentApplication(Member* loggedInMember) : loggedInMember(loggedInMember) {}
	void run();
private:
	Member* loggedInMember;
};

