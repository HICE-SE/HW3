#include <string>
#include "Member.h"
#include "RecruitmentApplication.h"
class GeneralMember : public Member
{
public:
	GeneralMember(int type, std::string name, std::string number, std::string id, std::string password)
		: Member(type, name, number, id, password) {}

	RecruitmentApplication* addNewRecruitmentApplication(Recruitment* recruitment) {
		std::string companyName = recruitment->getBusinessMember()->getName();
		std::string jobTitle = recruitment->getJobTitle();
		int capacity = recruitment->getCapacity();
		std::string deadline = recruitment->getDeadline();

		RecruitmentApplication newApplication(companyName, jobTitle, capacity, deadline, recruitment);

		recruitmentApplicationsList.push_back(&newApplication);

		recruitment->addApplyCnt();

		return &newApplication;
	}

	vector<RecruitmentApplication*> getRecruitmentApplicationsList() {
		return recruitmentApplicationsList;
	}

	std::vector<std::string> cancelRecruitmentApplication(std::string businessNumber) {
		std::vector<std::string> result;

		for (RecruitmentApplication* application : recruitmentApplicationsList) {
			if (businessNumber.compare(application->getBusinessNumber()) == 0) {
				result.push_back(application->getCompanyName());
				result.push_back(application->getBusinessNumber());
				result.push_back(application->getJobTitle());
				break;
			}
		}

		return result;
	}

private:
	std::vector<RecruitmentApplication*> recruitmentApplicationsList;

};
