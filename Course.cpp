//#include "pch.h"
#include "Course.h"
#include <fstream>
#include <string>
Course::Course()
{
	name = "";
	code = "";
	instructor = "";
	isRequirement = true;
	maxNumberOfStudents = 1000;
	hours = 0;
	List<String^>^ prerequisites; // new member variable to store prerequisite course name
}

Course::Course(String^ name, String^ code, String^ instructor, bool isRequirement, int maxNumberOfStudents, int hours)
{
	this->name = name;
	this->code = code;
	this->instructor = instructor;
	this->isRequirement = isRequirement;
	this->maxNumberOfStudents = maxNumberOfStudents;
	this->hours = hours;
	this->prerequisites = gcnew List<String^>(); // initialize list of prerequisites
}

void Course::setName(String^ name) {
	this->name = name;
}
void Course::setCode(String^ code) {
	this->code = code;
}
void Course::setInstructor(String^ instructor) {
	this->instructor = instructor;
}
void Course::setIsRequirement(bool isRequirement) {
	this->isRequirement = isRequirement;
}
void Course::setMaxNumberOfStudents(int maxNumberOfStudents) {
	this->maxNumberOfStudents = maxNumberOfStudents;
}
void Course::setHours(int hours) {
	this->hours = hours;
}
void Course::setPrerequisites(List<String^>^ prerequisites)
{
	this->prerequisites = prerequisites;
}
String^ Course::getName() {
	return name;
}
String^ Course::getCode()
{
	return code;
}
String^ Course::getInstructor() {
	return instructor;
}
bool Course::getIsRequirement() {
	return isRequirement;
}
int Course::getMaxNumberOfStudents() {
	return maxNumberOfStudents;
}
int Course::getHours() {
	return hours;
}

// Method to retrieve the list of prerequisite course names
List<String^>^ Course::getPrerequisites()
{
	return this->prerequisites;
}

void Course::saveCourseDataToFile() {//Maya and Farah:

	// Open the output file
	ofstream outFile("coursesData.txt", ios::app);

	// Loop through each course in the dictionary
	for each (auto i in Course::preRequires)
	{
		// Get the course name and prerequisites for the current course
		String^ courseName = i.Key;
		List<String^>^ prerequisites = i.Value;

		// Convert course name to std::string
		std::string courseNameStr;
		for each (wchar_t c in courseName)
		{
			courseNameStr += static_cast<char>(c);
		}

		// Convert prerequisites to std::string
		std::string prereqsStr;
		for each (String ^ prereq in prerequisites)
		{
			// Separate prerequisites with commas
			if (!prereqsStr.empty())
			{
				prereqsStr += ",";
			}
			std::string prereqStr;
			for each (wchar_t c in prereq)
			{
				prereqStr += static_cast<char>(c);
			}
			prereqsStr += prereqStr;

		}

		// Construct the output string
		std::string outputStr = courseNameStr + "-" + prereqsStr + "\n";

		// Write the output string to the file
		outFile << outputStr;
	}

	// Close the output file
	outFile.close();


}

 void Course::loadCourseDataFromFile() {

	//loading data from file
	ifstream coursesData("coursesData.txt");
	string wholeLine;

	while (getline(coursesData, wholeLine))
	{
		string cName;
		int i = 0;
		//getting the key of the adj list (Course)
		for (i = 0; i < wholeLine.size(); i++)
		{
			if (wholeLine[i] == '-')
			{
				i++;
				break;
			}
			cName += wholeLine[i];
		}
		List<String^>^ preReq = gcnew List<String^>();
		string preReqName;
		//getting the vector of values of the adj list of each course (pre Requirements)
		while (i < wholeLine.size())
		{
			if (wholeLine[i] == ',')
			{
				i++;
				String^ mo3akReq = gcnew String(preReqName.c_str());
				preReq->Add(mo3akReq);
				preReqName = "";
			}
			preReqName += wholeLine[i];
			i++;
		}
		//to add the last course in the line (not followed by a comma)
		String^ mo3akReq = gcnew String(preReqName.c_str());
		preReq->Add(mo3akReq);

		String^ mo3ak = gcnew String(cName.c_str());
		Course::preRequires->Add(mo3ak, preReq);

	}


}