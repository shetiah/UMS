#include "Student.h"
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
 inline Student::Student()
{
	this->ID = 0;
	this->AcademicYear = 0;
	this->MaxHoursAllowed = 0;
	this->GPA = 0;
	this->Name = "";
	this->Email = "";
	this->Password = "";
	this->FinishedCourses = nullptr;
	this->CoursesInProgress = nullptr;
}

Student::Student(int ID, int AcademicYear, int MaxHoursAllowed, float GPA, String^ Name, String^ Email, String^ Password, List<String^>^ FinishedCourses, List<String^>^ CoursesInProgress, List<float>^ coursesGPA)
{
	this->ID = ID;
	this->AcademicYear = AcademicYear;
	this->MaxHoursAllowed = MaxHoursAllowed;
	this->GPA = GPA;
	this->Name = Name;
	this->Email = Email;
	this->Password = Password;
	this->FinishedCourses = FinishedCourses;
	this->CoursesInProgress = CoursesInProgress;
	this->coursesGPA = coursesGPA;
}

void Student::setName(String^ Name)
{
	this->Name = Name;
}

void Student::setAcademicYear(int AcademicYear)
{
	this->AcademicYear = AcademicYear;
}

void Student::setEmail(String^ Email)
{
	this->Email = Email;
}

void Student::setPassword(String^ Password)
{
	this->Password = Password;
}

void Student::setID(int ID)
{
	this->ID = ID;
}

void Student::setCoursesINProgress(List<String^>^ CoursesInProgress)
{
	this->CoursesInProgress = CoursesInProgress;
}

void Student::setFinishedCourses(List<String^>^ FinishedCourses)
{
	this->FinishedCourses = FinishedCourses;
}

void Student::setCoursesGPA(List<float>^ coursesGPA)
{
	this->coursesGPA = coursesGPA;
}

void Student::setEachCourseGrade(Dictionary<Course^, String^>^ eachCourseGrade)
{
	this->eachCourseGrade = eachCourseGrade;
}

void Student::setMaxHoursAllowed(int MaxHoursAllowed)
{
	this->MaxHoursAllowed = MaxHoursAllowed;
}

void Student::setGPA(float GPA)
{
	this->GPA = GPA;
}

void Student::setEachFinishedCourseGPA(List<String^>^ FinishedCourses, List<float>^ coursesGPA)
{
	for (int i = 0; i < coursesGPA->Count; i++)
	{
		eachFinishedCourseGPA->Add(FinishedCourses[i], coursesGPA[i]);
	}
}

Dictionary<String^, float>^ Student::getEachFinishedCourseGPA()
{
	return eachFinishedCourseGPA;
}

String^ Student::getName()
{
	return Name;
}

int Student::getAcademicYear()
{
	return AcademicYear;
}

String^ Student::getEmail()
{
	return Email;
}

String^ Student::getPassword()
{
	return Password;
}

int Student::getID()
{
	return ID;
}

List<String^>^ Student::getCoursesINProgress()
{
	return CoursesInProgress;
}

List<String^>^ Student::getFinishedCourses()
{
	return FinishedCourses;
}

List<float>^ Student::getCoursesGPA() {
	return coursesGPA;
}

int Student::getMaxHoursAllowed()
{
	return MaxHoursAllowed;
}

float Student::getGPA()
{
	return GPA;
}

Dictionary<Course^, String^>^ Student::getEachCourseGrade()
{
	return eachCourseGrade;
}

List<String^>^ Student::CoursesAV()
{

	List<String^>^ AvCourses = gcnew List<String^>();
	
	//return an empty list if no finished courses
	//if(FinishedCourses==nullptr)
	//	return nullptr;
	//	

	////return an empty list if no finished courses
	//if (FinishedCourses->Count == 0);
	//  return nullptr;

	for each (auto line in Course::preRequires)
	{
		//line = { course Name to be taken, list of its preRequisites}
		String^ courseToAdd = line.Key;
		List<String^>^ preReqs = line.Value;
		bool canBeAdded = true;
		for each (auto course in preReqs)
		{
			//searching if each preRequisite is in the student's finished courses or in progress
			if (!FinishedCourses->Contains(course) || CoursesInProgress->Contains(course))
			{
				canBeAdded = false;
				break;
			}
		}
		//checking if the course can be added and not already in progress and not finished
		if (canBeAdded && !CoursesInProgress->Contains(courseToAdd) && !FinishedCourses->Contains(courseToAdd))
		{
			AvCourses->Add(courseToAdd);
		}
	}

	return AvCourses;
}


