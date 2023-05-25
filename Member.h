#include <string>

class Member
{
public:
	Member();
	Member(int type, std::string name, std::string number, std::string id, std::string password);

private:
	int type;
	std::string name;
	std::string number;
	std::string id;
	std::string password;
};

Member::Member() {
	this->type = 0;
	name = number = id = password = "";
}

Member::Member(int type, std::string name, std::string number, std::string id, std::string password) {
	this->type = type;
	this->name = name;
	this->number = number;
	this->id = id;
	this->password = password;
}

