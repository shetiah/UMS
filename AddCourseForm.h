#pragma once
//#using <mscorlib.dll>
#include"Course.h"
#include<string>
#include<fstream>
#include<iostream>
using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;


inline void loadCourseDataFromFile() {

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

		String^ mo3ak = gcnew String(cName.c_str());
		Course::preRequires->Add(mo3ak, preReq);

	}


}

inline void addCourse(Course^ newCourse) { //farah and maya
	String^ courseName = newCourse->getName();
	List<String^>^ prerequisites = newCourse->getPrerequisites();

	// If the course already exists in the dictionary, do nothing
	if (Course::preRequires->ContainsKey(courseName))
	{
		return;
	}
	// Add the new course to the dictionary with an empty list of prerequisites
	Course::preRequires->Add(courseName, prerequisites);

}

inline void saveCourseDataToFile() {//Maya and Farah:

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

namespace UMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddCourseForm
	/// </summary>
	public ref class AddCourseForm : public System::Windows::Forms::Form
	{
	public:
		AddCourseForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddCourseForm()
		{
			if (components)
			{
				delete components;
			}
		}/*
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ addCourseBtn;*/


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
	private: System::Windows::Forms::Button^ addCourseBtn;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ nameTextBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ hoursTextBox;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ maxStudentsTextBox;
	private: System::Windows::Forms::TextBox^ instructorTextBox;
	private: System::Windows::Forms::TextBox^ prereqTextBox;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ codeTextBox;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label12;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label13;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->addCourseBtn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->hoursTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->maxStudentsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->instructorTextBox = (gcnew System::Windows::Forms::TextBox());
			this->prereqTextBox = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->codeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			
			// 
			// addCourseBtn
			// 
			this->addCourseBtn->Location = System::Drawing::Point(355, 401);
			this->addCourseBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addCourseBtn->Name = L"addCourseBtn";
			this->addCourseBtn->Size = System::Drawing::Size(139, 55);
			this->addCourseBtn->TabIndex = 1;
			this->addCourseBtn->Text = L"ADD";
			this->addCourseBtn->UseVisualStyleBackColor = true;
			this->addCourseBtn->Click += gcnew System::EventHandler(this, &AddCourseForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(71, 98);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Course Name:";
			// 
			// nameTextBox
			// 
			this->nameTextBox->Location = System::Drawing::Point(176, 98);
			this->nameTextBox->Margin = System::Windows::Forms::Padding(4);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(132, 22);
			this->nameTextBox->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(108, 139);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Hours:";
			// 
			// hoursTextBox
			// 
			this->hoursTextBox->Location = System::Drawing::Point(176, 139);
			this->hoursTextBox->Margin = System::Windows::Forms::Padding(4);
			this->hoursTextBox->Name = L"hoursTextBox";
			this->hoursTextBox->Size = System::Drawing::Size(132, 22);
			this->hoursTextBox->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(69, 185);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Max Students:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(91, 223);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Instructor:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(75, 267);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 16);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Prerequisites:";
			// 
			// maxStudentsTextBox
			// 
			this->maxStudentsTextBox->Location = System::Drawing::Point(176, 185);
			this->maxStudentsTextBox->Margin = System::Windows::Forms::Padding(4);
			this->maxStudentsTextBox->Name = L"maxStudentsTextBox";
			this->maxStudentsTextBox->Size = System::Drawing::Size(132, 22);
			this->maxStudentsTextBox->TabIndex = 9;
			// 
			// instructorTextBox
			// 
			this->instructorTextBox->Location = System::Drawing::Point(176, 223);
			this->instructorTextBox->Margin = System::Windows::Forms::Padding(4);
			this->instructorTextBox->Name = L"instructorTextBox";
			this->instructorTextBox->Size = System::Drawing::Size(132, 22);
			this->instructorTextBox->TabIndex = 10;
			// 
			// prereqTextBox
			// 
			this->prereqTextBox->Location = System::Drawing::Point(176, 267);
			this->prereqTextBox->Margin = System::Windows::Forms::Padding(4);
			this->prereqTextBox->Name = L"prereqTextBox";
			this->prereqTextBox->Size = System::Drawing::Size(132, 22);
			this->prereqTextBox->TabIndex = 11;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(500, 124);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(105, 20);
			this->radioButton1->TabIndex = 12;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Requirement";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(500, 152);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(76, 20);
			this->radioButton2->TabIndex = 13;
			this->radioButton2->Text = L"Elective";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(497, 93);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(230, 16);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Is this course Requirement or Elective";
			this->label7->Click += gcnew System::EventHandler(this, &AddCourseForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(113, 313);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 16);
			this->label8->TabIndex = 15;
			this->label8->Text = L"code:";
			// 
			// codeTextBox
			// 
			this->codeTextBox->Location = System::Drawing::Point(176, 313);
			this->codeTextBox->Margin = System::Windows::Forms::Padding(4);
			this->codeTextBox->Name = L"codeTextBox";
			this->codeTextBox->Size = System::Drawing::Size(132, 22);
			this->codeTextBox->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::Control;
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(330, 374);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(214, 16);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Sorry , you must fill all the textboxes";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::Control;
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(316, 142);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(165, 16);
			this->label10->TabIndex = 18;
			this->label10->Text = L"please enter numbers only";
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::Control;
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(317, 188);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(165, 16);
			this->label11->TabIndex = 19;
			this->label11->Text = L"please enter numbers only";
			this->label11->Visible = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(843, 34);
			this->panel1->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"DecoType Naskh Variants", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label12->Location = System::Drawing::Point(261, 9);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(283, 23);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Universty Management System";
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::Firebrick;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(802, 10);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(29, 21);
			this->button3->TabIndex = 0;
			this->button3->Text = L"X";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AddCourseForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(802, 10);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(29, 21);
			this->button2->TabIndex = 0;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(802, 10);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(29, 21);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::Control;
			this->label13->ForeColor = System::Drawing::Color::Blue;
			this->label13->Location = System::Drawing::Point(343, 470);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(175, 16);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Course Added Successfully!";
			this->label13->Visible = false;
			// 
			// AddCourseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(843, 495);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->codeTextBox);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->prereqTextBox);
			this->Controls->Add(this->instructorTextBox);
			this->Controls->Add(this->maxStudentsTextBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->hoursTextBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->nameTextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->addCourseBtn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"AddCourseForm";
			this->Text = L"UMS";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddCourseForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
		   private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			   label13->Visible = false;
			   // All textboxes are filled, don't show the label massege

			   if (nameTextBox->Text->Length > 0 &&
				   hoursTextBox->Text->Length > 0 &&
				   maxStudentsTextBox->Text->Length > 0 &&
				   instructorTextBox->Text->Length > 0 &&
				   prereqTextBox->Text->Length > 0 &&
				   codeTextBox->Text->Length > 0)
			   {
				   label9->Visible = false;
			   }
			   // At least one textbox is empty, show error message
			   else
			   {

				   label9->Visible = true;
				   return;
			   }

			   int hours;
			   int maxStudents;

			   bool isHoursValid = int::TryParse(hoursTextBox->Text, hours);
			   bool isMaxStudentsValid = int::TryParse(maxStudentsTextBox->Text, maxStudents);

			   if (isHoursValid == false)
			   {
				   label10->Visible = true;
				   label11->Visible = false;

				   return;
			   }
			   else if (isMaxStudentsValid == false)
			   {
				   label10->Visible = false;

				   label11->Visible = true;
				   return;

			   }
			   else if (isHoursValid == false && isMaxStudentsValid == false)
			   {
				   label10->Visible = true;
				   label11->Visible = true;
				   return;

			   }

			   // get the course information from the text boxes
			   String^ courseName = nameTextBox->Text;



			   String^ instructor = instructorTextBox->Text;
			   String^ prereqStr = prereqTextBox->Text;
			   String^ code = codeTextBox->Text;

			   cli::array<String^>^ prerequisiteArray = prereqStr->Split(',');
			   List<String^>^ prerequisitesList = gcnew List<String^>();

			   for each (String ^ str in prerequisiteArray) {
				   prerequisitesList->Add(str);
			   }




			   // Create a new instance of the Course class
			   Course^ newCourse = gcnew Course();

			   // Set the properties using the setters
			   newCourse->setName(courseName);
			   //newCourse->setHours(hours);
			   //newCourse->setMaxNumberOfStudents(maxStudents);
			   newCourse->setInstructor(instructor);
			   newCourse->setPrerequisites(prerequisitesList);
			   newCourse->setCode(code);

			   if (radioButton1->Checked == true)
			   {

				   newCourse->setIsRequirement(true);

			   }
			   else if (radioButton2->Checked == true && radioButton1->Checked == false)
			   {
				   newCourse->setIsRequirement(false);
			   }
			   label13->Visible = true;
			   addCourse(newCourse);
		   }


	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e)
	{}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	saveCourseDataToFile();
	Environment::Exit(0);
}
	};
}
