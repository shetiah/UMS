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
#include "adminHome.h"

using namespace System;
using namespace std;
using namespace System::Windows::Forms;


[STAThread]

//ah yama ah w ah yabaaaa de 3ela watya w nasabaaaa
int main()
{
	//vars
	Course::preRequires = gcnew Dictionary<String^, List<String^>^>();
	Course::eachCourseHours = gcnew Dictionary<String^, int>();
	Course::allCourses = gcnew List<Course^>();
	Student^ stud = nullptr;
	Student::allStudents = gcnew List<Student^>();
	Admin::allAdmins = gcnew List<Admin^>();

	//fncs
	Course::loadCourseDataFromFile();
	Course::loadCourseContentFromFile();
	Course::loadCourseHoursFromFile();
	Student::loadStudentDataFromFile();
	Admin::loadAdminDataFromFile();

	
	//
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);




	Application::Run(gcnew UMS::StudentPageForm(nullptr));










		/*while (true)
		{
			UMS::welcomeForm welcForm;
			welcForm.ShowDialog();

			if (welcForm.toadmLogin) {

				UMS::AdminForm adminForm;
				adminForm.ShowDialog();
				if (welcForm.gobacktoWelc)
					continue;
				else if (welcForm.toadminHome)
				{
					UMS::adminHome adminpgForm(adminForm.admin);
					adminpgForm.ShowDialog();
					break;
				}
				else
					break;


			}
			else if (welcForm.tostdLogin)
			{
				UMS::Login StudentLoginForm;
				StudentLoginForm.ShowDialog();

				if (welcForm.gobacktoWelc)
					continue;
				else if (welcForm.tostdHomeForm)
				{
					UMS::StudentPageForm studentPgForm(StudentLoginForm.student);
					studentPgForm.ShowDialog();
					break;
				}
				else 
					break;
				
			}
			else
				break;
			

		}	*/














	return 0;
}