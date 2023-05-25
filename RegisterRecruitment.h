#include "Member.h"

class RecruitmentInfoSystem;

class RegisterRecruitment
{
public:
	RegisterRecruitment(Member* loggedInMember, RecruitmentContainer* recruitmentContainer)
		: loggedInMember(loggedInMember), recruitmentContainer(recruitmentContainer) {}

	void run() {
		RegisterRecruitmentUI registerRecruitmentUI(this);
		registerRecruitmentUI.startInterface();
	}
	
	void createRecruitment(std::string jobTitle, int capacity, std::string deadline) {
		Recruitment newRecruitment((BusinessMember*)loggedInMember, jobTitle, capacity, deadline);
		((BusinessMember*)loggedInMember)->addRecruitment(&newRecruitment);
		recruitmentContainer->addRecruitment(&newRecruitment);
	}


private:
	Member* loggedInMember;
	RecruitmentContainer* recruitmentContainer;
};

class RegisterRecruitmentUI {
public:
	RegisterRecruitmentUI(RegisterRecruitment* controller)
		: registerRecruitmentController(controller) {}

	void startInterface() {
		int capacity;
		std::string jobTitle, deadline;

		cout << "3.1. 채용 정보 등록\n";
		cin >> jobTitle >> capacity >> deadline;

		registerRecruitmentController->createRecruitment(jobTitle, capacity, deadline);

		cout << jobTitle << ' ' << capacity << ' ' << deadline << '\n';
	}


private:
	RegisterRecruitment* registerRecruitmentController;
};
