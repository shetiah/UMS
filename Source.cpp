//#include "pch.h"
#pragma once
#include"Course.h"
#include"Login.h"
#include"SignUp.h"
#include "AddCourseForm.h"
#include "StudentDataForm.h"

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
	Student^ stud = nullptr;

	//fncs
	loadCourseDataFromFile();

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

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
	while (true)
	{
		UMS::Login logform;
		logform.ShowDialog();
		if (UMS::Login::loggedIn) {

			stud = logform.student;

			UMS::StudentDataForm studForm(stud);
			studForm.ShowDialog();

			if (studForm.loggedOut)
				continue;
			else
				break;
		}


		else
			break;


	}
	//if (stud != nullptr) {
	//	UMS::StudentDataForm StudForm(stud);/*
	//	Application::Run(% StudForm);*/
	//	StudForm.ShowDialog();
	//}
	//else {
	//	MessageBox::Show("Authentication Canceled", "Source.cpp", MessageBoxButtons::OK);
	//}
	/*Application::Run(gcnew UMS::AddCourseForm());
	Application::Run(gcnew UMS::SignUp());
	Application::Run(gcnew UMS::Login());*/
	return 0;
}