List<Course^>^ Student::FilterCourses(String^ filterOption) //farah
{

	// Create a new list to store the filtered courses
	List<Course^>^ filteredCourses = gcnew List<Course^>();

	if (filterOption == "Finished Courses")
	{
		for each (Course ^ course in Course::allCourses) 
		{
			// Check if the current course is in the list of finished courses
			if (FinishedCourses->Contains(course->getName()) )
			{
				// If it is, add the course to the filtered list
				filteredCourses->Add(course);
			}


		}
	}
	else if (filterOption == "Available Courses") 
	{
		// Get the list of available courses
		List<String^>^ availableCourses = CoursesAV();
		for each (Course ^ course in Course::allCourses)
		{
			// Check if the current course is in the list of available courses
			if (availableCourses->Contains(course->getName()))
			{
				filteredCourses->Add(course);
			}
		}

	}
	else if (filterOption == "Required Courses")
	{
		for each (Course ^ course in Course::allCourses)
		{
			// Check if the current course is marked as a requirement
			if (course->getIsRequirement())
			{
				// If it is, add the course to the filtered list
				filteredCourses->Add(course);
			}
		}
	}
	else if (filterOption == "Elective Courses")
	{
		for each (Course ^ course in Course::allCourses)
		{
			// Check if the current course is marked as a requirement
			if (!course->getIsRequirement())
			{
				// If it is, add the course to the filtered list
				filteredCourses->Add(course);
			}
		}
	}
	else if (filterOption == "CoursesInProgress") {
		// If the user has not selected a filter, return his courses
		for each (Course ^ course in Course::allCourses)
		{
			if (CoursesInProgress->Contains(course->getName()))
			{
				filteredCourses->Add(course);
			}


		}
	}
	else 
	{
		// If the user has not selected a filter, return his courses
		for each (Course ^ course in Course::allCourses)
		{
			if (CoursesInProgress->Contains(course->getName()))
			{
				filteredCourses->Add(course);
			}


		}
	}


	return filteredCourses;
}

void loadStudentCourseInProgress(Course^ course, List<int>^ allStudentInProgress)
{

	for each (Course ^ course in Course::allCourses)
	{
		for each (Student ^ student in Student::allStudents)
		{
			for each (String ^ s in student->getCoursesINProgress())
			{
				if (s == course->getName())
					allStudentInProgress->Add(student->getID());
			}
		}
	}
}


void Student::saveStudentDataToFile() {

	// Open the output file
	ofstream outFile("studentsData.txt");

	// Loop through each course in the dictionary
	for each (auto i in Student::allStudents)
	{
		//get data from each student obj
		String^ sysName = i->getName();
		String^ sysemail = i->getEmail();
		String^ syspassword = i->getPassword();
		int id = i->getID();
		int academicYear = i->getAcademicYear();
		int maxHours = i->getMaxHoursAllowed();
		float GPA = i->getGPA();
		List<String^>^ finishedCourses = i->getFinishedCourses();
		List<String^>^ coursesInProgress = i->getCoursesINProgress();
		List<float>^   coursesGPA = i->getCoursesGPA();

		//convert from system::string to std::string
		string name;
		for each (wchar_t c in sysName)
		{
			name += static_cast<char>(c);
		}

		string email;
		for each (wchar_t c in sysemail)
		{
			email += static_cast<char>(c);
		}

		string password;
		for each (wchar_t c in syspassword)
		{
			password += static_cast<char>(c);
		}

		//outputting data to file
		outFile << "1)" << name << endl;
		outFile << "2)" << email << endl;
		outFile << "3)" << password << endl;
		outFile << "4)" << to_string(id) << endl;
		outFile << "5)" << to_string(academicYear) << endl;
		outFile << "6)" << to_string(maxHours) << endl;
		outFile << "7)" << GPA<<setprecision(3) << endl;

		//outputting the vectos
		outFile << "8)";
		string line;

	
			for each (String ^ course in finishedCourses)
			{
				// Separate courses with commas
				if (!line.empty())
				{
					line += ",";
				}
				std::string x;
				for each (wchar_t c in course)
				{
					x += static_cast<char>(c);
				}
				line += x;

			}
		
		outFile << line << endl;

		outFile << "9)";
		//output gpas
		string line3;
	
		for each (float gpa in coursesGPA)
		{
			// Separate courses with commas
			if (!line3.empty())
			{
				outFile<<",";
			}
			outFile << gpa << setprecision(3);
			line3 += to_string(gpa);

		}
		
		outFile<<endl;


		outFile << "c)";
		string line2;
		for each (String ^ course in coursesInProgress)
		{
			// Separate courses with commas
			if (!line2.empty())
			{
				line2 += ",";
			}
			std::string y;
			for each (wchar_t c in course)
			{
				y += static_cast<char>(c);
			}
			line2 += y;

		}
		outFile << line2 << endl;
		//outputting the students separator (x)

		outFile << "x" << endl;


	}

	// Close the output file
	outFile.close();


}


