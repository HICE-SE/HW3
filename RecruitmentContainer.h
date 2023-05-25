#include <vector>
#include "Recruitment.h"

class RecruitmentContainer
{
public:
	RecruitmentContainer();

	void addRecruitment(Recruitment* recruitment) {
		recruitmentsList.push_back(recruitment);
	}

	std::vector<Recruitment*> listRecruitments() {
		return recruitmentsList;
	}

	Recruitment* findByBusinessNumber(std::string buisnessNumber) {
		for (Recruitment* recruitment : recruitmentsList) {
			std::string foundBusinessNumber = recruitment->getBusinessMember()->getNumber();
			if (buisnessNumber.compare(foundBusinessNumber) == 0) {
				return recruitment;
			}
		}
	}

private:
	std::vector<Recruitment*> recruitmentsList;
};

RecruitmentContainer::RecruitmentContainer() {};
