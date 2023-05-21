#pragma once
#include "Student.h"
#include "Login.h"
#include "Admin.h"
#include<string>
#include<fstream>
#include<iostream>
#include "courselistitem.h"
#include "courseButton.h"
#include "CoursegGradeItem.h"
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






	private: System::Windows::Forms::Button^ btnCourseGrade;



	private: System::Windows::Forms::Button^ btnregister;

	private: System::Windows::Forms::Panel^ PnlOfFilter;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ pnlOfCourseGrades;

	private: System::Windows::Forms::Panel^ pnlOfDetailsOfCourse;

	private: System::Windows::Forms::Panel^ pnlOfCoursesInProgress;

	private: System::Windows::Forms::Panel^ pnlOfregCourse;
















	private: System::Windows::Forms::Button^ btnDetailsOfCourse;
	private: System::Windows::Forms::Panel^ pnlOfPanels;

	private: System::Windows::Forms::Timer^ sideBarTimer;

	private: System::Windows::Forms::Panel^ mstPanel;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;

	private: System::Windows::Forms::Timer^ dropdowntimer;




	private: System::Windows::Forms::Timer^ dropdowndet;
	private: System::Windows::Forms::Button^ savebt;

	private: System::Windows::Forms::Button^ button1;

















private: System::Windows::Forms::Panel^ panel1;

private: System::Windows::Forms::PictureBox^ pictureBox13;
private: System::Windows::Forms::PictureBox^ pictureBox16;


























private: System::Windows::Forms::FlowLayoutPanel^ flwpnldetCourse;
private: System::Windows::Forms::Button^ viewbt;


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

private: System::Windows::Forms::Timer^ selectCoursetimer;
private: System::Windows::Forms::Button^ btnFilter;
private: System::Windows::Forms::Button^ viewgradesBt;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel6;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel5;
private: System::Windows::Forms::Button^ viewbttt;

private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Timer^ viewGradesTiner;
private: System::Windows::Forms::Label^ CGPALabel;
private: System::Windows::Forms::Label^ label3;

private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ avcoursecount;
private: System::Windows::Forms::Panel^ homepanel;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Panel^ panel3;

private: System::Windows::Forms::PictureBox^ pictureBox46;
private: System::Windows::Forms::PictureBox^ pictureBox45;
private: System::Windows::Forms::Button^ editp;
private: System::Windows::Forms::Panel^ editpanel;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Button^ Savebtt;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::PictureBox^ pictureBox44;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::PictureBox^ pictureBox48;
private: System::Windows::Forms::PictureBox^ pictureBox47;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::PictureBox^ pictureBox50;
private: System::Windows::Forms::PictureBox^ pictureBox49;
private: System::Windows::Forms::Button^ slctcourseCDetailsbt;

private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;

private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ myhours;






private: System::Windows::Forms::Label^ label20;



private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Label^ label19;


