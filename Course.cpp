//#include "pch.h"
#include "Course.h"
#include "Student.h"
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
}

Course::Course(String^ name, String^ code, String^ instructor, bool isRequirement, int maxNumberOfStudents, int hours)
{
	this->name = name;
	this->code = code;
	this->instructor = instructor;
	this->isRequirement = isRequirement;
	this->maxNumberOfStudents = maxNumberOfStudents;
	this->hours = hours;
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

void Course::setAllStudentsInCourse()
{
	List<int>^ temp = gcnew List<int>();
	//looping on all students
	for each (auto std in Student::allStudents)
	{
		//getting courses in progress for each student
		List<String^>^ c = std->getCoursesINProgress();
		//checking if our course is in the student's coursesInProgress
		if (c->Contains(this->name))
		{
			//adding their id in temp list
			temp->Add(std->getID());
		}
	}
	//setting out attr. value
	allStudentsInCourse = temp;
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

List<int>^ Course::getAllStudentsInCourse(){
	return allStudentsInCourse;
}



void Course::saveCourseDataToFile() {

	// Open the output file
	ofstream outFile("coursesData.txt");

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
		if (!Course::preRequires->ContainsKey(mo3ak))
		{
			Course::preRequires->Add(mo3ak, preReq);
		}

	}


}

 void Course::loadCourseHoursFromFile(){
	 //loading data from file
	 ifstream coursesHours("eachCourseHours.txt");
	 string wholeLine;

	 while (getline(coursesHours, wholeLine))
	 {
		 string cName;
		 int i = 0;
		 //getting course name
		 for (i = 0; i < wholeLine.size(); i++)
		 {
			 if (wholeLine[i] == '-')
			 {
				 i++;
				 break;
			 }
			 cName += wholeLine[i];
		 }
		 //getting course hours
		 string hour;
		 while (i < wholeLine.size())
		 {
			 hour += wholeLine[i];
			 i++;
		 }

		 int hours = stoi(hour);
		 String^ sysName = gcnew String(cName.c_str());

		 Course::eachCourseHours->Add(sysName, hours);

	 }


}

void Course::saveCourseHoursToFile() {
	
	// Open the output file
	ofstream outFile("eachCourseHours.txt");

	for each (auto i in Course::eachCourseHours)
	{
		String^ courseName = i.Key;
		int hours= i.Value;

		// Convert course name to std::string
		string courseNameStr;
		for each (wchar_t c in courseName)
		{
			courseNameStr += static_cast<char>(c);
		}

		string hour = to_string(hours);

		// Construct the output string
		std::string outputStr = courseNameStr + "-" + hour + "\n";

		// Write the output string to the file
		outFile << outputStr;
	}

	// Close the output file
	outFile.close();

}

void Course::loadCourseContentFromFile() {
	//loading data from file
	ifstream coursesHours("coursesContent.txt");
	string wholeLine;


	while (getline(coursesHours, wholeLine))
	{
		vector<string>lineContent;
		string c;
		int i = 0;
		//getting course name
		for (i = 0; i < wholeLine.size(); i++)
		{
			if (wholeLine[i] == '-')
			{
				i++;
				lineContent.push_back(c);
				c = "";
			}
			c += wholeLine[i];
		}
		lineContent.push_back(c);
		//line content: name , code , instructor , isRequirement , maxNumberOfStd , hours
		Course^ n = gcnew Course();
		
		bool req;
		String^ isReq = gcnew String(lineContent[3].c_str());
		if (isReq == "0")
			req = false;
		else
			req = true;

		n->setName(gcnew String(lineContent[0].c_str()));
		n->setCode(gcnew String(lineContent[1].c_str()));
		n->setInstructor(gcnew String(lineContent[2].c_str()));
		n->setIsRequirement(req);
		n->setMaxNumberOfStudents(stoi(lineContent[4]));
		n->setHours(stoi(lineContent[5]));
		
		Course::allCourses->Add(n);

	}
}

void Course::saveCourseContentToFile() {
	// Open the output file
	ofstream outFile("coursesContent.txt");

	// Loop through each course in the dictionary
	for each (auto i in Course::allCourses)
	{
		//line content: name , code , instructor , isRequirement , maxNumberOfStd , hours

		String^ courseName = i->getName();
		String^ code = i->getCode();
		String^ instructor = i->getInstructor();
		bool isReq = i->getIsRequirement();
		int maxNumberOfStudents = i->getMaxNumberOfStudents();
		int hours = i->getHours();

		string codeStr;
		string instructorStr;
		string courseNameStr;
		string hour = to_string(hours);
		string maxNum = to_string(maxNumberOfStudents);
		string req = to_string(isReq);
		// Convert String^ to std::string
		for each (wchar_t c in code)
		{
			codeStr += static_cast<char>(c);
		}
		for each (wchar_t c in instructor)
		{
			instructorStr += static_cast<char>(c);
		}
		for each (wchar_t c in courseName)
		{
			courseNameStr += static_cast<char>(c);
		}

		//line content: name , code , instructor , isRequirement , maxNumberOfStd , hours
		outFile << courseNameStr<<"-"<<codeStr<<"-"<<instructorStr<<"-"<<isReq<<"-"<<maxNum<<"-"<<hour<<"\n";
	}

	// Close the output file
	outFile.close();
}
int Course::calcnumofstdinCourse()
{
	if (getAllStudentsInCourse() != nullptr)
		return getAllStudentsInCourse()->Count;
	else
		return 0;
}
bool Course::ifcourseisfilled()
{
	if (calcnumofstdinCourse() == maxNumberOfStudents)
		return true;
	return false;
}


