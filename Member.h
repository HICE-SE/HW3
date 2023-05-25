#include <string>

class Member
{
public:
	Member(int type, std::string name, std::string number, std::string id, std::string password) {
		this->type = type;
		this->name = name;
		this->number = number;
		this->id = id;
		this->password = password;
	}
	int getType();
	std::string getNumber();
	std::string getId();
	std::string getPassword();
	std::string getName();

private:
	int type;
	std::string name;
	std::string number;
	std::string id;
	std::string password;
};

int Member::getType() {
	return type;
}

std::string Member::getName() {
	return name;
}

std::string Member::getNumber() {
	return number;
}

std::string Member::getId() {
	return id;
}

std::string Member::getPassword() {
	return password;
}