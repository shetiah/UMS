#pragma once
#include "Student.h"
#include "Login.h"
#include "Admin.h"
#include<string>
#include<fstream>
#include<iostream>
//
//inline void viewAvCourses(Student^ stud);
inline void filter();
inline void viewDetailsOfaCourse();
inline void viewAllCoursesInProgress();
inline void viewEveryCourseGrade();
inline void viewCGPA();
inline void StudentEditDAta();

namespace UMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentPageForm
	/// </summary>
	public ref class StudentPageForm : public System::Windows::Forms::Form
	{
	private:Student^ stud;
	public:

		StudentPageForm(Student^ stud)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->stud = stud;
			viewAvCourses(stud);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentPageForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ courseName;
	private: System::Windows::Forms::Label^ hours;
	private: System::Windows::Forms::Label^ req_courses;
	private: System::Windows::Forms::Label^ instructor;
	private: System::Windows::Forms::Label^ code;
	private: System::Windows::Forms::Label^ isRequirement;
	private: System::Windows::Forms::Label^ maxNumberOfStudents;
	private: System::Windows::Forms::ListBox^ reqCoursesList;
	private: System::Windows::Forms::Button^ ViewCourseProp;
	private: System::Windows::Forms::Button^ registerCourse;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
	public:
		void viewAvCourses(Student^ stud)
		{
			if (stud->CoursesAV() == nullptr)
				this->label1->Text = "no";
			else {
				List<String^>^ Av = stud->CoursesAV();
				this->label1->Text = Av[0];
			}
		}

		void viewSpecificCourse(Course^ course) {

			this->courseName->Text = course->getName();
			
			this->hours->Text = Convert::ToString(course->getHours());

			this->code->Text = Convert::ToString(course->getCode());
			
			this->reqCoursesList->DataSource = Course::preRequires[course->getName()];
			
			this->instructor->Text = course->getInstructor();
	
			if(course->getIsRequirement())
				this->isRequirement->Text = "Yes";
			else
				this->isRequirement->Text = "NO";

			this->maxNumberOfStudents->Text = Convert::ToString(course->getMaxNumberOfStudents());
	

		}
		
		void registerCoures(Course^ course)
		{
			int x;
			List<String^>^ courseAV = this->stud->CoursesAV();
			for (int i = 0; i <courseAV->Count; i++)
			{
				if (courseAV[i] == course->getName())
				{
					x = i;
					break;
				}
			}
		}
		
		
		
		
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->courseName = (gcnew System::Windows::Forms::Label());
			this->hours = (gcnew System::Windows::Forms::Label());
			this->req_courses = (gcnew System::Windows::Forms::Label());
			this->instructor = (gcnew System::Windows::Forms::Label());
			this->code = (gcnew System::Windows::Forms::Label());
			this->isRequirement = (gcnew System::Windows::Forms::Label());
			this->maxNumberOfStudents = (gcnew System::Windows::Forms::Label());
			this->reqCoursesList = (gcnew System::Windows::Forms::ListBox());
			this->ViewCourseProp = (gcnew System::Windows::Forms::Button());
			this->registerCourse = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(226, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &StudentPageForm::label1_Click);
			// 
			// courseName
			// 
			this->courseName->AutoSize = true;
			this->courseName->Location = System::Drawing::Point(12, 9);
			this->courseName->Name = L"courseName";
			this->courseName->Size = System::Drawing::Size(87, 16);
			this->courseName->TabIndex = 1;
			this->courseName->Text = L"CourseName";
			this->courseName->Click += gcnew System::EventHandler(this, &StudentPageForm::courseName_Click);
			// 
			// hours
			// 
			this->hours->AutoSize = true;
			this->hours->Location = System::Drawing::Point(14, 39);
			this->hours->Name = L"hours";
			this->hours->Size = System::Drawing::Size(40, 16);
			this->hours->TabIndex = 2;
			this->hours->Text = L"hours";
			// 
			// req_courses
			// 
			this->req_courses->AutoSize = true;
			this->req_courses->Location = System::Drawing::Point(12, 74);
			this->req_courses->Name = L"req_courses";
			this->req_courses->Size = System::Drawing::Size(78, 16);
			this->req_courses->TabIndex = 3;
			this->req_courses->Text = L"req courses";
			// 
			// instructor
			// 
			this->instructor->AutoSize = true;
			this->instructor->Location = System::Drawing::Point(12, 90);
			this->instructor->Name = L"instructor";
			this->instructor->Size = System::Drawing::Size(60, 16);
			this->instructor->TabIndex = 4;
			this->instructor->Text = L"instructor";
			// 
			// code
			// 
			this->code->AutoSize = true;
			this->code->Location = System::Drawing::Point(14, 116);
			this->code->Name = L"code";
			this->code->Size = System::Drawing::Size(38, 16);
			this->code->TabIndex = 5;
			this->code->Text = L"code";
			// 
			// isRequirement
			// 
			this->isRequirement->AutoSize = true;
			this->isRequirement->Location = System::Drawing::Point(14, 153);
			this->isRequirement->Name = L"isRequirement";
			this->isRequirement->Size = System::Drawing::Size(94, 16);
			this->isRequirement->TabIndex = 6;
			this->isRequirement->Text = L"isRequirement";
			// 
			// maxNumberOfStudents
			// 
			this->maxNumberOfStudents->AutoSize = true;
			this->maxNumberOfStudents->Location = System::Drawing::Point(8, 178);
			this->maxNumberOfStudents->Name = L"maxNumberOfStudents";
			this->maxNumberOfStudents->Size = System::Drawing::Size(145, 16);
			this->maxNumberOfStudents->TabIndex = 7;
			this->maxNumberOfStudents->Text = L"maxNumberOfStudents";
			// 
			// reqCoursesList
			// 
			this->reqCoursesList->FormattingEnabled = true;
			this->reqCoursesList->ItemHeight = 16;
			this->reqCoursesList->Location = System::Drawing::Point(209, 39);
			this->reqCoursesList->Name = L"reqCoursesList";
			this->reqCoursesList->Size = System::Drawing::Size(121, 164);
			this->reqCoursesList->TabIndex = 8;
			this->reqCoursesList->SelectedIndexChanged += gcnew System::EventHandler(this, &StudentPageForm::reqCoursesList_SelectedIndexChanged);
			// 
			// ViewCourseProp
			// 
			this->ViewCourseProp->Location = System::Drawing::Point(376, 67);
			this->ViewCourseProp->Name = L"ViewCourseProp";
			this->ViewCourseProp->Size = System::Drawing::Size(162, 23);
			this->ViewCourseProp->TabIndex = 9;
			this->ViewCourseProp->Text = L"ViewCourseProp";
			this->ViewCourseProp->UseVisualStyleBackColor = true;
			this->ViewCourseProp->Click += gcnew System::EventHandler(this, &StudentPageForm::button1_Click);
			// 
			// registerCourse
			// 
			this->registerCourse->Location = System::Drawing::Point(387, 305);
			this->registerCourse->Name = L"registerCourse";
			this->registerCourse->Size = System::Drawing::Size(171, 23);
			this->registerCourse->TabIndex = 10;
			this->registerCourse->Text = L"registerCourse";
			this->registerCourse->UseVisualStyleBackColor = true;
			this->registerCourse->Click += gcnew System::EventHandler(this, &StudentPageForm::button2_Click);
			// 
			// StudentPageForm
			// 
			this->AccessibleName = L"code";
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(594, 408);
			this->Controls->Add(this->registerCourse);
			this->Controls->Add(this->ViewCourseProp);
			this->Controls->Add(this->reqCoursesList);
			this->Controls->Add(this->maxNumberOfStudents);
			this->Controls->Add(this->isRequirement);
			this->Controls->Add(this->code);
			this->Controls->Add(this->instructor);
			this->Controls->Add(this->req_courses);
			this->Controls->Add(this->hours);
			this->Controls->Add(this->courseName);
			this->Controls->Add(this->label1);
			this->Name = L"StudentPageForm";
			this->Text = L"StudentPageForm";
			this->Load += gcnew System::EventHandler(this, &StudentPageForm::StudentPageForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:static bool loggedOut = false;
		  
		  /*
		  4. View details of a specific course.
			  view(coures name, hours, req courses, instructor, code, isRequirement, maxNumberOfStudents)*/
	

	private: System::Void StudentPageForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->loggedOut = true;
		UMS::Login::loggedIn = false;
		this->Close();

	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void courseName_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void reqlist_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void reqCoursesList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	viewSpecificCourse(Course::allCourses[0]);

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
