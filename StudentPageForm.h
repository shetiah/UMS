
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
			this->CenterToScreen();
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













	private: System::Windows::Forms::Panel^ PnlOfFilter;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ pnlOfCourseGrades;

	private: System::Windows::Forms::Panel^ pnlOfDetailsOfCourse;

	private: System::Windows::Forms::Panel^ pnlOfCoursesInProgress;

	private: System::Windows::Forms::Panel^ pnlOfregCourse;

















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





























private: System::Windows::Forms::FlowLayoutPanel^ flwpnldetCourse;
private: System::Windows::Forms::Button^ viewbt;



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


private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ reglb;
private: System::Windows::Forms::Label^ cshours;
private: System::Windows::Forms::Label^ currstds;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ courseMaxstds;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Button^ btnregister;
private: System::Windows::Forms::Button^ btnCourseInProgress;
private: System::Windows::Forms::Button^ btnDetailsOfCourse;
private: System::Windows::Forms::Button^ btnCourseGrade;
private: System::Windows::Forms::Button^ btnFilter;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Panel^ filterp;
private: System::Windows::Forms::Panel^ yourgradesp;
private: System::Windows::Forms::Panel^ allcoursesp;

private: System::Windows::Forms::Panel^ yourcoursesP;
private: System::Windows::Forms::Panel^ registercoursep;
private: System::Windows::Forms::PictureBox^ homePicture;











private: System::Windows::Forms::PictureBox^ pictureBox7;

