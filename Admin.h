#pragma once
#include "Course.h"
#include "Student.h"
using namespace std;
using namespace System;

ref class Admin
{
private:
	String^ name;
	String^ password;
public:
	Admin();
	Admin(String^ name, String^ password);

	void setNameAdmin(String^ name);
	void setPasswordAdmin(String^ password);
	String^ getNameAdmin();
	String^ getPasswordAdmin();
	
	static List<Admin^>^ allAdmins;

	
	void editCourseData(Course^ c, String^ name, String^ code, String^ instructor, int maxNumberOfStudents, int hours);
	static void createStudent(String^ name, String^ password, int academicYear, int maxHoursAllowed, float GPA, List<String^>^ finishedCourses, List<String^>^ coursesInProgress, List<float>^ coursesGPA);
	static void addCourse(Course^ course);/*
	static void addCourseGrade(Course^ course, String^ grade,Student^ student);*/
	static void addCoursePreReq(Course^ course, List<String^>^ preList);
	static bool changeCourseStatus(int studentID, String^ courseName, float GPA);
	//files
	static void loadAdminDataFromFile();
	static void saveAdminDataToFile();
	static float calc_CGPA(Student^ s);
	static Dictionary<Course^, float>^ conversionFinishedCourseGpa(List<float>^,Student ^ s) ;
	//log in
	//DONE === create student
	//add course and enter course prerequisite
	//view list of all students in a specific course
	//add course grade for each student
	//view list of (finished - inProgress) courses for any student
	//DONE ==== edit all course data
};