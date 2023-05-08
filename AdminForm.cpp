#include "AdminForm.h"
bool UMS::AdminForm::validatAdmintData(Admin^ admin)
{
	for each (auto i in Admin::allAdmins) {
		if (admin->getNameAdmin() == i->getNameAdmin() && admin->getPasswordAdmin() == i->getPasswordAdmin())
			return true;
	}
	return false;
}

bool UMS::AdminForm::adminLogin(Admin^ admin)
{
	
	if (validatAdmintData(admin))
	{
		welcomeForm::toadmLogin = false;
		welcomeForm::toadminHome = true;
		return true;
	}
	else
	{
		m = gcnew messagebox;
		m->ShowDialog();
		return false;
	}
}


