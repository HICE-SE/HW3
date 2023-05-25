#include "MemberContainer.h"
#include <iostream>
#include <string>

using namespace std;
class Register {
public:
	Register(MemberContainer* memberContainer) : memberContainer(memberContainer) {};
	void addMember(int type, string name, string number, string id, string password) {
		memberContainer->addMember(type, name, number, id, password);
	}
	void run() {
		RegisterUI registerUI(this);
		registerUI.startInterface();
	}
private:
	MemberContainer* memberContainer;
};

class RegisterUI {
public:
	RegisterUI(Register* controller) : registerController(controller) {}
	void startInterface() {
		int type;
		string name, number, id, password;
		cout << "1.1. 회원가입";
		cin >> type >> name >> number >> id >> password;
		registerController->addMember(type, name, number, id, password);
		//> 1 hankook 3456 hk pwd1
		cout << type << ' ' << name << ' ' << number << ' ' << id << ' ' << password << '\n';
	}
private:
	Register* registerController;
};