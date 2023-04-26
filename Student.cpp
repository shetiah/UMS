#include "Student.h"

 inline Student::Student()
{
	this->ID = 0;
	this->AcademicYear = 0;
	this->MaxHoursAllowed = 0;
	this->GPA = 0;
	this->Name = "";
	this->Email = "";
	this->Password = "";
	this->FinishedCourses = nullptr;
	this->CoursesInProgress = nullptr;
}

Student::Student(int ID, int AcademicYear, int MaxHoursAllowed, float GPA, String^ Name, String^ Email, String^ Password, List<String^>^ FinishedCourses, List<String^>^ CoursesInProgress)
{
	this->ID = ID;
	this->AcademicYear = AcademicYear;
	this->MaxHoursAllowed = MaxHoursAllowed;
	this->GPA = GPA;
	this->Name = Name;
	this->Email = Email;
	this->Password = Password;
	this->FinishedCourses = FinishedCourses;
	this->CoursesInProgress = CoursesInProgress;
}

void Student::setName(String^ Name)
{
	this->Name = Name;
}

void Student::setAcademicYear(int AcademicYear)
{
	this->AcademicYear = AcademicYear;
}

void Student::setEmail(String^ Email)
{
	this->Email = Email;
}

void Student::setPassword(String^ Password)
{
	this->Password = Password;
}

void Student::setID(int ID)
{
	this->ID = ID;
}

void Student::setCoursesINProgress(List<String^>^ CoursesInProgress)
{
	this->CoursesInProgress = CoursesInProgress;
}

void Student::setFinishedCourses(List<String^>^ FinishedCourses)
{
	this->FinishedCourses = FinishedCourses;
}

void Student::setMaxHoursAllowed(int MaxHoursAllowed)
{
	this->MaxHoursAllowed = MaxHoursAllowed;
}

void Student::setGPA(float GPA)
{
	this->GPA = GPA;
}

String^ Student::getName()
{
	return Name;
}

int Student::getAcademicYear()
{
	return AcademicYear;
}

String^ Student::getEmail()
{
	return Email;
}

String^ Student::getPassword()
{
	return Password;
}

int Student::getID()
{
	return ID;
}

List<String^>^ Student::getCoursesINProgress()
{
	return CoursesInProgress;
}

List<String^>^ Student::getFinishedCourses()
{
	return FinishedCourses;
}

int Student::getMaxHoursAllowed()
{
	return MaxHoursAllowed;
}

float Student::getGPA()
{
	return GPA;
}

List<String^>^ Student::CoursesAV()
{
	
	List<String^>^ AvCourses = gcnew List<String^>();

	//to-do:
	// 
	//1-check his FinishedCourses and compare it with Course::preRequires 
	//
	//2-after validation put it in AvCourses
	//

	//reminder: -he could have no av courses or no finished courses
	//- the list carries only the name of the courses as string systemtype
	return AvCourses;
}

void Student::viewCoursesAV()
{   
	//to-do:
	// 
	//1-uses Student::CoursesAV to know the list
	//2-view it
	 
	
	
}

bool Student::validateIfCourseCanBeTaken(Course^ course)
{
	//to-do:
	// 
	//check Student::CoursesAV() for the required course
	return true;
}

void Student::registerForCourse(Course^ course)
{
	//to-do :
	//1-use Student::validateIfCourseCanBeTaken 
	//2- handle if it's false
	//3-if true then put it in CoursesInProgress 
}




