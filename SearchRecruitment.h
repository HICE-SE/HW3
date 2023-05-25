#include "RecruitmentContainer.h"

class SearchRecruitment
{
public:
	SearchRecruitment(RecruitmentContainer* recruitmentContainer) : recruitmentContainer(recruitmentContainer) {}
	
	void run() {
		SearchRecruitmentUI searchRecruitmentUI(this);
		searchRecruitmentUI.startInterface();
		searchRecruitmentUI.showResult(companyNameList, businessNumberList, capacityList, jobTitleList, deadlineList);
	}

	void searchRecruitmentInfo(std::string companyName) {
		vector<Recruitment*> recruitmentsList = recruitmentContainer->listRecruitments();

		for (Recruitment* recruitment : recruitmentsList) {
			BusinessMember* businessMember = recruitment->getBusinessMember();
			capacityList.push_back(recruitment->getCapacity());
			jobTitleList.push_back(recruitment->getJobTitle());
			deadlineList.push_back(recruitment->getDeadline());
			companyNameList.push_back(businessMember->getName());
			businessNumberList.push_back(businessMember->getNumber());
		}
	}

private:
	RecruitmentContainer* recruitmentContainer;
	vector<std::string> companyNameList;
	vector<std::string> businessNumberList;
	vector<int> capacityList;
	vector<std::string> jobTitleList;
	vector<std::string> deadlineList;
};

class SearchRecruitmentUI {
public:
	SearchRecruitmentUI(SearchRecruitment* controller) : searchRecruitmentController(controller) {}

	void startInterface() {
		std::string companyName;
		
		cout << "3.2. 등록된 채용 정보 조회\n";
		cin >> companyName;

		searchRecruitmentController->searchRecruitmentInfo(companyName);
	}

	void showResult(vector<std::string> companyNameList, vector<std::string> businessNumberList,
		vector<int> capacityList, vector<std::string> jobTitleList, vector<std::string> deadlineList) {
		
		for (int i = 0; i < capacityList.size(); i++) {
			cout << '> ' << companyNameList[i] << ' ' << businessNumberList[i] << ' ' << jobTitleList[i]
				<< ' ' << capacityList[i] << ' ' << deadlineList[i] << '\n';
		}
	}
private:
	SearchRecruitment* searchRecruitmentController;
};
