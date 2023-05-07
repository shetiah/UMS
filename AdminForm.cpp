#include "AdminForm.h"
bool UMS::AdminForm::validatAdmintData(Admin^ admin)
{
	for each (auto i in Admin::allAdmins) {
		if (admin->getNameAdmin() == i->getNameAdmin() && admin->getPasswordAdmin() == i->getPasswordAdmin())
			return true;
	}
	return false;
}

void UMS::AdminForm::adminLogin(Admin^ admin)
{/*
	validatAdmintData(admin)*/
	if (true)
	{
		welcomeForm::toadmLogin = false;
		welcomeForm::toadminHome = true;
	}
	else
	{
		m = gcnew messagebox;
		m->ShowDialog();
	}
}


