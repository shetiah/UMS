#include "Login.h"
#include "StudentPageForm.h"
bool UMS::Login::validateStudentData(Student^ student)
{
	bool valid = false;
	for each (auto i in Student::allStudents)
	{
		String^ sysmail = i->getEmail();
		String^ syspassword = i->getPassword();
		
		if(sysmail == student->getEmail() && syspassword == student->getPassword()){
			valid = true;
		}
	}
	if (valid)
		return true;
	return false;
}
 void UMS::Login::studentLogin(Student^ stud)
 {
	 if (validateStudentData(stud))
	 {
		 welcomeForm::tostdHomeForm = true;
		 welcomeForm::tostdLogin = false;
		 welcomeForm::gobacktoWelc = false;

		 
	 }
	 else {
		 m = gcnew messagebox;
		 m->ShowDialog();
	 }
 }


