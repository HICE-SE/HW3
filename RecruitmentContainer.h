#include <vector>
#include "Recruitment.h"

class RecruitmentContainer
{
public:
	RecruitmentContainer();
	void add(Recruitment* recruitment);
	std::vector<Recruitment*> listRecruitments();

private:
	std::vector<Recruitment*> recruitmentsList;
};

RecruitmentContainer::RecruitmentContainer() {};

std::vector<Recruitment*> RecruitmentContainer::listRecruitments() {
	return recruitmentsList;
}

void RecruitmentContainer::add(Recruitment* recruitment) {
	recruitmentsList.push_back(recruitment);
}