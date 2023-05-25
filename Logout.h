class RecruitmentInfoSystem;

class Logout
{
public:
	Logout(RecruitmentInfoSystem* recruitmentInfoSystem) : recruitmentInfoSystem(recruitmentInfoSystem) {}
	
	void run() {
		LogoutUI logoutUI(this);
		logoutUI.startInterface();
	}

	void logout() {
		recruitmentInfoSystem->logout();
	}

private:
	RecruitmentInfoSystem* recruitmentInfoSystem;
};

class LogoutUI {
public:
	LogoutUI(Logout* logoutController) : logoutController(logoutController) {}

	void startInterface() {
		cout << "2.2. �α׾ƿ�\n";
		logoutController->logout();
	}

private:
	Logout* logoutController;
};