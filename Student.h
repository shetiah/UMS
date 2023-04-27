#pragma once
#include "Course.h"
using namespace System;
using namespace System::Collections::Generic;
	/*
	
	data in text file is in the following form:
	1)name
	2)email
	3)password
	4)id
	5)academicYear
	6)maxHours
	7)gpa
	8)finished courses,separated by, commas
	9)courses in progress,separated by,commas
	x to end the student

	*/
public ref class Student
{
	String^ Name;
	String^ Email;
	String^ Password;
	int ID;
	int AcademicYear;
	int MaxHoursAllowed;
	float GPA;
	List<String^>^ FinishedCourses;
	List<String^>^ CoursesInProgress;
public :
	//static variable to hold all the students from the students textFile 
	static List<Student^>^ allStudents;


	Student();
	Student(int ID, int AcademicYear, int MaxHoursAllowed, float GPA, String^ Name, String^ Email, String^ Password, List<String^>^ FinishedCourses, List<String^>^ CoursesInProgress);
	void setName(String^ Name);
	void setAcademicYear(int AcademicYear);
	void setEmail(String^ Email);
	void setPassword(String^ Password);
	void setID(int ID);
	void setCoursesINProgress(List<String^>^ CoursesInProgress);
	void setFinishedCourses(List<String^>^ FinishedCourses);
	void setMaxHoursAllowed(int MaxHoursAllowed);
	void setGPA(float GPA);
	
	String^ getName();
	int getAcademicYear();
	String^ getEmail();
	String^ getPassword();
	int getID();
	List<String^>^ getCoursesINProgress();
	List<String^>^ getFinishedCourses();
	int getMaxHoursAllowed();
	float getGPA();
	 




	List<String^>^ CoursesAV();
	void viewCoursesAV();

	bool validateIfCourseCanBeTaken(Course^ course);
	void registerForCourse(Course^ course);

    
/*
1- Log in.

2- View List of all available courses.
   
3- Filter courses.

4-		View details of a specific course.

5-		Register for a course.

	View all his / her courses.

		View his / her courses grades and cumulative GPA.

		Edit his / her data.*/

 };
