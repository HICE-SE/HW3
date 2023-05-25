#include "Member.h"
#include <map>
#include <vector>
#include <string>
#include <utility>

class ShowRecruitmentApplicationStatInfo
{
public:
	ShowRecruitmentApplicationStatInfo(Member* loggedInMember) : loggedInMember(loggedInMember) {}
	void run() {
		ShowRecruitmentApplicationStatInfoUI showRecruitmentApplicationStatInfoUI;

		std::map<std::string, int> result;

		int type = loggedInMember->getType();
		
		if (type == 1) {
			std::vector<RecruitmentApplication*> recruitmentApplicationList = 
				((GeneralMember*)loggedInMember)->getRecruitmentApplicationsList();

			for (RecruitmentApplication* application : recruitmentApplicationList) {
				result[application->getJobTitle()]++;
			}
		}
		else {
			vector<Recruitment*> recruitmentsList = ((BusinessMember*)loggedInMember)->getRecruitmentsList();
			
			for (Recruitment* recruitment : recruitmentsList) {
				result[recruitment->getJobTitle()]++;
			}
		}

		showRecruitmentApplicationStatInfoUI.startInterface(result);
	}
private:
	Member* loggedInMember;
};

class ShowRecruitmentApplicationStatInfoUI {
public:
	ShowRecruitmentApplicationStatInfoUI() {}

	void startInterface(std::map<std::string, int> result) {
		for (auto item : result) {
			cout << "> " << item.first << ' ' << item.second << '\n';
		}
	}
};