private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::Button^ exitbt;
private: System::Windows::Forms::Panel^ editcoursep;







































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
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->homePicture = (gcnew System::Windows::Forms::PictureBox());
			this->pnlbuttons = (gcnew System::Windows::Forms::Panel());
			this->exitbt = (gcnew System::Windows::Forms::Button());
			this->editp = (gcnew System::Windows::Forms::Button());
			this->btnregister = (gcnew System::Windows::Forms::Button());
			this->btnCourseInProgress = (gcnew System::Windows::Forms::Button());
			this->btnDetailsOfCourse = (gcnew System::Windows::Forms::Button());
			this->btnCourseGrade = (gcnew System::Windows::Forms::Button());
			this->btnFilter = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->editcoursep = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->filterp = (gcnew System::Windows::Forms::Panel());
			this->yourgradesp = (gcnew System::Windows::Forms::Panel());
			this->allcoursesp = (gcnew System::Windows::Forms::Panel());
			this->yourcoursesP = (gcnew System::Windows::Forms::Panel());
			this->registercoursep = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
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
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pnlOfregCourse = (gcnew System::Windows::Forms::Panel());
			this->reglb = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->savedcourse = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->hoursrem = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->avcoursecount = (gcnew System::Windows::Forms::Label());
			this->myhours = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->cshours = (gcnew System::Windows::Forms::Label());
			this->currstds = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->courseMaxstds = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->savebt = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pnlOfPanels = (gcnew System::Windows::Forms::Panel());
			this->homepanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
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
			this->sideBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->homePicture))->BeginInit();
			this->pnlbuttons->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->PnlOfFilter->SuspendLayout();
			this->filterflowlytpnl->SuspendLayout();
			this->pnlOfCourseGrades->SuspendLayout();
			this->editpanel->SuspendLayout();
			this->pnlOfDetailsOfCourse->SuspendLayout();
			this->pnlOfCoursesInProgress->SuspendLayout();
			this->pnlOfregCourse->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
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
			this->sideBar->Controls->Add(this->pictureBox46);
			this->sideBar->Controls->Add(this->panel1);
			this->sideBar->Controls->Add(this->pnlbuttons);
			resources->ApplyResources(this->sideBar, L"sideBar");
			this->sideBar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->sideBar->Name = L"sideBar";
			this->sideBar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::sideBar_Paint);
			// 
			// pictureBox46
			// 
			resources->ApplyResources(this->pictureBox46, L"pictureBox46");
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->TabStop = false;
			this->pictureBox46->Click += gcnew System::EventHandler(this, &StudentPageForm::pictureBox46_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->homePicture);
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Name = L"panel1";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox7, L"pictureBox7");
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &StudentPageForm::pictureBox7_Click);
			// 
			// homePicture
			// 
			this->homePicture->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->homePicture, L"homePicture");
			this->homePicture->Name = L"homePicture";
			this->homePicture->TabStop = false;
			this->homePicture->Click += gcnew System::EventHandler(this, &StudentPageForm::homepicture_click);
			// 
			// pnlbuttons
			// 
			this->pnlbuttons->BackColor = System::Drawing::Color::Transparent;
			this->pnlbuttons->Controls->Add(this->exitbt);
			this->pnlbuttons->Controls->Add(this->editp);
			this->pnlbuttons->Controls->Add(this->btnregister);
			this->pnlbuttons->Controls->Add(this->btnCourseInProgress);
			this->pnlbuttons->Controls->Add(this->btnDetailsOfCourse);
			this->pnlbuttons->Controls->Add(this->btnCourseGrade);
			this->pnlbuttons->Controls->Add(this->btnFilter);
			this->pnlbuttons->Controls->Add(this->panel2);
			resources->ApplyResources(this->pnlbuttons, L"pnlbuttons");
			this->pnlbuttons->Name = L"pnlbuttons";
			this->pnlbuttons->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::pnlbuttons_Paint);
			// 
			// exitbt
			// 
			resources->ApplyResources(this->exitbt, L"exitbt");
			this->exitbt->BackColor = System::Drawing::Color::Transparent;
			this->exitbt->FlatAppearance->BorderSize = 0;
			this->exitbt->ForeColor = System::Drawing::Color::Tan;
			this->exitbt->Name = L"exitbt";
			this->exitbt->UseVisualStyleBackColor = false;
			this->exitbt->Click += gcnew System::EventHandler(this, &StudentPageForm::exitbt_Click);
			// 
			// editp
			// 
			resources->ApplyResources(this->editp, L"editp");
			this->editp->BackColor = System::Drawing::Color::Transparent;
			this->editp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->editp->FlatAppearance->BorderColor = System::Drawing::Color::Tan;
			this->editp->FlatAppearance->BorderSize = 0;
			this->editp->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->editp->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSlateGray;
			this->editp->ForeColor = System::Drawing::Color::Tan;
			this->editp->Name = L"editp";
			this->editp->UseCompatibleTextRendering = true;
			this->editp->UseVisualStyleBackColor = false;
			this->editp->Click += gcnew System::EventHandler(this, &StudentPageForm::editpp_Click);
			// 
			// btnregister
			// 
			resources->ApplyResources(this->btnregister, L"btnregister");
			this->btnregister->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnregister->FlatAppearance->BorderColor = System::Drawing::Color::Brown;
			this->btnregister->FlatAppearance->BorderSize = 0;
			this->btnregister->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->btnregister->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSlateGray;
			this->btnregister->ForeColor = System::Drawing::Color::Tan;
			this->btnregister->Name = L"btnregister";
			this->btnregister->UseCompatibleTextRendering = true;
			this->btnregister->UseVisualStyleBackColor = true;
			this->btnregister->Click += gcnew System::EventHandler(this, &StudentPageForm::btnregister_Click);
			// 
			// btnCourseInProgress
			// 
			resources->ApplyResources(this->btnCourseInProgress, L"btnCourseInProgress");
			this->btnCourseInProgress->BackColor = System::Drawing::Color::Transparent;
			this->btnCourseInProgress->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCourseInProgress->FlatAppearance->BorderColor = System::Drawing::Color::Brown;
			this->btnCourseInProgress->FlatAppearance->BorderSize = 0;
			this->btnCourseInProgress->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->btnCourseInProgress->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSlateGray;
			this->btnCourseInProgress->ForeColor = System::Drawing::Color::Tan;
			this->btnCourseInProgress->Name = L"btnCourseInProgress";
			this->btnCourseInProgress->UseCompatibleTextRendering = true;
			this->btnCourseInProgress->UseVisualStyleBackColor = false;
			this->btnCourseInProgress->Click += gcnew System::EventHandler(this, &StudentPageForm::btnCourseInProgress_Click_1);
			// 
			// btnDetailsOfCourse
			// 
			resources->ApplyResources(this->btnDetailsOfCourse, L"btnDetailsOfCourse");
			this->btnDetailsOfCourse->BackColor = System::Drawing::Color::Transparent;
			this->btnDetailsOfCourse->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDetailsOfCourse->FlatAppearance->BorderColor = System::Drawing::Color::Tan;
			this->btnDetailsOfCourse->FlatAppearance->BorderSize = 0;
			this->btnDetailsOfCourse->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->btnDetailsOfCourse->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSlateGray;
			this->btnDetailsOfCourse->ForeColor = System::Drawing::Color::Tan;
			this->btnDetailsOfCourse->Name = L"btnDetailsOfCourse";
			this->btnDetailsOfCourse->UseCompatibleTextRendering = true;
			this->btnDetailsOfCourse->UseVisualStyleBackColor = false;
			this->btnDetailsOfCourse->Click += gcnew System::EventHandler(this, &StudentPageForm::btnDetailsOfCourse_Click_2);
			// 
			// btnCourseGrade
			// 
			resources->ApplyResources(this->btnCourseGrade, L"btnCourseGrade");
			this->btnCourseGrade->BackColor = System::Drawing::Color::Transparent;
			this->btnCourseGrade->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCourseGrade->FlatAppearance->BorderColor = System::Drawing::Color::Tan;
			this->btnCourseGrade->FlatAppearance->BorderSize = 0;
			this->btnCourseGrade->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->btnCourseGrade->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSlateGray;
			this->btnCourseGrade->ForeColor = System::Drawing::Color::Tan;
			this->btnCourseGrade->Name = L"btnCourseGrade";
			this->btnCourseGrade->UseCompatibleTextRendering = true;
			this->btnCourseGrade->UseVisualStyleBackColor = false;
			this->btnCourseGrade->Click += gcnew System::EventHandler(this, &StudentPageForm::btnCourseGrade_Click_1);
			// 
			// btnFilter
			// 
			resources->ApplyResources(this->btnFilter, L"btnFilter");
			this->btnFilter->BackColor = System::Drawing::Color::Transparent;
			this->btnFilter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnFilter->FlatAppearance->BorderColor = System::Drawing::Color::Tan;
			this->btnFilter->FlatAppearance->BorderSize = 0;
			this->btnFilter->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->btnFilter->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSlateGray;
			this->btnFilter->ForeColor = System::Drawing::Color::Tan;
			this->btnFilter->Name = L"btnFilter";
			this->btnFilter->UseCompatibleTextRendering = true;
			this->btnFilter->UseVisualStyleBackColor = false;
			this->btnFilter->Click += gcnew System::EventHandler(this, &StudentPageForm::btnFilter_Click_1);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->editcoursep);
			this->panel2->Controls->Add(this->pictureBox8);
			this->panel2->Controls->Add(this->pictureBox9);
			this->panel2->Controls->Add(this->filterp);
			this->panel2->Controls->Add(this->yourgradesp);
			this->panel2->Controls->Add(this->allcoursesp);
			this->panel2->Controls->Add(this->yourcoursesP);
			this->panel2->Controls->Add(this->registercoursep);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->pictureBox5);
			resources->ApplyResources(this->panel2, L"panel2");
			this->panel2->Name = L"panel2";
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::panel2_Paint_1);
			// 
			// editcoursep
			// 
			this->editcoursep->BackColor = System::Drawing::Color::Tan;
			resources->ApplyResources(this->editcoursep, L"editcoursep");
			this->editcoursep->Name = L"editcoursep";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox8, L"pictureBox8");
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &StudentPageForm::pictureBox8_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox9, L"pictureBox9");
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &StudentPageForm::pictureBox99_Click);
			// 
			// filterp
			// 
			this->filterp->BackColor = System::Drawing::Color::Tan;
			resources->ApplyResources(this->filterp, L"filterp");
			this->filterp->Name = L"filterp";
			// 
			// yourgradesp
			// 
			this->yourgradesp->BackColor = System::Drawing::Color::Tan;
			resources->ApplyResources(this->yourgradesp, L"yourgradesp");
			this->yourgradesp->Name = L"yourgradesp";
			this->yourgradesp->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::yourgradesp_Paint);
			// 
			// allcoursesp
			// 
			this->allcoursesp->BackColor = System::Drawing::Color::Tan;
			resources->ApplyResources(this->allcoursesp, L"allcoursesp");
			this->allcoursesp->Name = L"allcoursesp";
			this->allcoursesp->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::allcoursesp_Paint);
			// 
			// yourcoursesP
			// 
			this->yourcoursesP->BackColor = System::Drawing::Color::Tan;
			resources->ApplyResources(this->yourcoursesP, L"yourcoursesP");
			this->yourcoursesP->Name = L"yourcoursesP";
			// 
			// registercoursep
			// 
			this->registercoursep->BackColor = System::Drawing::Color::Tan;
			resources->ApplyResources(this->registercoursep, L"registercoursep");
			this->registercoursep->Name = L"registercoursep";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &StudentPageForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox2, L"pictureBox2");
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &StudentPageForm::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox3, L"pictureBox3");
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &StudentPageForm::yourcoursespic_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox4, L"pictureBox4");
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &StudentPageForm::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox5, L"pictureBox5");
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &StudentPageForm::pictureBox5_Click_1);
			// 
			// PnlOfFilter
			// 
			resources->ApplyResources(this->PnlOfFilter, L"PnlOfFilter");
			this->PnlOfFilter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->PnlOfFilter->Controls->Add(this->viewerbt);
			this->PnlOfFilter->Controls->Add(this->flowLayoutPanel4);
			this->PnlOfFilter->Controls->Add(this->coursesviewFilterCourses);
			this->PnlOfFilter->Controls->Add(this->filterflowlytpnl);
			this->PnlOfFilter->Controls->Add(this->label1);
			this->PnlOfFilter->Name = L"PnlOfFilter";
			this->PnlOfFilter->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::PnlOfFilter_Paint);
			// 
			// viewerbt
			// 
			this->viewerbt->BackColor = System::Drawing::Color::Tan;
			this->viewerbt->FlatAppearance->BorderSize = 3;
			this->viewerbt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->viewerbt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			resources->ApplyResources(this->viewerbt, L"viewerbt");
			this->viewerbt->Name = L"viewerbt";
			this->viewerbt->UseVisualStyleBackColor = true;
			this->viewerbt->Click += gcnew System::EventHandler(this, &StudentPageForm::viewerbt_Click);
			// 
			// flowLayoutPanel4
			// 
			resources->ApplyResources(this->flowLayoutPanel4, L"flowLayoutPanel4");
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::flowLayoutPanel4_Paint);
			// 
			// coursesviewFilterCourses
			// 
			resources->ApplyResources(this->coursesviewFilterCourses, L"coursesviewFilterCourses");
			this->coursesviewFilterCourses->Name = L"coursesviewFilterCourses";
			// 
			// filterflowlytpnl
			// 
			this->filterflowlytpnl->Controls->Add(this->Selectbt);
			this->filterflowlytpnl->Controls->Add(this->finishcsbt);
			this->filterflowlytpnl->Controls->Add(this->AvailableCoursesbt);
			this->filterflowlytpnl->Controls->Add(this->RequiredCoursesbt);
			this->filterflowlytpnl->Controls->Add(this->ElectiveCoursesBt);
			this->filterflowlytpnl->Controls->Add(this->CoursesInProgressbt);
			resources->ApplyResources(this->filterflowlytpnl, L"filterflowlytpnl");
			this->filterflowlytpnl->Name = L"filterflowlytpnl";
			// 
			// Selectbt
			// 
			this->Selectbt->BackColor = System::Drawing::Color::Tan;
			this->Selectbt->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->Selectbt->FlatAppearance->BorderSize = 3;
			this->Selectbt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->Selectbt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			resources->ApplyResources(this->Selectbt, L"Selectbt");
			this->Selectbt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->Selectbt->Name = L"Selectbt";
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
			resources->ApplyResources(this->finishcsbt, L"finishcsbt");
			this->finishcsbt->ForeColor = System::Drawing::Color::Tan;
			this->finishcsbt->Name = L"finishcsbt";
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
			resources->ApplyResources(this->AvailableCoursesbt, L"AvailableCoursesbt");
			this->AvailableCoursesbt->ForeColor = System::Drawing::Color::Tan;
			this->AvailableCoursesbt->Name = L"AvailableCoursesbt";
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
			resources->ApplyResources(this->RequiredCoursesbt, L"RequiredCoursesbt");
			this->RequiredCoursesbt->ForeColor = System::Drawing::Color::Tan;
			this->RequiredCoursesbt->Name = L"RequiredCoursesbt";
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
			resources->ApplyResources(this->ElectiveCoursesBt, L"ElectiveCoursesBt");
			this->ElectiveCoursesBt->ForeColor = System::Drawing::Color::Tan;
			this->ElectiveCoursesBt->Name = L"ElectiveCoursesBt";
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
			resources->ApplyResources(this->CoursesInProgressbt, L"CoursesInProgressbt");
			this->CoursesInProgressbt->ForeColor = System::Drawing::Color::Tan;
			this->CoursesInProgressbt->Name = L"CoursesInProgressbt";
			this->CoursesInProgressbt->UseCompatibleTextRendering = true;
			this->CoursesInProgressbt->UseVisualStyleBackColor = false;
			this->CoursesInProgressbt->Click += gcnew System::EventHandler(this, &StudentPageForm::CoursesInProgressbt_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->label1->ForeColor = System::Drawing::Color::Tan;
			this->label1->Name = L"label1";
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
			resources->ApplyResources(this->pnlOfCourseGrades, L"pnlOfCourseGrades");
			this->pnlOfCourseGrades->Name = L"pnlOfCourseGrades";
			this->pnlOfCourseGrades->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::pnlOfCourseGrades_Paint);
			// 
			// CGPALabel
			// 
			resources->ApplyResources(this->CGPALabel, L"CGPALabel");
			this->CGPALabel->BackColor = System::Drawing::Color::Transparent;
			this->CGPALabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CGPALabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CGPALabel->Name = L"CGPALabel";
			this->CGPALabel->UseCompatibleTextRendering = true;
			this->CGPALabel->Click += gcnew System::EventHandler(this, &StudentPageForm::CGPALabel_Click);
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Name = L"label3";
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
			resources->ApplyResources(this->viewgradesBt, L"viewgradesBt");
			this->viewgradesBt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->viewgradesBt->Name = L"viewgradesBt";
			this->viewgradesBt->UseCompatibleTextRendering = true;
			this->viewgradesBt->UseVisualStyleBackColor = false;
			this->viewgradesBt->Click += gcnew System::EventHandler(this, &StudentPageForm::viewgradesBt_Click);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Name = L"label2";
			this->label2->UseCompatibleTextRendering = true;
			// 
			// viewbttt
			// 
			this->viewbttt->BackColor = System::Drawing::Color::Tan;
			this->viewbttt->FlatAppearance->BorderSize = 3;
			this->viewbttt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->viewbttt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			resources->ApplyResources(this->viewbttt, L"viewbttt");
			this->viewbttt->Name = L"viewbttt";
			this->viewbttt->UseVisualStyleBackColor = true;
			this->viewbttt->Click += gcnew System::EventHandler(this, &StudentPageForm::button2_Click_2);
			// 
			// flowLayoutPanel6
			// 
			resources->ApplyResources(this->flowLayoutPanel6, L"flowLayoutPanel6");
			this->flowLayoutPanel6->Name = L"flowLayoutPanel6";
			// 
			// flowLayoutPanel5
			// 
			resources->ApplyResources(this->flowLayoutPanel5, L"flowLayoutPanel5");
			this->flowLayoutPanel5->Name = L"flowLayoutPanel5";
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
			resources->ApplyResources(this->editpanel, L"editpanel");
			this->editpanel->Name = L"editpanel";
			this->editpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::editpanel_Paint);
			// 
			// label14
			// 
			resources->ApplyResources(this->label14, L"label14");
			this->label14->ForeColor = System::Drawing::Color::Brown;
			this->label14->Name = L"label14";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::SeaShell;
			this->textBox3->ForeColor = System::Drawing::Color::Gray;
			resources->ApplyResources(this->textBox3, L"textBox3");
			this->textBox3->Name = L"textBox3";
			this->textBox3->Enter += gcnew System::EventHandler(this, &StudentPageForm::confirm_enter);
			this->textBox3->Leave += gcnew System::EventHandler(this, &StudentPageForm::confirm_leave);
			// 
			// label13
			// 
			resources->ApplyResources(this->label13, L"label13");
			this->label13->Name = L"label13";
			// 
			// label12
			// 
			resources->ApplyResources(this->label12, L"label12");
			this->label12->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label12->Name = L"label12";
			// 
			// label11
			// 
			resources->ApplyResources(this->label11, L"label11");
			this->label11->ForeColor = System::Drawing::Color::Brown;
			this->label11->Name = L"label11";
			// 
			// Savebtt
			// 
			resources->ApplyResources(this->Savebtt, L"Savebtt");
			this->Savebtt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->Savebtt->FlatAppearance->BorderColor = System::Drawing::Color::Tan;
			this->Savebtt->FlatAppearance->BorderSize = 2;
			this->Savebtt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->Savebtt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSlateGray;
			this->Savebtt->ForeColor = System::Drawing::Color::Tan;
			this->Savebtt->Name = L"Savebtt";
			this->Savebtt->UseCompatibleTextRendering = true;
			this->Savebtt->UseVisualStyleBackColor = false;
			this->Savebtt->Click += gcnew System::EventHandler(this, &StudentPageForm::Savebtt_Click);
			// 
			// label10
			// 
			resources->ApplyResources(this->label10, L"label10");
			this->label10->ForeColor = System::Drawing::Color::Tan;
			this->label10->Name = L"label10";
			this->label10->Click += gcnew System::EventHandler(this, &StudentPageForm::label10_Click);
			// 
			// label9
			// 
			resources->ApplyResources(this->label9, L"label9");
			this->label9->Name = L"label9";
			this->label9->Click += gcnew System::EventHandler(this, &StudentPageForm::label9_Click);
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->Name = L"label8";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::SeaShell;
			this->textBox2->ForeColor = System::Drawing::Color::Gray;
			resources->ApplyResources(this->textBox2, L"textBox2");
			this->textBox2->Name = L"textBox2";
			this->textBox2->Enter += gcnew System::EventHandler(this, &StudentPageForm::new_enter);
			this->textBox2->Leave += gcnew System::EventHandler(this, &StudentPageForm::new_leave);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::SeaShell;
			this->textBox1->ForeColor = System::Drawing::Color::Gray;
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			this->textBox1->Enter += gcnew System::EventHandler(this, &StudentPageForm::exist_enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &StudentPageForm::exist_leave);
			// 
			// pnlOfDetailsOfCourse
			// 
			resources->ApplyResources(this->pnlOfDetailsOfCourse, L"pnlOfDetailsOfCourse");
			this->pnlOfDetailsOfCourse->Controls->Add(this->flowLayoutPanel3);
			this->pnlOfDetailsOfCourse->Controls->Add(this->slctcourseCDetailsbt);
			this->pnlOfDetailsOfCourse->Controls->Add(this->viewbt);
			this->pnlOfDetailsOfCourse->Controls->Add(this->flwpnldetCourse);
			this->pnlOfDetailsOfCourse->Name = L"pnlOfDetailsOfCourse";
			this->pnlOfDetailsOfCourse->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::pnlOfDetailsOfCourse_Paint);
			// 
			// flowLayoutPanel3
			// 
			resources->ApplyResources(this->flowLayoutPanel3, L"flowLayoutPanel3");
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			// 
			// slctcourseCDetailsbt
			// 
			this->slctcourseCDetailsbt->BackColor = System::Drawing::Color::Tan;
			resources->ApplyResources(this->slctcourseCDetailsbt, L"slctcourseCDetailsbt");
			this->slctcourseCDetailsbt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->slctcourseCDetailsbt->FlatAppearance->BorderSize = 3;
			this->slctcourseCDetailsbt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->slctcourseCDetailsbt->Name = L"slctcourseCDetailsbt";
			this->slctcourseCDetailsbt->UseVisualStyleBackColor = false;
			this->slctcourseCDetailsbt->Click += gcnew System::EventHandler(this, &StudentPageForm::slctcourseCDetailsbt_Click);
			// 
			// viewbt
			// 
			resources->ApplyResources(this->viewbt, L"viewbt");
			this->viewbt->BackColor = System::Drawing::Color::Tan;
			this->viewbt->FlatAppearance->BorderSize = 3;
			this->viewbt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->viewbt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			this->viewbt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->viewbt->Name = L"viewbt";
			this->viewbt->UseVisualStyleBackColor = false;
			this->viewbt->Click += gcnew System::EventHandler(this, &StudentPageForm::viewbt_Click);
			// 
			// flwpnldetCourse
			// 
			resources->ApplyResources(this->flwpnldetCourse, L"flwpnldetCourse");
			this->flwpnldetCourse->Name = L"flwpnldetCourse";
			this->flwpnldetCourse->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::flwpnldetCourse_Paint);
			// 
			// pnlOfCoursesInProgress
			// 
			resources->ApplyResources(this->pnlOfCoursesInProgress, L"pnlOfCoursesInProgress");
			this->pnlOfCoursesInProgress->Controls->Add(this->panel8);
			this->pnlOfCoursesInProgress->Controls->Add(this->label45);
			this->pnlOfCoursesInProgress->Controls->Add(this->flowLayoutPanel1);
			this->pnlOfCoursesInProgress->Name = L"pnlOfCoursesInProgress";
			this->pnlOfCoursesInProgress->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::pnlOfCoursesInProgress_Paint);
			// 
			// panel8
			// 
			resources->ApplyResources(this->panel8, L"panel8");
			this->panel8->Name = L"panel8";
			// 
			// label45
			// 
			resources->ApplyResources(this->label45, L"label45");
			this->label45->BackColor = System::Drawing::Color::Transparent;
			this->label45->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->label45->Name = L"label45";
			this->label45->UseCompatibleTextRendering = true;
			// 
			// flowLayoutPanel1
			// 
			resources->ApplyResources(this->flowLayoutPanel1, L"flowLayoutPanel1");
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::flowLayoutPanel1_Paint);
			// 
			// pnlOfregCourse
			// 
			resources->ApplyResources(this->pnlOfregCourse, L"pnlOfregCourse");
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
			this->pnlOfregCourse->Name = L"pnlOfregCourse";
			this->pnlOfregCourse->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::pnlOfregCourse_Paint);
			// 
			// reglb
			// 
			this->reglb->Cursor = System::Windows::Forms::Cursors::Arrow;
			resources->ApplyResources(this->reglb, L"reglb");
			this->reglb->ForeColor = System::Drawing::Color::Tan;
			this->reglb->Name = L"reglb";
			this->reglb->Click += gcnew System::EventHandler(this, &StudentPageForm::reglb_Click);
			// 
			// label20
			// 
			resources->ApplyResources(this->label20, L"label20");
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->ForeColor = System::Drawing::Color::Brown;
			this->label20->Name = L"label20";
			// 
			// label28
			// 
			resources->ApplyResources(this->label28, L"label28");
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->ForeColor = System::Drawing::Color::Brown;
			this->label28->Name = L"label28";
			// 
			// savedcourse
			// 
			resources->ApplyResources(this->savedcourse, L"savedcourse");
			this->savedcourse->BackColor = System::Drawing::Color::Transparent;
			this->savedcourse->ForeColor = System::Drawing::Color::Brown;
			this->savedcourse->Name = L"savedcourse";
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
			resources->ApplyResources(this->panel6, L"panel6");
			this->panel6->Name = L"panel6";
			// 
			// hoursrem
			// 
			resources->ApplyResources(this->hoursrem, L"hoursrem");
			this->hoursrem->BackColor = System::Drawing::Color::Tan;
			this->hoursrem->ForeColor = System::Drawing::Color::Brown;
			this->hoursrem->Name = L"hoursrem";
			// 
			// label26
			// 
			resources->ApplyResources(this->label26, L"label26");
			this->label26->BackColor = System::Drawing::Color::Tan;
			this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label26->Name = L"label26";
			// 
			// avcoursecount
			// 
			resources->ApplyResources(this->avcoursecount, L"avcoursecount");
			this->avcoursecount->ForeColor = System::Drawing::Color::Brown;
			this->avcoursecount->Name = L"avcoursecount";
			this->avcoursecount->Click += gcnew System::EventHandler(this, &StudentPageForm::avcoursecount_Click);
			// 
			// myhours
			// 
			resources->ApplyResources(this->myhours, L"myhours");
			this->myhours->BackColor = System::Drawing::Color::Tan;
			this->myhours->ForeColor = System::Drawing::Color::Brown;
			this->myhours->Name = L"myhours";
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->BackColor = System::Drawing::Color::Tan;
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label5->Name = L"label5";
			// 
			// label21
			// 
			resources->ApplyResources(this->label21, L"label21");
			this->label21->BackColor = System::Drawing::Color::Tan;
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label21->Name = L"label21";
			// 
			// label19
			// 
			resources->ApplyResources(this->label19, L"label19");
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->ForeColor = System::Drawing::Color::Brown;
			this->label19->Name = L"label19";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Tan;
			this->panel5->Controls->Add(this->label25);
			resources->ApplyResources(this->panel5, L"panel5");
			this->panel5->Name = L"panel5";
			// 
			// label25
			// 
			resources->ApplyResources(this->label25, L"label25");
			this->label25->BackColor = System::Drawing::Color::Tan;
			this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label25->Name = L"label25";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Tan;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button2->FlatAppearance->BorderSize = 3;
			resources->ApplyResources(this->button2, L"button2");
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &StudentPageForm::button2_Click_3);
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
			resources->ApplyResources(this->panel7, L"panel7");
			this->panel7->Name = L"panel7";
			// 
			// cshours
			// 
			resources->ApplyResources(this->cshours, L"cshours");
			this->cshours->BackColor = System::Drawing::Color::Tan;
			this->cshours->ForeColor = System::Drawing::Color::Brown;
			this->cshours->Name = L"cshours";
			// 
			// currstds
			// 
			resources->ApplyResources(this->currstds, L"currstds");
			this->currstds->BackColor = System::Drawing::Color::Tan;
			this->currstds->ForeColor = System::Drawing::Color::Brown;
			this->currstds->Name = L"currstds";
			// 
			// label24
			// 
			resources->ApplyResources(this->label24, L"label24");
			this->label24->BackColor = System::Drawing::Color::Tan;
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label24->Name = L"label24";
			// 
			// label22
			// 
			resources->ApplyResources(this->label22, L"label22");
			this->label22->BackColor = System::Drawing::Color::Tan;
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label22->Name = L"label22";
			// 
			// label23
			// 
			resources->ApplyResources(this->label23, L"label23");
			this->label23->BackColor = System::Drawing::Color::Tan;
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label23->Name = L"label23";
			// 
			// courseMaxstds
			// 
			resources->ApplyResources(this->courseMaxstds, L"courseMaxstds");
			this->courseMaxstds->BackColor = System::Drawing::Color::Tan;
			this->courseMaxstds->ForeColor = System::Drawing::Color::Brown;
			this->courseMaxstds->Name = L"courseMaxstds";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Tan;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 3;
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->button1->Name = L"button1";
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
			resources->ApplyResources(this->savebt, L"savebt");
			this->savebt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->savebt->Name = L"savebt";
			this->savebt->UseVisualStyleBackColor = false;
			this->savebt->Click += gcnew System::EventHandler(this, &StudentPageForm::savebt_Click);
			// 
			// flowLayoutPanel2
			// 
			resources->ApplyResources(this->flowLayoutPanel2, L"flowLayoutPanel2");
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::flowLayoutPanel2_Paint);
			// 
			// pnlOfPanels
			// 
			this->pnlOfPanels->Controls->Add(this->homepanel);
			this->pnlOfPanels->Controls->Add(this->editpanel);
			this->pnlOfPanels->Controls->Add(this->pnlOfCourseGrades);
			this->pnlOfPanels->Controls->Add(this->PnlOfFilter);
			this->pnlOfPanels->Controls->Add(this->pnlOfregCourse);
			this->pnlOfPanels->Controls->Add(this->pnlOfDetailsOfCourse);
			this->pnlOfPanels->Controls->Add(this->pnlOfCoursesInProgress);
			resources->ApplyResources(this->pnlOfPanels, L"pnlOfPanels");
			this->pnlOfPanels->Name = L"pnlOfPanels";
			// 
			// homepanel
			// 
			this->homepanel->Controls->Add(this->pictureBox50);
			this->homepanel->Controls->Add(this->pictureBox49);
			this->homepanel->Controls->Add(this->panel4);
			this->homepanel->Controls->Add(this->label15);
			this->homepanel->Controls->Add(this->pictureBox45);
			this->homepanel->Controls->Add(this->panel3);
			resources->ApplyResources(this->homepanel, L"homepanel");
			this->homepanel->Name = L"homepanel";
			this->homepanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::homepanel_Paint);
			// 
			// pictureBox50
			// 
			this->pictureBox50->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox50, L"pictureBox50");
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->TabStop = false;
			// 
			// pictureBox49
			// 
			resources->ApplyResources(this->pictureBox49, L"pictureBox49");
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label17);
			this->panel4->Controls->Add(this->label18);
			this->panel4->Controls->Add(this->label30);
			this->panel4->Controls->Add(this->pictureBox48);
			this->panel4->Controls->Add(this->pictureBox47);
			this->panel4->Controls->Add(this->pictureBox44);
			this->panel4->Controls->Add(this->textBox6);
			this->panel4->Controls->Add(this->textBox5);
			this->panel4->Controls->Add(this->textBox4);
			resources->ApplyResources(this->panel4, L"panel4");
			this->panel4->Name = L"panel4";
			// 
			// label17
			// 
			resources->ApplyResources(this->label17, L"label17");
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->ForeColor = System::Drawing::Color::Brown;
			this->label17->Name = L"label17";
			this->label17->UseCompatibleTextRendering = true;
			// 
			// label18
			// 
			resources->ApplyResources(this->label18, L"label18");
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->ForeColor = System::Drawing::Color::Brown;
			this->label18->Name = L"label18";
			this->label18->UseCompatibleTextRendering = true;
			// 
			// label30
			// 
			resources->ApplyResources(this->label30, L"label30");
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->ForeColor = System::Drawing::Color::Brown;
			this->label30->Name = L"label30";
			this->label30->UseCompatibleTextRendering = true;
			this->label30->Click += gcnew System::EventHandler(this, &StudentPageForm::label30_Click);
			// 
			// pictureBox48
			// 
			this->pictureBox48->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox48, L"pictureBox48");
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->TabStop = false;
			// 
			// pictureBox47
			// 
			this->pictureBox47->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox47, L"pictureBox47");
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->TabStop = false;
			// 
			// pictureBox44
			// 
			this->pictureBox44->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox44, L"pictureBox44");
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->TabStop = false;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Cursor = System::Windows::Forms::Cursors::Default;
			resources->ApplyResources(this->textBox6, L"textBox6");
			this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox6->Name = L"textBox6";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Cursor = System::Windows::Forms::Cursors::Default;
			resources->ApplyResources(this->textBox5, L"textBox5");
			this->textBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox5->Name = L"textBox5";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Cursor = System::Windows::Forms::Cursors::Default;
			resources->ApplyResources(this->textBox4, L"textBox4");
			this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox4->Name = L"textBox4";
			// 
			// label15
			// 
			resources->ApplyResources(this->label15, L"label15");
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->label15->Name = L"label15";
			this->label15->UseCompatibleTextRendering = true;
			// 
			// pictureBox45
			// 
			resources->ApplyResources(this->pictureBox45, L"pictureBox45");
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label6);
			resources->ApplyResources(this->panel3, L"panel3");
			this->panel3->Name = L"panel3";
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::panel3_Paint_1);
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label7->ForeColor = System::Drawing::Color::Brown;
			this->label7->Name = L"label7";
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->label6->Name = L"label6";
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
			resources->ApplyResources(this->mstPanel, L"mstPanel");
			this->mstPanel->Name = L"mstPanel";
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
			// StudentPageForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->Controls->Add(this->sideBar);
			this->Controls->Add(this->mstPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"StudentPageForm";
			this->Load += gcnew System::EventHandler(this, &StudentPageForm::StudentPageForm_Load);
			this->sideBar->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->homePicture))->EndInit();
			this->pnlbuttons->ResumeLayout(false);
			this->pnlbuttons->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->PnlOfFilter->ResumeLayout(false);
			this->PnlOfFilter->PerformLayout();
			this->filterflowlytpnl->ResumeLayout(false);
			this->pnlOfCourseGrades->ResumeLayout(false);
			this->pnlOfCourseGrades->PerformLayout();
			this->editpanel->ResumeLayout(false);
			this->editpanel->PerformLayout();
			this->pnlOfDetailsOfCourse->ResumeLayout(false);
			this->pnlOfCoursesInProgress->ResumeLayout(false);
			this->pnlOfCoursesInProgress->PerformLayout();
			this->pnlOfregCourse->ResumeLayout(false);
			this->pnlOfregCourse->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
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
		flowLayoutPanel5->Controls->Clear();
		
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
		flowLayoutPanel5->Controls->Clear();
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
		flowLayoutPanel5->Controls->Clear();
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
		
		flowLayoutPanel5->Controls->Clear(); 
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
		flowLayoutPanel5->Controls->Clear();
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
		flowLayoutPanel5->Controls->Clear();
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
			if (sideBar->Width == sideBar->MinimumSize.Width) {
				sideBarExpand = false;
				sideBarTimer->Stop();
			}
			else {
				sideBar->Width -= 20;
			}


		}
		else
		{
			if (sideBar->Width == sideBar->MaximumSize.Width)
			{
				sideBarExpand = true;
				sideBarTimer->Stop();
			}
			else
			{
				sideBar->Width += 20;
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
private: System::Void label30_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label27_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
	PnlOfFilter->Visible = false;
	pnlOfDetailsOfCourse->Visible = false;
	pnlOfCoursesInProgress->Visible = false;
	pnlOfCourseGrades->Visible = false;
	pnlOfregCourse->Visible = false;
	homepanel->Visible = false;
	editpanel->Visible = true;
}
private: System::Void btnFilter_Click_1(System::Object^ sender, System::EventArgs^ e) {
	flowLayoutPanel5->Controls->Clear();

	PnlOfFilter->Visible = true;
	pnlOfDetailsOfCourse->Visible = false;
	pnlOfCoursesInProgress->Visible = false;
	pnlOfCourseGrades->Visible = false;
	pnlOfregCourse->Visible = false;
	homepanel->Visible = false;
	editpanel->Visible = false;
	courseButton::alldetailsbtns->Clear();
	filterp->BackColor = Color::Brown;
	yourgradesp->BackColor = Color::Tan;
	allcoursesp->BackColor = Color::Tan;
	yourcoursesP->BackColor = Color::Tan;
	registercoursep->BackColor = Color::Tan;
	editcoursep->BackColor = Color::Tan;
	sideBarTimer->Start();
	sideBarExpand = true;
}
private: System::Void btnCourseGrade_Click_1(System::Object^ sender, System::EventArgs^ e) {
	flowLayoutPanel5->Controls->Clear();
	courseButton::courseDetails = true;
	PnlOfFilter->Visible = false;
	pnlOfDetailsOfCourse->Visible = false;
	pnlOfCoursesInProgress->Visible = false;
	pnlOfCourseGrades->Visible = true;
	pnlOfregCourse->Visible = false;
	homepanel->Visible = false;
	editpanel->Visible = false;
	courseButton::alldetailsbtns->Clear();

	filterp->BackColor = Color::Tan;
	yourgradesp->BackColor = Color::Brown;
	allcoursesp->BackColor = Color::Tan;
	yourcoursesP->BackColor = Color::Tan;
	registercoursep->BackColor = Color::Tan;
	editcoursep->BackColor = Color::Tan;
	sideBarTimer->Start();
	sideBarExpand = true;
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	flowLayoutPanel5->Controls->Clear();

	PnlOfFilter->Visible = true;
	pnlOfDetailsOfCourse->Visible = false;
	pnlOfCoursesInProgress->Visible = false;
	pnlOfCourseGrades->Visible = false;
	pnlOfregCourse->Visible = false;
	homepanel->Visible = false;
	editpanel->Visible = false;
	courseButton::alldetailsbtns->Clear();

	filterp->BackColor = Color::Brown;
	yourgradesp->BackColor = Color::Tan;
	allcoursesp->BackColor = Color::Tan;
	yourcoursesP->BackColor = Color::Tan;
	registercoursep->BackColor = Color::Tan;
	editcoursep->BackColor = Color::Tan;
	sideBarTimer->Start();
	sideBarExpand = true;
}private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	flowLayoutPanel5->Controls->Clear();
	courseButton::courseDetails = true;
	PnlOfFilter->Visible = false;
	pnlOfDetailsOfCourse->Visible = false;
	pnlOfCoursesInProgress->Visible = false;
	pnlOfCourseGrades->Visible = true;
	pnlOfregCourse->Visible = false;
	homepanel->Visible = false;
	editpanel->Visible = false;
	courseButton::alldetailsbtns->Clear();

	filterp->BackColor = Color::Tan;
	yourgradesp->BackColor = Color::Brown;
	allcoursesp->BackColor = Color::Tan;
	yourcoursesP->BackColor = Color::Tan;
	registercoursep->BackColor = Color::Tan;
	editcoursep->BackColor = Color::Tan;
	sideBarTimer->Start();
	sideBarExpand = true;
}
private: System::Void pictureBox99_Click(System::Object^ sender, System::EventArgs^ e) {
	PnlOfFilter->Visible = false;
	pnlOfDetailsOfCourse->Visible = false;
	pnlOfCoursesInProgress->Visible = false;
	pnlOfCourseGrades->Visible = false;
	pnlOfregCourse->Visible = false;
	homepanel->Visible = false;
	editpanel->Visible = true;


	filterp->BackColor = Color::Tan;
	yourgradesp->BackColor = Color::Tan;
	allcoursesp->BackColor = Color::Tan;
	yourcoursesP->BackColor = Color::Tan;
	registercoursep->BackColor = Color::Tan;
	editcoursep->BackColor = Color::Brown;
	sideBarTimer->Start();
	sideBarExpand = true;
}
private: System::Void editpp_Click(System::Object^ sender, System::EventArgs^ e) {
	PnlOfFilter->Visible = false;
	pnlOfDetailsOfCourse->Visible = false;
	pnlOfCoursesInProgress->Visible = false;
	pnlOfCourseGrades->Visible = false;
	pnlOfregCourse->Visible = false;
	homepanel->Visible = false;
	editpanel->Visible = true;

	filterp->BackColor = Color::Tan;
	yourgradesp->BackColor = Color::Tan;
	allcoursesp->BackColor = Color::Tan;
	yourcoursesP->BackColor = Color::Tan;
	registercoursep->BackColor = Color::Tan;
	editcoursep->BackColor = Color::Brown;
	sideBarTimer->Start();
	sideBarExpand = true;
}
private: System::Void homepic_click(System::Object^ sender, System::EventArgs^ e) {
	PnlOfFilter->Visible = false;
	pnlOfDetailsOfCourse->Visible = false;
	pnlOfCoursesInProgress->Visible = false;
	pnlOfCourseGrades->Visible = false;
	pnlOfregCourse->Visible = false;
	homepanel->Visible = true;
	editpanel->Visible = false;
}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	sideBarTimer->Start();
}
private: System::Void btnDetailsOfCourse_Click_2(System::Object^ sender, System::EventArgs^ e) {
	flowLayoutPanel5->Controls->Clear();
	courseButton::courseDetails = true;
	PnlOfFilter->Visible = false;
	pnlOfDetailsOfCourse->Visible = true;
	pnlOfCoursesInProgress->Visible = false;
	pnlOfCourseGrades->Visible = false;
	pnlOfregCourse->Visible = false;
	editpanel->Visible = false;
	homepanel->Visible = false;
	flowLayoutPanel3->Height = 0;
	courseButton::alldetailsbtns->Clear();

	filterp->BackColor = Color::Tan;
	yourgradesp->BackColor = Color::Tan;
	allcoursesp->BackColor = Color::Brown;
	yourcoursesP->BackColor = Color::Tan;
	registercoursep->BackColor = Color::Tan;
	editcoursep->BackColor = Color::Tan;
	sideBarTimer->Start();
	sideBarExpand = true;

}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	flowLayoutPanel5->Controls->Clear();
	courseButton::courseDetails = true;
	PnlOfFilter->Visible = false;
	pnlOfDetailsOfCourse->Visible = true;
	pnlOfCoursesInProgress->Visible = false;
	pnlOfCourseGrades->Visible = false;
	pnlOfregCourse->Visible = false;
	editpanel->Visible = false;
	homepanel->Visible = false;
	flowLayoutPanel3->Height = 0;
	courseButton::alldetailsbtns->Clear();

	filterp->BackColor = Color::Tan;
	yourgradesp->BackColor = Color::Tan;
	allcoursesp->BackColor = Color::Brown;
	yourcoursesP->BackColor = Color::Tan;
	registercoursep->BackColor = Color::Tan;
	editcoursep->BackColor = Color::Tan;
	sideBarTimer->Start();
	sideBarExpand = true;
}

