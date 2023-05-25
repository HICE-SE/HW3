#include "MemberContainer.h"

class RecruitmentInfoSystem;

class Login
{
public:
	Login(RecruitmentInfoSystem* recruitmentInfoSystem, MemberContainer* memberContainer) :
		recruitmentInfoSystem(recruitmentInfoSystem), memberContainer(memberContainer) {}
	
	void run() {
		LoginUI loginUI(this);
		loginUI.startInterface();
	}

	void findAndSetLoggedInMember(std::string userInputId, std::string userInputPassword) {
		vector<Member*> members = memberContainer->listMembers();

		for (Member* m : members) {
			string storedId = m->getId();
			string storedPassword = m->getPassword();
			
			if (userInputId.compare(storedId) == 0 && userInputPassword.compare(storedPassword) == 0) {
				recruitmentInfoSystem->setLoggedInMember(m);
				break;
			}
		}
	}


private:
	RecruitmentInfoSystem* recruitmentInfoSystem;
	MemberContainer* memberContainer;
};

class LoginUI {
public:
	LoginUI(Login* loginController) : loginController(loginController) {}

	void startInterface() {
		std::string userInputId, userInputPassword;

		cout << "2.1. ·Î±×ÀÎ\n";
		cin >> userInputId >> userInputPassword;

		loginController->findAndSetLoggedInMember(userInputId, userInputPassword);
	}

private:
	Login* loginController;
};