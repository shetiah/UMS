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
	private:Student^ student=gcnew Student;
	public:
		StudentPageForm(Student^ stud)
		{
			
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->student = stud;
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

	private: System::Windows::Forms::Panel^ pnlOfCoursesInProgress;

	private: System::Windows::Forms::Panel^ pnlOfregCourse;

	private: System::Windows::Forms::Label^ reglb;














	private: System::Windows::Forms::Button^ btnDetailsOfCourse;
	private: System::Windows::Forms::Panel^ pnlOfPanels;

	private: System::Windows::Forms::Timer^ sideBarTimer;

	private: System::Windows::Forms::Panel^ mstPanel;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;

	private: System::Windows::Forms::Timer^ dropdowntimer;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;

	private: System::Windows::Forms::Timer^ dropdowndet;
	private: System::Windows::Forms::Button^ savebt;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
private: System::Windows::Forms::Panel^ coursesinprogHeaderpnl;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Panel^ panel1;

private: System::Windows::Forms::PictureBox^ pictureBox13;
private: System::Windows::Forms::PictureBox^ pictureBox16;
private: System::Windows::Forms::PictureBox^ pictureBox25;
private: System::Windows::Forms::PictureBox^ pictureBox32;
private: System::Windows::Forms::PictureBox^ pictureBox31;
private: System::Windows::Forms::PictureBox^ pictureBox30;
private: System::Windows::Forms::PictureBox^ pictureBox29;
private: System::Windows::Forms::PictureBox^ pictureBox28;
private: System::Windows::Forms::PictureBox^ pictureBox27;
private: System::Windows::Forms::PictureBox^ pictureBox26;
private: System::Windows::Forms::PictureBox^ pictureBox24;
private: System::Windows::Forms::PictureBox^ pictureBox23;
private: System::Windows::Forms::PictureBox^ pictureBox22;
private: System::Windows::Forms::PictureBox^ pictureBox21;
private: System::Windows::Forms::PictureBox^ pictureBox20;
private: System::Windows::Forms::PictureBox^ pictureBox19;
private: System::Windows::Forms::PictureBox^ pictureBox14;
private: System::Windows::Forms::PictureBox^ pictureBox43;
private: System::Windows::Forms::PictureBox^ pictureBox42;
private: System::Windows::Forms::PictureBox^ pictureBox41;
private: System::Windows::Forms::PictureBox^ pictureBox40;
private: System::Windows::Forms::PictureBox^ pictureBox39;
private: System::Windows::Forms::PictureBox^ pictureBox38;
private: System::Windows::Forms::PictureBox^ pictureBox37;
private: System::Windows::Forms::PictureBox^ pictureBox36;
private: System::Windows::Forms::PictureBox^ pictureBox35;
private: System::Windows::Forms::PictureBox^ pictureBox34;
private: System::Windows::Forms::PictureBox^ pictureBox33;
private: System::Windows::Forms::FlowLayoutPanel^ flwpnldetCourse;
private: System::Windows::Forms::Button^ viewbt;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ logoutbt;
private: System::Windows::Forms::Button^ Exit;
private: System::Windows::Forms::FlowLayoutPanel^ filterflowlytpnl;




private: System::Windows::Forms::Button^ Selectbt;
private: System::Windows::Forms::Button^ finishcsbt;
private: System::Windows::Forms::Button^ AvailableCoursesbt;
private: System::Windows::Forms::Button^ RequiredCoursesbt;
private: System::Windows::Forms::Button^ ElectiveCoursesBt;
private: System::Windows::Forms::Button^ CoursesInProgressbt;
private: System::Windows::Forms::Timer^ filterTimer;
private: System::Windows::Forms::FlowLayoutPanel^ coursesviewFilterCourses;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;
private: System::Windows::Forms::Button^ viewerbt;
private: System::Windows::Forms::Button^ slctLB;
private: System::Windows::Forms::Timer^ selectCoursetimer;




























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
			if (this->student->CoursesAV() == nullptr)
				this->label1->Text = "no";
			else {
				List<String^>^ Av = this->student->CoursesAV();
				this->label1->Text = Av[0];
			}
		}
		




		void viewAllHisCourses() {/*
			6. View all his / her courses.
				- just view the courses name, it's hours , code and instructor*/
			student->getCoursesINProgress();

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentPageForm::typeid));
			this->sideBar = (gcnew System::Windows::Forms::Panel());
			this->logoutbt = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pnlbuttons = (gcnew System::Windows::Forms::Panel());
			this->btnregister = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnCourseGrade = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnFilter = (gcnew System::Windows::Forms::Button());
			this->btnDetailsOfCourse = (gcnew System::Windows::Forms::Button());
			this->btnCourseInProgress = (gcnew System::Windows::Forms::Button());
			this->PnlOfFilter = (gcnew System::Windows::Forms::Panel());
			this->viewerbt = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->slctLB = (gcnew System::Windows::Forms::Button());
			this->coursesviewFilterCourses = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->filterflowlytpnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Selectbt = (gcnew System::Windows::Forms::Button());
			this->finishcsbt = (gcnew System::Windows::Forms::Button());
			this->AvailableCoursesbt = (gcnew System::Windows::Forms::Button());
			this->RequiredCoursesbt = (gcnew System::Windows::Forms::Button());
			this->ElectiveCoursesBt = (gcnew System::Windows::Forms::Button());
			this->CoursesInProgressbt = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pnlOfCourseGrades = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pnlOfDetailsOfCourse = (gcnew System::Windows::Forms::Panel());
			this->viewbt = (gcnew System::Windows::Forms::Button());
			this->flwpnldetCourse = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pnlOfCoursesInProgress = (gcnew System::Windows::Forms::Panel());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->coursesinprogHeaderpnl = (gcnew System::Windows::Forms::Panel());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pnlOfregCourse = (gcnew System::Windows::Forms::Panel());
			this->savebt = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->reglb = (gcnew System::Windows::Forms::Label());
			this->pnlOfPanels = (gcnew System::Windows::Forms::Panel());
			this->sideBarTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->mstPanel = (gcnew System::Windows::Forms::Panel());
			this->dropdowntimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->dropdowndet = (gcnew System::Windows::Forms::Timer(this->components));
			this->filterTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->selectCoursetimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->sideBar->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->pnlbuttons->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->PnlOfFilter->SuspendLayout();
			this->flowLayoutPanel4->SuspendLayout();
			this->filterflowlytpnl->SuspendLayout();
			this->pnlOfCourseGrades->SuspendLayout();
			this->pnlOfDetailsOfCourse->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->pnlOfCoursesInProgress->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			this->coursesinprogHeaderpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
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
			this->sideBar->Controls->Add(this->logoutbt);
			this->sideBar->Controls->Add(this->Exit);
			this->sideBar->Controls->Add(this->panel1);
			this->sideBar->Controls->Add(this->pnlbuttons);
			this->sideBar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->sideBar->Location = System::Drawing::Point(-1, 0);
			this->sideBar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sideBar->MaximumSize = System::Drawing::Size(289, 521);
			this->sideBar->MinimumSize = System::Drawing::Size(67, 521);
			this->sideBar->Name = L"sideBar";
			this->sideBar->Size = System::Drawing::Size(289, 521);
			this->sideBar->TabIndex = 0;
			this->sideBar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::sideBar_Paint);
			// 
			// logoutbt
			// 
			this->logoutbt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->logoutbt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->logoutbt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logoutbt->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->logoutbt->ForeColor = System::Drawing::Color::Tan;
			this->logoutbt->Location = System::Drawing::Point(13, 463);
			this->logoutbt->Name = L"logoutbt";
			this->logoutbt->Size = System::Drawing::Size(119, 45);
			this->logoutbt->TabIndex = 7;
			this->logoutbt->Text = L"Log out";
			this->logoutbt->UseVisualStyleBackColor = false;
			// 
			// Exit
			// 
			this->Exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->Exit->ForeColor = System::Drawing::Color::Tan;
			this->Exit->Location = System::Drawing::Point(196, 465);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(89, 45);
			this->Exit->TabIndex = 6;
			this->Exit->Text = L"Exit";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &StudentPageForm::Exit_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox13);
			this->panel1->Controls->Add(this->pictureBox16);
			this->panel1->Location = System::Drawing::Point(0, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(63, 138);
			this->panel1->TabIndex = 4;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(-3, 15);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(61, 62);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 4;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(9, 60);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(39, 75);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox16->TabIndex = 6;
			this->pictureBox16->TabStop = false;
			// 
			// pnlbuttons
			// 
			this->pnlbuttons->BackColor = System::Drawing::Color::Transparent;
			this->pnlbuttons->Controls->Add(this->btnregister);
			this->pnlbuttons->Controls->Add(this->panel3);
			this->pnlbuttons->Controls->Add(this->panel2);
			this->pnlbuttons->Controls->Add(this->btnDetailsOfCourse);
			this->pnlbuttons->Controls->Add(this->btnCourseInProgress);
			this->pnlbuttons->Location = System::Drawing::Point(0, 140);
			this->pnlbuttons->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlbuttons->Name = L"pnlbuttons";
			this->pnlbuttons->Size = System::Drawing::Size(289, 277);
			this->pnlbuttons->TabIndex = 0;
			// 
			// btnregister
			// 
			this->btnregister->AutoSize = true;
			this->btnregister->FlatAppearance->BorderSize = 0;
			this->btnregister->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->btnregister->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSlateGray;
			this->btnregister->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnregister->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->btnregister->ForeColor = System::Drawing::Color::Tan;
			this->btnregister->Location = System::Drawing::Point(3, 215);
			this->btnregister->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnregister->Name = L"btnregister";
			this->btnregister->Size = System::Drawing::Size(285, 43);
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
			this->panel3->Location = System::Drawing::Point(3, 78);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(255, 38);
			this->panel3->TabIndex = 1;
			// 
			// btnCourseGrade
			// 
			this->btnCourseGrade->AutoSize = true;
			this->btnCourseGrade->FlatAppearance->BorderSize = 0;
			this->btnCourseGrade->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->btnCourseGrade->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSlateGray;
			this->btnCourseGrade->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCourseGrade->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->btnCourseGrade->ForeColor = System::Drawing::Color::Tan;
			this->btnCourseGrade->Location = System::Drawing::Point(3, -6);
			this->btnCourseGrade->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(285, 38);
			this->panel2->TabIndex = 0;
			// 
			// btnFilter
			// 
			this->btnFilter->AutoSize = true;
			this->btnFilter->FlatAppearance->BorderSize = 0;
			this->btnFilter->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->btnFilter->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSlateGray;
			this->btnFilter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFilter->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->btnFilter->ForeColor = System::Drawing::Color::Tan;
			this->btnFilter->Location = System::Drawing::Point(9, -2);
			this->btnFilter->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnFilter->Name = L"btnFilter";
			this->btnFilter->Size = System::Drawing::Size(280, 46);
			this->btnFilter->TabIndex = 0;
			this->btnFilter->Text = L"Filter Courses";
			this->btnFilter->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnFilter->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnFilter->UseCompatibleTextRendering = true;
			this->btnFilter->UseVisualStyleBackColor = true;
			this->btnFilter->Click += gcnew System::EventHandler(this, &StudentPageForm::btnFilter_Click);
			// 
			// btnDetailsOfCourse
			// 
			this->btnDetailsOfCourse->AutoSize = true;
			this->btnDetailsOfCourse->FlatAppearance->BorderSize = 0;
			this->btnDetailsOfCourse->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->btnDetailsOfCourse->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSlateGray;
			this->btnDetailsOfCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDetailsOfCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->btnDetailsOfCourse->ForeColor = System::Drawing::Color::Tan;
			this->btnDetailsOfCourse->Location = System::Drawing::Point(9, 121);
			this->btnDetailsOfCourse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDetailsOfCourse->Name = L"btnDetailsOfCourse";
			this->btnDetailsOfCourse->Size = System::Drawing::Size(277, 43);
			this->btnDetailsOfCourse->TabIndex = 7;
			this->btnDetailsOfCourse->Text = L"Courses Details";
			this->btnDetailsOfCourse->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDetailsOfCourse->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnDetailsOfCourse->UseVisualStyleBackColor = true;
			this->btnDetailsOfCourse->Click += gcnew System::EventHandler(this, &StudentPageForm::btnDetailsOfCourse_Click_1);
			// 
			// btnCourseInProgress
			// 
			this->btnCourseInProgress->AutoSize = true;
			this->btnCourseInProgress->FlatAppearance->BorderSize = 0;
			this->btnCourseInProgress->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->btnCourseInProgress->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSlateGray;
			this->btnCourseInProgress->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCourseInProgress->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->btnCourseInProgress->ForeColor = System::Drawing::Color::Tan;
			this->btnCourseInProgress->Location = System::Drawing::Point(9, 167);
			this->btnCourseInProgress->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCourseInProgress->Name = L"btnCourseInProgress";
			this->btnCourseInProgress->Size = System::Drawing::Size(280, 43);
			this->btnCourseInProgress->TabIndex = 0;
			this->btnCourseInProgress->Text = L"Courses in Progress";
			this->btnCourseInProgress->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCourseInProgress->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnCourseInProgress->UseVisualStyleBackColor = true;
			this->btnCourseInProgress->Click += gcnew System::EventHandler(this, &StudentPageForm::btnCourseInProgress_Click);
			// 
			// PnlOfFilter
			// 
			this->PnlOfFilter->AutoScroll = true;
			this->PnlOfFilter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->PnlOfFilter->Controls->Add(this->viewerbt);
			this->PnlOfFilter->Controls->Add(this->flowLayoutPanel4);
			this->PnlOfFilter->Controls->Add(this->coursesviewFilterCourses);
			this->PnlOfFilter->Controls->Add(this->filterflowlytpnl);
			this->PnlOfFilter->Controls->Add(this->label1);
			this->PnlOfFilter->Location = System::Drawing::Point(228, 2);
			this->PnlOfFilter->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PnlOfFilter->Name = L"PnlOfFilter";
			this->PnlOfFilter->Size = System::Drawing::Size(655, 515);
			this->PnlOfFilter->TabIndex = 1;
			this->PnlOfFilter->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::PnlOfFilter_Paint);
			// 
			// viewerbt
			// 
			this->viewerbt->Location = System::Drawing::Point(414, 53);
			this->viewerbt->Name = L"viewerbt";
			this->viewerbt->Size = System::Drawing::Size(169, 38);
			this->viewerbt->TabIndex = 10;
			this->viewerbt->Text = L"view";
			this->viewerbt->UseVisualStyleBackColor = true;
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->Controls->Add(this->slctLB);
			this->flowLayoutPanel4->Location = System::Drawing::Point(196, 50);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(174, 43);
			this->flowLayoutPanel4->TabIndex = 11;
			// 
			// slctLB
			// 
			this->slctLB->Location = System::Drawing::Point(3, 3);
			this->slctLB->Name = L"slctLB";
			this->slctLB->Size = System::Drawing::Size(171, 36);
			this->slctLB->TabIndex = 0;
			this->slctLB->Text = L"select course";
			this->slctLB->UseVisualStyleBackColor = true;
			this->slctLB->Click += gcnew System::EventHandler(this, &StudentPageForm::slctLB_Click);
			// 
			// coursesviewFilterCourses
			// 
			this->coursesviewFilterCourses->AutoScroll = true;
			this->coursesviewFilterCourses->Location = System::Drawing::Point(373, 115);
			this->coursesviewFilterCourses->Name = L"coursesviewFilterCourses";
			this->coursesviewFilterCourses->Size = System::Drawing::Size(252, 791);
			this->coursesviewFilterCourses->TabIndex = 8;
			// 
			// filterflowlytpnl
			// 
			this->filterflowlytpnl->Controls->Add(this->Selectbt);
			this->filterflowlytpnl->Controls->Add(this->finishcsbt);
			this->filterflowlytpnl->Controls->Add(this->AvailableCoursesbt);
			this->filterflowlytpnl->Controls->Add(this->RequiredCoursesbt);
			this->filterflowlytpnl->Controls->Add(this->ElectiveCoursesBt);
			this->filterflowlytpnl->Controls->Add(this->CoursesInProgressbt);
			this->filterflowlytpnl->Location = System::Drawing::Point(3, 49);
			this->filterflowlytpnl->Name = L"filterflowlytpnl";
			this->filterflowlytpnl->Size = System::Drawing::Size(180, 44);
			this->filterflowlytpnl->TabIndex = 7;
			// 
			// Selectbt
			// 
			this->Selectbt->Location = System::Drawing::Point(3, 3);
			this->Selectbt->Name = L"Selectbt";
			this->Selectbt->Size = System::Drawing::Size(169, 38);
			this->Selectbt->TabIndex = 8;
			this->Selectbt->Text = L"Select";
			this->Selectbt->UseVisualStyleBackColor = true;
			this->Selectbt->Click += gcnew System::EventHandler(this, &StudentPageForm::Selectbt_Click);
			// 
			// finishcsbt
			// 
			this->finishcsbt->Location = System::Drawing::Point(3, 47);
			this->finishcsbt->Name = L"finishcsbt";
			this->finishcsbt->Size = System::Drawing::Size(169, 38);
			this->finishcsbt->TabIndex = 9;
			this->finishcsbt->Text = L"Finished Courses";
			this->finishcsbt->UseVisualStyleBackColor = true;
			this->finishcsbt->Click += gcnew System::EventHandler(this, &StudentPageForm::finishcsbt_Click);
			// 
			// AvailableCoursesbt
			// 
			this->AvailableCoursesbt->Location = System::Drawing::Point(3, 91);
			this->AvailableCoursesbt->Name = L"AvailableCoursesbt";
			this->AvailableCoursesbt->Size = System::Drawing::Size(169, 38);
			this->AvailableCoursesbt->TabIndex = 10;
			this->AvailableCoursesbt->Text = L"Available Courses";
			this->AvailableCoursesbt->UseVisualStyleBackColor = true;
			this->AvailableCoursesbt->Click += gcnew System::EventHandler(this, &StudentPageForm::AvailableCoursesbt_Click);
			// 
			// RequiredCoursesbt
			// 
			this->RequiredCoursesbt->Location = System::Drawing::Point(3, 135);
			this->RequiredCoursesbt->Name = L"RequiredCoursesbt";
			this->RequiredCoursesbt->Size = System::Drawing::Size(169, 38);
			this->RequiredCoursesbt->TabIndex = 11;
			this->RequiredCoursesbt->Text = L"Required Courses";
			this->RequiredCoursesbt->UseVisualStyleBackColor = true;
			this->RequiredCoursesbt->Click += gcnew System::EventHandler(this, &StudentPageForm::RequiredCoursesbt_Click);
			// 
			// ElectiveCoursesBt
			// 
			this->ElectiveCoursesBt->Location = System::Drawing::Point(3, 179);
			this->ElectiveCoursesBt->Name = L"ElectiveCoursesBt";
			this->ElectiveCoursesBt->Size = System::Drawing::Size(169, 38);
			this->ElectiveCoursesBt->TabIndex = 12;
			this->ElectiveCoursesBt->Text = L"Elective Courses";
			this->ElectiveCoursesBt->UseVisualStyleBackColor = true;
			this->ElectiveCoursesBt->Click += gcnew System::EventHandler(this, &StudentPageForm::ElectiveCoursesBt_Click);
			// 
			// CoursesInProgressbt
			// 
			this->CoursesInProgressbt->Location = System::Drawing::Point(3, 223);
			this->CoursesInProgressbt->Name = L"CoursesInProgressbt";
			this->CoursesInProgressbt->Size = System::Drawing::Size(169, 38);
			this->CoursesInProgressbt->TabIndex = 13;
			this->CoursesInProgressbt->Text = L"CoursesInProgress";
			this->CoursesInProgressbt->UseVisualStyleBackColor = true;
			this->CoursesInProgressbt->Click += gcnew System::EventHandler(this, &StudentPageForm::CoursesInProgressbt_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(39, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Filter Courses";
			this->label1->UseWaitCursor = true;
			this->label1->Click += gcnew System::EventHandler(this, &StudentPageForm::label1_Click_1);
			// 
			// pnlOfCourseGrades
			// 
			this->pnlOfCourseGrades->Controls->Add(this->label2);
			this->pnlOfCourseGrades->Location = System::Drawing::Point(231, 0);
			this->pnlOfCourseGrades->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlOfCourseGrades->Name = L"pnlOfCourseGrades";
			this->pnlOfCourseGrades->Size = System::Drawing::Size(649, 519);
			this->pnlOfCourseGrades->TabIndex = 2;
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
			// 
			// pnlOfDetailsOfCourse
			// 
			this->pnlOfDetailsOfCourse->AutoScroll = true;
			this->pnlOfDetailsOfCourse->Controls->Add(this->viewbt);
			this->pnlOfDetailsOfCourse->Controls->Add(this->flwpnldetCourse);
			this->pnlOfDetailsOfCourse->Controls->Add(this->flowLayoutPanel3);
			this->pnlOfDetailsOfCourse->Location = System::Drawing::Point(227, 0);
			this->pnlOfDetailsOfCourse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlOfDetailsOfCourse->Name = L"pnlOfDetailsOfCourse";
			this->pnlOfDetailsOfCourse->Size = System::Drawing::Size(656, 517);
			this->pnlOfDetailsOfCourse->TabIndex = 3;
			this->pnlOfDetailsOfCourse->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::pnlOfDetailsOfCourse_Paint);
			// 
			// viewbt
			// 
			this->viewbt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->viewbt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->viewbt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewbt->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->viewbt->ForeColor = System::Drawing::Color::Tan;
			this->viewbt->Location = System::Drawing::Point(377, 46);
			this->viewbt->Name = L"viewbt";
			this->viewbt->Size = System::Drawing::Size(160, 45);
			this->viewbt->TabIndex = 5;
			this->viewbt->Text = L"View";
			this->viewbt->UseVisualStyleBackColor = false;
			this->viewbt->Click += gcnew System::EventHandler(this, &StudentPageForm::viewbt_Click);
			// 
			// flwpnldetCourse
			// 
			this->flwpnldetCourse->Location = System::Drawing::Point(276, 114);
			this->flwpnldetCourse->Name = L"flwpnldetCourse";
			this->flwpnldetCourse->Size = System::Drawing::Size(350, 465);
			this->flwpnldetCourse->TabIndex = 4;
			this->flwpnldetCourse->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::flwpnldetCourse_Paint);
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->AutoScroll = true;
			this->flowLayoutPanel3->Controls->Add(this->button3);
			this->flowLayoutPanel3->Location = System::Drawing::Point(9, 42);
			this->flowLayoutPanel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(269, 49);
			this->flowLayoutPanel3->TabIndex = 3;
			this->flowLayoutPanel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::flowLayoutPanel3_Paint);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Tan;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->Location = System::Drawing::Point(3, 2);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(219, 43);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Select Course";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &StudentPageForm::button3_Click_1);
			// 
			// pnlOfCoursesInProgress
			// 
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox43);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox42);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox29);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox30);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox41);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox40);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox27);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox28);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox39);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox38);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox37);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox36);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox35);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox34);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox33);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox25);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox10);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox18);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox5);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox11);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox9);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox3);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox15);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox6);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox12);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox2);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox7);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox1);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox8);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox4);
			this->pnlOfCoursesInProgress->Controls->Add(this->pictureBox17);
			this->pnlOfCoursesInProgress->Controls->Add(this->flowLayoutPanel1);
			this->pnlOfCoursesInProgress->Controls->Add(this->coursesinprogHeaderpnl);
			this->pnlOfCoursesInProgress->Dock = System::Windows::Forms::DockStyle::Right;
			this->pnlOfCoursesInProgress->Location = System::Drawing::Point(228, 0);
			this->pnlOfCoursesInProgress->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlOfCoursesInProgress->Name = L"pnlOfCoursesInProgress";
			this->pnlOfCoursesInProgress->Size = System::Drawing::Size(652, 521);
			this->pnlOfCoursesInProgress->TabIndex = 4;
			this->pnlOfCoursesInProgress->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::pnlOfCoursesInProgress_Paint);
			// 
			// pictureBox43
			// 
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(65, 472);
			this->pictureBox43->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(48, 43);
			this->pictureBox43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox43->TabIndex = 56;
			this->pictureBox43->TabStop = false;
			// 
			// pictureBox42
			// 
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(78, 379);
			this->pictureBox42->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(47, 34);
			this->pictureBox42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox42->TabIndex = 51;
			this->pictureBox42->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(16, 92);
			this->pictureBox29->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(32, 25);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox29->TabIndex = 49;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(96, 103);
			this->pictureBox30->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(30, 23);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox30->TabIndex = 47;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox41
			// 
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(78, 130);
			this->pictureBox41->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(35, 30);
			this->pictureBox41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox41->TabIndex = 55;
			this->pictureBox41->TabStop = false;
			// 
			// pictureBox40
			// 
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(78, 229);
			this->pictureBox40->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(35, 42);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox40->TabIndex = 54;
			this->pictureBox40->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(23, 188);
			this->pictureBox27->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(13, 23);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox27->TabIndex = 47;
			this->pictureBox27->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(65, 278);
			this->pictureBox28->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(34, 26);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox28->TabIndex = 48;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox39
			// 
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(542, 340);
			this->pictureBox39->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(41, 34);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox39->TabIndex = 53;
			this->pictureBox39->TabStop = false;
			// 
			// pictureBox38
			// 
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(512, 441);
			this->pictureBox38->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(36, 30);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox38->TabIndex = 52;
			this->pictureBox38->TabStop = false;
			// 
			// pictureBox37
			// 
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(513, 392);
			this->pictureBox37->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(47, 34);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox37->TabIndex = 51;
			this->pictureBox37->TabStop = false;
			// 
			// pictureBox36
			// 
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(495, 113);
			this->pictureBox36->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(41, 34);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox36->TabIndex = 50;
			this->pictureBox36->TabStop = false;
			// 
			// pictureBox35
			// 
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(512, 170);
			this->pictureBox35->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(52, 47);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox35->TabIndex = 49;
			this->pictureBox35->TabStop = false;
			// 
			// pictureBox34
			// 
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(495, 230);
			this->pictureBox34->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(41, 41);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox34->TabIndex = 48;
			this->pictureBox34->TabStop = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(488, 335);
			this->pictureBox33->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(48, 43);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox33->TabIndex = 47;
			this->pictureBox33->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(566, 126);
			this->pictureBox25->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(41, 34);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox25->TabIndex = 46;
			this->pictureBox25->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(578, 465);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(48, 43);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 44;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(566, 284);
			this->pictureBox18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(41, 30);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox18->TabIndex = 43;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(599, 421);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(36, 30);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 42;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &StudentPageForm::pictureBox5_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(23, 383);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(35, 30);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 41;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(0, 117);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(48, 43);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 40;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(59, 88);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(36, 30);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 37;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(23, 441);
			this->pictureBox15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(35, 33);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 36;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(579, 88);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(47, 34);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 35;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(593, 383);
			this->pictureBox12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(41, 34);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 34;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(606, 318);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(35, 30);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 33;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(45, 170);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(41, 41);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 32;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(593, 162);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(48, 43);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 31;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(30, 320);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(48, 43);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 30;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(6, 230);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(52, 47);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 29;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(599, 218);
			this->pictureBox17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(35, 42);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox17->TabIndex = 28;
			this->pictureBox17->TabStop = false;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Location = System::Drawing::Point(132, 88);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(350, 515);
			this->flowLayoutPanel1->TabIndex = 2;
			// 
			// coursesinprogHeaderpnl
			// 
			this->coursesinprogHeaderpnl->Controls->Add(this->pictureBox32);
			this->coursesinprogHeaderpnl->Controls->Add(this->pictureBox31);
			this->coursesinprogHeaderpnl->Controls->Add(this->pictureBox26);
			this->coursesinprogHeaderpnl->Controls->Add(this->pictureBox24);
			this->coursesinprogHeaderpnl->Controls->Add(this->pictureBox23);
			this->coursesinprogHeaderpnl->Controls->Add(this->pictureBox22);
			this->coursesinprogHeaderpnl->Controls->Add(this->pictureBox21);
			this->coursesinprogHeaderpnl->Controls->Add(this->pictureBox20);
			this->coursesinprogHeaderpnl->Controls->Add(this->pictureBox19);
			this->coursesinprogHeaderpnl->Controls->Add(this->pictureBox14);
			this->coursesinprogHeaderpnl->Controls->Add(this->label4);
			this->coursesinprogHeaderpnl->Location = System::Drawing::Point(2, 2);
			this->coursesinprogHeaderpnl->Name = L"coursesinprogHeaderpnl";
			this->coursesinprogHeaderpnl->Size = System::Drawing::Size(649, 85);
			this->coursesinprogHeaderpnl->TabIndex = 45;
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(237, 55);
			this->pictureBox32->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(27, 20);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox32->TabIndex = 50;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(240, 1);
			this->pictureBox31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(24, 32);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox31->TabIndex = 47;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(336, 39);
			this->pictureBox26->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(41, 34);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox26->TabIndex = 47;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(523, 34);
			this->pictureBox24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(48, 43);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox24->TabIndex = 46;
			this->pictureBox24->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(460, 40);
			this->pictureBox23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(35, 33);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox23->TabIndex = 46;
			this->pictureBox23->TabStop = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(460, 6);
			this->pictureBox22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(35, 30);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox22->TabIndex = 46;
			this->pictureBox22->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(383, 40);
			this->pictureBox21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(41, 41);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox21->TabIndex = 46;
			this->pictureBox21->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(577, 16);
			this->pictureBox20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(47, 34);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox20->TabIndex = 46;
			this->pictureBox20->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(353, 2);
			this->pictureBox19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(47, 34);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox19->TabIndex = 46;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(270, 17);
			this->pictureBox14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(48, 43);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 46;
			this->pictureBox14->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Tan;
			this->label4->Location = System::Drawing::Point(1, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(242, 35);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Your Courses:";
			// 
			// pnlOfregCourse
			// 
			this->pnlOfregCourse->Controls->Add(this->savebt);
			this->pnlOfregCourse->Controls->Add(this->flowLayoutPanel2);
			this->pnlOfregCourse->Controls->Add(this->reglb);
			this->pnlOfregCourse->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pnlOfregCourse->Location = System::Drawing::Point(228, 0);
			this->pnlOfregCourse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlOfregCourse->Name = L"pnlOfregCourse";
			this->pnlOfregCourse->Size = System::Drawing::Size(655, 517);
			this->pnlOfregCourse->TabIndex = 5;
			this->pnlOfregCourse->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::pnlOfregCourse_Paint);
			// 
			// savebt
			// 
			this->savebt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->savebt->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->savebt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->savebt->Location = System::Drawing::Point(92, 340);
			this->savebt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->savebt->Name = L"savebt";
			this->savebt->Size = System::Drawing::Size(117, 38);
			this->savebt->TabIndex = 3;
			this->savebt->Text = L"save";
			this->savebt->UseVisualStyleBackColor = true;
			this->savebt->Click += gcnew System::EventHandler(this, &StudentPageForm::savebt_Click);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->button1);
			this->flowLayoutPanel2->Location = System::Drawing::Point(239, 98);
			this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(224, 49);
			this->flowLayoutPanel2->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(3, 2);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(219, 43);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Select Course";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &StudentPageForm::button1_Click_2);
			// 
			// reglb
			// 
			this->reglb->AutoSize = true;
			this->reglb->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->reglb->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->reglb->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->reglb->Location = System::Drawing::Point(23, 18);
			this->reglb->Name = L"reglb";
			this->reglb->Size = System::Drawing::Size(207, 37);
			this->reglb->TabIndex = 1;
			this->reglb->Text = L"register Course";
			// 
			// pnlOfPanels
			// 
			this->pnlOfPanels->Controls->Add(this->PnlOfFilter);
			this->pnlOfPanels->Controls->Add(this->pnlOfregCourse);
			this->pnlOfPanels->Controls->Add(this->pnlOfDetailsOfCourse);
			this->pnlOfPanels->Controls->Add(this->pnlOfCoursesInProgress);
			this->pnlOfPanels->Controls->Add(this->pnlOfCourseGrades);
			this->pnlOfPanels->Location = System::Drawing::Point(-5, 0);
			this->pnlOfPanels->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlOfPanels->Name = L"pnlOfPanels";
			this->pnlOfPanels->Size = System::Drawing::Size(880, 521);
			this->pnlOfPanels->TabIndex = 2;
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
			this->mstPanel->Location = System::Drawing::Point(68, 0);
			this->mstPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->mstPanel->MaximumSize = System::Drawing::Size(900, 519);
			this->mstPanel->MinimumSize = System::Drawing::Size(653, 519);
			this->mstPanel->Name = L"mstPanel";
			this->mstPanel->Size = System::Drawing::Size(878, 519);
			this->mstPanel->TabIndex = 2;
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
			// filterTimer
			// 
			this->filterTimer->Tick += gcnew System::EventHandler(this, &StudentPageForm::filterTimer_Tick);
			// 
			// selectCoursetimer
			// 
			this->selectCoursetimer->Tick += gcnew System::EventHandler(this, &StudentPageForm::selectCoursetimer_Tick);
			// 
			// StudentPageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(944, 519);
			this->Controls->Add(this->sideBar);
			this->Controls->Add(this->mstPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"StudentPageForm";
			this->Text = L"StudentPageForm";
			this->Load += gcnew System::EventHandler(this, &StudentPageForm::StudentPageForm_Load);
			this->sideBar->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->pnlbuttons->ResumeLayout(false);
			this->pnlbuttons->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->PnlOfFilter->ResumeLayout(false);
			this->PnlOfFilter->PerformLayout();
			this->flowLayoutPanel4->ResumeLayout(false);
			this->filterflowlytpnl->ResumeLayout(false);
			this->pnlOfCourseGrades->ResumeLayout(false);
			this->pnlOfCourseGrades->PerformLayout();
			this->pnlOfDetailsOfCourse->ResumeLayout(false);
			this->flowLayoutPanel3->ResumeLayout(false);
			this->pnlOfCoursesInProgress->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			this->coursesinprogHeaderpnl->ResumeLayout(false);
			this->coursesinprogHeaderpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
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
    public:List<courseButton^>^ RegisterCourseList = gcnew List<courseButton^>();
	public:String^ filterchoice="";

	private: System::Void StudentPageForm_Load(System::Object^ sender, System::EventArgs^ e) {
		populateItems();
	}



    private:void populateItems()
	{


			for each (auto course in Course::allCourses)
			{
				    
					courselistitem^ temp = gcnew courselistitem;

					temp->setName(course->getName());
					temp->setCode(course->getCode());
					temp->setInstructor(course->getInstructor());
					temp->setIsRequirement(course->getIsRequirement());
					temp->setHours(course->getHours());
					temp->setMaxNumberOfStudents(course->getMaxNumberOfStudents());
					
					flowLayoutPanel1->Controls->Add(temp);
				
			}
		


			

			for each (auto course in Course::allCourses)
			{

				courseButton^ temp = gcnew courseButton;

				List<String^>^ tempe = gcnew List<String^>();
				tempe = student->CoursesAV();
			    
				if (tempe->Contains(course->getName()))
				{
				
					courseButton^ temp = gcnew courseButton;

					temp->setCourseName(course->getName());

					RegisterCourseList->Add(temp);
					flowLayoutPanel2->Controls->Add(temp);
					
				}

			}


		
			for (int i = 0; i < Course::allCourses->Count; i++)
			{
				courseButton^ temp = gcnew courseButton;

				temp->setCourseName(Course::allCourses[i]->getName());


				courseButton::courseDetails = true;
				courseButton::alldetailsbtns->Add(temp);

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
		if (flowLayoutPanel2->Height <= 40)
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
		if (flowLayoutPanel3->Height <= 40)
		{
			dropdowndet->Stop();
			expand3 = false;
		}
		else
		{

			flowLayoutPanel3->Height -= 15;
		}

	}
}

private: System::Void pnlOfDetailsOfCourse_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
	   
private: System::Void savebt_Click(System::Object^ sender, System::EventArgs^ e) {
	List<courseButton^>^ temp = gcnew List<courseButton^>();
	List<courseButton^>^ temp2 = gcnew List<courseButton^>();

	for each (auto cobt in RegisterCourseList)
	{
		if (cobt->getBt()->BackColor == Color::Brown)
		{
			temp->Add(cobt);
		}
		else
		{
			temp2->Add(cobt);
		}	
	}
	for each (auto i in temp)
	{
		for each (auto course in Course::allCourses) {
			if (course->getName() == i->getCourseName()) {
				flowLayoutPanel2->Controls->Clear();
				flowLayoutPanel2->Controls->Add(button1);
				RegisterCourseList->Clear();

				student->registerForCourse(course);

			}
		}
	}
	for each (auto i in temp2)
	{
		flowLayoutPanel2->Controls->Add(i);
		RegisterCourseList->Add(i);
		
	}
	dropdowntimer->Start();
	student->saveStudentDataToFile();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

}


private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	dropdowntimer->Start();

	flwpnldetCourse->Controls->Clear();

}

