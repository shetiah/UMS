#include "Login.h"
#include "StudentDataForm.h"

bool validateStudentData()
{
	//to-do (Osama)
	//1-open the file and search on the email and password 
	//2-validate if found or not
	//3-if found return true

	 return false;

}
bool validateData()
{
	return false;
}

void studentLogin()
{
	/*
	
	to-do : (osama)
	- handle if not found
	-if found launch StudentDataForm

	*/
	 UMS::Login::loggedIn = true;

	 UMS::StudentDataForm::loggedOut = false;
}
