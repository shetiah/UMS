#pragma once
#include<vector>
#include<iostream>
#include<unordered_map>

using namespace std;
using namespace System;
using namespace System::Collections::Generic;

//To add: Courses list, GPA for finished courses, Graph for what opens what
 ref class Course
{
private:
	String^ name;
	String^ code;
	String^ instructor;

	bool isRequirement;
	int maxNumberOfStudents;
    int hours;
	
	List<int>^ allStudentsInCourse;

public:
	
	//static adjacency list for course prerequirements
	
	static Dictionary<String^, List<String^>^>^ preRequires; 
	static Dictionary<String^, int>^ eachCourseHours;

	static List<Course^>^ allCourses;
	//constructor
	Course();
	Course(String^ name, String^ code, String^ instructor, bool isRequirement, int maxNumberOfStudents, int hours);

	//setters and getters

	void setName(String^ name);
	void setCode(String^ code);
	void setInstructor(String^ instructor);
	void setIsRequirement(bool isRequirement);
	void setMaxNumberOfStudents(int maxNumberOfStudents);
	void setHours(int hours);
	void setAllStudentsInCourse();
	
	
	String^ getName();
	String^ getCode();
	String^ getInstructor();
	bool getIsRequirement();
	int getMaxNumberOfStudents();
	int getHours();
	List<int>^ getAllStudentsInCourse();
	bool ifcourseisfilled();
	int calcnumofstdinCourse();
	static void loadCourseDataFromFile();
	static void saveCourseDataToFile();
	static void loadCourseHoursFromFile();
	static void saveCourseHoursToFile();
	static void loadCourseContentFromFile();
	static void saveCourseContentToFile();



};


