#include "RecruitmentContainer.h"

class SearchRecruitment
{
public:
	SearchRecruitment(RecruitmentContainer* recruitmentContainer) : recruitmentContainer(recruitmentContainer) {}
	void run();
private:
	RecruitmentContainer* recruitmentContainer;
};

