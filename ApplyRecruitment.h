#include "Member.h"
#include "RecruitmentContainer.h"

class ApplyRecruitment
{
public:
	ApplyRecruitment(Member* loggedInMember, RecruitmentContainer* recruitmentContainer)
		: loggedInMember(loggedInMember), recruitmentContainer(recruitmentContainer) {}
	void run();

private:
	Member* loggedInMember;
	RecruitmentContainer* recruitmentContainer;
};

