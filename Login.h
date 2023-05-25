#include "MemberContainer.h"

class RecruitmentInfoSystem;

class Login
{
public:
	Login(RecruitmentInfoSystem* recruitmentInfoSystem, MemberContainer* memberContainer) :
		recruitmentInfoSystem(recruitmentInfoSystem), memberContainer(memberContainer) {}
	void run();
private:
	RecruitmentInfoSystem* recruitmentInfoSystem;
	MemberContainer* memberContainer;
};

