#pragma once
#include "Student.h"
#include "Login.h"


inline void viewAvCourses();
inline void filter();
inline void viewDetailsOfaCourse();
inline void viewAllCoursesInProgress();
inline void viewEveryCourseGrade();
inline void viewCGPA();
inline void StudentEditDAta();


//done
inline void loadStudentDataFromFile() {

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
		}

		//if one word per line (not a list)
		if (wholeLine[0] != '8' && wholeLine[0] != '9')
		{
			string var;
			while (i < wholeLine.size())
			{
				var += wholeLine[i];
				i++;
			}

			String^ sysVar = gcnew String(var.c_str());
			
			if (wholeLine[0] == '1')
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
				if (wholeLine[i] == ' ')
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
			
			if (wholeLine[0] == '9')//add courses in progress
				temp->setCoursesINProgress(tempp);
		}
	}
}

inline void addStudent(Student^ newStd) { 
	Student::allStudents->Add(newStd);
}

inline void saveStudentDataToFile() {

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
		outFile << "4)" << to_string(id)<< endl;
		outFile << "5)" << to_string(academicYear) << endl;
		outFile << "6)" << to_string(maxHours) << endl;
		outFile << "7)" << to_string(GPA)<< endl;
	
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
		
		outFile <<line<< endl;

		outFile << "9)";

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
		outFile <<line2<< endl;
		//outputting the students separator (x)
		
		outFile << "x" << endl;


	}

	// Close the output file
	outFile.close();


}

namespace UMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentDataForm
	/// </summary>
	public ref class StudentDataForm : public System::Windows::Forms::Form
	{
	public:
		StudentDataForm(Student^ stud)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();

			lbUserInfo->Text = "ID=" + stud->getID() + ", Name=" + stud->getName() +
				", email=" + stud->getEmail() + ", address=" + stud->getPassword();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentDataForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbUserInfo;
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbUserInfo = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbUserInfo
			// 
			this->lbUserInfo->AutoSize = true;
			this->lbUserInfo->Location = System::Drawing::Point(113, 112);
			this->lbUserInfo->Name = L"lbUserInfo";
			this->lbUserInfo->Size = System::Drawing::Size(44, 16);
			this->lbUserInfo->TabIndex = 0;
			this->lbUserInfo->Text = L"label1";
			this->lbUserInfo->Click += gcnew System::EventHandler(this, &StudentDataForm::lbUserInfo_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(347, 352);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 93);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StudentDataForm::button1_Click);
			// 
			// StudentDataForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(699, 534);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbUserInfo);
			this->Name = L"StudentDataForm";
			this->Text = L"StudentDataForm";
			this->Load += gcnew System::EventHandler(this, &StudentDataForm::StudentDataForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:static bool loggedOut = false;
	private: System::Void StudentDataForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbUserInfo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->loggedOut = true;
		UMS::Login::loggedIn = false;
		this->Close();
	}
	};
}