private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void flwpnldetCourse_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void viewbt_Click(System::Object^ sender, System::EventArgs^ e) {

	flwpnldetCourse->Controls->Clear();
	for each (auto bt in courseButton::alldetailsbtns)
	{

		courselistitem^ temp = gcnew courselistitem;
		if (bt->getBt()->BackColor == Color::Brown)
		{

			for each (auto course in Course::allCourses)
			{
				if (bt->getCourseName() == course->getName())
				{
					temp->setName(course->getName());
					temp->setCode(course->getCode());
					temp->setInstructor(course->getInstructor());
					temp->setIsRequirement(course->getIsRequirement());
					temp->setHours(course->getHours());
					temp->setMaxNumberOfStudents(course->getMaxNumberOfStudents());
				}
			}	

			flwpnldetCourse->Controls->Add(temp);
			flowLayoutPanel3->Height = 40;
			expand3 = false;
		}

	}
	for each (auto bt in courseButton::alldetailsbtns)
	{
		if (bt->getBt()->BackColor == Color::Brown)
		{
			bt->setBtColor(ColorTranslator::FromHtml("#17171F"));
			bt->setforecolor(Color::Tan);


		}
	}
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	dropdowndet->Start();

}
private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void flowLayoutPanel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pnlOfCoursesInProgress_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void PnlOfFilter_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void CoursesInProgressbt_Click(System::Object^ sender, System::EventArgs^ e) {
	filterchoice = "CoursesInProgress";
	coursesviewFilterCourses->Controls->Clear();

	flowLayoutPanel4->Controls->Clear();

	for each (auto course in student->FilterCourses(filterchoice))
	{
		courseButton^ temp = gcnew courseButton;

		temp->setCourseName(course->getName());
		flowLayoutPanel4->Controls->Add(temp);
	}
	for each (auto course in student->FilterCourses(filterchoice))
	{
		courselistitem^ temp = gcnew courselistitem;

		temp->setName(course->getName());
		temp->setCode(course->getCode());
		temp->setInstructor(course->getInstructor());
		temp->setIsRequirement(course->getIsRequirement());
		temp->setHours(course->getHours());
		temp->setMaxNumberOfStudents(course->getMaxNumberOfStudents());

		coursesviewFilterCourses->Controls->Add(temp);
	}
	
}
private: System::Void ElectiveCoursesBt_Click(System::Object^ sender, System::EventArgs^ e) {
	filterchoice = "Elective Courses";

	coursesviewFilterCourses->Controls->Clear();
	for each (auto course in student->FilterCourses(filterchoice))
	{
		courselistitem^ temp = gcnew courselistitem;

		temp->setName(course->getName());
		temp->setCode(course->getCode());
		temp->setInstructor(course->getInstructor());
		temp->setIsRequirement(course->getIsRequirement());
		temp->setHours(course->getHours());
		temp->setMaxNumberOfStudents(course->getMaxNumberOfStudents());

		coursesviewFilterCourses->Controls->Add(temp);
	}
}
private: System::Void RequiredCoursesbt_Click(System::Object^ sender, System::EventArgs^ e) {
	filterchoice = "Required Courses";

	coursesviewFilterCourses->Controls->Clear();
	for each (auto course in student->FilterCourses(filterchoice))
	{
		courselistitem^ temp = gcnew courselistitem;

		temp->setName(course->getName());
		temp->setCode(course->getCode());
		temp->setInstructor(course->getInstructor());
		temp->setIsRequirement(course->getIsRequirement());
		temp->setHours(course->getHours());
		temp->setMaxNumberOfStudents(course->getMaxNumberOfStudents());

		coursesviewFilterCourses->Controls->Add(temp);
	}
}
private: System::Void AvailableCoursesbt_Click(System::Object^ sender, System::EventArgs^ e) {
	filterchoice = "Available Courses";

	coursesviewFilterCourses->Controls->Clear();
	for each (auto course in student->FilterCourses(filterchoice))
	{
		courselistitem^ temp = gcnew courselistitem;

		temp->setName(course->getName());
		temp->setCode(course->getCode());
		temp->setInstructor(course->getInstructor());
		temp->setIsRequirement(course->getIsRequirement());
		temp->setHours(course->getHours());
		temp->setMaxNumberOfStudents(course->getMaxNumberOfStudents());

		coursesviewFilterCourses->Controls->Add(temp);
	}
}
private: System::Void finishcsbt_Click(System::Object^ sender, System::EventArgs^ e) {
	filterchoice = "Finished Courses";

	coursesviewFilterCourses->Controls->Clear();
	for each (auto course in student->FilterCourses(filterchoice))
	{
		courselistitem^ temp = gcnew courselistitem;

		temp->setName(course->getName());
		temp->setCode(course->getCode());
		temp->setInstructor(course->getInstructor());
		temp->setIsRequirement(course->getIsRequirement());
		temp->setHours(course->getHours());
		temp->setMaxNumberOfStudents(course->getMaxNumberOfStudents());

		coursesviewFilterCourses->Controls->Add(temp);
	}
}
private: System::Void Selectbt_Click(System::Object^ sender, System::EventArgs^ e) {

	coursesviewFilterCourses->Controls->Clear();
	filterTimer->Start();

}

public :bool exapndfilter = false;

private: System::Void filterTimer_Tick(System::Object^ sender, System::EventArgs^ e) {

	if (!exapndfilter)
	{
		filterflowlytpnl->Height += 15;
		if ((filterflowlytpnl->Height >=6*40)) {
			filterTimer->Stop();
			exapndfilter = true;
		}
	}

	else {

		filterflowlytpnl->Height -= 15;
		if (filterflowlytpnl->Height <= 40)
		{
			filterTimer->Stop();
			exapndfilter = false;
		}
	}
}
private: System::Void slctLB_Click(System::Object^ sender, System::EventArgs^ e) {
	selectCoursetimer->Start();
}
public: bool selectCoursebool=false;
private: System::Void selectCoursetimer_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (!selectCoursetimer)
	{
		flowLayoutPanel4->Height += 15;
		if ((flowLayoutPanel4->Height >= 6 * 40)) {
			filterTimer->Stop();
			selectCoursebool = true;
		}
	}

	else {
		flowLayoutPanel4->Height -= 15;
		if (flowLayoutPanel4->Height <= 40)
		{
			filterTimer->Stop();
			selectCoursebool = false;
		}
	}
}
};
};


