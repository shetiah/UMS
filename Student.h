#pragma once
#include "Admin.h"
#include "Course.h"
using namespace System;
using namespace std;
using namespace System::Runtime::InteropServices;

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
};
