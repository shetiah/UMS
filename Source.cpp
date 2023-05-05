//#include "pch.h"
#pragma once
#include "Course.h"
#include "Login.h"
#include "SignUp.h"
#include "AddCourseForm.h"
#include "StudentDataForm.h"
#include "Admin.h"
#include "StudentPageForm.h"
#include "welcomeForm.h"
#include "AdminForm.h"

using namespace System;
using namespace std;
using namespace System::Windows::Forms;


[STAThread]
//to do:
/*
in the txt file: first element is the course name  - the list after it are the preRequirements of the course
*/

int main()
{
	//vars
	Course::preRequires = gcnew Dictionary<String^, List<String^>^>();
	Course::eachCourseHours = gcnew Dictionary<String^, int>();
	Course::allCourses = gcnew List<Course^>();
	Student^ stud = nullptr;
	Student::allStudents = gcnew List<Student^>();


	//fncs
	Course::loadCourseDataFromFile();
	Course::loadCourseContentFromFile();
	Course::loadCourseHoursFromFile();
	Student::loadStudentDataFromFile();

	//Course::saveCourseContentToFile();
	////Course::saveCourseDataToFile();
	////Course::saveCourseHoursToFile();
	//Student::saveStudentDataToFile();
	//
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);




	//Application::Run(gcnew UMS::AddCourseForm());










		while (true)
		{
			UMS::welcomeForm welcForm;
			welcForm.ShowDialog();
			if (welcForm.toadminLogin) {

				UMS::AdminForm adminForm;
				adminForm.ShowDialog();

				if (adminForm.gobacktoWelcomeForm)
					continue;
				
				else 
					break;
				

			}
			else if (welcForm.toStudentLogin)
			{
				UMS::Login StudentLoginForm;
				StudentLoginForm.ShowDialog();

				if (StudentLoginForm.gobacktoWelcomeForm)
					continue;
				
				else 
					break;
				
			}
			else
				break;
			

		}	








		/*	while (true)
			{
				UMS::Login logform;
				logform.ShowDialog();
				if (logform.switchToRegister) {

					UMS::SignUp signForm;
					signForm.ShowDialog();

					if (signForm.switchToLogin)
					{
						continue;
					}
					else {
						stud = signForm.student;
						break;
					}
				}
				else
				{
					stud = logform.student;
					break;
				}

			}	*/










	return 0;
}