private: System::Windows::Forms::Label^ savedcourse;
private: System::Windows::Forms::Label^ hoursrem;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ reglb;
private: System::Windows::Forms::Label^ cshours;
private: System::Windows::Forms::Label^ currstds;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ courseMaxstds;





































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
			this->editp = (gcnew System::Windows::Forms::Button());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pnlbuttons = (gcnew System::Windows::Forms::Panel());
			this->btnFilter = (gcnew System::Windows::Forms::Button());
			this->btnregister = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->btnCourseGrade = (gcnew System::Windows::Forms::Button());
			this->btnDetailsOfCourse = (gcnew System::Windows::Forms::Button());
			this->btnCourseInProgress = (gcnew System::Windows::Forms::Button());
			this->PnlOfFilter = (gcnew System::Windows::Forms::Panel());
			this->viewerbt = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
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
			this->CGPALabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->viewgradesBt = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->viewbttt = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel6 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->editpanel = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Savebtt = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pnlOfDetailsOfCourse = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->slctcourseCDetailsbt = (gcnew System::Windows::Forms::Button());
			this->viewbt = (gcnew System::Windows::Forms::Button());
			this->flwpnldetCourse = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pnlOfCoursesInProgress = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pnlOfregCourse = (gcnew System::Windows::Forms::Panel());
			this->savedcourse = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->hoursrem = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->avcoursecount = (gcnew System::Windows::Forms::Label());
			this->myhours = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->savebt = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pnlOfPanels = (gcnew System::Windows::Forms::Panel());
			this->homepanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->sideBarTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->mstPanel = (gcnew System::Windows::Forms::Panel());
			this->dropdowntimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->dropdowndet = (gcnew System::Windows::Forms::Timer(this->components));
			this->filterTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->selectCoursetimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->viewGradesTiner = (gcnew System::Windows::Forms::Timer(this->components));
			this->currstds = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->cshours = (gcnew System::Windows::Forms::Label());
			this->courseMaxstds = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->reglb = (gcnew System::Windows::Forms::Label());
			this->sideBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->pnlbuttons->SuspendLayout();
			this->PnlOfFilter->SuspendLayout();
			this->filterflowlytpnl->SuspendLayout();
			this->pnlOfCourseGrades->SuspendLayout();
			this->editpanel->SuspendLayout();
			this->pnlOfDetailsOfCourse->SuspendLayout();
			this->pnlOfCoursesInProgress->SuspendLayout();
			this->pnlOfregCourse->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->pnlOfPanels->SuspendLayout();
			this->homepanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			this->panel3->SuspendLayout();
			this->mstPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// sideBar
			// 
			this->sideBar->AllowDrop = true;
			this->sideBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->sideBar->Controls->Add(this->editp);
			this->sideBar->Controls->Add(this->pictureBox46);
			this->sideBar->Controls->Add(this->panel1);
			this->sideBar->Controls->Add(this->pnlbuttons);
			this->sideBar->Dock = System::Windows::Forms::DockStyle::Left;
			this->sideBar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->sideBar->Location = System::Drawing::Point(0, 0);
			this->sideBar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sideBar->MaximumSize = System::Drawing::Size(289, 521);
			this->sideBar->MinimumSize = System::Drawing::Size(67, 521);
			this->sideBar->Name = L"sideBar";
			this->sideBar->Size = System::Drawing::Size(67, 521);
			this->sideBar->TabIndex = 0;
			this->sideBar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::sideBar_Paint);
			// 
			// editp
			// 
			this->editp->AutoSize = true;
			this->editp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->editp->FlatAppearance->BorderColor = System::Drawing::Color::Tan;
			this->editp->FlatAppearance->BorderSize = 2;
			this->editp->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->editp->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSlateGray;
			this->editp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editp->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->editp->ForeColor = System::Drawing::Color::Tan;
			this->editp->Location = System::Drawing::Point(101, 126);
			this->editp->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->editp->Name = L"editp";
			this->editp->Size = System::Drawing::Size(104, 36);
			this->editp->TabIndex = 5;
			this->editp->Text = L"Edit Data";
			this->editp->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->editp->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->editp->UseCompatibleTextRendering = true;
			this->editp->UseVisualStyleBackColor = true;
			this->editp->Click += gcnew System::EventHandler(this, &StudentPageForm::editp_Click);
			// 
			// pictureBox46
			// 
			this->pictureBox46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.Image")));
			this->pictureBox46->Location = System::Drawing::Point(71, -1);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(170, 117);
			this->pictureBox46->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox46->TabIndex = 5;
			this->pictureBox46->TabStop = false;
			this->pictureBox46->Click += gcnew System::EventHandler(this, &StudentPageForm::pictureBox46_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox13);
			this->panel1->Controls->Add(this->pictureBox16);
			this->panel1->Location = System::Drawing::Point(0, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(58, 138);
			this->panel1->TabIndex = 4;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(0, 72);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(55, 63);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 4;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &StudentPageForm::pictureBox13_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(3, 10);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(40, 63);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox16->TabIndex = 6;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &StudentPageForm::pictureBox16_Click);
			// 
			// pnlbuttons
			// 
			this->pnlbuttons->BackColor = System::Drawing::Color::Transparent;
			this->pnlbuttons->Controls->Add(this->btnFilter);
			this->pnlbuttons->Controls->Add(this->btnregister);
			this->pnlbuttons->Controls->Add(this->Exit);
			this->pnlbuttons->Controls->Add(this->btnCourseGrade);
			this->pnlbuttons->Controls->Add(this->btnDetailsOfCourse);
			this->pnlbuttons->Controls->Add(this->btnCourseInProgress);
			this->pnlbuttons->Location = System::Drawing::Point(0, 164);
			this->pnlbuttons->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlbuttons->Name = L"pnlbuttons";
			this->pnlbuttons->Size = System::Drawing::Size(289, 344);
			this->pnlbuttons->TabIndex = 0;
			this->pnlbuttons->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::pnlbuttons_Paint);
			// 
			// btnFilter
			// 
			this->btnFilter->AutoSize = true;
			this->btnFilter->FlatAppearance->BorderColor = System::Drawing::Color::Tan;
			this->btnFilter->FlatAppearance->BorderSize = 2;
			this->btnFilter->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->btnFilter->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSlateGray;
			this->btnFilter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFilter->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->btnFilter->ForeColor = System::Drawing::Color::Tan;
			this->btnFilter->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFilter.Image")));
			this->btnFilter->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnFilter->Location = System::Drawing::Point(18, 30);
			this->btnFilter->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnFilter->Name = L"btnFilter";
			this->btnFilter->Size = System::Drawing::Size(264, 43);
			this->btnFilter->TabIndex = 0;
			this->btnFilter->Text = L"   Filter Courses";
			this->btnFilter->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnFilter->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnFilter->UseCompatibleTextRendering = true;
			this->btnFilter->UseVisualStyleBackColor = true;
			this->btnFilter->Click += gcnew System::EventHandler(this, &StudentPageForm::btnFilter_Click);
			// 
			// btnregister
			// 
			this->btnregister->AutoSize = true;
			this->btnregister->FlatAppearance->BorderSize = 2;
			this->btnregister->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->btnregister->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSlateGray;
			this->btnregister->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnregister->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->btnregister->ForeColor = System::Drawing::Color::Tan;
			this->btnregister->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnregister.Image")));
			this->btnregister->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnregister->Location = System::Drawing::Point(18, 229);
			this->btnregister->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnregister->Name = L"btnregister";
			this->btnregister->Size = System::Drawing::Size(264, 43);
			this->btnregister->TabIndex = 4;
			this->btnregister->Text = L"     Register Course";
			this->btnregister->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnregister->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnregister->UseVisualStyleBackColor = true;
			this->btnregister->Click += gcnew System::EventHandler(this, &StudentPageForm::btnGPA_Click);
			// 
			// Exit
			// 
			this->Exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->Exit->FlatAppearance->BorderSize = 3;
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->Exit->ForeColor = System::Drawing::Color::Tan;
			this->Exit->Location = System::Drawing::Point(0, 286);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(74, 45);
			this->Exit->TabIndex = 6;
			this->Exit->Text = L"Exit";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &StudentPageForm::Exit_Click);
			// 
			// btnCourseGrade
			// 
			this->btnCourseGrade->AutoSize = true;
			this->btnCourseGrade->FlatAppearance->BorderSize = 2;
			this->btnCourseGrade->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->btnCourseGrade->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSlateGray;
			this->btnCourseGrade->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCourseGrade->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->btnCourseGrade->ForeColor = System::Drawing::Color::Tan;
			this->btnCourseGrade->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCourseGrade.Image")));
			this->btnCourseGrade->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCourseGrade->Location = System::Drawing::Point(18, 77);
			this->btnCourseGrade->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCourseGrade->Name = L"btnCourseGrade";
			this->btnCourseGrade->Size = System::Drawing::Size(264, 43);
			this->btnCourseGrade->TabIndex = 0;
			this->btnCourseGrade->Text = L"    Courses Grades";
			this->btnCourseGrade->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnCourseGrade->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnCourseGrade->UseVisualStyleBackColor = true;
			this->btnCourseGrade->Click += gcnew System::EventHandler(this, &StudentPageForm::btnCourseGrade_Click);
			// 
			// btnDetailsOfCourse
			// 
			this->btnDetailsOfCourse->AutoSize = true;
			this->btnDetailsOfCourse->FlatAppearance->BorderSize = 2;
			this->btnDetailsOfCourse->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->btnDetailsOfCourse->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSlateGray;
			this->btnDetailsOfCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDetailsOfCourse->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->btnDetailsOfCourse->ForeColor = System::Drawing::Color::Tan;
			this->btnDetailsOfCourse->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDetailsOfCourse.Image")));
			this->btnDetailsOfCourse->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDetailsOfCourse->Location = System::Drawing::Point(18, 125);
			this->btnDetailsOfCourse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDetailsOfCourse->Name = L"btnDetailsOfCourse";
			this->btnDetailsOfCourse->Size = System::Drawing::Size(264, 43);
			this->btnDetailsOfCourse->TabIndex = 7;
			this->btnDetailsOfCourse->Text = L"    Courses Details";
			this->btnDetailsOfCourse->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDetailsOfCourse->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnDetailsOfCourse->UseVisualStyleBackColor = true;
			this->btnDetailsOfCourse->Click += gcnew System::EventHandler(this, &StudentPageForm::btnDetailsOfCourse_Click_1);
			// 
			// btnCourseInProgress
			// 
			this->btnCourseInProgress->AutoSize = true;
			this->btnCourseInProgress->FlatAppearance->BorderSize = 2;
			this->btnCourseInProgress->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->btnCourseInProgress->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSlateGray;
			this->btnCourseInProgress->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCourseInProgress->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->btnCourseInProgress->ForeColor = System::Drawing::Color::Tan;
			this->btnCourseInProgress->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCourseInProgress.Image")));
			this->btnCourseInProgress->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCourseInProgress->Location = System::Drawing::Point(18, 176);
			this->btnCourseInProgress->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCourseInProgress->Name = L"btnCourseInProgress";
			this->btnCourseInProgress->Size = System::Drawing::Size(264, 43);
			this->btnCourseInProgress->TabIndex = 0;
			this->btnCourseInProgress->Text = L"  Courses in Progress";
			this->btnCourseInProgress->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
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
			this->PnlOfFilter->Location = System::Drawing::Point(13, -1);
			this->PnlOfFilter->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PnlOfFilter->Name = L"PnlOfFilter";
			this->PnlOfFilter->Size = System::Drawing::Size(1118, 518);
			this->PnlOfFilter->TabIndex = 1;
			this->PnlOfFilter->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::PnlOfFilter_Paint);
			// 
			// viewerbt
			// 
			this->viewerbt->BackColor = System::Drawing::Color::Tan;
			this->viewerbt->FlatAppearance->BorderSize = 3;
			this->viewerbt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->viewerbt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			this->viewerbt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewerbt->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->viewerbt->Location = System::Drawing::Point(500, 55);
			this->viewerbt->Name = L"viewerbt";
			this->viewerbt->Size = System::Drawing::Size(184, 61);
			this->viewerbt->TabIndex = 10;
			this->viewerbt->Text = L"view";
			this->viewerbt->UseVisualStyleBackColor = true;
			this->viewerbt->Click += gcnew System::EventHandler(this, &StudentPageForm::viewerbt_Click);
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel4->Location = System::Drawing::Point(201, 49);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(201, 65);
			this->flowLayoutPanel4->TabIndex = 11;
			this->flowLayoutPanel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::flowLayoutPanel4_Paint);
			// 
			// coursesviewFilterCourses
			// 
			this->coursesviewFilterCourses->Location = System::Drawing::Point(433, 119);
			this->coursesviewFilterCourses->Name = L"coursesviewFilterCourses";
			this->coursesviewFilterCourses->Size = System::Drawing::Size(327, 510);
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
			this->filterflowlytpnl->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->filterflowlytpnl->Location = System::Drawing::Point(3, 49);
			this->filterflowlytpnl->Name = L"filterflowlytpnl";
			this->filterflowlytpnl->Size = System::Drawing::Size(190, 67);
			this->filterflowlytpnl->TabIndex = 7;
			// 
			// Selectbt
			// 
			this->Selectbt->BackColor = System::Drawing::Color::Tan;
			this->Selectbt->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->Selectbt->FlatAppearance->BorderSize = 3;
			this->Selectbt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->Selectbt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			this->Selectbt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Selectbt->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->Selectbt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->Selectbt->Location = System::Drawing::Point(3, 3);
			this->Selectbt->Name = L"Selectbt";
			this->Selectbt->Size = System::Drawing::Size(184, 61);
			this->Selectbt->TabIndex = 8;
			this->Selectbt->Text = L"Courses Type";
			this->Selectbt->UseCompatibleTextRendering = true;
			this->Selectbt->UseVisualStyleBackColor = false;
			this->Selectbt->Click += gcnew System::EventHandler(this, &StudentPageForm::Selectbt_Click);
			// 
			// finishcsbt
			// 
			this->finishcsbt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->finishcsbt->FlatAppearance->BorderColor = System::Drawing::Color::Tan;
			this->finishcsbt->FlatAppearance->BorderSize = 3;
			this->finishcsbt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->finishcsbt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			this->finishcsbt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->finishcsbt->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->finishcsbt->ForeColor = System::Drawing::Color::Tan;
			this->finishcsbt->Location = System::Drawing::Point(193, 3);
			this->finishcsbt->Name = L"finishcsbt";
			this->finishcsbt->Size = System::Drawing::Size(184, 61);
			this->finishcsbt->TabIndex = 9;
			this->finishcsbt->Text = L"Finished Courses";
			this->finishcsbt->UseCompatibleTextRendering = true;
			this->finishcsbt->UseVisualStyleBackColor = false;
			this->finishcsbt->Click += gcnew System::EventHandler(this, &StudentPageForm::finishcsbt_Click);
			// 
			// AvailableCoursesbt
			// 
			this->AvailableCoursesbt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->AvailableCoursesbt->FlatAppearance->BorderColor = System::Drawing::Color::Tan;
			this->AvailableCoursesbt->FlatAppearance->BorderSize = 3;
			this->AvailableCoursesbt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->AvailableCoursesbt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			this->AvailableCoursesbt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AvailableCoursesbt->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->AvailableCoursesbt->ForeColor = System::Drawing::Color::Tan;
			this->AvailableCoursesbt->Location = System::Drawing::Point(383, 3);
			this->AvailableCoursesbt->Name = L"AvailableCoursesbt";
			this->AvailableCoursesbt->Size = System::Drawing::Size(184, 61);
			this->AvailableCoursesbt->TabIndex = 10;
			this->AvailableCoursesbt->Text = L"Available Courses";
			this->AvailableCoursesbt->UseCompatibleTextRendering = true;
			this->AvailableCoursesbt->UseVisualStyleBackColor = false;
			this->AvailableCoursesbt->Click += gcnew System::EventHandler(this, &StudentPageForm::AvailableCoursesbt_Click);
			// 
			// RequiredCoursesbt
			// 
			this->RequiredCoursesbt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->RequiredCoursesbt->FlatAppearance->BorderColor = System::Drawing::Color::Tan;
			this->RequiredCoursesbt->FlatAppearance->BorderSize = 3;
			this->RequiredCoursesbt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->RequiredCoursesbt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			this->RequiredCoursesbt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RequiredCoursesbt->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->RequiredCoursesbt->ForeColor = System::Drawing::Color::Tan;
			this->RequiredCoursesbt->Location = System::Drawing::Point(573, 3);
			this->RequiredCoursesbt->Name = L"RequiredCoursesbt";
			this->RequiredCoursesbt->Size = System::Drawing::Size(184, 61);
			this->RequiredCoursesbt->TabIndex = 11;
			this->RequiredCoursesbt->Text = L"Required Courses";
			this->RequiredCoursesbt->UseCompatibleTextRendering = true;
			this->RequiredCoursesbt->UseVisualStyleBackColor = false;
			this->RequiredCoursesbt->Click += gcnew System::EventHandler(this, &StudentPageForm::RequiredCoursesbt_Click);
			// 
			// ElectiveCoursesBt
			// 
			this->ElectiveCoursesBt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->ElectiveCoursesBt->FlatAppearance->BorderColor = System::Drawing::Color::Tan;
			this->ElectiveCoursesBt->FlatAppearance->BorderSize = 3;
			this->ElectiveCoursesBt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->ElectiveCoursesBt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			this->ElectiveCoursesBt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ElectiveCoursesBt->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->ElectiveCoursesBt->ForeColor = System::Drawing::Color::Tan;
			this->ElectiveCoursesBt->Location = System::Drawing::Point(763, 3);
			this->ElectiveCoursesBt->Name = L"ElectiveCoursesBt";
			this->ElectiveCoursesBt->Size = System::Drawing::Size(184, 61);
			this->ElectiveCoursesBt->TabIndex = 12;
			this->ElectiveCoursesBt->Text = L"Elective Courses";
			this->ElectiveCoursesBt->UseCompatibleTextRendering = true;
			this->ElectiveCoursesBt->UseVisualStyleBackColor = false;
			this->ElectiveCoursesBt->Click += gcnew System::EventHandler(this, &StudentPageForm::ElectiveCoursesBt_Click);
			// 
			// CoursesInProgressbt
			// 
			this->CoursesInProgressbt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->CoursesInProgressbt->FlatAppearance->BorderColor = System::Drawing::Color::Tan;
			this->CoursesInProgressbt->FlatAppearance->BorderSize = 3;
			this->CoursesInProgressbt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->CoursesInProgressbt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			this->CoursesInProgressbt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CoursesInProgressbt->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->CoursesInProgressbt->ForeColor = System::Drawing::Color::Tan;
			this->CoursesInProgressbt->Location = System::Drawing::Point(953, 3);
			this->CoursesInProgressbt->Name = L"CoursesInProgressbt";
			this->CoursesInProgressbt->Size = System::Drawing::Size(184, 61);
			this->CoursesInProgressbt->TabIndex = 13;
			this->CoursesInProgressbt->Text = L"In Progress Courses";
			this->CoursesInProgressbt->UseCompatibleTextRendering = true;
			this->CoursesInProgressbt->UseVisualStyleBackColor = false;
			this->CoursesInProgressbt->Click += gcnew System::EventHandler(this, &StudentPageForm::CoursesInProgressbt_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(17, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Filter Courses";
			this->label1->UseWaitCursor = true;
			this->label1->Click += gcnew System::EventHandler(this, &StudentPageForm::label1_Click_1);
			// 
			// pnlOfCourseGrades
			// 
			this->pnlOfCourseGrades->Controls->Add(this->CGPALabel);
			this->pnlOfCourseGrades->Controls->Add(this->label3);
			this->pnlOfCourseGrades->Controls->Add(this->viewgradesBt);
			this->pnlOfCourseGrades->Controls->Add(this->label2);
			this->pnlOfCourseGrades->Controls->Add(this->viewbttt);
			this->pnlOfCourseGrades->Controls->Add(this->flowLayoutPanel6);
			this->pnlOfCourseGrades->Controls->Add(this->flowLayoutPanel5);
			this->pnlOfCourseGrades->Location = System::Drawing::Point(16, 0);
			this->pnlOfCourseGrades->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlOfCourseGrades->Name = L"pnlOfCourseGrades";
			this->pnlOfCourseGrades->Size = System::Drawing::Size(1115, 519);
			this->pnlOfCourseGrades->TabIndex = 2;
			this->pnlOfCourseGrades->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::pnlOfCourseGrades_Paint);
			// 
			// CGPALabel
			// 
			this->CGPALabel->AutoSize = true;
			this->CGPALabel->BackColor = System::Drawing::Color::Transparent;
			this->CGPALabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CGPALabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CGPALabel->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->CGPALabel->Location = System::Drawing::Point(455, 199);
			this->CGPALabel->Name = L"CGPALabel";
			this->CGPALabel->Size = System::Drawing::Size(61, 28);
			this->CGPALabel->TabIndex = 15;
			this->CGPALabel->Text = L"CGPA";
			this->CGPALabel->UseCompatibleTextRendering = true;
			this->CGPALabel->Click += gcnew System::EventHandler(this, &StudentPageForm::CGPALabel_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label3->Location = System::Drawing::Point(303, 199);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 28);
			this->label3->TabIndex = 14;
			this->label3->Text = L"your CGPA is:->";
			this->label3->UseCompatibleTextRendering = true;
			this->label3->Click += gcnew System::EventHandler(this, &StudentPageForm::label3_Click);
			// 
			// viewgradesBt
			// 
			this->viewgradesBt->BackColor = System::Drawing::Color::Tan;
			this->viewgradesBt->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->viewgradesBt->FlatAppearance->BorderSize = 3;
			this->viewgradesBt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->viewgradesBt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			this->viewgradesBt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewgradesBt->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->viewgradesBt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->viewgradesBt->Location = System::Drawing::Point(54, 47);
			this->viewgradesBt->Name = L"viewgradesBt";
			this->viewgradesBt->Size = System::Drawing::Size(207, 51);
			this->viewgradesBt->TabIndex = 9;
			this->viewgradesBt->Text = L"View Grades";
			this->viewgradesBt->UseCompatibleTextRendering = true;
			this->viewgradesBt->UseVisualStyleBackColor = false;
			this->viewgradesBt->Click += gcnew System::EventHandler(this, &StudentPageForm::viewgradesBt_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label2->Location = System::Drawing::Point(3, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(588, 28);
			this->label2->TabIndex = 13;
			this->label2->Text = L"after selecting the course please click view to view your course:->";
			this->label2->UseCompatibleTextRendering = true;
			// 
			// viewbttt
			// 
			this->viewbttt->BackColor = System::Drawing::Color::Tan;
			this->viewbttt->FlatAppearance->BorderSize = 3;
			this->viewbttt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->viewbttt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			this->viewbttt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewbttt->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->viewbttt->Location = System::Drawing::Point(322, 352);
			this->viewbttt->Name = L"viewbttt";
			this->viewbttt->Size = System::Drawing::Size(184, 61);
			this->viewbttt->TabIndex = 12;
			this->viewbttt->Text = L"view";
			this->viewbttt->UseVisualStyleBackColor = true;
			this->viewbttt->Click += gcnew System::EventHandler(this, &StudentPageForm::button2_Click_2);
			// 
			// flowLayoutPanel6
			// 
			this->flowLayoutPanel6->Location = System::Drawing::Point(566, 54);
			this->flowLayoutPanel6->Name = L"flowLayoutPanel6";
			this->flowLayoutPanel6->Size = System::Drawing::Size(281, 412);
			this->flowLayoutPanel6->TabIndex = 11;
			// 
			// flowLayoutPanel5
			// 
			this->flowLayoutPanel5->Location = System::Drawing::Point(54, 100);
			this->flowLayoutPanel5->Name = L"flowLayoutPanel5";
			this->flowLayoutPanel5->Size = System::Drawing::Size(207, 59);
			this->flowLayoutPanel5->TabIndex = 10;
			this->flowLayoutPanel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::flowLayoutPanel5_Paint);
			// 
			// editpanel
			// 
			this->editpanel->Controls->Add(this->label14);
			this->editpanel->Controls->Add(this->textBox3);
			this->editpanel->Controls->Add(this->label13);
			this->editpanel->Controls->Add(this->label12);
			this->editpanel->Controls->Add(this->label11);
			this->editpanel->Controls->Add(this->Savebtt);
			this->editpanel->Controls->Add(this->label10);
			this->editpanel->Controls->Add(this->label9);
			this->editpanel->Controls->Add(this->label8);
			this->editpanel->Controls->Add(this->textBox2);
			this->editpanel->Controls->Add(this->textBox1);
			this->editpanel->Location = System::Drawing::Point(13, 0);
			this->editpanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->editpanel->Name = L"editpanel";
			this->editpanel->Size = System::Drawing::Size(1118, 519);
			this->editpanel->TabIndex = 7;
			this->editpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::editpanel_Paint);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Cooper Black", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Brown;
			this->label14->Location = System::Drawing::Point(457, 162);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(124, 15);
			this->label14->TabIndex = 10;
			this->label14->Text = L"Wrong Password!";
			this->label14->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::SeaShell;
			this->textBox3->ForeColor = System::Drawing::Color::Gray;
			this->textBox3->Location = System::Drawing::Point(142, 241);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(289, 22);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"Confirm your password";
			this->textBox3->Enter += gcnew System::EventHandler(this, &StudentPageForm::confirm_enter);
			this->textBox3->Leave += gcnew System::EventHandler(this, &StudentPageForm::confirm_leave);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label13->Location = System::Drawing::Point(138, 214);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(291, 20);
			this->label13->TabIndex = 8;
			this->label13->Text = L"Confirm your existing password:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Cooper Black", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label12->Location = System::Drawing::Point(167, 465);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(214, 15);
			this->label12->TabIndex = 7;
			this->label12->Text = L"Password updated successfully";
			this->label12->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Cooper Black", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Brown;
			this->label11->Location = System::Drawing::Point(434, 245);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(369, 15);
			this->label11->TabIndex = 6;
			this->label11->Text = L"Make sure that you have entered the correct password!";
			this->label11->Visible = false;
			// 
			// Savebtt
			// 
			this->Savebtt->AutoSize = true;
			this->Savebtt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->Savebtt->FlatAppearance->BorderColor = System::Drawing::Color::Tan;
			this->Savebtt->FlatAppearance->BorderSize = 2;
			this->Savebtt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->Savebtt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSlateGray;
			this->Savebtt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Savebtt->Font = (gcnew System::Drawing::Font(L"Cooper Black", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Savebtt->ForeColor = System::Drawing::Color::Tan;
			this->Savebtt->Location = System::Drawing::Point(219, 408);
			this->Savebtt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Savebtt->Name = L"Savebtt";
			this->Savebtt->Size = System::Drawing::Size(95, 43);
			this->Savebtt->TabIndex = 5;
			this->Savebtt->Text = L"Save";
			this->Savebtt->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Savebtt->UseCompatibleTextRendering = true;
			this->Savebtt->UseVisualStyleBackColor = false;
			this->Savebtt->Click += gcnew System::EventHandler(this, &StudentPageForm::Savebtt_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Tan;
			this->label10->Location = System::Drawing::Point(50, 41);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(374, 35);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Change your password:";
			this->label10->Click += gcnew System::EventHandler(this, &StudentPageForm::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label9->Location = System::Drawing::Point(138, 289);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(238, 20);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Enter your new password:";
			this->label9->Click += gcnew System::EventHandler(this, &StudentPageForm::label9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label8->Location = System::Drawing::Point(138, 134);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(269, 20);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Enter your existing password:";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::SeaShell;
			this->textBox2->ForeColor = System::Drawing::Color::Gray;
			this->textBox2->Location = System::Drawing::Point(142, 318);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(289, 22);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"Enter new password";
			this->textBox2->Enter += gcnew System::EventHandler(this, &StudentPageForm::new_enter);
			this->textBox2->Leave += gcnew System::EventHandler(this, &StudentPageForm::new_leave);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::SeaShell;
			this->textBox1->ForeColor = System::Drawing::Color::Gray;
			this->textBox1->Location = System::Drawing::Point(142, 159);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(289, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Enter your password";
			this->textBox1->Enter += gcnew System::EventHandler(this, &StudentPageForm::exist_enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &StudentPageForm::exist_leave);
			// 
			// pnlOfDetailsOfCourse
			// 
			this->pnlOfDetailsOfCourse->AutoScroll = true;
			this->pnlOfDetailsOfCourse->Controls->Add(this->flowLayoutPanel3);
			this->pnlOfDetailsOfCourse->Controls->Add(this->slctcourseCDetailsbt);
			this->pnlOfDetailsOfCourse->Controls->Add(this->viewbt);
			this->pnlOfDetailsOfCourse->Controls->Add(this->flwpnldetCourse);
			this->pnlOfDetailsOfCourse->Location = System::Drawing::Point(16, 0);
			this->pnlOfDetailsOfCourse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlOfDetailsOfCourse->Name = L"pnlOfDetailsOfCourse";
			this->pnlOfDetailsOfCourse->Size = System::Drawing::Size(1112, 517);
			this->pnlOfDetailsOfCourse->TabIndex = 3;
			this->pnlOfDetailsOfCourse->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::pnlOfDetailsOfCourse_Paint);
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->AutoScroll = true;
			this->flowLayoutPanel3->AutoScrollMargin = System::Drawing::Size(10, 0);
			this->flowLayoutPanel3->Location = System::Drawing::Point(13, 118);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(207, 59);
			this->flowLayoutPanel3->TabIndex = 11;
			// 
			// slctcourseCDetailsbt
			// 
			this->slctcourseCDetailsbt->BackColor = System::Drawing::Color::Tan;
			this->slctcourseCDetailsbt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->slctcourseCDetailsbt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->slctcourseCDetailsbt->FlatAppearance->BorderSize = 3;
			this->slctcourseCDetailsbt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->slctcourseCDetailsbt->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->slctcourseCDetailsbt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->slctcourseCDetailsbt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"slctcourseCDetailsbt.Image")));
			this->slctcourseCDetailsbt->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->slctcourseCDetailsbt->Location = System::Drawing::Point(20, 62);
			this->slctcourseCDetailsbt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->slctcourseCDetailsbt->Name = L"slctcourseCDetailsbt";
			this->slctcourseCDetailsbt->Size = System::Drawing::Size(207, 51);
			this->slctcourseCDetailsbt->TabIndex = 7;
			this->slctcourseCDetailsbt->Text = L"Select Course";
			this->slctcourseCDetailsbt->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->slctcourseCDetailsbt->UseVisualStyleBackColor = false;
			this->slctcourseCDetailsbt->Click += gcnew System::EventHandler(this, &StudentPageForm::slctcourseCDetailsbt_Click);
			// 
			// viewbt
			// 
			this->viewbt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->viewbt->BackColor = System::Drawing::Color::Tan;
			this->viewbt->FlatAppearance->BorderSize = 3;
			this->viewbt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->viewbt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			this->viewbt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewbt->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->viewbt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->viewbt->Location = System::Drawing::Point(849, 33);
			this->viewbt->Name = L"viewbt";
			this->viewbt->Size = System::Drawing::Size(169, 60);
			this->viewbt->TabIndex = 5;
			this->viewbt->Text = L"View";
			this->viewbt->UseVisualStyleBackColor = false;
			this->viewbt->Click += gcnew System::EventHandler(this, &StudentPageForm::viewbt_Click);
			// 
			// flwpnldetCourse
			// 
			this->flwpnldetCourse->Location = System::Drawing::Point(276, 114);
			this->flwpnldetCourse->Name = L"flwpnldetCourse";
			this->flwpnldetCourse->Size = System::Drawing::Size(350, 408);
			this->flwpnldetCourse->TabIndex = 4;
			this->flwpnldetCourse->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::flwpnldetCourse_Paint);
			// 
			// pnlOfCoursesInProgress
			// 
			this->pnlOfCoursesInProgress->AutoScroll = true;
			this->pnlOfCoursesInProgress->Controls->Add(this->flowLayoutPanel1);
			this->pnlOfCoursesInProgress->Dock = System::Windows::Forms::DockStyle::Right;
			this->pnlOfCoursesInProgress->Location = System::Drawing::Point(16, 0);
			this->pnlOfCoursesInProgress->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlOfCoursesInProgress->Name = L"pnlOfCoursesInProgress";
			this->pnlOfCoursesInProgress->Size = System::Drawing::Size(1115, 521);
			this->pnlOfCoursesInProgress->TabIndex = 4;
			this->pnlOfCoursesInProgress->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::pnlOfCoursesInProgress_Paint);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(317, 51);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(510, 398);
			this->flowLayoutPanel1->TabIndex = 2;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::flowLayoutPanel1_Paint);
			// 
			// pnlOfregCourse
			// 
			this->pnlOfregCourse->AutoScroll = true;
			this->pnlOfregCourse->Controls->Add(this->reglb);
			this->pnlOfregCourse->Controls->Add(this->label20);
			this->pnlOfregCourse->Controls->Add(this->label28);
			this->pnlOfregCourse->Controls->Add(this->savedcourse);
			this->pnlOfregCourse->Controls->Add(this->panel6);
			this->pnlOfregCourse->Controls->Add(this->label19);
			this->pnlOfregCourse->Controls->Add(this->panel5);
			this->pnlOfregCourse->Controls->Add(this->button2);
			this->pnlOfregCourse->Controls->Add(this->panel7);
			this->pnlOfregCourse->Controls->Add(this->button1);
			this->pnlOfregCourse->Controls->Add(this->savebt);
			this->pnlOfregCourse->Controls->Add(this->flowLayoutPanel2);
			this->pnlOfregCourse->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pnlOfregCourse->Location = System::Drawing::Point(16, 0);
			this->pnlOfregCourse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlOfregCourse->Name = L"pnlOfregCourse";
			this->pnlOfregCourse->Size = System::Drawing::Size(1115, 517);
			this->pnlOfregCourse->TabIndex = 5;
			this->pnlOfregCourse->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::pnlOfregCourse_Paint);
			// 
			// savedcourse
			// 
			this->savedcourse->AutoSize = true;
			this->savedcourse->BackColor = System::Drawing::Color::Tan;
			this->savedcourse->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->savedcourse->ForeColor = System::Drawing::Color::Brown;
			this->savedcourse->Location = System::Drawing::Point(392, 348);
			this->savedcourse->Name = L"savedcourse";
			this->savedcourse->Size = System::Drawing::Size(124, 20);
			this->savedcourse->TabIndex = 26;
			this->savedcourse->Text = L"course saved!";
			this->savedcourse->Visible = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Tan;
			this->label19->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label19->ForeColor = System::Drawing::Color::Brown;
			this->label19->Location = System::Drawing::Point(368, 275);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(164, 20);
			this->label19->TabIndex = 25;
			this->label19->Text = L"no course selected";
			this->label19->Visible = false;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Tan;
			this->panel5->Controls->Add(this->label25);
			this->panel5->Location = System::Drawing::Point(0, 54);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(550, 123);
			this->panel5->TabIndex = 22;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Tan;
			this->label25->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label25->Location = System::Drawing::Point(7, 9);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(515, 100);
			this->label25->TabIndex = 7;
			this->label25->Text = resources->GetString(L"label25.Text");
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Tan;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button2->FlatAppearance->BorderSize = 3;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button2->Location = System::Drawing::Point(396, 229);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 38);
			this->button2->TabIndex = 24;
			this->button2->Text = L"select";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &StudentPageForm::button2_Click_3);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Tan;
			this->panel6->Controls->Add(this->hoursrem);
			this->panel6->Controls->Add(this->label26);
			this->panel6->Controls->Add(this->avcoursecount);
			this->panel6->Controls->Add(this->myhours);
			this->panel6->Controls->Add(this->label5);
			this->panel6->Controls->Add(this->label21);
			this->panel6->Location = System::Drawing::Point(556, 54);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(381, 92);
			this->panel6->TabIndex = 21;
			// 
			// hoursrem
			// 
			this->hoursrem->AutoSize = true;
			this->hoursrem->BackColor = System::Drawing::Color::Tan;
			this->hoursrem->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->hoursrem->ForeColor = System::Drawing::Color::Brown;
			this->hoursrem->Location = System::Drawing::Point(192, 66);
			this->hoursrem->Name = L"hoursrem";
			this->hoursrem->Size = System::Drawing::Size(44, 20);
			this->hoursrem->TabIndex = 28;
			this->hoursrem->Text = L"null";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Tan;
			this->label26->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label26->Location = System::Drawing::Point(20, 64);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(141, 20);
			this->label26->TabIndex = 27;
			this->label26->Text = L"hours remainig";
			// 
			// avcoursecount
			// 
			this->avcoursecount->AutoSize = true;
			this->avcoursecount->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->avcoursecount->ForeColor = System::Drawing::Color::Brown;
			this->avcoursecount->Location = System::Drawing::Point(192, 9);
			this->avcoursecount->Name = L"avcoursecount";
			this->avcoursecount->Size = System::Drawing::Size(44, 20);
			this->avcoursecount->TabIndex = 9;
			this->avcoursecount->Text = L"null";
			this->avcoursecount->Click += gcnew System::EventHandler(this, &StudentPageForm::avcoursecount_Click);
			// 
			// myhours
			// 
			this->myhours->AutoSize = true;
			this->myhours->BackColor = System::Drawing::Color::Tan;
			this->myhours->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->myhours->ForeColor = System::Drawing::Color::Brown;
			this->myhours->Location = System::Drawing::Point(192, 37);
			this->myhours->Name = L"myhours";
			this->myhours->Size = System::Drawing::Size(44, 20);
			this->myhours->TabIndex = 21;
			this->myhours->Text = L"null";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Tan;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label5->Location = System::Drawing::Point(7, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(169, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Available Courses:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Tan;
			this->label21->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label21->Location = System::Drawing::Point(23, 40);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(111, 20);
			this->label21->TabIndex = 16;
			this->label21->Text = L"your hours:";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Tan;
			this->panel7->Controls->Add(this->cshours);
			this->panel7->Controls->Add(this->currstds);
			this->panel7->Controls->Add(this->label24);
			this->panel7->Controls->Add(this->label22);
			this->panel7->Controls->Add(this->label23);
			this->panel7->Controls->Add(this->courseMaxstds);
			this->panel7->Location = System::Drawing::Point(556, 152);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(403, 148);
			this->panel7->TabIndex = 23;
			this->panel7->Visible = false;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Tan;
			this->label28->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label28->ForeColor = System::Drawing::Color::Brown;
			this->label28->Location = System::Drawing::Point(287, 435);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(362, 60);
			this->label28->TabIndex = 22;
			this->label28->Text = L"Couldn\'t be Registered\r\n your maximum allowed hours \r\nis not compatiable with the"
				L" course hours";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label28->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Tan;
			this->label20->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label20->ForeColor = System::Drawing::Color::Brown;
			this->label20->Location = System::Drawing::Point(318, 379);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(289, 40);
			this->label20->TabIndex = 14;
			this->label20->Text = L"Couldn\'t be Registered\r\n the course max students is filled";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label20->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Tan;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 3;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(34, 194);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(207, 51);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Select Course";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &StudentPageForm::button1_Click_2);
			// 
			// savebt
			// 
			this->savebt->BackColor = System::Drawing::Color::Tan;
			this->savebt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->savebt->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->savebt->FlatAppearance->BorderSize = 3;
			this->savebt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->savebt->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->savebt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->savebt->Location = System::Drawing::Point(396, 302);
			this->savebt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->savebt->Name = L"savebt";
			this->savebt->Size = System::Drawing::Size(117, 38);
			this->savebt->TabIndex = 3;
			this->savebt->Text = L"save";
			this->savebt->UseVisualStyleBackColor = false;
			this->savebt->Click += gcnew System::EventHandler(this, &StudentPageForm::savebt_Click);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Location = System::Drawing::Point(34, 257);
			this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(220, 60);
			this->flowLayoutPanel2->TabIndex = 2;
			this->flowLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::flowLayoutPanel2_Paint);
			// 
			// pnlOfPanels
			// 
			this->pnlOfPanels->Controls->Add(this->pnlOfCoursesInProgress);
			this->pnlOfPanels->Controls->Add(this->homepanel);
			this->pnlOfPanels->Controls->Add(this->editpanel);
			this->pnlOfPanels->Controls->Add(this->pnlOfCourseGrades);
			this->pnlOfPanels->Controls->Add(this->PnlOfFilter);
			this->pnlOfPanels->Controls->Add(this->pnlOfregCourse);
			this->pnlOfPanels->Controls->Add(this->pnlOfDetailsOfCourse);
			this->pnlOfPanels->Location = System::Drawing::Point(-13, 0);
			this->pnlOfPanels->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlOfPanels->Name = L"pnlOfPanels";
			this->pnlOfPanels->Size = System::Drawing::Size(1131, 521);
			this->pnlOfPanels->TabIndex = 2;
			// 
			// homepanel
			// 
			this->homepanel->Controls->Add(this->pictureBox50);
			this->homepanel->Controls->Add(this->pictureBox49);
			this->homepanel->Controls->Add(this->panel4);
			this->homepanel->Controls->Add(this->label15);
			this->homepanel->Controls->Add(this->pictureBox45);
			this->homepanel->Controls->Add(this->panel3);
			this->homepanel->Location = System::Drawing::Point(3, 3);
			this->homepanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->homepanel->Name = L"homepanel";
			this->homepanel->Size = System::Drawing::Size(1128, 519);
			this->homepanel->TabIndex = 6;
			this->homepanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::homepanel_Paint);
			// 
			// pictureBox50
			// 
			this->pictureBox50->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox50->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox50->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox50.Image")));
			this->pictureBox50->Location = System::Drawing::Point(18, 8);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(52, 29);
			this->pictureBox50->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox50->TabIndex = 9;
			this->pictureBox50->TabStop = false;
			// 
			// pictureBox49
			// 
			this->pictureBox49->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox49.Image")));
			this->pictureBox49->Location = System::Drawing::Point(15, 91);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(55, 49);
			this->pictureBox49->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox49->TabIndex = 8;
			this->pictureBox49->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label27);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Controls->Add(this->label29);
			this->panel4->Controls->Add(this->label18);
			this->panel4->Controls->Add(this->label30);
			this->panel4->Controls->Add(this->label16);
			this->panel4->Controls->Add(this->pictureBox48);
			this->panel4->Controls->Add(this->pictureBox47);
			this->panel4->Controls->Add(this->pictureBox44);
			this->panel4->Controls->Add(this->textBox6);
			this->panel4->Controls->Add(this->textBox5);
			this->panel4->Controls->Add(this->textBox4);
			this->panel4->Location = System::Drawing::Point(19, 174);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(440, 259);
			this->panel4->TabIndex = 7;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::Brown;
			this->label27->Location = System::Drawing::Point(59, 149);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(46, 25);
			this->label27->TabIndex = 9;
			this->label27->Text = L"Join";
			this->label27->UseCompatibleTextRendering = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Brown;
			this->label17->Location = System::Drawing::Point(62, 147);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(46, 25);
			this->label17->TabIndex = 9;
			this->label17->Text = L"Join";
			this->label17->UseCompatibleTextRendering = true;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::Transparent;
			this->label29->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::Brown;
			this->label29->Location = System::Drawing::Point(54, 80);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(46, 25);
			this->label29->TabIndex = 10;
			this->label29->Text = L"Stay";
			this->label29->UseCompatibleTextRendering = true;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Brown;
			this->label18->Location = System::Drawing::Point(54, 79);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(46, 25);
			this->label18->TabIndex = 10;
			this->label18->Text = L"Stay";
			this->label18->UseCompatibleTextRendering = true;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::Brown;
			this->label30->Location = System::Drawing::Point(54, 15);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(83, 25);
			this->label30->TabIndex = 8;
			this->label30->Text = L"Simplify";
			this->label30->UseCompatibleTextRendering = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Brown;
			this->label16->Location = System::Drawing::Point(49, 14);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(83, 25);
			this->label16->TabIndex = 8;
			this->label16->Text = L"Simplify";
			this->label16->UseCompatibleTextRendering = true;
			// 
			// pictureBox48
			// 
			this->pictureBox48->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox48->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.Image")));
			this->pictureBox48->Location = System::Drawing::Point(9, 141);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(44, 50);
			this->pictureBox48->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox48->TabIndex = 5;
			this->pictureBox48->TabStop = false;
			// 
			// pictureBox47
			// 
			this->pictureBox47->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox47->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox47.Image")));
			this->pictureBox47->Location = System::Drawing::Point(7, 11);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(41, 46);
			this->pictureBox47->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox47->TabIndex = 4;
			this->pictureBox47->TabStop = false;
			// 
			// pictureBox44
			// 
			this->pictureBox44->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox44->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(7, 79);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(41, 39);
			this->pictureBox44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox44->TabIndex = 3;
			this->pictureBox44->TabStop = false;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox6->Location = System::Drawing::Point(77, 148);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(360, 88);
			this->textBox6->TabIndex = 2;
			this->textBox6->Text = L"       thousands of successful students who trust our system to help them achieve"
				L" their academic goals.";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox5->Location = System::Drawing::Point(83, 79);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(350, 59);
			this->textBox5->TabIndex = 1;
			this->textBox5->Text = L"    on top of important deadlines and manage your course work wih ease.";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox4->Location = System::Drawing::Point(80, 14);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(341, 59);
			this->textBox4->TabIndex = 0;
			this->textBox4->Text = L"           your academic life with our user-friendly university system. ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Cooper Black", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->label15->Location = System::Drawing::Point(68, 106);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(713, 33);
			this->label15->TabIndex = 5;
			this->label15->Text = L"Take Control Of Your Studies With Our University System";
			this->label15->UseCompatibleTextRendering = true;
			// 
			// pictureBox45
			// 
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(465, 191);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(407, 225);
			this->pictureBox45->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox45->TabIndex = 4;
			this->pictureBox45->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Location = System::Drawing::Point(28, 29);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(424, 56);
			this->panel3->TabIndex = 2;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::panel3_Paint_1);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Brown;
			this->label7->Location = System::Drawing::Point(201, 11);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 35);
			this->label7->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Cooper Black", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->label6->Location = System::Drawing::Point(2, 6);
			this->label6->Margin = System::Windows::Forms::Padding(3, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(194, 42);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Welcome ";
			// 
			// sideBarTimer
			// 
			this->sideBarTimer->Interval = 10;
			this->sideBarTimer->Tick += gcnew System::EventHandler(this, &StudentPageForm::sideBarTimer_Tick);
			// 
			// mstPanel
			// 
			this->mstPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->mstPanel->Controls->Add(this->pnlOfPanels);
			this->mstPanel->Dock = System::Windows::Forms::DockStyle::Right;
			this->mstPanel->Location = System::Drawing::Point(64, 0);
			this->mstPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->mstPanel->Name = L"mstPanel";
			this->mstPanel->Size = System::Drawing::Size(1118, 519);
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
			// viewGradesTiner
			// 
			this->viewGradesTiner->Tick += gcnew System::EventHandler(this, &StudentPageForm::viewGradesTiner_Tick);
			// 
			// currstds
			// 
			this->currstds->AutoSize = true;
			this->currstds->BackColor = System::Drawing::Color::Tan;
			this->currstds->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->currstds->ForeColor = System::Drawing::Color::Brown;
			this->currstds->Location = System::Drawing::Point(282, 72);
			this->currstds->Name = L"currstds";
			this->currstds->Size = System::Drawing::Size(44, 20);
			this->currstds->TabIndex = 24;
			this->currstds->Text = L"null";
			this->currstds->Visible = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Tan;
			this->label22->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label22->Location = System::Drawing::Point(16, 10);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(169, 40);
			this->label22->TabIndex = 23;
			this->label22->Text = L"current students\r\n taking the course:";
			// 
			// cshours
			// 
			this->cshours->AutoSize = true;
			this->cshours->BackColor = System::Drawing::Color::Tan;
			this->cshours->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->cshours->ForeColor = System::Drawing::Color::Brown;
			this->cshours->Location = System::Drawing::Point(192, 112);
			this->cshours->Name = L"cshours";
			this->cshours->Size = System::Drawing::Size(44, 20);
			this->cshours->TabIndex = 17;
			this->cshours->Text = L"null";
			this->cshours->Visible = false;
			// 
			// courseMaxstds
			// 
			this->courseMaxstds->AutoSize = true;
			this->courseMaxstds->BackColor = System::Drawing::Color::Tan;
			this->courseMaxstds->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->courseMaxstds->ForeColor = System::Drawing::Color::Brown;
			this->courseMaxstds->Location = System::Drawing::Point(232, 22);
			this->courseMaxstds->Name = L"courseMaxstds";
			this->courseMaxstds->Size = System::Drawing::Size(44, 20);
			this->courseMaxstds->TabIndex = 20;
			this->courseMaxstds->Text = L"null";
			this->courseMaxstds->Visible = false;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Tan;
			this->label24->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label24->Location = System::Drawing::Point(26, 113);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(129, 20);
			this->label24->TabIndex = 19;
			this->label24->Text = L"Course hours:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Tan;
			this->label23->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label23->Location = System::Drawing::Point(16, 72);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(252, 20);
			this->label23->TabIndex = 18;
			this->label23->Text = L"maximum students allowed:";
			// 
			// reglb
			// 
			this->reglb->AutoSize = true;
			this->reglb->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->reglb->Dock = System::Windows::Forms::DockStyle::Top;
			this->reglb->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reglb->ForeColor = System::Drawing::Color::Brown;
			this->reglb->Location = System::Drawing::Point(0, 0);
			this->reglb->Name = L"reglb";
			this->reglb->Size = System::Drawing::Size(601, 35);
			this->reglb->TabIndex = 27;
			this->reglb->Text = L"Please choose the courses to register:->";
			// 
			// StudentPageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->ClientSize = System::Drawing::Size(1182, 519);
			this->Controls->Add(this->sideBar);
			this->Controls->Add(this->mstPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"StudentPageForm";
			this->Text = L"StudentPageForm";
			this->Load += gcnew System::EventHandler(this, &StudentPageForm::StudentPageForm_Load);
			this->sideBar->ResumeLayout(false);
			this->sideBar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->pnlbuttons->ResumeLayout(false);
			this->pnlbuttons->PerformLayout();
			this->PnlOfFilter->ResumeLayout(false);
			this->PnlOfFilter->PerformLayout();
			this->filterflowlytpnl->ResumeLayout(false);
			this->pnlOfCourseGrades->ResumeLayout(false);
			this->pnlOfCourseGrades->PerformLayout();
			this->editpanel->ResumeLayout(false);
			this->editpanel->PerformLayout();
			this->pnlOfDetailsOfCourse->ResumeLayout(false);
			this->pnlOfCoursesInProgress->ResumeLayout(false);
			this->pnlOfregCourse->ResumeLayout(false);
			this->pnlOfregCourse->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->pnlOfPanels->ResumeLayout(false);
			this->homepanel->ResumeLayout(false);
			this->homepanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->mstPanel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	public: bool loggedOut = false;
    public:List<courseButton^>^ RegisterCourseList = gcnew List<courseButton^>();
    public:List<courseButton^>^ allgradesbtns = gcnew List<courseButton^>();
	public:String^ filterchoice="";

	public:static List<Button^>^ allbtns = gcnew List<Button^>();
		

	private: System::Void StudentPageForm_Load(System::Object^ sender, System::EventArgs^ e) {
		populateItems();

		hoursrem->Text = Convert::ToString(student->getMaxHoursAllowed() - student->calculatecourseshours());
		myhours->Text = Convert::ToString(student->calculatecourseshours());
		allbtns->Add(finishcsbt);
		allbtns->Add(CoursesInProgressbt);
		allbtns->Add(ElectiveCoursesBt);
		allbtns->Add(RequiredCoursesbt);
		allbtns->Add(AvailableCoursesbt);
		flowLayoutPanel5->Height = 0;
		avcoursecount->Text = Convert::ToString(student->CoursesAV()->Count);
	}



    private:void populateItems()
	{
		viewcoursesinprog(flowLayoutPanel1);
		flowLayoutPanel3->Height = 0;
		if (selectedcourse->getAllStudentsInCourse() != nullptr)
		{
			currstds->Text = Convert::ToString(selectedcourse->getAllStudentsInCourse()->Count);
		}
		else {
			currstds->Text = "0";
		}
	
		CGPALabel->Text = Convert::ToString(Admin::calc_CGPA(student));

			



		
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
	
		PnlOfFilter->Visible = true;
		pnlOfDetailsOfCourse->Visible = false;
		pnlOfCoursesInProgress->Visible = false;
		pnlOfCourseGrades->Visible = false;
		pnlOfregCourse->Visible = false;
		homepanel->Visible = false;
		editpanel->Visible = false;
		courseButton::alldetailsbtns->Clear();

	}

	private: System::Void btnCourseInProgress_Click(System::Object^ sender, System::EventArgs^ e) {
		viewcoursesinprog(flowLayoutPanel1);
		courseButton::courseDetails = true;
		PnlOfFilter->Visible = false;
		pnlOfDetailsOfCourse->Visible = false;
		pnlOfCoursesInProgress->Visible = true;
		pnlOfCourseGrades->Visible = false;
		pnlOfregCourse->Visible = false;
		homepanel->Visible = false;
		editpanel->Visible = false;
		courseButton::alldetailsbtns->Clear();
	}
	private: System::Void btnCourseGrade_Click(System::Object^ sender, System::EventArgs^ e) {
		courseButton::courseDetails = true;
		PnlOfFilter->Visible = false;
		pnlOfDetailsOfCourse->Visible = false;
		pnlOfCoursesInProgress->Visible = false;
		pnlOfCourseGrades->Visible = true;
		pnlOfregCourse->Visible = false;
		homepanel->Visible = false;
		editpanel->Visible = false;
		courseButton::alldetailsbtns->Clear();
	}
	private: System::Void btnDetailsOfCourse_Click(System::Object^ sender, System::EventArgs^ e) {
		courseButton::courseDetails = true;
		PnlOfFilter->Visible = false;
		pnlOfDetailsOfCourse->Visible = true;
		pnlOfCoursesInProgress->Visible = false;
		pnlOfCourseGrades->Visible = false;
		pnlOfregCourse->Visible = false;
		homepanel->Visible = false;
		editpanel->Visible = false;
		courseButton::alldetailsbtns->Clear();
	}
	private: System::Void btnGPA_Click(System::Object^ sender, System::EventArgs^ e) {
		sideBarTimer->Start(); 
		if (selectedcourse->getAllStudentsInCourse() != nullptr)
		{
			currstds->Text = Convert::ToString(selectedcourse->getAllStudentsInCourse()->Count);
		}
		else {
			currstds->Text = "0";
		}

		hoursrem->Text = Convert::ToString(student->getMaxHoursAllowed() - student->calculatecourseshours());
		myhours->Text = Convert::ToString(student->calculatecourseshours());
		savedcourse->Visible = false;
		panel7->Visible = false;
		myhours->Text = Convert::ToString(student->calculatecourseshours());
		label20->Visible = false;
		label28->Visible = false;
		currstds->Visible = false;
		cshours->Visible = false;
		courseMaxstds->Visible = false;
		label19->Visible = false;
		savebt->Visible = false;
		flowLayoutPanel2->Height = 0;
		RegisterCourseList->Clear();
		PnlOfFilter->Visible = false;
		pnlOfDetailsOfCourse->Visible = false;
		pnlOfCoursesInProgress->Visible = false;
		pnlOfCourseGrades->Visible = false;
		pnlOfregCourse->Visible = true;
		homepanel->Visible = false;
		editpanel->Visible = false;
		avcoursecount->Text = Convert::ToString(student->CoursesAV()->Count);
		myhours->Text = Convert::ToString(student->calculatecourseshours());
		flowLayoutPanel2->Controls->Clear();
		courseButton::alldetailsbtns->Clear();
	}


	private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnDetailsOfCourse_Click_1(System::Object^ sender, System::EventArgs^ e) {
		courseButton::courseDetails = true;
PnlOfFilter->Visible = false;
		pnlOfDetailsOfCourse->Visible = true;
		pnlOfCoursesInProgress->Visible = false;
		pnlOfCourseGrades->Visible = false;
		pnlOfregCourse->Visible = false;
		editpanel->Visible = false;
		homepanel->Visible = false;
		flowLayoutPanel3->Height = 0;
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
		flowLayoutPanel2->Height += 60;
		if (flowLayoutPanel2->Height >= student->CoursesAV()->Count * 60) {
			dropdowntimer->Stop();
			expandd = true;
		}
	}

	else {

		if (flowLayoutPanel2->Height <= 0)
		{
			label19->Visible = false;
			savebt->Visible = false;
			flowLayoutPanel2->Controls->Clear();
			flowLayoutPanel2->Height = 0;
			RegisterCourseList->Clear();
			dropdowntimer->Stop();
			expandd = false;
		}
		else {

			flowLayoutPanel2->Height -= 60;
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
		flowLayoutPanel3->Height += 40;
		if (flowLayoutPanel3->Height >= Course::allCourses->Count * 60) {
			dropdowndet->Stop();
			expand3 = true;
		}
	}

	else {
		if (flowLayoutPanel3->Height <= 0)
		{
			flwpnldetCourse->Controls->Clear();

			dropdowndet->Stop();
			expand3 = false;
		}
		else
		{

			flowLayoutPanel3->Height -= 60;
		}

	}
}

private: System::Void pnlOfDetailsOfCourse_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
	   
private: System::Void savebt_Click(System::Object^ sender, System::EventArgs^ e) {

	panel7->Visible = false;
	if (selectedcourse->ifcourseisfilled())
	{

		panel7->Visible = true;
		label20->Visible = true;
		savebt->Visible = false;
	}
	else if ((student->calculatecourseshours() + selectedcourse->getHours()) > student->getMaxHoursAllowed())
	{

		panel7->Visible = true;
		label28->Visible = true;

		savebt->Visible = false;
	}
	else {
		savedcourse->Visible = true;
		if (selectedcourse->getAllStudentsInCourse() != nullptr)
		{
			currstds->Text = Convert::ToString(selectedcourse->getAllStudentsInCourse()->Count);
		}
		else {
			currstds->Text = "0";
		}
		student->registerForCourse(selectedcourse);
		avcoursecount->Text = Convert::ToString(student->CoursesAV()->Count);
		myhours->Text = Convert::ToString(student->calculatecourseshours());
		hoursrem->Text = Convert::ToString(student->getMaxHoursAllowed() - student->calculatecourseshours() );
		expand3 = true;
		dropdowntimer->Start();
		Student::saveStudentDataToFile();
	}


}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

}


private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {

	savedcourse->Visible = false;
	label20->Visible = false;
	label28->Visible = false;
	currstds->Visible = false;
	cshours->Visible = false;
	courseMaxstds->Visible = false;
	courseregisterbtns = convertfromcoursestocoursebt(getavCourses());
	putCoursesbtnsInPanel(courseregisterbtns, flowLayoutPanel2);
	dropdowntimer->Start();
	
	courseButton::alldetailsbtns = courseregisterbtns;
}

private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void flwpnldetCourse_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void viewbt_Click(System::Object^ sender, System::EventArgs^ e) {
	viewdetailsofaCourse(flwpnldetCourse, coursedetailsbtns);
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
	courseButton::alldetailsbtns->Clear();


	if (CoursesInProgressbt->BackColor == ColorTranslator::FromHtml("#17171F")) {
		CoursesInProgressbt->BackColor = Color::Brown;
		CoursesInProgressbt->ForeColor = Color::Tan;


		for each (auto course in student->FilterCourses(filterchoice))
		{
			courseButton^ temp = gcnew courseButton;

			temp->setCourseName(course->getName());
			courseButton::alldetailsbtns->Add(temp);
			flowLayoutPanel4->Controls->Add(temp);
		}
		selectCoursebool = false;
		selectCoursetimer->Start();
			for each (auto i in this->allbtns)
			{

				if (i != CoursesInProgressbt)
				{
					i->BackColor = ColorTranslator::FromHtml("#17171F");
					i->ForeColor = Color::Tan;
			
				}

			}

		
	}
	else
	{

		selectCoursebool = true;
		selectCoursetimer->Start();
		CoursesInProgressbt->BackColor = ColorTranslator::FromHtml("#17171F");
		CoursesInProgressbt->ForeColor = Color::Tan;
		
	}
	bool temp = false;
	for each (auto i in this->allbtns)
	{

		if (i->BackColor == Color::Brown) {
			temp = true;
		}

	}
	if (!temp)
	{
		flowLayoutPanel4->Height = 0;
	}
}
private: System::Void ElectiveCoursesBt_Click(System::Object^ sender, System::EventArgs^ e) {
	filterchoice = "Elective Courses";

	coursesviewFilterCourses->Controls->Clear();
	flowLayoutPanel4->Controls->Clear();
	courseButton::alldetailsbtns->Clear();
	
	if (ElectiveCoursesBt->BackColor == ColorTranslator::FromHtml("#17171F")) {
		ElectiveCoursesBt->BackColor = Color::Brown;
		ElectiveCoursesBt->ForeColor = Color::Tan;

		for each (auto course in student->FilterCourses(filterchoice))
		{
			courseButton^ temp = gcnew courseButton;
			temp->setCourseName(course->getName());
			flowLayoutPanel4->Controls->Add(temp);

			courseButton::alldetailsbtns->Add(temp);
		}

		selectCoursebool = false;
		selectCoursetimer->Start();
		for each (auto i in this->allbtns)
		{

			if (i != ElectiveCoursesBt)
			{
				i->BackColor = ColorTranslator::FromHtml("#17171F");
				i->ForeColor = Color::Tan;

			}

		}
	}
	else
	{

		selectCoursebool = true;
		selectCoursetimer->Start();
		ElectiveCoursesBt->BackColor = ColorTranslator::FromHtml("#17171F");
		ElectiveCoursesBt->ForeColor = Color::Tan;

	}
	bool temp = false;
	for each (auto i in this->allbtns)
	{

		if (i->BackColor == Color::Brown) {
			temp = true;
		}

	}
	if (!temp)
	{
		flowLayoutPanel4->Height = 0;
	}
}
private: System::Void RequiredCoursesbt_Click(System::Object^ sender, System::EventArgs^ e) {
	filterchoice = "Required Courses";

	coursesviewFilterCourses->Controls->Clear();
	flowLayoutPanel4->Controls->Clear();
	courseButton::alldetailsbtns->Clear();
	
	if (RequiredCoursesbt->BackColor == ColorTranslator::FromHtml("#17171F")) {
		RequiredCoursesbt->BackColor = Color::Brown;
		RequiredCoursesbt->ForeColor = Color::Tan;


		for each (auto course in student->FilterCourses(filterchoice))
		{
			courseButton^ temp = gcnew courseButton;
			temp->setCourseName(course->getName());
			flowLayoutPanel4->Controls->Add(temp);

			courseButton::alldetailsbtns->Add(temp);
		}

		selectCoursebool = false;
		selectCoursetimer->Start();
		for each (auto i in this->allbtns)
		{

			if (i != RequiredCoursesbt)
			{
				i->BackColor = ColorTranslator::FromHtml("#17171F");
				i->ForeColor = Color::Tan;

			}

		}
	}
	else
	{


		selectCoursebool = true;
		selectCoursetimer->Start();
		RequiredCoursesbt->BackColor = ColorTranslator::FromHtml("#17171F");
		RequiredCoursesbt->ForeColor = Color::Tan;

	}
	bool temp = false;
	for each (auto i in this->allbtns)
	{

		if (i->BackColor == Color::Brown) {
			temp = true;
		}

	}
	if (!temp)
	{
		flowLayoutPanel4->Height = 0;
	}
}
private: System::Void AvailableCoursesbt_Click(System::Object^ sender, System::EventArgs^ e) {
	filterchoice = "Available Courses";
	
	coursesviewFilterCourses->Controls->Clear();
	flowLayoutPanel4->Controls->Clear();
	courseButton::alldetailsbtns->Clear();
	
	if (AvailableCoursesbt->BackColor == ColorTranslator::FromHtml("#17171F")) {
		AvailableCoursesbt->BackColor = Color::Brown;
		AvailableCoursesbt->ForeColor = Color::Tan;

		for each (auto course in student->FilterCourses(filterchoice))
		{
			courseButton^ temp = gcnew courseButton;
			temp->setCourseName(course->getName());

			courseButton::alldetailsbtns->Add(temp);
			flowLayoutPanel4->Controls->Add(temp);
		}

		selectCoursebool = false;
		selectCoursetimer->Start();


		for each (auto i in this->allbtns)
		{

			if (i != AvailableCoursesbt)
			{
				i->BackColor = ColorTranslator::FromHtml("#17171F");
				i->ForeColor = Color::Tan;

			}

		}

		
	}
	else
	{

		selectCoursebool = true;
		selectCoursetimer->Start();
		AvailableCoursesbt->BackColor = ColorTranslator::FromHtml("#17171F");
		AvailableCoursesbt->ForeColor = Color::Tan;

	}
	bool temp = false;
	for each (auto i in this->allbtns)
	{

		if (i->BackColor == Color::Brown) {
			temp = true;
		}

	}
	if (!temp)
	{
		flowLayoutPanel4->Height = 0;
	}
}
private: System::Void finishcsbt_Click(System::Object^ sender, System::EventArgs^ e) {
	filterchoice = "Finished Courses";


	coursesviewFilterCourses->Controls->Clear();
	flowLayoutPanel4->Controls->Clear();
	courseButton::alldetailsbtns->Clear();

	
	if (finishcsbt->BackColor == ColorTranslator::FromHtml("#17171F")) {
		
		finishcsbt->BackColor = Color::Brown;
		finishcsbt->ForeColor = Color::Tan;
		for each (auto course in student->FilterCourses(filterchoice))
		{
			courseButton^ temp = gcnew courseButton;

			temp->setCourseName(course->getName());

			flowLayoutPanel4->Controls->Add(temp);

			courseButton::alldetailsbtns->Add(temp);
		}

		selectCoursebool = false;
		selectCoursetimer->Start();
		for each (auto i in this->allbtns)
		{

			if (i != finishcsbt)
			{
				i->BackColor = ColorTranslator::FromHtml("#17171F");
				i->ForeColor = Color::Tan;

			}

		}
	
	}
	else
	{

		selectCoursebool = true;

		selectCoursetimer->Start();
		finishcsbt->BackColor = ColorTranslator::FromHtml("#17171F");
		finishcsbt->ForeColor = Color::Tan;

	}
	bool temp = false;
	for each (auto i in this->allbtns)
	{

		if (i->BackColor == Color::Brown) {
			temp = true;
		}

	}
	if (!temp)
	{
		flowLayoutPanel4->Height = 0;
	}
}



private: System::Void Selectbt_Click(System::Object^ sender, System::EventArgs^ e) {

	courseButton::courseDetails = true;
	coursesviewFilterCourses->Controls->Clear();
	filterTimer->Start();
	
	
}

public :bool exapndfilter = false;

private: System::Void filterTimer_Tick(System::Object^ sender, System::EventArgs^ e) {

	if (!exapndfilter)
	{
		filterflowlytpnl->Height += 30;
		if ((filterflowlytpnl->Height >=6*65)) {
			filterTimer->Stop();
			exapndfilter = true;
		}
	}

	else {
		filterflowlytpnl->Height -= 30;
	
		if (filterflowlytpnl->Height <= 65)
		{
			filterTimer->Stop();
			exapndfilter = false;
			flowLayoutPanel4->Height = 0;
			if (flowLayoutPanel4->Height == 0)
			{
				for each (auto i in this->allbtns)
				{
					i->BackColor = ColorTranslator::FromHtml("#17171F");
					i->ForeColor = Color::Tan;
				}
			}
		
		}
	}
	
}

public: bool selectCoursebool=false;
private: System::Void selectCoursetimer_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (!selectCoursebool)
	{
		flowLayoutPanel4->Height += 25;
		if ((flowLayoutPanel4->Height >= 6 * 65)) {
			selectCoursetimer->Stop();
			selectCoursebool = true;
		}
	}

	else {
		selectCoursetimer->Stop();
		selectCoursebool = false;

	}
}
private: System::Void flowLayoutPanel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void slctLB_Click(System::Object^ sender, System::EventArgs^ e) {
	selectCoursetimer->Start();
}
private: System::Void viewerbt_Click(System::Object^ sender, System::EventArgs^ e) {

	coursesviewFilterCourses->Controls->Clear();
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

			coursesviewFilterCourses->Controls->Add(temp);
		
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
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button2_Click_2(System::Object^ sender, System::EventArgs^ e) {
	flowLayoutPanel6->Controls->Clear();
	for each (auto i in courseButton::alldetailsbtns)
	{
		if (i->getBt()->BackColor ==Color::Brown)
		{
			CoursegGradeItem ^temp = gcnew CoursegGradeItem;
			for each (auto j in Admin::conversionFinishedCourseGpa(student->getCoursesGPA(), student))
			{
				if (i->getCourseName() == j.Key->getName())
				{
					temp->setName(j.Key->getName());
					temp->setCode(j.Key->getCode());
					temp->setGrade(j.Value);
					flowLayoutPanel6->Controls->Add(temp);
				}
			}
		}
	}
}

private: System::Void pnlOfCourseGrades_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	   bool selected = false;
private: System::Void viewgradesBt_Click(System::Object^ sender, System::EventArgs^ e) {
	flowLayoutPanel6->Controls->Clear();
	courseButton::courseDetails = true;
	if (!selected)
	{
		for each (auto i in Admin::conversionFinishedCourseGpa(student->getCoursesGPA(), student)) {

			courseButton^ temp = gcnew courseButton();
			Course^ course = i.Key;
			float gpaCourse = i.Value;
			temp->setCourseName(course->getName());
			courseButton::alldetailsbtns->Add(temp);
			flowLayoutPanel5->Controls->Add(temp);
		}
	selected = true;
	}
	viewGradesTiner->Start();
}
	   
bool viewgradesTimerbool = false;
private: System::Void viewGradesTiner_Tick(System::Object^ sender, System::EventArgs^ e) {

	if (!viewgradesTimerbool)
	{
		flowLayoutPanel5->Height += 40;
		if (flowLayoutPanel5->Height >=(student->getFinishedCourses()->Count) * 60) {
			viewGradesTiner->Stop();
			viewgradesTimerbool = true;
			selected = true;
		}
	}

	else {
		flowLayoutPanel5->Height -= 40;
		if (flowLayoutPanel5->Height <= 0)
		{
			viewGradesTiner->Stop();
			viewgradesTimerbool = false;
			selected = false;
			flowLayoutPanel5->Controls->Clear();
			courseButton::alldetailsbtns->Clear();
		}
		

	}
}
private: System::Void flowLayoutPanel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void CGPALabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void flowLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void homepanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	label7->Text = student->getName();
}
private: System::Void pictureBox13_Click(System::Object^ sender, System::EventArgs^ e) {
	PnlOfFilter->Visible = false;
	pnlOfDetailsOfCourse->Visible = false;
	pnlOfCoursesInProgress->Visible = false;
	pnlOfCourseGrades->Visible = false;
	pnlOfregCourse->Visible = false;
	homepanel->Visible = true;
	editpanel->Visible = false;
}
private: System::Void axWindowsMediaPlayer1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox46_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void editp_Click(System::Object^ sender, System::EventArgs^ e) {
	PnlOfFilter->Visible = false;
	pnlOfDetailsOfCourse->Visible = false;
	pnlOfCoursesInProgress->Visible = false;
	pnlOfCourseGrades->Visible = false;
	pnlOfregCourse->Visible = false;
	homepanel->Visible = false;
	editpanel->Visible = true;
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Savebtt_Click(System::Object^ sender, System::EventArgs^ e) {
	
		if (textBox1->Text == student->getPassword() && textBox1->Text == textBox3->Text) {
			for each (auto stu in Student::allStudents)
			{
				if (student->getName() == stu->getName()) {
					stu->setPassword(textBox2->Text);

					label12->Visible = true;
					label14->Visible = false;
					label11->Visible = false;
					Savebtt->BackColor = Color::Brown;
					textBox1->Clear();
					textBox2->Clear();
					textBox3->Clear();
					label11->Visible = false;
					label14->Visible = false;
				}
			}

		}
		else {
			label14->Visible = true;
			label11->Visible = true;
			label12->Visible = false;
			textBox1->Clear();
			textBox2->Clear();
			textBox3->Clear();
		}
		if (textBox1->Text != textBox3->Text) {
			label14->Visible = true;
			label11->Visible = true;
		}
		Student::saveStudentDataToFile();
	
	
}
	

private: System::Void editpanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
	
}
private: System::Void exist_enter(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Enter your password") {
		textBox1->Text = "";
		textBox1->ForeColor = Color::Black;
		textBox1->PasswordChar = '*';
	}
}
private: System::Void exist_leave(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		textBox1->Text = "Enter your password";
		textBox1->PasswordChar =NULL;
		textBox1->ForeColor = Color::Gray;

	}

}
private: System::Void confirm_enter(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3->Text == "Confirm your password") {
		textBox3->Text = "";
		textBox3->ForeColor = Color::Black;
		textBox3->PasswordChar = '*';
	}
}
private: System::Void confirm_leave(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3->Text == "") {
		textBox3->Text = "Re-enter your password";
		textBox3->PasswordChar = NULL;
		textBox3->ForeColor = Color::Gray;

	}
}
private: System::Void new_enter(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "Enter new password") {
		textBox2->Text = "";
		textBox2->ForeColor = Color::Black;
		textBox2->PasswordChar = '*';
	}
}
private: System::Void new_leave(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "") {
		textBox2->Text = "Enter new password";
		textBox2->PasswordChar = NULL;
		textBox2->ForeColor = Color::Gray;

	}
}
private: System::Void pictureBox16_Click(System::Object^ sender, System::EventArgs^ e) {
	sideBarTimer->Start();
}
private: System::Void pnlbuttons_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel3_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void slctcourseCDetailsbt_Click(System::Object^ sender, System::EventArgs^ e) {
	coursedetailsbtns = convertfromcoursestocoursebt(Course::allCourses);
	putCoursesbtnsInPanel(coursedetailsbtns, flowLayoutPanel3);
	dropdowndet->Start();
	courseButton::alldetailsbtns = coursedetailsbtns;
}

	   List<courseButton^>^ convertfromcoursestocoursebt(List<Course^>^ courses) {
		   List< courseButton^>^ temp = gcnew List<courseButton^>;
		   for each (auto course in courses)
		   {
			   courseButton^ tempp = gcnew courseButton;
			   tempp->setCourseName(course->getName());
			   temp->Add(tempp);

		   }
		   return temp;
	   }
	   void putCoursesbtnsInPanel(List<courseButton^>^ temp, FlowLayoutPanel^ fp)
	   {
		   fp->Controls->Clear();
		   for each (auto var in temp)
		   {
			   fp->Controls->Add(var);
		   }
	   } 
	   void putCourseslistitemInPanel( FlowLayoutPanel^ fp, List<Course^>^ courses, int height)
	   {
		   fp->Height = 0;
		   fp->Controls->Clear();
		   for each (auto c in courses)
		   {
			   courselistitem^ cs = gcnew courselistitem;
			   cs->setName(c->getName());
			   cs->setCode(c->getCode());
			   cs->setInstructor(c->getInstructor());
			   cs->setIsRequirement(c->getIsRequirement());
			   cs->setHours(c->getHours());
			   cs->setMaxNumberOfStudents(c->getMaxNumberOfStudents());
			   fp->Controls->Add(cs);
			 
		   }
		   fp->Height = courses->Count*height;
	   }
	   List<Course^>^ getcoursesincourseinprog()
	   {
		   List<Course^>^ temps = gcnew List<Course^>;
		   for each (auto course in Course::allCourses)
		   {
			   if (student->getCoursesINProgress()->Contains(course->getName()))
			   {
				   temps->Add(course);
			   }
		   }
		
		   return temps;
	   }
	   void viewcoursesinprog(FlowLayoutPanel^ fp) {
		   fp->Controls->Clear();
		   putCourseslistitemInPanel(fp, getcoursesincourseinprog(),360);
	   }
	   void viewdetailsofaCourse(FlowLayoutPanel^ flp, List<courseButton^>^ courses)
	   {
		   flp->Controls->Clear();
		   flp->Controls->Add(getselectedcourseCard(courses));
	   }
	   courselistitem^ getselectedcourseCard(List<courseButton^>^ courses)
	   {
		   Course^ selcCourse = gcnew Course;
		   selcCourse = findcourse(courses);
		   for each (auto course in courses)
		   {
			   if (course->getBt()->BackColor == Color::Brown)
			   {
				   courselistitem^ cs = gcnew courselistitem;
				   cs->setName(selcCourse->getName());
				   cs->setCode(selcCourse->getCode());
				   cs->setInstructor(selcCourse->getInstructor());
				   cs->setIsRequirement(selcCourse->getIsRequirement());
				   cs->setHours(selcCourse->getHours());
				   cs->setMaxNumberOfStudents(selcCourse->getMaxNumberOfStudents());
				   return cs;
			   }
		   }
	   }
	   courseButton^ getselectedcoursebt(List<courseButton^>^ courses)
	   {
		   courseButton^ temp = gcnew  courseButton;

		   for each (auto cobt in RegisterCourseList)
		   {
			   if (cobt->getBt()->BackColor == Color::Brown)
			   {
				   temp = cobt;
			   }
		   }
		   return temp;
	   }
	   Course^ findcourse(List<courseButton^>^ courses)
	   {
		   for each (auto course in courses)
		   {
			   if (course->getBt()->BackColor == Color::Brown)
			   {
				   for each (auto var in Course::allCourses)
				   {
					   if (course->getCourseName() == var->getName())
						   return var;
				   }
			   }
		   }
		   return nullptr;
	   }
	   List<courselistitem^>^ convertfromcoursestocourselistitem(List<Course^>^ courses) {
		   List< courselistitem^>^ temp = gcnew List<courselistitem^>;
		   for each (auto course in courses)
		   {
			   for each (auto var in temp)
			   {
			   var->setName(course->getName());
			   var->setCode(course->getCode());
			   var->setInstructor(course->getInstructor());
			   var->setIsRequirement(course->getIsRequirement());
			   var->setHours(course->getHours());
			   var->setMaxNumberOfStudents(course->getMaxNumberOfStudents());
			
			   }
			  
		   }
		   return temp;
	   }
	   List<Course^>^ getavCourses()
	   {
		   List<Course^>^ temp = gcnew List<Course^>;
		   for each (auto course in Course::allCourses)
		   {
			   if (student->CoursesAV()->Contains(course->getName()))
			   {
				   temp->Add(course);

			   }

		   }
		   return temp;
	   }

	   List<courseButton^>^ coursedetailsbtns = gcnew List<courseButton^>;
	   List<courseButton^>^ courseregisterbtns = gcnew List<courseButton^>;
	   Course^ selectedcourse = gcnew Course;

private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void avcoursecount_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click_3(System::Object^ sender, System::EventArgs^ e) {

	label20->Visible = false;
	label28->Visible = false;
	if (findcourse(courseregisterbtns) != nullptr)
	{
		panel7->Visible = true;
		selectedcourse = findcourse(courseregisterbtns);
		savebt->Visible = true;
		courseMaxstds->Visible = true;
		courseMaxstds->Text = Convert::ToString(selectedcourse->getMaxNumberOfStudents());
		cshours->Visible = true;
		cshours->Text = Convert::ToString(selectedcourse->getHours());
		currstds->Visible = true;
		currstds->Text = Convert::ToString(selectedcourse->calcnumofstdinCourse());
		
	}
	else {
		savebt->Visible = false;
		label19->Visible = true;
	}
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
};


