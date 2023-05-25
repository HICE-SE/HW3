#include "Member.h"

class RecruitmentInfoSystem;

class RegisterRecruitment
{
public:
	RegisterRecruitment(Member* loggedInMember, RecruitmentContainer* recruitmentContainer)
		: loggedInMember(loggedInMember), recruitmentContainer(recruitmentContainer) {}
	void run();
private:
	Member* loggedInMember;
	RecruitmentContainer* recruitmentContainer;
};

