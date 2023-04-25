#pragma once
using namespace System;
using namespace System::Collections::Generic;
ref class Student
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
 };