private: System::Void btnCourseInProgress_Click_1(System::Object^ sender, System::EventArgs^ e) {
	flowLayoutPanel5->Controls->Clear();
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

	filterp->BackColor = Color::Tan;
	yourgradesp->BackColor = Color::Tan;
	allcoursesp->BackColor = Color::Tan;
	yourcoursesP->BackColor = Color::Brown;
	registercoursep->BackColor = Color::Tan;
	editcoursep->BackColor = Color::Tan;
	sideBarTimer->Start();
	sideBarExpand = true;
}
private: System::Void yourcoursespic_Click(System::Object^ sender, System::EventArgs^ e) {
	flowLayoutPanel5->Controls->Clear();
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
	filterp->BackColor = Color::Tan;
	yourgradesp->BackColor = Color::Tan;
	allcoursesp->BackColor = Color::Tan;
	yourcoursesP->BackColor = Color::Brown;
	registercoursep->BackColor = Color::Tan;
	editcoursep->BackColor = Color::Tan;
	sideBarTimer->Start();
	sideBarExpand = true;
}

private: System::Void btnregister_Click(System::Object^ sender, System::EventArgs^ e) {
	flowLayoutPanel5->Controls->Clear();
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
	filterp->BackColor = Color::Tan;
	yourgradesp->BackColor = Color::Tan;
	allcoursesp->BackColor = Color::Tan;
	yourcoursesP->BackColor = Color::Tan; 
	registercoursep->BackColor = Color::Brown;
	editcoursep->BackColor = Color::Tan;
	sideBarTimer->Start();
	sideBarExpand = true;

}
private: System::Void pictureBox5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	flowLayoutPanel5->Controls->Clear();
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

	filterp->BackColor = Color::Tan;
	yourgradesp->BackColor = Color::Tan;
	allcoursesp->BackColor = Color::Tan;
	yourcoursesP->BackColor = Color::Tan;
	registercoursep->BackColor = Color::Brown;
	editcoursep->BackColor = Color::Tan;
	sideBarTimer->Start();
	sideBarExpand = true;
}
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void exitbt_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void homepicture_click(System::Object^ sender, System::EventArgs^ e) {
	PnlOfFilter->Visible = false;
	pnlOfDetailsOfCourse->Visible = false;
	pnlOfCoursesInProgress->Visible = false;
	pnlOfCourseGrades->Visible = false;
	pnlOfregCourse->Visible = false;
	homepanel->Visible = true;
	editpanel->Visible = false;


	filterp->BackColor = Color::Tan;
	yourgradesp->BackColor = Color::Tan;
	allcoursesp->BackColor = Color::Tan;
	yourcoursesP->BackColor = Color::Tan;
	registercoursep->BackColor = Color::Tan;
	editcoursep->BackColor = Color::Tan;
	sideBarExpand = true;
	sideBarTimer->Start();
}
private: System::Void allcoursesp_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void yourgradesp_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
}
private: System::Void reglb_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
};


