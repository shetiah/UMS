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
	9)each course gpa,separated by, commas
	c)courses in progress,separated by,commas
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
	List<float>^ coursesGPA;
	List<String^>^ CoursesInProgress;
	Dictionary<Course^, String^>^ eachCourseGrade;

public:


	//static variable to hold all the students from the students textFile 
	static List<Student^>^ allStudents;





	Student();
	Student(int ID, int AcademicYear, int MaxHoursAllowed, float GPA, String^ Name, String^ Email, String^ Password, List<String^>^ FinishedCourses, List<String^>^ CoursesInProgress, List<float>^ coursesGPA);
	void setName(String^ Name);
	void setAcademicYear(int AcademicYear);
	void setEmail(String^ Email);
	void setPassword(String^ Password);
	void setID(int ID);
	void setCoursesINProgress(List<String^>^ CoursesInProgress);
	void setFinishedCourses(List<String^>^ FinishedCourses);
	void setMaxHoursAllowed(int MaxHoursAllowed);
	void setGPA(float GPA);
	void setCoursesGPA(List<float>^ coursesGPA);
	void setEachCourseGrade(Dictionary<Course^, String^>^ eachCourseGrade);





	String^ getName();
	String^ getEmail();
	String^ getPassword();
	int getAcademicYear();
	int getMaxHoursAllowed();
	int getID();
	List<String^>^ getCoursesINProgress();
	List<String^>^ getFinishedCourses();
	List<float>^ getCoursesGPA();
	float getGPA();
	Dictionary<Course^, String^>^ getEachCourseGrade();



	List<String^>^ CoursesAV();
	bool validateIfCourseCanBeTaken(Course^ course);
	void registerForCourse(Course^ course);
	List<Course^>^ FilterCourses(String^ filterOption);




	//files
	static void loadStudentDataFromFile();
	static void saveStudentDataToFile();

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
