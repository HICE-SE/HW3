#include "Member.h"
#include "MemberContainer.h"
#include "RecruitmentContainer.h"
#include "Register.h"
#include "Unregister.h"
#include "Login.h"
#include "Logout.h"
#include "RegisterRecruitment.h"
#include "CheckRecruitment.h"
#include "SearchRecruitment.h"
#include "ApplyRecruitment.h"
#include "ShowRecruitmentApplicationList.h"
#include "CancelRecruitmentApplication.h"
#include "ShowRecruitmentApplicationStatInfo.h"

class RecruitmentInfoSystem
{
public:
	void run() {
		int menu, opt;

		while (true) {
			cin >> menu >> opt;

			switch (menu) {
			case 1:
				if (opt == 1) {
					Register registerController(&memberContainer);
					registerController.run();
				}
				if (opt == 2) {
					Unregister unregisterController(loggedInMember, &memberContainer);
					unregisterController.run();
				}
				break;
			case 2:
				if (opt == 1) {
					Login loginController = Login(this, &memberContainer);
					loginController.run();
				}
				if (opt == 2) {
					Logout logoutController = Logout(this);
					logoutController.run();
				}
				break;
			case 3:
				if (opt == 1) {
					RegisterRecruitment registerRecruitmentController =
						RegisterRecruitment(loggedInMember, &recruitmentContainer);
					registerRecruitmentController.run();
				}
				if (opt == 2) {
					CheckRecruitment checkRecruitmentController = CheckRecruitment(loggedInMember);
					checkRecruitmentController.run();
				}
				break;
			case 4:
				if (opt == 1) {
					SearchRecruitment searchRecruitmentController = SearchRecruitment(&recruitmentContainer);
					searchRecruitmentController.run();
				}
				if (opt == 2) {
					ApplyRecruitment applyRecruitmentController =
						ApplyRecruitment(loggedInMember, &recruitmentContainer);
					applyRecruitmentController.run();
				}
				if (opt == 3) {
					ShowRecruitmentApplicationList showRecruitmentApplicationListController =
						ShowRecruitmentApplicationList(loggedInMember);
					showRecruitmentApplicationListController.run();
				}
				if (opt == 4) {
					CancelRecruitmentApplication cancelRecruitmentApplicationController =
						CancelRecruitmentApplication(loggedInMember);
					cancelRecruitmentApplicationController.run();
				}
				break;
			case 5:
				if (opt == 1) {
					ShowRecruitmentApplicationStatInfo showRecruitmentApplicationStatInfoController =
						ShowRecruitmentApplicationStatInfo(loggedInMember);
					showRecruitmentApplicationStatInfoController.run();
				}
				break;
			case 6:
				if (opt == 1) {
					return;
				}
			}
		}
	}


	void setLoggedInMember(Member* pMember) {
		loggedInMember = pMember;
	}

	void logout() {
		loggedInMember = nullptr;
	}

private:
	Member* loggedInMember;
	MemberContainer memberContainer;
	RecruitmentContainer recruitmentContainer;
};