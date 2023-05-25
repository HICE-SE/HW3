class RecruitmentInfoSystem;

class Logout
{
public:
	Logout(RecruitmentInfoSystem* recruitmentInfoSystem) : recruitmentInfoSystem(recruitmentInfoSystem) {}
	void run();
private:
	RecruitmentInfoSystem* recruitmentInfoSystem;
};

