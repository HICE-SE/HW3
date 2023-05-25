#include "Member.h"

class CheckRecruitment
{
public:
	CheckRecruitment(Member* loggedInMember) : loggedInMember(loggedInMember) {}

	void run() {
		vector<Recruitment*> registeredRecruitments = ((BusinessMember*)loggedInMember)->listRecruitment();

		vector<std::string> jobTitleList;
		vector<int> capacityList;
		vector<std::string> deadlineList;

		for (Recruitment* r : registeredRecruitments) {
			jobTitleList.push_back(r->getJobTitle());
			capacityList.push_back(r->getCapacity());
			deadlineList.push_back(r->getDeadline());
		}


		CheckRecruitmentUI checkRecruitmentUI;
		checkRecruitmentUI.startInterface(jobTitleList, capacityList, deadlineList);
	}

private:
	Member* loggedInMember;

};

class CheckRecruitmentUI {
public:
	CheckRecruitmentUI() {}

	void startInterface(vector<std::string> jobTitleList, vector<int> capacityList, vector<std::string> deadlineList) {
		cout << "3.2. 등록된 채용 정보 조회\n";
		for (int i = 0; i < jobTitleList.size(); i++) {
			cout << jobTitleList[i] << ' ' << capacityList[i] << ' ' << deadlineList[i] << '\n';
		}
	}

private:
	vector<std::string> jobTitleList;
	vector<int> capacityList;
	vector<std::string> deadlineList;
};