void Student::loadStudentDataFromFile() {

	//loading data from file
	ifstream stdData("StudentsData.txt");
	string wholeLine;
	Student^ temp = gcnew Student();
	while (getline(stdData, wholeLine))
	{
		// to skip 'number' and ')' 
		// ex: 1), 2), 3)
		int i = 2;
		//if the student is finished
		if (wholeLine[0] == 'x')
		{
			Student::allStudents->Add(temp);
			temp = gcnew Student();
		}

		//if one word per line (not a list)
		if (wholeLine[0] != '8' && wholeLine[0] != '9' && wholeLine[0]!='c')
		{
			string var;
			while (i < wholeLine.size())
			{
				var += wholeLine[i];
				i++;
			}

			String^ sysVar = gcnew String(var.c_str());
			if (wholeLine[0] == '1'&&wholeLine[1]==')')
				temp->setName(sysVar);
			if (wholeLine[0] == '2')
				temp->setEmail(sysVar);
			if (wholeLine[0] == '3')
				temp->setPassword(sysVar);
			if (wholeLine[0] == '4')
				temp->setID(stoi(var)); // string to int
			if (wholeLine[0] == '5')
				temp->setAcademicYear(stoi(var));
			if (wholeLine[0] == '6')
				temp->setMaxHoursAllowed(stoi(var));
			if (wholeLine[0] == '7')
				temp->setGPA(float(stof(var))); //string to int then to float

		}
		else // a list of finished or current courses
		{
			List<String^>^ tempp = gcnew List<String^>();
			string push;
			while (i < wholeLine.size())
			{
				if (wholeLine[i] == ',')
				{
					i++;
					String^ sysVar = gcnew String(push.c_str());
					tempp->Add(sysVar);
					push = "";
				}
				push += wholeLine[i];
				i++;
			}
			String^ sysVar = gcnew String(push.c_str());
			tempp->Add(sysVar);

			if (wholeLine[0] == '8')// add to finished courses
				temp->setFinishedCourses(tempp);

			if (wholeLine[0] == 'c')//add courses in progress
				temp->setCoursesINProgress(tempp);
			if (wholeLine[0] == '9')//add gpa for each course
			{ 
				List<float>^ temppGpa = gcnew List<float>();

				for each(auto it in tempp)//convert from String^ to float
				{
					string y;
					for each (wchar_t c in it)//convert from String^ to std::string
					{
						y += static_cast<char>(c);
					}
					temppGpa->Add(stof(y));//add to list<float>
				}
				temp->setCoursesGPA(temppGpa);//add to student object
			}
		}
	}
}



bool Student::registerForCourse(Course^ course)
{
		List<String^>^ temp = getCoursesINProgress();
		if (CoursesAV())
		{
			temp->Add(course->getName());
			setCoursesINProgress(temp);
			course->allStudentInProgress->Add(getID());
			return true;
		}
		return false;

}

