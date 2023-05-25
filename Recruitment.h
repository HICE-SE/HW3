#include <string>

class Recruitment
{
public:
	Recruitment(BusinessMember* businessMember, std::string jobTitle, int capacity, std::string deadline)
		: businessMember(businessMember), jobTitle(jobTitle), capacity(capacity), deadline(deadline), applyCnt(0) {}

	std::string getJobTitle() {
		return jobTitle;
	}

	int getCapacity() {
		return capacity;
	}

	std::string getDeadline() {
		return deadline;
	}

	BusinessMember* getBusinessMember() {
		return businessMember;
	}

	void addApplyCnt() {
		applyCnt++;
	}

private:
	std::string jobTitle;
	int capacity;
	std::string deadline;
	BusinessMember* businessMember;
	int applyCnt;
};

