#include "Login.h"
#include "StudentPageForm.h"
 
 void UMS::Login::studentLogin(Student^ stud)
 {
	 if (UMS::Login::validateStudentData(stud))
	 {
		 UMS::Login::loggedIn = true;

		 UMS::StudentPageForm::loggedOut = false;

	 }
	 else
	 {
		 m = gcnew messagebox;
		 m->ShowDialog();
	 }
 }

 bool UMS::Login::validateStudentData(Student^ stud)
{
	bool valid = false;
	for (int i = 0; i < Student::allStudents->Count; i++)
	{
		if (
			stud->getEmail()==Student::allStudents[i]->getEmail() &&
			stud->getPassword()== Student::allStudents[i]->getPassword()
			)
		{
			valid = true;
		}
	}
	if (valid)
		return true;
	else
		return false;
}
