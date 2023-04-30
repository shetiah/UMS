#pragma once
#include "Student.h"
#include "Login.h"
#include "Admin.h"
#include<string>
#include<fstream>
#include<iostream>


inline void viewAvCourses();
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
	private: System::Windows::Forms::TextBox^ sname;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ passwordtextbox;
	private: System::Windows::Forms::TextBox^ academicbox;
	private: System::Windows::Forms::TextBox^ gpabox;



	private: System::Windows::Forms::TextBox^ maxhoursbox;
	private: System::Windows::Forms::TextBox^ Inprogressbox;


	private: System::Windows::Forms::TextBox^ finishedbox;

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
			this->sname = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->passwordtextbox = (gcnew System::Windows::Forms::TextBox());
			this->academicbox = (gcnew System::Windows::Forms::TextBox());
			this->gpabox = (gcnew System::Windows::Forms::TextBox());
			this->maxhoursbox = (gcnew System::Windows::Forms::TextBox());
			this->Inprogressbox = (gcnew System::Windows::Forms::TextBox());
			this->finishedbox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lbUserInfo
			// 
			this->lbUserInfo->AutoSize = true;
			this->lbUserInfo->Location = System::Drawing::Point(12, 69);
			this->lbUserInfo->Name = L"lbUserInfo";
			this->lbUserInfo->Size = System::Drawing::Size(95, 16);
			this->lbUserInfo->TabIndex = 0;
			this->lbUserInfo->Text = L"Student Name:";
			this->lbUserInfo->Click += gcnew System::EventHandler(this, &StudentDataForm::lbUserInfo_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(215, 468);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 44);
			this->button1->TabIndex = 1;
			this->button1->Text = L"ADD";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StudentDataForm::button1_Click);
			// 
			// sname
			// 
			this->sname->Location = System::Drawing::Point(156, 63);
			this->sname->Name = L"sname";
			this->sname->Size = System::Drawing::Size(186, 22);
			this->sname->TabIndex = 2;
			this->sname->TextChanged += gcnew System::EventHandler(this, &StudentDataForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 113);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Password:";
			this->label1->Click += gcnew System::EventHandler(this, &StudentDataForm::lbUserInfo_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Academic Year:";
			this->label2->Click += gcnew System::EventHandler(this, &StudentDataForm::lbUserInfo_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 221);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 16);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Max Hours Allowed:";
			this->label3->Click += gcnew System::EventHandler(this, &StudentDataForm::lbUserInfo_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 323);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 16);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Finished Courses:";
			this->label4->Click += gcnew System::EventHandler(this, &StudentDataForm::lbUserInfo_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 279);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"GPA:";
			this->label5->Click += gcnew System::EventHandler(this, &StudentDataForm::lbUserInfo_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 361);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(131, 16);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Courses In Progress:";
			this->label6->Click += gcnew System::EventHandler(this, &StudentDataForm::lbUserInfo_Click);
			// 
			// passwordtextbox
			// 
			this->passwordtextbox->Location = System::Drawing::Point(156, 107);
			this->passwordtextbox->Name = L"passwordtextbox";
			this->passwordtextbox->Size = System::Drawing::Size(186, 22);
			this->passwordtextbox->TabIndex = 2;
			// 
			// academicbox
			// 
			this->academicbox->Location = System::Drawing::Point(156, 163);
			this->academicbox->Name = L"academicbox";
			this->academicbox->Size = System::Drawing::Size(186, 22);
			this->academicbox->TabIndex = 2;
			// 
			// gpabox
			// 
			this->gpabox->Location = System::Drawing::Point(156, 273);
			this->gpabox->Name = L"gpabox";
			this->gpabox->Size = System::Drawing::Size(186, 22);
			this->gpabox->TabIndex = 2;
			// 
			// maxhoursbox
			// 
			this->maxhoursbox->Location = System::Drawing::Point(156, 221);
			this->maxhoursbox->Name = L"maxhoursbox";
			this->maxhoursbox->Size = System::Drawing::Size(186, 22);
			this->maxhoursbox->TabIndex = 2;
			// 
			// Inprogressbox
			// 
			this->Inprogressbox->Location = System::Drawing::Point(156, 358);
			this->Inprogressbox->Name = L"Inprogressbox";
			this->Inprogressbox->Size = System::Drawing::Size(186, 22);
			this->Inprogressbox->TabIndex = 2;
			// 
			// finishedbox
			// 
			this->finishedbox->Location = System::Drawing::Point(156, 317);
			this->finishedbox->Name = L"finishedbox";
			this->finishedbox->Size = System::Drawing::Size(186, 22);
			this->finishedbox->TabIndex = 2;
			// 
			// StudentDataForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(699, 534);
			this->Controls->Add(this->finishedbox);
			this->Controls->Add(this->Inprogressbox);
			this->Controls->Add(this->maxhoursbox);
			this->Controls->Add(this->gpabox);
			this->Controls->Add(this->academicbox);
			this->Controls->Add(this->passwordtextbox);
			this->Controls->Add(this->sname);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
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

		// get student data from text boxes
		String^ Studentname  = sname->Text;
		String^ password = passwordtextbox->Text;
		int academicyear,maxhoursallowed;
		float gpa;
		int isacademicyearValid = int::TryParse(academicbox->Text, academicyear);
		int isMaxhoursValid = int::TryParse(maxhoursbox->Text, maxhoursallowed);
		float isGPAValid = float::TryParse(gpabox->Text, gpa);

		String^ finishedcourses = finishedbox->Text;
	
		cli::array<String^>^ finishedArray = finishedcourses->Split(',');
		List<String^>^ finishedList = gcnew List<String^>();

		for each (String ^ j in finishedArray) {
			finishedList->Add(j);
		}
		String^ inprogresscourses = Inprogressbox->Text;

		cli::array<String^>^ InProgressArray = inprogresscourses->Split(',');
		List<String^>^ InprogressList = gcnew List<String^>();

		for each (String ^ i in InProgressArray) {
			InprogressList->Add(i);
		}
	//	Admin::createStudent(Studentname, password, academicyear, maxhoursallowed, gpa, finishedList, InprogressList);
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
