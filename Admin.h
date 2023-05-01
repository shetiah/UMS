#pragma once
#include "Course.h"
#include "Student.h"
using namespace std;
using namespace System;

ref class Admin
{
private:
	String^ name = "admin";
	String^ password = "admin";
public:
	//log in
	//DONE === create student
	//add course and enter course prerequisite
	//view list of all students in a specific course
	//add course grade for each student
	//view list of (finished - inProgress) courses for any student
	//DONE ==== edit all course data
	
	void editCourseData(Course^ c, String^ name, String^ code, String^ instructor, int maxNumberOfStudents, int hours);
	static void createStudent(String^ name, String^ password, int academicYear, int maxHoursAllowed, float GPA, List<String^>^ finishedCourses, List<String^>^ coursesInProgress);
};