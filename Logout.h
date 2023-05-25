class RecruitmentInfoSystem;

class Logout
{
public:
	Logout(Member* loggedInMember, RecruitmentInfoSystem* recruitmentInfoSystem) 
		: loggedInMember(loggedInMember), recruitmentInfoSystem(recruitmentInfoSystem) {}
	
	void run() {
		std::string id = loggedInMember->getId();
		LogoutUI logoutUI(this);
		logoutUI.startInterface(id);
	}

	void logout() {
		recruitmentInfoSystem->logout();
	}

private:
	RecruitmentInfoSystem* recruitmentInfoSystem;
	Member* loggedInMember;
};

class LogoutUI {
public:
	LogoutUI(Logout* logoutController) : logoutController(logoutController) {}

	void startInterface(std::string id) {
		cout << "2.2. ·Î±×¾Æ¿ô\n";
		logoutController->logout();
		cout << '> ' << id << '\n';
	}

private:
	Logout* logoutController;
};