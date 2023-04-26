#pragma once
#include "Course.h"
using namespace System;
using namespace System::Collections::Generic;
public ref class Student
{

	String^ Name;
	String^ Email;
	String^ Password;
	int ID;
	int AcademicYear;
	List<String^>^ FinishedCourses;
	List<String^>^ CoursesInProgress;
	int MaxHoursAllowed;
	float GPA;
public :
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
