#include "Login.h"
#include "StudentPageForm.h"
bool UMS::Login::validateStudentData(Student^ student)
{
	
	for each (auto i in Student::allStudents)
	{
		
		if(i->getEmail() == student->getEmail() && i->getPassword() == student->getPassword()){
			

			student = i;

			return true;
		}
	}
	return false;
}
 bool UMS::Login::studentLogin(Student^ stud)
 {
	 if (validateStudentData(stud))
	 {
		 welcomeForm::tostdHomeForm = true;
		 welcomeForm::tostdLogin = false;
		 welcomeForm::gobacktoWelc = false;
		 return true;
		 
	 }
	 else {
		 m = gcnew messagebox;
		 m->ShowDialog();
		 return false;
	 }
 }


