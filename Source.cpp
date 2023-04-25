//#include "pch.h"
#include"Course.h"
#include"Login.h"
#include "AddCourseForm.h"

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
	Course::preRequires = gcnew Dictionary<String^, List<String^>^>();

	//loadCourseDataFromFile();
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	Application::Run(gcnew UMS::Login());
	return 0;
}