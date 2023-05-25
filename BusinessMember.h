#include <string>
#include "Member.h"

class BusinessMember : public Member
{
public:
	BusinessMember(int type, std::string name, std::string number, std::string id, std::string password)
		: Member(type, name, number, id, password) { };

	vector<Recruitment*> listRecruitment() {
		return recruitmentsList;
	}

	void addRecruitment(Recruitment* newRecruitment) {
		recruitmentsList.push_back(newRecruitment);
	}

	vector<Recruitment*> getRecruitmentsList() {
		return recruitmentsList;
	}

private:
	vector<Recruitment*> recruitmentsList;
};