#include <string>

class RecruitmentApplication {
public:
	RecruitmentApplication(std::string companyName, std::string jobTitle, int capacity, std::string deadline, Recruitment* recruitment)
		: companyName(companyName), jobTitle(jobTitle), capacity(capacity), deadline(deadline), recruitment(recruitment) { }

	std::string getCompanyName() {
		return companyName;
	}

	std::string getCompanyName() {
		return companyName;
	}

	std::string getBusinessNumber() {
		return recruitment->getBusinessMember()->getNumber();
	}

	std::string getJobTitle() {
		return jobTitle;
	}

	int getCapacity() {
		return recruitment->getCapacity();
	}

	std::string getDeadline() {
		return recruitment->getDeadline();
	}

private:
	std::string companyName;
	std::string jobTitle;
	int capacity;
	std::string deadline;
	Recruitment* recruitment;
};