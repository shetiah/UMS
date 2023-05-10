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
void Admin::addCourse(Course^ newCourse)
{   //farah and maya
	String^ courseName = newCourse->getName();
	List<String^>^ prerequisites = Course::preRequires[courseName];

	// If the course already exists in the dictionary, do nothing
	if (Course::preRequires->ContainsKey(courseName))
	{
		return;
	}
	// Add the new course to the dictionary with an empty list of prerequisites
	Course::preRequires->Add(courseName, prerequisites);
	Course::allCourses->Add(newCourse);

}
void Admin::addCourseGrade(Course^ course, String^ grade,Student^ student) {
Dictionary< Course^, String^ > ^temp= student->getEachCourseGrade();
temp->Add(course, grade);
student->setEachCourseGrade(temp);
}
void Admin::addCoursePreReq(Course^ course, List<String^>^ preList) {
	Course::preRequires->Add(course->getName(), preList);
}

Admin::Admin(String^name,String^ password)
{
		this->name = name;
		this->password = password;	
}

Admin::Admin() {
	name = "";
	password = "";
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

//returns true if course status is changed, otherwise false
bool Admin::changeCourseStatus(int studentID, String^ courseName, float GPA)
{
	for each (auto s in Student::allStudents)
	{
		if (s->getID() == studentID)//got a match of the student in our students list
		{
			List<String^>^ coursesInProgress = s->getCoursesINProgress();
			List<String^>^ tempFinishedCourses = s->getFinishedCourses();
			List<float>^ tempCoursesGPA = s->getCoursesGPA();
			List<String^>^ tempCoursesInProgress = gcnew List<String^>();

				for each (auto course in coursesInProgress)//looping in the courses in progress list
				{
					if (course == courseName) // got a match of course name in the list
					{
						// add the course to our finished courses and coursesGPA
						tempFinishedCourses->Add(course);
						tempCoursesGPA->Add(GPA);
					}
					else
						tempCoursesInProgress->Add(course);//updating the courses in progress with the new list

				}
				//updating the student with the new lists
				s->setCoursesGPA(tempCoursesGPA);
				s->setCoursesINProgress(tempCoursesInProgress);
				s->setFinishedCourses(tempFinishedCourses);
				return true;
		}
	}
	return false;
}

void Admin::loadAdminDataFromFile()
{
	ifstream file;
	file.open("AdminData.txt");
	string name, password;
	while (file >> name >> password)
	{
		String^ sysname = gcnew String(name.c_str());
		String^ syspass = gcnew String(password.c_str());

		Admin^ admin = gcnew Admin(sysname,syspass);
		Admin::allAdmins->Add(admin);
	}
	file.close();
}

void Admin::saveAdminDataToFile()
{
	ofstream file;
	file.open("AdminData.txt");
	for each (auto it in Admin::allAdmins)
	{

		string name;
		for each (wchar_t c in it->getNameAdmin())//convert from String^ to std::string
		{
			name += static_cast<char>(c);
		}
		string password;
		for each (wchar_t c in it->getPasswordAdmin())//convert from String^ to std::string
		{
			password += static_cast<char>(c);
		}
		file << name << " " << password << endl;
	}
	file.close();
}