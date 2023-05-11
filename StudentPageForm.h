#pragma once
#include "Student.h"
#include "Login.h"
#include "Admin.h"
#include<string>
#include<fstream>
#include<iostream>
#include "courselistitem.h"
#include "courseButton.h"
//
//inline void viewAvCourses(Student^ stud);


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
			this->stud = stud;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Panel^ sideBar;
	protected:

	protected:
	private: System::Windows::Forms::Panel^ pnlbuttons;
	private: System::Windows::Forms::Button^ btnCourseInProgress;





	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btnCourseGrade;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnFilter;
	private: System::Windows::Forms::Button^ btnregister;

	private: System::Windows::Forms::Panel^ PnlOfFilter;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ pnlOfCourseGrades;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ pnlOfDetailsOfCourse;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ pnlOfCoursesInProgress;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ pnlOfregCourse;

	private: System::Windows::Forms::Label^ reglb;

	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ Header;




	private: System::Windows::Forms::Panel^ panel11;


	private: System::Windows::Forms::Panel^ panel10;


	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ btnDetailsOfCourse;
	private: System::Windows::Forms::Panel^ pnlOfPanels;

	private: System::Windows::Forms::Timer^ sideBarTimer;
	private: System::Windows::Forms::Button^ btnMenu;
	private: System::Windows::Forms::Panel^ mstPanel;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;

	private: System::Windows::Forms::Timer^ dropdowntimer;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Timer^ dropdowndet;
	private: System::Windows::Forms::Button^ savebt;






	private: System::ComponentModel::IContainer^ components;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
	public:

		void viewAvCourses()
		{
			if (this->stud->CoursesAV() == nullptr)
				this->label1->Text = "no";
			else {
				List<String^>^ Av = this->stud->CoursesAV();
				this->label1->Text = Av[0];
			}
		}
		




		void viewAllHisCourses() {/*
			6. View all his / her courses.
				- just view the courses name, it's hours , code and instructor*/
			stud->getCoursesINProgress();

		}
		void viewAllCoursesGradeCGpa() {
			/*7. View his / her courses grades and cumulative GPA.
				- view each course name, grade and finaly CGPA*/


		}






		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->sideBar = (gcnew System::Windows::Forms::Panel());
			this->btnMenu = (gcnew System::Windows::Forms::Button());
			this->pnlbuttons = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->btnDetailsOfCourse = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->btnCourseInProgress = (gcnew System::Windows::Forms::Button());
			this->btnregister = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnCourseGrade = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnFilter = (gcnew System::Windows::Forms::Button());
			this->PnlOfFilter = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pnlOfCourseGrades = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pnlOfDetailsOfCourse = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pnlOfCoursesInProgress = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pnlOfregCourse = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->reglb = (gcnew System::Windows::Forms::Label());
			this->Header = (gcnew System::Windows::Forms::Panel());
			this->pnlOfPanels = (gcnew System::Windows::Forms::Panel());
			this->sideBarTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->mstPanel = (gcnew System::Windows::Forms::Panel());
			this->dropdowntimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->dropdowndet = (gcnew System::Windows::Forms::Timer(this->components));
			this->savebt = (gcnew System::Windows::Forms::Button());
			this->sideBar->SuspendLayout();
			this->pnlbuttons->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->PnlOfFilter->SuspendLayout();
			this->pnlOfCourseGrades->SuspendLayout();
			this->pnlOfDetailsOfCourse->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->pnlOfCoursesInProgress->SuspendLayout();
			this->pnlOfregCourse->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->pnlOfPanels->SuspendLayout();
			this->mstPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// sideBar
			// 
			this->sideBar->AllowDrop = true;
			this->sideBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->sideBar->Controls->Add(this->btnMenu);
			this->sideBar->Controls->Add(this->pnlbuttons);
			this->sideBar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->sideBar->Location = System::Drawing::Point(-1, 0);
			this->sideBar->MaximumSize = System::Drawing::Size(289, 521);
			this->sideBar->MinimumSize = System::Drawing::Size(66, 521);
			this->sideBar->Name = L"sideBar";
			this->sideBar->Size = System::Drawing::Size(289, 521);
			this->sideBar->TabIndex = 0;
			this->sideBar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::sideBar_Paint);
			// 
			// btnMenu
			// 
			this->btnMenu->Location = System::Drawing::Point(3, 39);
			this->btnMenu->Name = L"btnMenu";
			this->btnMenu->Size = System::Drawing::Size(33, 23);
			this->btnMenu->TabIndex = 3;
			this->btnMenu->Text = L"button2";
			this->btnMenu->UseVisualStyleBackColor = true;
			this->btnMenu->Click += gcnew System::EventHandler(this, &StudentPageForm::btnMenu_Click);
			// 
			// pnlbuttons
			// 
			this->pnlbuttons->BackColor = System::Drawing::Color::Transparent;
			this->pnlbuttons->Controls->Add(this->panel9);
			this->pnlbuttons->Controls->Add(this->panel7);
			this->pnlbuttons->Controls->Add(this->panel4);
			this->pnlbuttons->Controls->Add(this->btnDetailsOfCourse);
			this->pnlbuttons->Controls->Add(this->panel11);
			this->pnlbuttons->Controls->Add(this->panel10);
			this->pnlbuttons->Controls->Add(this->btnCourseInProgress);
			this->pnlbuttons->Controls->Add(this->btnregister);
			this->pnlbuttons->Controls->Add(this->panel3);
			this->pnlbuttons->Controls->Add(this->panel2);
			this->pnlbuttons->Location = System::Drawing::Point(0, 140);
			this->pnlbuttons->Name = L"pnlbuttons";
			this->pnlbuttons->Size = System::Drawing::Size(289, 277);
			this->pnlbuttons->TabIndex = 0;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::White;
			this->panel9->Location = System::Drawing::Point(0, 74);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(7, 41);
			this->panel9->TabIndex = 4;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->Location = System::Drawing::Point(0, 24);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(7, 41);
			this->panel7->TabIndex = 2;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::panel7_Paint);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(0, 121);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(7, 41);
			this->panel4->TabIndex = 8;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::panel4_Paint);
			// 
			// btnDetailsOfCourse
			// 
			this->btnDetailsOfCourse->AutoSize = true;
			this->btnDetailsOfCourse->FlatAppearance->BorderSize = 0;
			this->btnDetailsOfCourse->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->btnDetailsOfCourse->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gainsboro;
			this->btnDetailsOfCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDetailsOfCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->btnDetailsOfCourse->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnDetailsOfCourse->Location = System::Drawing::Point(9, 121);
			this->btnDetailsOfCourse->Name = L"btnDetailsOfCourse";
			this->btnDetailsOfCourse->Size = System::Drawing::Size(277, 41);
			this->btnDetailsOfCourse->TabIndex = 7;
			this->btnDetailsOfCourse->Text = L"Courses Details";
			this->btnDetailsOfCourse->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDetailsOfCourse->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnDetailsOfCourse->UseVisualStyleBackColor = true;
			this->btnDetailsOfCourse->Click += gcnew System::EventHandler(this, &StudentPageForm::btnDetailsOfCourse_Click_1);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::White;
			this->panel11->Location = System::Drawing::Point(0, 215);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(7, 41);
			this->panel11->TabIndex = 6;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::White;
			this->panel10->Location = System::Drawing::Point(0, 168);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(7, 41);
			this->panel10->TabIndex = 5;
			// 
			// btnCourseInProgress
			// 
			this->btnCourseInProgress->AutoSize = true;
			this->btnCourseInProgress->FlatAppearance->BorderSize = 0;
			this->btnCourseInProgress->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->btnCourseInProgress->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gainsboro;
			this->btnCourseInProgress->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCourseInProgress->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->btnCourseInProgress->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnCourseInProgress->Location = System::Drawing::Point(9, 168);
			this->btnCourseInProgress->Name = L"btnCourseInProgress";
			this->btnCourseInProgress->Size = System::Drawing::Size(280, 41);
			this->btnCourseInProgress->TabIndex = 0;
			this->btnCourseInProgress->Text = L"Courses in Progress";
			this->btnCourseInProgress->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCourseInProgress->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnCourseInProgress->UseVisualStyleBackColor = true;
			this->btnCourseInProgress->Click += gcnew System::EventHandler(this, &StudentPageForm::btnCourseInProgress_Click);
			// 
			// btnregister
			// 
			this->btnregister->AutoSize = true;
			this->btnregister->FlatAppearance->BorderSize = 0;
			this->btnregister->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->btnregister->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gainsboro;
			this->btnregister->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnregister->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->btnregister->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnregister->Location = System::Drawing::Point(3, 215);
			this->btnregister->Name = L"btnregister";
			this->btnregister->Size = System::Drawing::Size(286, 41);
			this->btnregister->TabIndex = 4;
			this->btnregister->Text = L" Register Course";
			this->btnregister->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnregister->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnregister->UseVisualStyleBackColor = true;
			this->btnregister->Click += gcnew System::EventHandler(this, &StudentPageForm::btnGPA_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->btnCourseGrade);
			this->panel3->Location = System::Drawing::Point(3, 77);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(255, 38);
			this->panel3->TabIndex = 1;
			// 
			// btnCourseGrade
			// 
			this->btnCourseGrade->AutoSize = true;
			this->btnCourseGrade->FlatAppearance->BorderSize = 0;
			this->btnCourseGrade->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->btnCourseGrade->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gainsboro;
			this->btnCourseGrade->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCourseGrade->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->btnCourseGrade->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnCourseGrade->Location = System::Drawing::Point(3, -6);
			this->btnCourseGrade->Name = L"btnCourseGrade";
			this->btnCourseGrade->Size = System::Drawing::Size(283, 44);
			this->btnCourseGrade->TabIndex = 0;
			this->btnCourseGrade->Text = L"Courses Grades";
			this->btnCourseGrade->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCourseGrade->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnCourseGrade->UseVisualStyleBackColor = true;
			this->btnCourseGrade->Click += gcnew System::EventHandler(this, &StudentPageForm::btnCourseGrade_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->btnFilter);
			this->panel2->Location = System::Drawing::Point(0, 27);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(286, 38);
			this->panel2->TabIndex = 0;
			// 
			// btnFilter
			// 
			this->btnFilter->AutoSize = true;
			this->btnFilter->FlatAppearance->BorderSize = 0;
			this->btnFilter->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->btnFilter->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gainsboro;
			this->btnFilter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFilter->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->btnFilter->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnFilter->Location = System::Drawing::Point(9, -3);
			this->btnFilter->Name = L"btnFilter";
			this->btnFilter->Size = System::Drawing::Size(280, 41);
			this->btnFilter->TabIndex = 0;
			this->btnFilter->Text = L"Filter Courses";
			this->btnFilter->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnFilter->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnFilter->UseCompatibleTextRendering = true;
			this->btnFilter->UseVisualStyleBackColor = true;
			this->btnFilter->Click += gcnew System::EventHandler(this, &StudentPageForm::btnFilter_Click);
			// 
			// PnlOfFilter
			// 
			this->PnlOfFilter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->PnlOfFilter->Controls->Add(this->label1);
			this->PnlOfFilter->Location = System::Drawing::Point(228, 3);
			this->PnlOfFilter->Name = L"PnlOfFilter";
			this->PnlOfFilter->Size = System::Drawing::Size(655, 444);
			this->PnlOfFilter->TabIndex = 1;
			this->PnlOfFilter->UseWaitCursor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->label1->Location = System::Drawing::Point(-3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Filter";
			this->label1->UseWaitCursor = true;
			this->label1->Click += gcnew System::EventHandler(this, &StudentPageForm::label1_Click_1);
			// 
			// pnlOfCourseGrades
			// 
			this->pnlOfCourseGrades->Controls->Add(this->label2);
			this->pnlOfCourseGrades->Location = System::Drawing::Point(231, 0);
			this->pnlOfCourseGrades->Name = L"pnlOfCourseGrades";
			this->pnlOfCourseGrades->Size = System::Drawing::Size(649, 447);
			this->pnlOfCourseGrades->TabIndex = 2;
			this->pnlOfCourseGrades->UseWaitCursor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->label2->Location = System::Drawing::Point(-3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"CourseGrades";
			this->label2->UseWaitCursor = true;
			// 
			// pnlOfDetailsOfCourse
			// 
			this->pnlOfDetailsOfCourse->Controls->Add(this->savebt);
			this->pnlOfDetailsOfCourse->Controls->Add(this->flowLayoutPanel3);
			this->pnlOfDetailsOfCourse->Controls->Add(this->label3);
			this->pnlOfDetailsOfCourse->Location = System::Drawing::Point(228, 0);
			this->pnlOfDetailsOfCourse->Name = L"pnlOfDetailsOfCourse";
			this->pnlOfDetailsOfCourse->Size = System::Drawing::Size(655, 448);
			this->pnlOfDetailsOfCourse->TabIndex = 3;
			this->pnlOfDetailsOfCourse->UseWaitCursor = true;
			this->pnlOfDetailsOfCourse->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::pnlOfDetailsOfCourse_Paint);
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->Controls->Add(this->button2);
			this->flowLayoutPanel3->Location = System::Drawing::Point(257, 55);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(240, 34);
			this->flowLayoutPanel3->TabIndex = 3;
			this->flowLayoutPanel3->UseWaitCursor = true;
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->Location = System::Drawing::Point(3, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(219, 30);
			this->button2->TabIndex = 3;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->UseWaitCursor = true;
			this->button2->Click += gcnew System::EventHandler(this, &StudentPageForm::button2_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->label3->Location = System::Drawing::Point(-3, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 16);
			this->label3->TabIndex = 1;
			this->label3->Text = L"DetailsOfCpurse";
			this->label3->UseWaitCursor = true;
			// 
			// pnlOfCoursesInProgress
			// 
			this->pnlOfCoursesInProgress->Controls->Add(this->label4);
			this->pnlOfCoursesInProgress->Controls->Add(this->flowLayoutPanel1);
			this->pnlOfCoursesInProgress->Dock = System::Windows::Forms::DockStyle::Right;
			this->pnlOfCoursesInProgress->Location = System::Drawing::Point(228, 0);
			this->pnlOfCoursesInProgress->Name = L"pnlOfCoursesInProgress";
			this->pnlOfCoursesInProgress->Size = System::Drawing::Size(652, 448);
			this->pnlOfCoursesInProgress->TabIndex = 4;
			this->pnlOfCoursesInProgress->UseWaitCursor = true;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->label4->Location = System::Drawing::Point(19, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 16);
			this->label4->TabIndex = 1;
			this->label4->Text = L"CoursesInProgress";
			this->label4->UseWaitCursor = true;
			this->label4->Click += gcnew System::EventHandler(this, &StudentPageForm::label4_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Location = System::Drawing::Point(182, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(472, 447);
			this->flowLayoutPanel1->TabIndex = 2;
			this->flowLayoutPanel1->UseWaitCursor = true;
			// 
			// pnlOfregCourse
			// 
			this->pnlOfregCourse->Controls->Add(this->flowLayoutPanel2);
			this->pnlOfregCourse->Controls->Add(this->reglb);
			this->pnlOfregCourse->Location = System::Drawing::Point(228, 0);
			this->pnlOfregCourse->Name = L"pnlOfregCourse";
			this->pnlOfregCourse->Size = System::Drawing::Size(655, 447);
			this->pnlOfregCourse->TabIndex = 5;
			this->pnlOfregCourse->UseWaitCursor = true;
			this->pnlOfregCourse->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::pnlOfregCourse_Paint);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->button1);
			this->flowLayoutPanel2->Location = System::Drawing::Point(284, 40);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(240, 34);
			this->flowLayoutPanel2->TabIndex = 2;
			this->flowLayoutPanel2->UseWaitCursor = true;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(219, 30);
			this->button1->TabIndex = 3;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->UseWaitCursor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StudentPageForm::button1_Click_1);
			// 
			// reglb
			// 
			this->reglb->AutoSize = true;
			this->reglb->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->reglb->Location = System::Drawing::Point(3, 0);
			this->reglb->Name = L"reglb";
			this->reglb->Size = System::Drawing::Size(95, 16);
			this->reglb->TabIndex = 1;
			this->reglb->Text = L"registerCourse";
			this->reglb->UseWaitCursor = true;
			// 
			// Header
			// 
			this->Header->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->Header->Dock = System::Windows::Forms::DockStyle::Top;
			this->Header->Location = System::Drawing::Point(0, 0);
			this->Header->Name = L"Header";
			this->Header->Size = System::Drawing::Size(878, 67);
			this->Header->TabIndex = 6;
			this->Header->UseWaitCursor = true;
			this->Header->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::Header_Paint);
			// 
			// pnlOfPanels
			// 
			this->pnlOfPanels->Controls->Add(this->pnlOfDetailsOfCourse);
			this->pnlOfPanels->Controls->Add(this->pnlOfCoursesInProgress);
			this->pnlOfPanels->Controls->Add(this->pnlOfregCourse);
			this->pnlOfPanels->Controls->Add(this->pnlOfCourseGrades);
			this->pnlOfPanels->Controls->Add(this->PnlOfFilter);
			this->pnlOfPanels->Location = System::Drawing::Point(-5, 73);
			this->pnlOfPanels->Name = L"pnlOfPanels";
			this->pnlOfPanels->Size = System::Drawing::Size(880, 448);
			this->pnlOfPanels->TabIndex = 2;
			this->pnlOfPanels->UseWaitCursor = true;
			// 
			// sideBarTimer
			// 
			this->sideBarTimer->Interval = 10;
			this->sideBarTimer->Tick += gcnew System::EventHandler(this, &StudentPageForm::sideBarTimer_Tick);
			// 
			// mstPanel
			// 
			this->mstPanel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->mstPanel->AutoSize = true;
			this->mstPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->mstPanel->Controls->Add(this->pnlOfPanels);
			this->mstPanel->Controls->Add(this->Header);
			this->mstPanel->Location = System::Drawing::Point(68, 0);
			this->mstPanel->MaximumSize = System::Drawing::Size(900, 520);
			this->mstPanel->MinimumSize = System::Drawing::Size(654, 520);
			this->mstPanel->Name = L"mstPanel";
			this->mstPanel->Size = System::Drawing::Size(878, 520);
			this->mstPanel->TabIndex = 2;
			this->mstPanel->UseWaitCursor = true;
			this->mstPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::mstPanel_Paint);
			// 
			// dropdowntimer
			// 
			this->dropdowntimer->Tick += gcnew System::EventHandler(this, &StudentPageForm::dropdowntimer_Tick);
			// 
			// dropdowndet
			// 
			this->dropdowndet->Tick += gcnew System::EventHandler(this, &StudentPageForm::dropdowndet_Tick);
			// 
			// savebt
			// 
			this->savebt->Location = System::Drawing::Point(81, 315);
			this->savebt->Name = L"savebt";
			this->savebt->Size = System::Drawing::Size(146, 56);
			this->savebt->TabIndex = 4;
			this->savebt->Text = L"save";
			this->savebt->UseVisualStyleBackColor = true;
			// 
			// StudentPageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(944, 520);
			this->Controls->Add(this->sideBar);
			this->Controls->Add(this->mstPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"StudentPageForm";
			this->Text = L"StudentPageForm";
			this->Load += gcnew System::EventHandler(this, &StudentPageForm::StudentPageForm_Load);
			this->sideBar->ResumeLayout(false);
			this->pnlbuttons->ResumeLayout(false);
			this->pnlbuttons->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->PnlOfFilter->ResumeLayout(false);
			this->PnlOfFilter->PerformLayout();
			this->pnlOfCourseGrades->ResumeLayout(false);
			this->pnlOfCourseGrades->PerformLayout();
			this->pnlOfDetailsOfCourse->ResumeLayout(false);
			this->pnlOfDetailsOfCourse->PerformLayout();
			this->flowLayoutPanel3->ResumeLayout(false);
			this->pnlOfCoursesInProgress->ResumeLayout(false);
			this->pnlOfCoursesInProgress->PerformLayout();
			this->pnlOfregCourse->ResumeLayout(false);
			this->pnlOfregCourse->PerformLayout();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->pnlOfPanels->ResumeLayout(false);
			this->mstPanel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: bool loggedOut = false;

	private: System::Void StudentPageForm_Load(System::Object^ sender, System::EventArgs^ e) {
		populateItems();
	}




	private:void populateItems()
	{

		//List<courselistitem^>^ clist = gcnew List<courselistitem^>(Course::allCourses->Count);
		// loop through each item
		for (int i = 0; i < Course::allCourses->Count; i++)
		{

			courselistitem^ temp= gcnew courselistitem;
			temp->setName(Course::allCourses[i]->getName());
			temp->setCode(Course::allCourses[i]->getCode());
			temp->setInstructor(Course::allCourses[i]->getInstructor());
			temp->setIsRequirement(Course::allCourses[i]->getIsRequirement());
			temp->setName(Course::allCourses[i]->getName());
			temp->setMaxNumberOfStudents(Course::allCourses[i]->getMaxNumberOfStudents());
			


			flowLayoutPanel1->Controls->Add(temp);
		}/*
		List<courseButton^>^ clist2 = gcnew List<courseButton^>(Course::allCourses->Count);*/
		for (int i = 0; i < Course::allCourses->Count; i++)
		{
			courseButton^ temp = gcnew courseButton;

			temp->setCourseName(Course::allCourses[i]->getName());
			



			flowLayoutPanel2->Controls->Add(temp);

		}
		for (int i = 0; i < Course::allCourses->Count; i++)
		{
			courseButton^ temp = gcnew courseButton;

			temp->setCourseName(Course::allCourses[i]->getName());
			



			flowLayoutPanel3->Controls->Add(temp);

		}

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();

	}
	private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnFilter_Click(System::Object^ sender, System::EventArgs^ e) {
		sideBarTimer->Start();
		PnlOfFilter->Visible = true;
		pnlOfDetailsOfCourse->Visible = false;
		pnlOfCoursesInProgress->Visible = false;
		pnlOfCourseGrades->Visible = false;
		pnlOfregCourse->Visible = false;

	}

	private: System::Void btnCourseInProgress_Click(System::Object^ sender, System::EventArgs^ e) {
		sideBarTimer->Start();
		PnlOfFilter->Visible = false;
		pnlOfDetailsOfCourse->Visible = false;
		pnlOfCoursesInProgress->Visible = true;
		pnlOfCourseGrades->Visible = false;
		pnlOfregCourse->Visible = false;
	}
	private: System::Void btnCourseGrade_Click(System::Object^ sender, System::EventArgs^ e) {
		sideBarTimer->Start();
		PnlOfFilter->Visible = false;
		pnlOfDetailsOfCourse->Visible = false;
		pnlOfCoursesInProgress->Visible = false;
		pnlOfCourseGrades->Visible = true;
		pnlOfregCourse->Visible = false;
	}
	private: System::Void btnDetailsOfCourse_Click(System::Object^ sender, System::EventArgs^ e) {
		sideBarTimer->Start();
		PnlOfFilter->Visible = false;
		pnlOfDetailsOfCourse->Visible = true;
		pnlOfCoursesInProgress->Visible = false;
		pnlOfCourseGrades->Visible = false;
		pnlOfregCourse->Visible = false;
	}
	private: System::Void btnGPA_Click(System::Object^ sender, System::EventArgs^ e) {
		sideBarTimer->Start();

		PnlOfFilter->Visible = false;
		pnlOfDetailsOfCourse->Visible = false;
		pnlOfCoursesInProgress->Visible = false;
		pnlOfCourseGrades->Visible = false;
		pnlOfregCourse->Visible = true;
	}


	private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnDetailsOfCourse_Click_1(System::Object^ sender, System::EventArgs^ e) {
		sideBarTimer->Start();
		PnlOfFilter->Visible = false;
		pnlOfDetailsOfCourse->Visible = true;
		pnlOfCoursesInProgress->Visible = false;
		pnlOfCourseGrades->Visible = false;
		pnlOfregCourse->Visible = false;
	}
		   bool sideBarExpand;
	private: System::Void sideBarTimer_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		if (sideBarExpand) {
			sideBar->Width -= 20;
			if (sideBar->Width == sideBar->MinimumSize.Width) {
				sideBarExpand = false;
				sideBarTimer->Stop();
			}
		}
		else
		{
			sideBar->Width += 20;
			if(sideBar->Width == sideBar->MaximumSize.Width)
			{
				sideBarExpand = true;
				sideBarTimer->Stop();
			}
		}
	}
