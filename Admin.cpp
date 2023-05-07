#include "Admin.h"
#include "Course.h"
#include <fstream>
using namespace System;
using namespace std;

//returns an automated student ID
 int getNextStudentID()
{
	ifstream file;
	file.open("nextStudentID.txt");
	int id;
	file >> id;
	file.close();
	return id;

}

//modifies the text file with the next available student ID
 void saveNextStudentID(int id) {
	ofstream file;
	file.open("nextStudentID.txt");
	file << id;
	file.close();
}

void Admin::editCourseData(Course^ c, String^ name,
	String^ code, String^ instructor,
	int maxNumberOfStudents, int hours) { // parameter list
	c->setName(name);
	c->setCode(code);
	c->setInstructor(instructor);
	c->setMaxNumberOfStudents(maxNumberOfStudents);
	c->setHours(hours);
}

void Admin::createStudent(String^ name, String^ password,int academicYear,int maxHoursAllowed,float GPA,List<String^>^finishedCourses, List<String^>^coursesInProgress, List<float>^ coursesGPA)
{
	Student^ s = gcnew Student();
	//getting the id from the file
	int id = getNextStudentID();
	//updating the id in the file with id+1
	saveNextStudentID(id + 1);
	
	//setting ID and email with the auto id from the text file
	String^ email = id + "@cis.com";
	s->setID(id);
	s->setEmail(email);
	s->setName(name);
	s->setPassword(password);
	s->setAcademicYear(academicYear);
	s->setMaxHoursAllowed(maxHoursAllowed);
	s->setGPA(GPA);
	s->setFinishedCourses(finishedCourses);
	s->setCoursesGPA(coursesGPA);
	s->setCoursesINProgress(coursesInProgress);

	//add the student to the list
	Student::allStudents->Add(s);
}
void Admin::addCourse(Course^ course)
{
	Course::allCourses->Add(course);
}
void Admin::addCourseGrade(Course^ course, String^ grade,Student^ student) {
Dictionary< Course^, String^ > ^temp= student->getEachCourseGrade();
temp->Add(course, grade);
student->setEachCourseGrade(temp);
}
void Admin::addCoursePreReq(Course^ course, List<String^>^ preList) {
	Course::preRequires->Add(course->getName(), preList);
}
void Admin::setNameAdmin(String^ name) {
	this->name = name;
}
void Admin::setPasswordAdmin(String^ password) {
	this->password = password;
}
String^ Admin::getNameAdmin() {
	return name;
}
String^ Admin::getPasswordAdmin() {
	return password;
}
