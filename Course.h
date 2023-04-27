#pragma once
#include<vector>
#include<iostream>
#include<unordered_map>
using namespace std;
using namespace System;
using namespace System::Collections::Generic;


ref class Course
{
private:
	String^ name;
	String^ code;
	String^ instructor;

	bool isRequirement;
	int maxNumberOfStudents;
	int hours;
	List<String^>^ prerequisites; // new member variable to store prerequisite course names

public:
	//static adjacency list for course prerequirements
	static Dictionary<String^, List<String^>^>^ preRequires;
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
	void setPrerequisites(List<String^>^ prerequisites);

	String^ getName();
	String^ getCode();
	String^ getInstructor();
	bool getIsRequirement();
	int getMaxNumberOfStudents();
	int getHours();
	List<String^>^ getPrerequisites();
};