private: System::Void btnMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	sideBarTimer->Start();


	
}
	  
private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Header_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void sideBar_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pnlOfregCourse_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void selectlb_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
	   bool expandd = false;
private: System::Void dropdowntimer_Tick(System::Object^ sender, System::EventArgs^ e) {
	
	if (!expandd)
	{
		flowLayoutPanel2->Height += 15;
		if (flowLayoutPanel2->Height >= Course::allCourses->Count * 35) {
			dropdowntimer->Stop();
			expandd = true;
		}
	}

	else {
		flowLayoutPanel2->Height -= 15;
		if (flowLayoutPanel2->Height <= 30)
		{
			dropdowntimer->Stop();
			expandd = false;
		}

	}
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

	dropdowntimer->Start();
}
private: System::Void mstPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	dropdowndet->Start();
}
	   bool expand3 = false;
private: System::Void dropdowndet_Tick(System::Object^ sender, System::EventArgs^ e) {

	if (!expand3)
	{
		flowLayoutPanel3->Height += 15;
		if (flowLayoutPanel3->Height >= Course::allCourses->Count * 35) {
			dropdowndet->Stop();
			expand3 = true;
		}
	}

	else {
		flowLayoutPanel3->Height -= 15;
		if (flowLayoutPanel3->Height <= 30)
		{
			dropdowndet->Stop();
			expand3 = false;
		}

	}
}

private: System::Void pnlOfDetailsOfCourse_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
};


