#include <string>
#include "Member.h"
#include "RecruitmentApplication.h"
class GeneralMember : public Member
{
public:
	GeneralMember(int type, std::string name, std::string number, std::string id, std::string password)
		: Member(type, name, number, id, password) {}

	RecruitmentApplication* addNewRecruitmentApplication(Recruitment* newRecruitment) {
		std::string companyName = newRecruitment->getBusinessMember()->getName();
		std::string jobTitle = newRecruitment->getJobTitle();
		int capacity = newRecruitment->getCapacity();
		std::string deadline = newRecruitment->getDeadline();

		RecruitmentApplication newApplication(companyName, jobTitle, capacity, deadline, newRecruitment);

		recruitmentApplicationsList.push_back(&newApplication);

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
