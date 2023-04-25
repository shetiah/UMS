#include "Student.h"

Student::Student()
{
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
