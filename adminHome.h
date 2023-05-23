#pragma once
#include "Admin.h"
#include"Course.h"
#include "Student.h"
#include "studentname.h"
#include "courselistitem.h"
#include "courseButton.h"
namespace UMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for adminHome
	/// </summary>
	public ref class adminHome : public System::Windows::Forms::Form
	{
		Admin^ admin;
	public:
		adminHome(Admin^ admin)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->admin = admin;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~adminHome()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ sideBar;
	private: System::Windows::Forms::Panel^ pnlOfbtns;
	private: System::Windows::Forms::Button^ btnAddCourse;
	private: System::Windows::Forms::Panel^ addCoursepp;



	private: System::Windows::Forms::Button^ btnAddStudent;
	private: System::Windows::Forms::Panel^ addStudentpp;



	private: System::Windows::Forms::Button^ btnLogOut;
	private: System::Windows::Forms::Timer^ slideBarTimer;
	private: System::Windows::Forms::Panel^ pnlOfPanels;
	private: System::Windows::Forms::Panel^ pnlOfAddCourse;
	private: System::Windows::Forms::Panel^ pnlOfAddStudent;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ EditCourseData;

	private: System::Windows::Forms::Button^ StudentsOfCourse;
	private: System::Windows::Forms::Panel^ courseDatapp;



	private: System::Windows::Forms::Panel^ stdofCoursepp;

	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ pnlOfStudentOfCourse;
	private: System::Windows::Forms::Panel^ pnlEditStudent;
	private: System::Windows::Forms::Panel^ pnlOfEditCourse;
	private: System::Windows::Forms::Panel^ pnlOfData;
	private: System::Windows::Forms::TextBox^ nameText;
	private: System::Windows::Forms::TextBox^ yearText;



	private: System::Windows::Forms::TextBox^ passText;
	private: System::Windows::Forms::TextBox^ HoursText;
	private: System::Windows::Forms::TextBox^ gpaText;









	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::TextBox^ gradesText;
	private: System::Windows::Forms::TextBox^ inCoursesText;


	private: System::Windows::Forms::TextBox^ FcoursesText;
	private: System::Windows::Forms::Label^ allTxtLabel;
	private: System::Windows::Forms::Label^ sucssLabel;



	private: System::Windows::Forms::Label^ yearLabel;

	private: System::Windows::Forms::Label^ hoursLabel;
	private: System::Windows::Forms::Label^ gpaLabel;
	private: System::Windows::Forms::Label^ GradesLabel;
	private: System::Windows::Forms::Label^ lbl7;

	private: System::Windows::Forms::Label^ lbl5;

	private: System::Windows::Forms::Label^ lbl4;

	private: System::Windows::Forms::Label^ lbl37;

	private: System::Windows::Forms::Label^ lbl2;

	private: System::Windows::Forms::Label^ lbl1;
private: System::Windows::Forms::TextBox^ ctxt;


private: System::Windows::Forms::TextBox^ ptxt;

private: System::Windows::Forms::TextBox^ itxt;

private: System::Windows::Forms::TextBox^ mtxt;

private: System::Windows::Forms::TextBox^ htxt;

private: System::Windows::Forms::TextBox^ nTxt;

private: System::Windows::Forms::Label^ lblfgd;
private: System::Windows::Forms::RadioButton^ Eradio;

private: System::Windows::Forms::RadioButton^ Rradio;
private: System::Windows::Forms::Label^ hlabel;
private: System::Windows::Forms::Label^ mlabel;


private: System::Windows::Forms::Button^ addCourseBtn;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ slabel;

private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::FlowLayoutPanel^ studentnamepanel;

private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Button^ viewbt;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::FlowLayoutPanel^ stdpanel;

private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::PictureBox^ pictureBox6;/*
private: System::Windows::Forms::Button^ button2;*/

private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Button^ choosestdbt;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::PictureBox^ pictureBox48;
private: System::Windows::Forms::PictureBox^ pictureBox47;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::PictureBox^ pictureBox44;

private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::Button^ Home;

private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::Panel^ editCoursepp;


private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Panel^ pnlCoursedataedit;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
private: System::Windows::Forms::Button^ instbt;
private: System::Windows::Forms::Button^ reqbt;
private: System::Windows::Forms::Button^ maxstd;


private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::Panel^ studentDatapp;

private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Panel^ addcoursepanel;
private: System::Windows::Forms::Panel^ StudentDatapanel;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Panel^ panel15;
private: System::Windows::Forms::Label^ l1;
private: System::Windows::Forms::Label^ l2;



private: System::Windows::Forms::FlowLayoutPanel^ finishedflowlaypanel;
private: System::Windows::Forms::FlowLayoutPanel^ coursesinprogflowlayoutpanel;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label48;

private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Label^ gradesSizeLabel;
private: System::Windows::Forms::Label^ label49;
































	private: System::ComponentModel::IContainer^ components;



	protected:




	protected:

































	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(adminHome::typeid));
			this->sideBar = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pnlOfbtns = (gcnew System::Windows::Forms::Panel());
			this->studentDatapp = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->editCoursepp = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->courseDatapp = (gcnew System::Windows::Forms::Panel());
			this->stdofCoursepp = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->EditCourseData = (gcnew System::Windows::Forms::Button());
			this->StudentsOfCourse = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnLogOut = (gcnew System::Windows::Forms::Button());
			this->btnAddCourse = (gcnew System::Windows::Forms::Button());
			this->addCoursepp = (gcnew System::Windows::Forms::Panel());
			this->btnAddStudent = (gcnew System::Windows::Forms::Button());
			this->addStudentpp = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->Home = (gcnew System::Windows::Forms::Button());
			this->slideBarTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->pnlOfPanels = (gcnew System::Windows::Forms::Panel());
			this->pnlEditStudent = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pnlCoursedataedit = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->instbt = (gcnew System::Windows::Forms::Button());
			this->reqbt = (gcnew System::Windows::Forms::Button());
			this->maxstd = (gcnew System::Windows::Forms::Button());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->pnlOfAddCourse = (gcnew System::Windows::Forms::Panel());
			this->addcoursepanel = (gcnew System::Windows::Forms::Panel());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->slabel = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->addCourseBtn = (gcnew System::Windows::Forms::Button());
			this->hlabel = (gcnew System::Windows::Forms::Label());
			this->mlabel = (gcnew System::Windows::Forms::Label());
			this->Eradio = (gcnew System::Windows::Forms::RadioButton());
			this->Rradio = (gcnew System::Windows::Forms::RadioButton());
			this->lblfgd = (gcnew System::Windows::Forms::Label());
			this->ctxt = (gcnew System::Windows::Forms::TextBox());
			this->ptxt = (gcnew System::Windows::Forms::TextBox());
			this->itxt = (gcnew System::Windows::Forms::TextBox());
			this->mtxt = (gcnew System::Windows::Forms::TextBox());
			this->htxt = (gcnew System::Windows::Forms::TextBox());
			this->nTxt = (gcnew System::Windows::Forms::TextBox());
			this->lbl7 = (gcnew System::Windows::Forms::Label());
			this->lbl5 = (gcnew System::Windows::Forms::Label());
			this->lbl4 = (gcnew System::Windows::Forms::Label());
			this->lbl37 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->pnlOfAddStudent = (gcnew System::Windows::Forms::Panel());
			this->gradesSizeLabel = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->GradesLabel = (gcnew System::Windows::Forms::Label());
			this->gpaLabel = (gcnew System::Windows::Forms::Label());
			this->hoursLabel = (gcnew System::Windows::Forms::Label());
			this->yearLabel = (gcnew System::Windows::Forms::Label());
			this->sucssLabel = (gcnew System::Windows::Forms::Label());
			this->allTxtLabel = (gcnew System::Windows::Forms::Label());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->pnlOfData = (gcnew System::Windows::Forms::Panel());
			this->gradesText = (gcnew System::Windows::Forms::TextBox());
			this->inCoursesText = (gcnew System::Windows::Forms::TextBox());
			this->FcoursesText = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gpaText = (gcnew System::Windows::Forms::TextBox());
			this->HoursText = (gcnew System::Windows::Forms::TextBox());
			this->yearText = (gcnew System::Windows::Forms::TextBox());
			this->passText = (gcnew System::Windows::Forms::TextBox());
			this->nameText = (gcnew System::Windows::Forms::TextBox());
			this->pnlOfEditCourse = (gcnew System::Windows::Forms::Panel());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->choosestdbt = (gcnew System::Windows::Forms::Button());
			this->stdpanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->StudentDatapanel = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->l1 = (gcnew System::Windows::Forms::Label());
			this->l2 = (gcnew System::Windows::Forms::Label());
			this->finishedflowlaypanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->coursesinprogflowlayoutpanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->pnlOfStudentOfCourse = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->viewbt = (gcnew System::Windows::Forms::Button());
			this->studentnamepanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->sideBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->pnlOfbtns->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->pnlOfPanels->SuspendLayout();
			this->pnlEditStudent->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			this->pnlCoursedataedit->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel13->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->pnlOfAddCourse->SuspendLayout();
			this->addcoursepanel->SuspendLayout();
			this->pnlOfAddStudent->SuspendLayout();
			this->pnlOfData->SuspendLayout();
			this->pnlOfEditCourse->SuspendLayout();
			this->panel8->SuspendLayout();
			this->StudentDatapanel->SuspendLayout();
			this->panel15->SuspendLayout();
			this->pnlOfStudentOfCourse->SuspendLayout();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// sideBar
			// 
			this->sideBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->sideBar->Controls->Add(this->pictureBox6);
			this->sideBar->Controls->Add(this->pnlOfbtns);
			this->sideBar->Controls->Add(this->pictureBox3);
			this->sideBar->Controls->Add(this->Home);
			resources->ApplyResources(this->sideBar, L"sideBar");
			this->sideBar->Name = L"sideBar";
			this->sideBar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminHome::sideBar_Paint);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox6, L"pictureBox6");
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &adminHome::pictureBox6_Click);
			// 
			// pnlOfbtns
			// 
			this->pnlOfbtns->Controls->Add(this->studentDatapp);
			this->pnlOfbtns->Controls->Add(this->button7);
			this->pnlOfbtns->Controls->Add(this->pictureBox11);
			this->pnlOfbtns->Controls->Add(this->button4);
			this->pnlOfbtns->Controls->Add(this->pictureBox2);
			this->pnlOfbtns->Controls->Add(this->pictureBox9);
			this->pnlOfbtns->Controls->Add(this->editCoursepp);
			this->pnlOfbtns->Controls->Add(this->pictureBox8);
			this->pnlOfbtns->Controls->Add(this->courseDatapp);
			this->pnlOfbtns->Controls->Add(this->stdofCoursepp);
			this->pnlOfbtns->Controls->Add(this->pictureBox5);
			this->pnlOfbtns->Controls->Add(this->pictureBox4);
			this->pnlOfbtns->Controls->Add(this->EditCourseData);
			this->pnlOfbtns->Controls->Add(this->StudentsOfCourse);
			this->pnlOfbtns->Controls->Add(this->pictureBox1);
			this->pnlOfbtns->Controls->Add(this->btnLogOut);
			this->pnlOfbtns->Controls->Add(this->btnAddCourse);
			this->pnlOfbtns->Controls->Add(this->addCoursepp);
			this->pnlOfbtns->Controls->Add(this->btnAddStudent);
			this->pnlOfbtns->Controls->Add(this->addStudentpp);
			resources->ApplyResources(this->pnlOfbtns, L"pnlOfbtns");
			this->pnlOfbtns->Name = L"pnlOfbtns";
			// 
			// studentDatapp
			// 
			this->studentDatapp->BackColor = System::Drawing::Color::Tan;
			resources->ApplyResources(this->studentDatapp, L"studentDatapp");
			this->studentDatapp->Name = L"studentDatapp";
			// 
			// button7
			// 
			resources->ApplyResources(this->button7, L"button7");
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			this->button7->ForeColor = System::Drawing::Color::Tan;
			this->button7->Name = L"button7";
			this->button7->UseCompatibleTextRendering = true;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &adminHome::button7_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox11, L"pictureBox11");
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &adminHome::stdpic_Click);
			// 
			// button4
			// 
			resources->ApplyResources(this->button4, L"button4");
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			this->button4->ForeColor = System::Drawing::Color::Tan;
			this->button4->Name = L"button4";
			this->button4->UseCompatibleTextRendering = true;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &adminHome::button4_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox2, L"pictureBox2");
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &adminHome::pictureBox2_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox9, L"pictureBox9");
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &adminHome::pictureBox9_Click);
			// 
			// editCoursepp
			// 
			this->editCoursepp->BackColor = System::Drawing::Color::Tan;
			resources->ApplyResources(this->editCoursepp, L"editCoursepp");
			this->editCoursepp->Name = L"editCoursepp";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox8, L"pictureBox8");
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &adminHome::pictureBox8_Click);
			// 
			// courseDatapp
			// 
			this->courseDatapp->BackColor = System::Drawing::Color::Tan;
			resources->ApplyResources(this->courseDatapp, L"courseDatapp");
			this->courseDatapp->Name = L"courseDatapp";
			// 
			// stdofCoursepp
			// 
			this->stdofCoursepp->BackColor = System::Drawing::Color::Tan;
			resources->ApplyResources(this->stdofCoursepp, L"stdofCoursepp");
			this->stdofCoursepp->Name = L"stdofCoursepp";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox5, L"pictureBox5");
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &adminHome::pictureBox5_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox4, L"pictureBox4");
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &adminHome::pictureBox4_Click);
			// 
			// EditCourseData
			// 
			resources->ApplyResources(this->EditCourseData, L"EditCourseData");
			this->EditCourseData->Cursor = System::Windows::Forms::Cursors::Hand;
			this->EditCourseData->FlatAppearance->BorderSize = 0;
			this->EditCourseData->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->EditCourseData->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			this->EditCourseData->ForeColor = System::Drawing::Color::Tan;
			this->EditCourseData->Name = L"EditCourseData";
			this->EditCourseData->UseCompatibleTextRendering = true;
			this->EditCourseData->UseVisualStyleBackColor = true;
			this->EditCourseData->Click += gcnew System::EventHandler(this, &adminHome::button2_Click);
			// 
			// StudentsOfCourse
			// 
			this->StudentsOfCourse->Cursor = System::Windows::Forms::Cursors::Hand;
			this->StudentsOfCourse->FlatAppearance->BorderSize = 0;
			this->StudentsOfCourse->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->StudentsOfCourse->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			resources->ApplyResources(this->StudentsOfCourse, L"StudentsOfCourse");
			this->StudentsOfCourse->ForeColor = System::Drawing::Color::Tan;
			this->StudentsOfCourse->Name = L"StudentsOfCourse";
			this->StudentsOfCourse->UseCompatibleTextRendering = true;
			this->StudentsOfCourse->UseVisualStyleBackColor = true;
			this->StudentsOfCourse->Click += gcnew System::EventHandler(this, &adminHome::StudentsOfCourse_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &adminHome::pictureBox1_Click);
			// 
			// btnLogOut
			// 
			resources->ApplyResources(this->btnLogOut, L"btnLogOut");
			this->btnLogOut->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLogOut->FlatAppearance->BorderSize = 0;
			this->btnLogOut->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->btnLogOut->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			this->btnLogOut->ForeColor = System::Drawing::Color::Tan;
			this->btnLogOut->Name = L"btnLogOut";
			this->btnLogOut->UseCompatibleTextRendering = true;
			this->btnLogOut->UseVisualStyleBackColor = true;
			this->btnLogOut->Click += gcnew System::EventHandler(this, &adminHome::btnLogOut_Click);
			// 
			// btnAddCourse
			// 
			resources->ApplyResources(this->btnAddCourse, L"btnAddCourse");
			this->btnAddCourse->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAddCourse->FlatAppearance->BorderSize = 0;
			this->btnAddCourse->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->btnAddCourse->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			this->btnAddCourse->ForeColor = System::Drawing::Color::Tan;
			this->btnAddCourse->Name = L"btnAddCourse";
			this->btnAddCourse->UseCompatibleTextRendering = true;
			this->btnAddCourse->UseVisualStyleBackColor = true;
			this->btnAddCourse->Click += gcnew System::EventHandler(this, &adminHome::btnAddCourse_Click);
			// 
			// addCoursepp
			// 
			this->addCoursepp->BackColor = System::Drawing::Color::Tan;
			resources->ApplyResources(this->addCoursepp, L"addCoursepp");
			this->addCoursepp->Name = L"addCoursepp";
			// 
			// btnAddStudent
			// 
			resources->ApplyResources(this->btnAddStudent, L"btnAddStudent");
			this->btnAddStudent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAddStudent->FlatAppearance->BorderSize = 0;
			this->btnAddStudent->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->btnAddStudent->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			this->btnAddStudent->ForeColor = System::Drawing::Color::Tan;
			this->btnAddStudent->Name = L"btnAddStudent";
			this->btnAddStudent->UseCompatibleTextRendering = true;
			this->btnAddStudent->UseVisualStyleBackColor = true;
			this->btnAddStudent->Click += gcnew System::EventHandler(this, &adminHome::btnAddStudent_Click);
			// 
			// addStudentpp
			// 
			this->addStudentpp->BackColor = System::Drawing::Color::Tan;
			resources->ApplyResources(this->addStudentpp, L"addStudentpp");
			this->addStudentpp->Name = L"addStudentpp";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox3, L"pictureBox3");
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &adminHome::pictureBox3_Click);
			// 
			// Home
			// 
			resources->ApplyResources(this->Home, L"Home");
			this->Home->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Home->FlatAppearance->BorderSize = 0;
			this->Home->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->Home->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			this->Home->ForeColor = System::Drawing::Color::Tan;
			this->Home->Name = L"Home";
			this->Home->UseCompatibleTextRendering = true;
			this->Home->UseVisualStyleBackColor = true;
			this->Home->Click += gcnew System::EventHandler(this, &adminHome::StudentData_Click);
			// 
			// slideBarTimer
			// 
			this->slideBarTimer->Interval = 10;
			this->slideBarTimer->Tick += gcnew System::EventHandler(this, &adminHome::slideBarTimer_Tick);
			// 
			// pnlOfPanels
			// 
			this->pnlOfPanels->Controls->Add(this->pnlEditStudent);
			this->pnlOfPanels->Controls->Add(this->pnlCoursedataedit);
			this->pnlOfPanels->Controls->Add(this->pnlOfAddCourse);
			this->pnlOfPanels->Controls->Add(this->pnlOfAddStudent);
			this->pnlOfPanels->Controls->Add(this->pnlOfEditCourse);
			this->pnlOfPanels->Controls->Add(this->StudentDatapanel);
			this->pnlOfPanels->Controls->Add(this->pnlOfStudentOfCourse);
			resources->ApplyResources(this->pnlOfPanels, L"pnlOfPanels");
			this->pnlOfPanels->Name = L"pnlOfPanels";
			// 
			// pnlEditStudent
			// 
			this->pnlEditStudent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->pnlEditStudent->Controls->Add(this->panel11);
			resources->ApplyResources(this->pnlEditStudent, L"pnlEditStudent");
			this->pnlEditStudent->Name = L"pnlEditStudent";
			this->pnlEditStudent->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminHome::pnlEditStudent_Paint);
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->panel10);
			this->panel11->Controls->Add(this->panel9);
			this->panel11->Controls->Add(this->pictureBox7);
			this->panel11->Controls->Add(this->label27);
			this->panel11->Controls->Add(this->pictureBox44);
			resources->ApplyResources(this->panel11, L"panel11");
			this->panel11->Name = L"panel11";
			this->panel11->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminHome::panel11_Paint);
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->pictureBox10);
			this->panel10->Controls->Add(this->label31);
			this->panel10->Controls->Add(this->textBox6);
			this->panel10->Controls->Add(this->label30);
			this->panel10->Controls->Add(this->textBox5);
			this->panel10->Controls->Add(this->label32);
			this->panel10->Controls->Add(this->pictureBox48);
			this->panel10->Controls->Add(this->pictureBox47);
			this->panel10->Controls->Add(this->textBox4);
			resources->ApplyResources(this->panel10, L"panel10");
			this->panel10->Name = L"panel10";
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox10, L"pictureBox10");
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->TabStop = false;
			// 
			// label31
			// 
			resources->ApplyResources(this->label31, L"label31");
			this->label31->BackColor = System::Drawing::Color::Transparent;
			this->label31->ForeColor = System::Drawing::Color::Brown;
			this->label31->Name = L"label31";
			this->label31->UseCompatibleTextRendering = true;
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
			// label30
			// 
			resources->ApplyResources(this->label30, L"label30");
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->ForeColor = System::Drawing::Color::Brown;
			this->label30->Name = L"label30";
			this->label30->UseCompatibleTextRendering = true;
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
			// label32
			// 
			resources->ApplyResources(this->label32, L"label32");
			this->label32->BackColor = System::Drawing::Color::Transparent;
			this->label32->ForeColor = System::Drawing::Color::Brown;
			this->label32->Name = L"label32";
			this->label32->UseCompatibleTextRendering = true;
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
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->panel9->Controls->Add(this->label28);
			this->panel9->Controls->Add(this->label29);
			resources->ApplyResources(this->panel9, L"panel9");
			this->panel9->Name = L"panel9";
			// 
			// label28
			// 
			resources->ApplyResources(this->label28, L"label28");
			this->label28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label28->ForeColor = System::Drawing::Color::Brown;
			this->label28->Name = L"label28";
			// 
			// label29
			// 
			resources->ApplyResources(this->label29, L"label29");
			this->label29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->label29->Name = L"label29";
			// 
			// pictureBox7
			// 
			resources->ApplyResources(this->pictureBox7, L"pictureBox7");
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->TabStop = false;
			// 
			// label27
			// 
			resources->ApplyResources(this->label27, L"label27");
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->label27->Name = L"label27";
			this->label27->UseCompatibleTextRendering = true;
			// 
			// pictureBox44
			// 
			this->pictureBox44->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox44, L"pictureBox44");
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->TabStop = false;
			// 
			// pnlCoursedataedit
			// 
			resources->ApplyResources(this->pnlCoursedataedit, L"pnlCoursedataedit");
			this->pnlCoursedataedit->BackColor = System::Drawing::Color::Transparent;
			this->pnlCoursedataedit->Controls->Add(this->panel12);
			this->pnlCoursedataedit->Controls->Add(this->label34);
			this->pnlCoursedataedit->Controls->Add(this->label35);
			this->pnlCoursedataedit->Controls->Add(this->button2);
			this->pnlCoursedataedit->Controls->Add(this->flowLayoutPanel1);
			this->pnlCoursedataedit->Controls->Add(this->label36);
			this->pnlCoursedataedit->Controls->Add(this->label39);
			this->pnlCoursedataedit->Controls->Add(this->textBox7);
			this->pnlCoursedataedit->Name = L"pnlCoursedataedit";
			this->pnlCoursedataedit->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminHome::pnlCoursedataedit_Paint);
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->label40);
			this->panel12->Controls->Add(this->label41);
			this->panel12->Controls->Add(this->label44);
			this->panel12->Controls->Add(this->panel13);
			this->panel12->Controls->Add(this->label38);
			this->panel12->Controls->Add(this->button5);
			this->panel12->Controls->Add(this->label37);
			this->panel12->Controls->Add(this->label42);
			this->panel12->Controls->Add(this->flowLayoutPanel2);
			resources->ApplyResources(this->panel12, L"panel12");
			this->panel12->Name = L"panel12";
			this->panel12->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminHome::panel12_Paint);
			// 
			// label40
			// 
			resources->ApplyResources(this->label40, L"label40");
			this->label40->BackColor = System::Drawing::Color::Transparent;
			this->label40->ForeColor = System::Drawing::Color::Brown;
			this->label40->Name = L"label40";
			// 
			// label41
			// 
			resources->ApplyResources(this->label41, L"label41");
			this->label41->BackColor = System::Drawing::Color::Transparent;
			this->label41->ForeColor = System::Drawing::Color::Brown;
			this->label41->Name = L"label41";
			// 
			// label44
			// 
			resources->ApplyResources(this->label44, L"label44");
			this->label44->BackColor = System::Drawing::Color::Transparent;
			this->label44->ForeColor = System::Drawing::Color::Brown;
			this->label44->Name = L"label44";
			// 
			// panel13
			// 
			this->panel13->Controls->Add(this->textBox8);
			this->panel13->Controls->Add(this->button6);
			this->panel13->Controls->Add(this->label43);
			resources->ApplyResources(this->panel13, L"panel13");
			this->panel13->Name = L"panel13";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::Linen;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBox8, L"textBox8");
			this->textBox8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox8->Name = L"textBox8";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Brown;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Tan;
			this->button6->FlatAppearance->BorderSize = 3;
			resources->ApplyResources(this->button6, L"button6");
			this->button6->ForeColor = System::Drawing::Color::Tan;
			this->button6->Name = L"button6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &adminHome::button6_Click);
			// 
			// label43
			// 
			resources->ApplyResources(this->label43, L"label43");
			this->label43->BackColor = System::Drawing::Color::Transparent;
			this->label43->ForeColor = System::Drawing::Color::Brown;
			this->label43->Name = L"label43";
			// 
			// label38
			// 
			resources->ApplyResources(this->label38, L"label38");
			this->label38->BackColor = System::Drawing::Color::Transparent;
			this->label38->ForeColor = System::Drawing::Color::Brown;
			this->label38->Name = L"label38";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Brown;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Tan;
			this->button5->FlatAppearance->BorderSize = 3;
			resources->ApplyResources(this->button5, L"button5");
			this->button5->ForeColor = System::Drawing::Color::Tan;
			this->button5->Name = L"button5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &adminHome::button5_Click);
			// 
			// label37
			// 
			resources->ApplyResources(this->label37, L"label37");
			this->label37->BackColor = System::Drawing::Color::Transparent;
			this->label37->ForeColor = System::Drawing::Color::Brown;
			this->label37->Name = L"label37";
			// 
			// label42
			// 
			resources->ApplyResources(this->label42, L"label42");
			this->label42->BackColor = System::Drawing::Color::Transparent;
			this->label42->ForeColor = System::Drawing::Color::Brown;
			this->label42->Name = L"label42";
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->instbt);
			this->flowLayoutPanel2->Controls->Add(this->reqbt);
			this->flowLayoutPanel2->Controls->Add(this->maxstd);
			resources->ApplyResources(this->flowLayoutPanel2, L"flowLayoutPanel2");
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			// 
			// instbt
			// 
			this->instbt->BackColor = System::Drawing::Color::Tan;
			this->instbt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->instbt->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->instbt->FlatAppearance->BorderSize = 3;
			this->instbt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->instbt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			resources->ApplyResources(this->instbt, L"instbt");
			this->instbt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->instbt->Name = L"instbt";
			this->instbt->UseVisualStyleBackColor = false;
			this->instbt->Click += gcnew System::EventHandler(this, &adminHome::instbt_Click);
			this->instbt->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &adminHome::instbt_MouseClick);
			// 
			// reqbt
			// 
			this->reqbt->BackColor = System::Drawing::Color::Tan;
			this->reqbt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->reqbt->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->reqbt->FlatAppearance->BorderSize = 3;
			this->reqbt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->reqbt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			resources->ApplyResources(this->reqbt, L"reqbt");
			this->reqbt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->reqbt->Name = L"reqbt";
			this->reqbt->UseCompatibleTextRendering = true;
			this->reqbt->UseVisualStyleBackColor = false;
			this->reqbt->Click += gcnew System::EventHandler(this, &adminHome::reqbt_Click);
			// 
			// maxstd
			// 
			this->maxstd->BackColor = System::Drawing::Color::Tan;
			this->maxstd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->maxstd->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->maxstd->FlatAppearance->BorderSize = 3;
			this->maxstd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->maxstd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			resources->ApplyResources(this->maxstd, L"maxstd");
			this->maxstd->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->maxstd->Name = L"maxstd";
			this->maxstd->UseVisualStyleBackColor = false;
			this->maxstd->Click += gcnew System::EventHandler(this, &adminHome::maxstd_Click);
			// 
			// label34
			// 
			resources->ApplyResources(this->label34, L"label34");
			this->label34->BackColor = System::Drawing::Color::Transparent;
			this->label34->ForeColor = System::Drawing::Color::Tan;
			this->label34->Name = L"label34";
			// 
			// label35
			// 
			resources->ApplyResources(this->label35, L"label35");
			this->label35->BackColor = System::Drawing::Color::Tan;
			this->label35->Name = L"label35";
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
			this->button2->Click += gcnew System::EventHandler(this, &adminHome::button2_Click_2);
			// 
			// flowLayoutPanel1
			// 
			resources->ApplyResources(this->flowLayoutPanel1, L"flowLayoutPanel1");
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminHome::flowLayoutPanel1_Paint);
			// 
			// label36
			// 
			resources->ApplyResources(this->label36, L"label36");
			this->label36->BackColor = System::Drawing::Color::Transparent;
			this->label36->ForeColor = System::Drawing::Color::Brown;
			this->label36->Name = L"label36";
			// 
			// label39
			// 
			resources->ApplyResources(this->label39, L"label39");
			this->label39->BackColor = System::Drawing::Color::Transparent;
			this->label39->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label39->Name = L"label39";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::Linen;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBox7, L"textBox7");
			this->textBox7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox7->Name = L"textBox7";
			// 
			// pnlOfAddCourse
			// 
			this->pnlOfAddCourse->BackColor = System::Drawing::Color::White;
			this->pnlOfAddCourse->Controls->Add(this->addcoursepanel);
			resources->ApplyResources(this->pnlOfAddCourse, L"pnlOfAddCourse");
			this->pnlOfAddCourse->Name = L"pnlOfAddCourse";
			this->pnlOfAddCourse->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminHome::pnlOfAddCourse_Paint);
			// 
			// addcoursepanel
			// 
			this->addcoursepanel->Controls->Add(this->label33);
			this->addcoursepanel->Controls->Add(this->label15);
			this->addcoursepanel->Controls->Add(this->slabel);
			this->addcoursepanel->Controls->Add(this->label11);
			this->addcoursepanel->Controls->Add(this->addCourseBtn);
			this->addcoursepanel->Controls->Add(this->hlabel);
			this->addcoursepanel->Controls->Add(this->mlabel);
			this->addcoursepanel->Controls->Add(this->Eradio);
			this->addcoursepanel->Controls->Add(this->Rradio);
			this->addcoursepanel->Controls->Add(this->lblfgd);
			this->addcoursepanel->Controls->Add(this->ctxt);
			this->addcoursepanel->Controls->Add(this->ptxt);
			this->addcoursepanel->Controls->Add(this->itxt);
			this->addcoursepanel->Controls->Add(this->mtxt);
			this->addcoursepanel->Controls->Add(this->htxt);
			this->addcoursepanel->Controls->Add(this->nTxt);
			this->addcoursepanel->Controls->Add(this->lbl7);
			this->addcoursepanel->Controls->Add(this->lbl5);
			this->addcoursepanel->Controls->Add(this->lbl4);
			this->addcoursepanel->Controls->Add(this->lbl37);
			this->addcoursepanel->Controls->Add(this->lbl2);
			this->addcoursepanel->Controls->Add(this->lbl1);
			resources->ApplyResources(this->addcoursepanel, L"addcoursepanel");
			this->addcoursepanel->Name = L"addcoursepanel";
			// 
			// label33
			// 
			resources->ApplyResources(this->label33, L"label33");
			this->label33->BackColor = System::Drawing::Color::Transparent;
			this->label33->ForeColor = System::Drawing::Color::Brown;
			this->label33->Name = L"label33";
			// 
			// label15
			// 
			resources->ApplyResources(this->label15, L"label15");
			this->label15->ForeColor = System::Drawing::Color::Tan;
			this->label15->Name = L"label15";
			// 
			// slabel
			// 
			resources->ApplyResources(this->slabel, L"slabel");
			this->slabel->BackColor = System::Drawing::Color::Transparent;
			this->slabel->ForeColor = System::Drawing::Color::Blue;
			this->slabel->Name = L"slabel";
			// 
			// label11
			// 
			resources->ApplyResources(this->label11, L"label11");
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->ForeColor = System::Drawing::Color::Brown;
			this->label11->Name = L"label11";
			// 
			// addCourseBtn
			// 
			this->addCourseBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->addCourseBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addCourseBtn->FlatAppearance->BorderSize = 0;
			resources->ApplyResources(this->addCourseBtn, L"addCourseBtn");
			this->addCourseBtn->ForeColor = System::Drawing::Color::Tan;
			this->addCourseBtn->Name = L"addCourseBtn";
			this->addCourseBtn->UseVisualStyleBackColor = false;
			this->addCourseBtn->Click += gcnew System::EventHandler(this, &adminHome::addCourseBtn_Click);
			// 
			// hlabel
			// 
			resources->ApplyResources(this->hlabel, L"hlabel");
			this->hlabel->BackColor = System::Drawing::Color::Transparent;
			this->hlabel->ForeColor = System::Drawing::Color::Brown;
			this->hlabel->Name = L"hlabel";
			// 
			// mlabel
			// 
			resources->ApplyResources(this->mlabel, L"mlabel");
			this->mlabel->BackColor = System::Drawing::Color::Transparent;
			this->mlabel->ForeColor = System::Drawing::Color::Brown;
			this->mlabel->Name = L"mlabel";
			// 
			// Eradio
			// 
			resources->ApplyResources(this->Eradio, L"Eradio");
			this->Eradio->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->Eradio->Name = L"Eradio";
			this->Eradio->UseVisualStyleBackColor = true;
			// 
			// Rradio
			// 
			resources->ApplyResources(this->Rradio, L"Rradio");
			this->Rradio->Checked = true;
			this->Rradio->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->Rradio->Name = L"Rradio";
			this->Rradio->TabStop = true;
			this->Rradio->UseVisualStyleBackColor = true;
			// 
			// lblfgd
			// 
			resources->ApplyResources(this->lblfgd, L"lblfgd");
			this->lblfgd->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->lblfgd->Name = L"lblfgd";
			// 
			// ctxt
			// 
			resources->ApplyResources(this->ctxt, L"ctxt");
			this->ctxt->Name = L"ctxt";
			// 
			// ptxt
			// 
			resources->ApplyResources(this->ptxt, L"ptxt");
			this->ptxt->Name = L"ptxt";
			// 
			// itxt
			// 
			resources->ApplyResources(this->itxt, L"itxt");
			this->itxt->Name = L"itxt";
			// 
			// mtxt
			// 
			resources->ApplyResources(this->mtxt, L"mtxt");
			this->mtxt->Name = L"mtxt";
			// 
			// htxt
			// 
			resources->ApplyResources(this->htxt, L"htxt");
			this->htxt->Name = L"htxt";
			this->htxt->TextChanged += gcnew System::EventHandler(this, &adminHome::htxt_TextChanged);
			// 
			// nTxt
			// 
			resources->ApplyResources(this->nTxt, L"nTxt");
			this->nTxt->Name = L"nTxt";
			// 
			// lbl7
			// 
			resources->ApplyResources(this->lbl7, L"lbl7");
			this->lbl7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->lbl7->Name = L"lbl7";
			this->lbl7->Click += gcnew System::EventHandler(this, &adminHome::lbl7_Click);
			// 
			// lbl5
			// 
			resources->ApplyResources(this->lbl5, L"lbl5");
			this->lbl5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->lbl5->Name = L"lbl5";
			// 
			// lbl4
			// 
			resources->ApplyResources(this->lbl4, L"lbl4");
			this->lbl4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->lbl4->Name = L"lbl4";
			// 
			// lbl37
			// 
			resources->ApplyResources(this->lbl37, L"lbl37");
			this->lbl37->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->lbl37->Name = L"lbl37";
			this->lbl37->Click += gcnew System::EventHandler(this, &adminHome::lbl37_Click);
			// 
			// lbl2
			// 
			resources->ApplyResources(this->lbl2, L"lbl2");
			this->lbl2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->lbl2->Name = L"lbl2";
			// 
			// lbl1
			// 
			resources->ApplyResources(this->lbl1, L"lbl1");
			this->lbl1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->lbl1->Name = L"lbl1";
			// 
			// pnlOfAddStudent
			// 
			this->pnlOfAddStudent->BackColor = System::Drawing::Color::White;
			this->pnlOfAddStudent->Controls->Add(this->gradesSizeLabel);
			this->pnlOfAddStudent->Controls->Add(this->label17);
			this->pnlOfAddStudent->Controls->Add(this->label16);
			this->pnlOfAddStudent->Controls->Add(this->GradesLabel);
			this->pnlOfAddStudent->Controls->Add(this->gpaLabel);
			this->pnlOfAddStudent->Controls->Add(this->hoursLabel);
			this->pnlOfAddStudent->Controls->Add(this->yearLabel);
			this->pnlOfAddStudent->Controls->Add(this->sucssLabel);
			this->pnlOfAddStudent->Controls->Add(this->allTxtLabel);
			this->pnlOfAddStudent->Controls->Add(this->btnSave);
			this->pnlOfAddStudent->Controls->Add(this->pnlOfData);
			resources->ApplyResources(this->pnlOfAddStudent, L"pnlOfAddStudent");
			this->pnlOfAddStudent->Name = L"pnlOfAddStudent";
			this->pnlOfAddStudent->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminHome::pnlOfAddStudent_Paint);
			// 
			// gradesSizeLabel
			// 
			resources->ApplyResources(this->gradesSizeLabel, L"gradesSizeLabel");
			this->gradesSizeLabel->ForeColor = System::Drawing::Color::Brown;
			this->gradesSizeLabel->Name = L"gradesSizeLabel";
			// 
			// label17
			// 
			resources->ApplyResources(this->label17, L"label17");
			this->label17->ForeColor = System::Drawing::Color::Tan;
			this->label17->Name = L"label17";
			// 
			// label16
			// 
			resources->ApplyResources(this->label16, L"label16");
			this->label16->Name = L"label16";
			// 
			// GradesLabel
			// 
			resources->ApplyResources(this->GradesLabel, L"GradesLabel");
			this->GradesLabel->ForeColor = System::Drawing::Color::Brown;
			this->GradesLabel->Name = L"GradesLabel";
			// 
			// gpaLabel
			// 
			resources->ApplyResources(this->gpaLabel, L"gpaLabel");
			this->gpaLabel->ForeColor = System::Drawing::Color::Brown;
			this->gpaLabel->Name = L"gpaLabel";
			// 
			// hoursLabel
			// 
			resources->ApplyResources(this->hoursLabel, L"hoursLabel");
			this->hoursLabel->ForeColor = System::Drawing::Color::Brown;
			this->hoursLabel->Name = L"hoursLabel";
			this->hoursLabel->Click += gcnew System::EventHandler(this, &adminHome::hoursLabel_Click);
			// 
			// yearLabel
			// 
			resources->ApplyResources(this->yearLabel, L"yearLabel");
			this->yearLabel->ForeColor = System::Drawing::Color::Brown;
			this->yearLabel->Name = L"yearLabel";
			// 
			// sucssLabel
			// 
			resources->ApplyResources(this->sucssLabel, L"sucssLabel");
			this->sucssLabel->CausesValidation = false;
			this->sucssLabel->ForeColor = System::Drawing::Color::MediumBlue;
			this->sucssLabel->Name = L"sucssLabel";
			// 
			// allTxtLabel
			// 
			resources->ApplyResources(this->allTxtLabel, L"allTxtLabel");
			this->allTxtLabel->ForeColor = System::Drawing::Color::Brown;
			this->allTxtLabel->Name = L"allTxtLabel";
			// 
			// btnSave
			// 
			this->btnSave->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btnSave->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSave->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnSave->FlatAppearance->BorderSize = 0;
			this->btnSave->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->btnSave->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			resources->ApplyResources(this->btnSave, L"btnSave");
			this->btnSave->ForeColor = System::Drawing::Color::Tan;
			this->btnSave->Name = L"btnSave";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &adminHome::btnSave_Click);
			// 
			// pnlOfData
			// 
			this->pnlOfData->Controls->Add(this->gradesText);
			this->pnlOfData->Controls->Add(this->inCoursesText);
			this->pnlOfData->Controls->Add(this->FcoursesText);
			this->pnlOfData->Controls->Add(this->label8);
			this->pnlOfData->Controls->Add(this->label6);
			this->pnlOfData->Controls->Add(this->label5);
			this->pnlOfData->Controls->Add(this->label7);
			this->pnlOfData->Controls->Add(this->label4);
			this->pnlOfData->Controls->Add(this->label3);
			this->pnlOfData->Controls->Add(this->label2);
			this->pnlOfData->Controls->Add(this->label1);
			this->pnlOfData->Controls->Add(this->gpaText);
			this->pnlOfData->Controls->Add(this->HoursText);
			this->pnlOfData->Controls->Add(this->yearText);
			this->pnlOfData->Controls->Add(this->passText);
			this->pnlOfData->Controls->Add(this->nameText);
			resources->ApplyResources(this->pnlOfData, L"pnlOfData");
			this->pnlOfData->Name = L"pnlOfData";
			// 
			// gradesText
			// 
			resources->ApplyResources(this->gradesText, L"gradesText");
			this->gradesText->Name = L"gradesText";
			// 
			// inCoursesText
			// 
			resources->ApplyResources(this->inCoursesText, L"inCoursesText");
			this->inCoursesText->Name = L"inCoursesText";
			// 
			// FcoursesText
			// 
			resources->ApplyResources(this->FcoursesText, L"FcoursesText");
			this->FcoursesText->Name = L"FcoursesText";
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label8->Name = L"label8";
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label6->Name = L"label6";
			this->label6->Click += gcnew System::EventHandler(this, &adminHome::label6_Click);
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label5->Name = L"label5";
			this->label5->Click += gcnew System::EventHandler(this, &adminHome::label5_Click);
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label7->Name = L"label7";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label4->Name = L"label4";
			this->label4->Click += gcnew System::EventHandler(this, &adminHome::label4_Click);
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label3->Name = L"label3";
			this->label3->Click += gcnew System::EventHandler(this, &adminHome::label3_Click);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label2->Name = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &adminHome::label2_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label1->Name = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &adminHome::label1_Click);
			// 
			// gpaText
			// 
			resources->ApplyResources(this->gpaText, L"gpaText");
			this->gpaText->ForeColor = System::Drawing::SystemColors::WindowText;
			this->gpaText->Name = L"gpaText";
			this->gpaText->TextChanged += gcnew System::EventHandler(this, &adminHome::txtStudentGPA_TextChanged);
			// 
			// HoursText
			// 
			resources->ApplyResources(this->HoursText, L"HoursText");
			this->HoursText->ForeColor = System::Drawing::SystemColors::WindowText;
			this->HoursText->Name = L"HoursText";
			this->HoursText->TextChanged += gcnew System::EventHandler(this, &adminHome::txtStudentMaxHours_TextChanged);
			// 
			// yearText
			// 
			resources->ApplyResources(this->yearText, L"yearText");
			this->yearText->ForeColor = System::Drawing::SystemColors::WindowText;
			this->yearText->Name = L"yearText";
			this->yearText->TextChanged += gcnew System::EventHandler(this, &adminHome::txtStudentAcademicYEar_TextChanged);
			// 
			// passText
			// 
			resources->ApplyResources(this->passText, L"passText");
			this->passText->ForeColor = System::Drawing::SystemColors::WindowText;
			this->passText->Name = L"passText";
			this->passText->TextChanged += gcnew System::EventHandler(this, &adminHome::txtStudentPassword_TextChanged);
			// 
			// nameText
			// 
			resources->ApplyResources(this->nameText, L"nameText");
			this->nameText->ForeColor = System::Drawing::SystemColors::WindowText;
			this->nameText->Name = L"nameText";
			this->nameText->TextChanged += gcnew System::EventHandler(this, &adminHome::txtStudentName_TextChanged);
			// 
			// pnlOfEditCourse
			// 
			this->pnlOfEditCourse->BackColor = System::Drawing::Color::Transparent;
			this->pnlOfEditCourse->Controls->Add(this->label26);
			this->pnlOfEditCourse->Controls->Add(this->button3);
			this->pnlOfEditCourse->Controls->Add(this->textBox3);
			this->pnlOfEditCourse->Controls->Add(this->choosestdbt);
			this->pnlOfEditCourse->Controls->Add(this->stdpanel);
			this->pnlOfEditCourse->Controls->Add(this->button1);
			this->pnlOfEditCourse->Controls->Add(this->panel8);
			this->pnlOfEditCourse->Controls->Add(this->label22);
			this->pnlOfEditCourse->Controls->Add(this->label21);
			this->pnlOfEditCourse->Controls->Add(this->label20);
			this->pnlOfEditCourse->Controls->Add(this->textBox2);
			resources->ApplyResources(this->pnlOfEditCourse, L"pnlOfEditCourse");
			this->pnlOfEditCourse->Name = L"pnlOfEditCourse";
			this->pnlOfEditCourse->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminHome::pnlOfEditCourse_Paint);
			// 
			// label26
			// 
			resources->ApplyResources(this->label26, L"label26");
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->label26->Name = L"label26";
			this->label26->UseCompatibleTextRendering = true;
			this->label26->Click += gcnew System::EventHandler(this, &adminHome::label26_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Tan;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->button3->FlatAppearance->BorderSize = 3;
			resources->ApplyResources(this->button3, L"button3");
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &adminHome::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Linen;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBox3, L"textBox3");
			this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox3->Name = L"textBox3";
			// 
			// choosestdbt
			// 
			this->choosestdbt->BackColor = System::Drawing::Color::Tan;
			this->choosestdbt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->choosestdbt->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->choosestdbt->FlatAppearance->BorderSize = 3;
			resources->ApplyResources(this->choosestdbt, L"choosestdbt");
			this->choosestdbt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->choosestdbt->Name = L"choosestdbt";
			this->choosestdbt->UseCompatibleTextRendering = true;
			this->choosestdbt->UseVisualStyleBackColor = false;
			this->choosestdbt->Click += gcnew System::EventHandler(this, &adminHome::choosestdbt_Click);
			// 
			// stdpanel
			// 
			resources->ApplyResources(this->stdpanel, L"stdpanel");
			this->stdpanel->Name = L"stdpanel";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Tan;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->button1->FlatAppearance->BorderSize = 3;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &adminHome::button1_Click);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Transparent;
			this->panel8->Controls->Add(this->label25);
			this->panel8->Controls->Add(this->label24);
			this->panel8->Controls->Add(this->label23);
			resources->ApplyResources(this->panel8, L"panel8");
			this->panel8->Name = L"panel8";
			// 
			// label25
			// 
			resources->ApplyResources(this->label25, L"label25");
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label25->Name = L"label25";
			this->label25->Click += gcnew System::EventHandler(this, &adminHome::label25_Click);
			// 
			// label24
			// 
			resources->ApplyResources(this->label24, L"label24");
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label24->Name = L"label24";
			// 
			// label23
			// 
			resources->ApplyResources(this->label23, L"label23");
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label23->Name = L"label23";
			// 
			// label22
			// 
			resources->ApplyResources(this->label22, L"label22");
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label22->Name = L"label22";
			// 
			// label21
			// 
			resources->ApplyResources(this->label21, L"label21");
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label21->Name = L"label21";
			// 
			// label20
			// 
			resources->ApplyResources(this->label20, L"label20");
			this->label20->ForeColor = System::Drawing::Color::Tan;
			this->label20->Name = L"label20";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Linen;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBox2, L"textBox2");
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox2->Name = L"textBox2";
			// 
			// StudentDatapanel
			// 
			this->StudentDatapanel->BackColor = System::Drawing::Color::White;
			this->StudentDatapanel->Controls->Add(this->panel15);
			this->StudentDatapanel->Controls->Add(this->label49);
			this->StudentDatapanel->Controls->Add(this->button8);
			this->StudentDatapanel->Controls->Add(this->label47);
			this->StudentDatapanel->Controls->Add(this->label46);
			this->StudentDatapanel->Controls->Add(this->label45);
			this->StudentDatapanel->Controls->Add(this->textBox9);
			resources->ApplyResources(this->StudentDatapanel, L"StudentDatapanel");
			this->StudentDatapanel->Name = L"StudentDatapanel";
			this->StudentDatapanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminHome::StudentDatapanel_Paint_1);
			// 
			// panel15
			// 
			resources->ApplyResources(this->panel15, L"panel15");
			this->panel15->Controls->Add(this->l1);
			this->panel15->Controls->Add(this->l2);
			this->panel15->Controls->Add(this->finishedflowlaypanel);
			this->panel15->Controls->Add(this->coursesinprogflowlayoutpanel);
			this->panel15->Controls->Add(this->label50);
			this->panel15->Controls->Add(this->label48);
			this->panel15->Name = L"panel15";
			// 
			// l1
			// 
			resources->ApplyResources(this->l1, L"l1");
			this->l1->BackColor = System::Drawing::Color::Transparent;
			this->l1->ForeColor = System::Drawing::Color::Brown;
			this->l1->Name = L"l1";
			this->l1->UseCompatibleTextRendering = true;
			// 
			// l2
			// 
			resources->ApplyResources(this->l2, L"l2");
			this->l2->BackColor = System::Drawing::Color::Transparent;
			this->l2->ForeColor = System::Drawing::Color::Brown;
			this->l2->Name = L"l2";
			this->l2->UseCompatibleTextRendering = true;
			// 
			// finishedflowlaypanel
			// 
			resources->ApplyResources(this->finishedflowlaypanel, L"finishedflowlaypanel");
			this->finishedflowlaypanel->Name = L"finishedflowlaypanel";
			// 
			// coursesinprogflowlayoutpanel
			// 
			resources->ApplyResources(this->coursesinprogflowlayoutpanel, L"coursesinprogflowlayoutpanel");
			this->coursesinprogflowlayoutpanel->Name = L"coursesinprogflowlayoutpanel";
			this->coursesinprogflowlayoutpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminHome::coursesinprogflowlayoutpanel_Paint);
			// 
			// label50
			// 
			resources->ApplyResources(this->label50, L"label50");
			this->label50->BackColor = System::Drawing::Color::Transparent;
			this->label50->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->label50->Name = L"label50";
			this->label50->UseCompatibleTextRendering = true;
			// 
			// label48
			// 
			resources->ApplyResources(this->label48, L"label48");
			this->label48->BackColor = System::Drawing::Color::Transparent;
			this->label48->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->label48->Name = L"label48";
			this->label48->UseCompatibleTextRendering = true;
			// 
			// label49
			// 
			resources->ApplyResources(this->label49, L"label49");
			this->label49->BackColor = System::Drawing::Color::Transparent;
			this->label49->ForeColor = System::Drawing::Color::Tan;
			this->label49->Name = L"label49";
			this->label49->UseCompatibleTextRendering = true;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Brown;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::Tan;
			this->button8->FlatAppearance->BorderSize = 5;
			resources->ApplyResources(this->button8, L"button8");
			this->button8->ForeColor = System::Drawing::Color::Tan;
			this->button8->Name = L"button8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &adminHome::button8_Click);
			// 
			// label47
			// 
			resources->ApplyResources(this->label47, L"label47");
			this->label47->BackColor = System::Drawing::Color::Transparent;
			this->label47->ForeColor = System::Drawing::Color::Brown;
			this->label47->Name = L"label47";
			this->label47->UseCompatibleTextRendering = true;
			this->label47->Click += gcnew System::EventHandler(this, &adminHome::label47_Click);
			// 
			// label46
			// 
			resources->ApplyResources(this->label46, L"label46");
			this->label46->BackColor = System::Drawing::Color::Transparent;
			this->label46->ForeColor = System::Drawing::Color::Brown;
			this->label46->Name = L"label46";
			this->label46->UseCompatibleTextRendering = true;
			// 
			// label45
			// 
			resources->ApplyResources(this->label45, L"label45");
			this->label45->BackColor = System::Drawing::Color::Transparent;
			this->label45->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->label45->Name = L"label45";
			this->label45->UseCompatibleTextRendering = true;
			this->label45->Click += gcnew System::EventHandler(this, &adminHome::label45_Click);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::Linen;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBox9, L"textBox9");
			this->textBox9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox9->Name = L"textBox9";
			// 
			// pnlOfStudentOfCourse
			// 
			this->pnlOfStudentOfCourse->BackColor = System::Drawing::Color::Transparent;
			this->pnlOfStudentOfCourse->Controls->Add(this->label19);
			this->pnlOfStudentOfCourse->Controls->Add(this->label18);
			this->pnlOfStudentOfCourse->Controls->Add(this->viewbt);
			this->pnlOfStudentOfCourse->Controls->Add(this->studentnamepanel);
			this->pnlOfStudentOfCourse->Controls->Add(this->label14);
			this->pnlOfStudentOfCourse->Controls->Add(this->panel6);
			this->pnlOfStudentOfCourse->Controls->Add(this->label10);
			this->pnlOfStudentOfCourse->Controls->Add(this->textBox1);
			resources->ApplyResources(this->pnlOfStudentOfCourse, L"pnlOfStudentOfCourse");
			this->pnlOfStudentOfCourse->Name = L"pnlOfStudentOfCourse";
			this->pnlOfStudentOfCourse->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminHome::pnlOfStudentOfCourse_Paint);
			// 
			// label19
			// 
			resources->ApplyResources(this->label19, L"label19");
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->ForeColor = System::Drawing::Color::Tan;
			this->label19->Name = L"label19";
			// 
			// label18
			// 
			resources->ApplyResources(this->label18, L"label18");
			this->label18->BackColor = System::Drawing::Color::Tan;
			this->label18->Name = L"label18";
			// 
			// viewbt
			// 
			this->viewbt->BackColor = System::Drawing::Color::Tan;
			this->viewbt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->viewbt->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->viewbt->FlatAppearance->BorderSize = 3;
			resources->ApplyResources(this->viewbt, L"viewbt");
			this->viewbt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->viewbt->Name = L"viewbt";
			this->viewbt->UseVisualStyleBackColor = false;
			this->viewbt->Click += gcnew System::EventHandler(this, &adminHome::viewbt_Click);
			// 
			// studentnamepanel
			// 
			resources->ApplyResources(this->studentnamepanel, L"studentnamepanel");
			this->studentnamepanel->BackColor = System::Drawing::Color::Transparent;
			this->studentnamepanel->Name = L"studentnamepanel";
			this->studentnamepanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminHome::studentnamepanel_Paint);
			// 
			// label14
			// 
			resources->ApplyResources(this->label14, L"label14");
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label14->Name = L"label14";
			this->label14->Click += gcnew System::EventHandler(this, &adminHome::label14_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Transparent;
			this->panel6->Controls->Add(this->label12);
			this->panel6->Controls->Add(this->label13);
			this->panel6->Controls->Add(this->label9);
			resources->ApplyResources(this->panel6, L"panel6");
			this->panel6->Name = L"panel6";
			// 
			// label12
			// 
			resources->ApplyResources(this->label12, L"label12");
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label12->Name = L"label12";
			// 
			// label13
			// 
			resources->ApplyResources(this->label13, L"label13");
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label13->Name = L"label13";
			this->label13->Click += gcnew System::EventHandler(this, &adminHome::label13_Click);
			// 
			// label9
			// 
			resources->ApplyResources(this->label9, L"label9");
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label9->Name = L"label9";
			// 
			// label10
			// 
			resources->ApplyResources(this->label10, L"label10");
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label10->Name = L"label10";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Linen;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox1->Name = L"textBox1";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &adminHome::textBox1_TextChanged);
			// 
			// adminHome
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Controls->Add(this->sideBar);
			this->Controls->Add(this->pnlOfPanels);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"adminHome";
			this->Load += gcnew System::EventHandler(this, &adminHome::adminHome_Load);
			this->sideBar->ResumeLayout(false);
			this->sideBar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->pnlOfbtns->ResumeLayout(false);
			this->pnlOfbtns->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->pnlOfPanels->ResumeLayout(false);
			this->pnlEditStudent->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			this->pnlCoursedataedit->ResumeLayout(false);
			this->pnlCoursedataedit->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->pnlOfAddCourse->ResumeLayout(false);
			this->addcoursepanel->ResumeLayout(false);
			this->addcoursepanel->PerformLayout();
			this->pnlOfAddStudent->ResumeLayout(false);
			this->pnlOfAddStudent->PerformLayout();
			this->pnlOfData->ResumeLayout(false);
			this->pnlOfData->PerformLayout();
			this->pnlOfEditCourse->ResumeLayout(false);
			this->pnlOfEditCourse->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->StudentDatapanel->ResumeLayout(false);
			this->StudentDatapanel->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->pnlOfStudentOfCourse->ResumeLayout(false);
			this->pnlOfStudentOfCourse->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void adminHome_Load(System::Object^ sender, System::EventArgs^ e) {
	}

		   bool sideBarExpand ;
private: System::Void slideBarTimer_Tick(System::Object^ sender, System::EventArgs^ e) {

	if (sideBarExpand) {
		if (sideBar->Width == sideBar->MinimumSize.Width) {
			sideBarExpand = false;
			slideBarTimer->Stop();
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
			slideBarTimer->Stop();
		}
		else
		{
			sideBar->Width += 20;
		}

	}
}
private: System::Void btnAddStudent_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlOfAddCourse->Visible = false;
	pnlOfEditCourse->Visible = false;
	pnlEditStudent->Visible = false;
	pnlOfStudentOfCourse->Visible = false;
	pnlOfAddStudent->Visible = true;
	pnlCoursedataedit->Visible = false;
	StudentDatapanel->Visible = false;

	addCoursepp->BackColor = Color::Tan;
	addStudentpp->BackColor = Color::Brown;
	stdofCoursepp->BackColor = Color::Tan;
	courseDatapp->BackColor = Color::Tan;
	editCoursepp->BackColor = Color::Tan;
	studentDatapp->BackColor = Color::Tan;
	sideBarExpand = true;
	slideBarTimer->Start();
}
private: System::Void btnAddCourse_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlOfEditCourse->Visible = false;
	pnlEditStudent->Visible = false;
	pnlOfStudentOfCourse->Visible = false;
	pnlOfAddCourse->Visible = true;
	pnlOfAddStudent->Visible = false;
	pnlCoursedataedit->Visible = false;

	StudentDatapanel->Visible = false;
	addCoursepp->BackColor = Color::Brown;
	addStudentpp->BackColor = Color::Tan;
	stdofCoursepp->BackColor = Color::Tan;
	courseDatapp->BackColor = Color::Tan;
	editCoursepp->BackColor = Color::Tan;
	studentDatapp->BackColor = Color::Tan;
	sideBarExpand = true;
	slideBarTimer->Start();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	l1->Visible = false;
	l2->Visible = false;
	pnlOfAddCourse->Visible = true;
	pnlOfEditCourse->Visible = false;
	pnlEditStudent->Visible = false;
	pnlOfStudentOfCourse->Visible = false;
	pnlOfAddStudent->Visible = false;
	pnlCoursedataedit->Visible = false;

	StudentDatapanel->Visible = false;
	addCoursepp->BackColor = Color::Brown;
	addStudentpp->BackColor = Color::Tan;
	stdofCoursepp->BackColor = Color::Tan;
	courseDatapp->BackColor = Color::Tan;
	editCoursepp->BackColor = Color::Tan;
	studentDatapp->BackColor = Color::Tan;
	sideBarExpand = true;
	slideBarTimer->Start();
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	l1->Visible = false;
	l2->Visible = false;
	pnlOfAddCourse->Visible = false;
	pnlOfEditCourse->Visible = false;
	pnlEditStudent->Visible = false;
	pnlOfStudentOfCourse->Visible = false;
	pnlOfAddStudent->Visible = true;
	pnlCoursedataedit->Visible = false;

	StudentDatapanel->Visible = false;

	addCoursepp->BackColor = Color::Tan;
	addStudentpp->BackColor = Color::Brown;
	   
	stdofCoursepp->BackColor = Color::Tan;
	courseDatapp->BackColor = Color::Tan;
	editCoursepp->BackColor = Color::Tan;
	studentDatapp->BackColor = Color::Tan;
	sideBarExpand = true;
	slideBarTimer->Start();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	l1->Visible = false;
	l2->Visible = false;
	pnlOfAddCourse->Visible = false;
	pnlOfEditCourse->Visible = false;
	pnlEditStudent->Visible = false;
	pnlOfStudentOfCourse->Visible = false;
	pnlOfAddStudent->Visible = true;
	pnlCoursedataedit->Visible = false;
	StudentDatapanel->Visible = false;

	addCoursepp->BackColor = Color::Tan;
	addStudentpp->BackColor = Color::Tan;
	
	stdofCoursepp->BackColor = Color::Tan;
	courseDatapp->BackColor = Color::Brown;
	editCoursepp->BackColor = Color::Tan;
	studentDatapp->BackColor = Color::Tan;
	sideBarExpand = true;
	slideBarTimer->Start();
}
private: System::Void StudentData_Click(System::Object^ sender, System::EventArgs^ e) {
	l1->Visible = false;
	l2->Visible = false;
	pnlOfAddCourse->Visible = false;
	pnlOfEditCourse->Visible = false;
	pnlEditStudent->Visible = true;
	pnlOfStudentOfCourse->Visible = false;
	pnlOfAddStudent->Visible = false;
	pnlCoursedataedit->Visible = false;
	StudentDatapanel->Visible = false;


	addCoursepp->BackColor = Color::Tan;
	addStudentpp->BackColor = Color::Tan;
	   
	stdofCoursepp->BackColor = Color::Tan;
	courseDatapp->BackColor = Color::Tan;
	editCoursepp->BackColor = Color::Tan;
	studentDatapp->BackColor = Color::Tan;
	sideBarExpand = true;
	slideBarTimer->Start();
}
private: System::Void StudentsOfCourse_Click(System::Object^ sender, System::EventArgs^ e) {
	l1->Visible = false;
	l2->Visible = false;
	pnlOfAddCourse->Visible = false;
	pnlOfEditCourse->Visible = false;
	pnlEditStudent->Visible = false;
	pnlOfStudentOfCourse->Visible = true;
	pnlOfAddStudent->Visible = false;
	pnlCoursedataedit->Visible = false;
	StudentDatapanel->Visible = false;
	
	addCoursepp->BackColor = Color::Tan;
	addStudentpp->BackColor = Color::Tan;
	   
	stdofCoursepp->BackColor = Color::Brown;
	courseDatapp->BackColor = Color::Tan;
	editCoursepp->BackColor = Color::Tan;
	studentDatapp->BackColor = Color::Tan;
	sideBarExpand = true;
	slideBarTimer->Start();
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	l1->Visible = false;
	l2->Visible = false;
	pnlOfAddCourse->Visible = false;
	pnlOfEditCourse->Visible = false;
	pnlEditStudent->Visible = false;
	pnlOfStudentOfCourse->Visible = true;
	pnlOfAddStudent->Visible = false;
	pnlCoursedataedit->Visible = false;

	label13->Visible = false;
	StudentDatapanel->Visible = false;
	addCoursepp->BackColor = Color::Tan;
	addStudentpp->BackColor = Color::Tan;
	   
	stdofCoursepp->BackColor = Color::Brown;
	courseDatapp->BackColor = Color::Tan;
	editCoursepp->BackColor = Color::Tan;
	studentDatapp->BackColor = Color::Tan;
	sideBarExpand = true;
	slideBarTimer->Start();
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	l1->Visible = false;
	l2->Visible = false;
	pnlOfAddCourse->Visible = false;
	pnlOfEditCourse->Visible = true;

	choosestdbt->Visible = false;
	pnlEditStudent->Visible = false;
	pnlOfStudentOfCourse->Visible = false;
	pnlOfAddStudent->Visible = false;
	pnlCoursedataedit->Visible = false;
	label24->Visible = false;
	StudentDatapanel->Visible = false;
	StudentDatapanel->Visible = false;
	addCoursepp->BackColor = Color::Tan;
	addStudentpp->BackColor = Color::Tan;
	   
	stdofCoursepp->BackColor = Color::Tan;
	courseDatapp->BackColor = Color::Brown;
	editCoursepp->BackColor = Color::Tan;
	studentDatapp->BackColor = Color::Tan;
	sideBarExpand = true;
	slideBarTimer->Start();
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	l1->Visible = false;
	l2->Visible = false;
	pnlOfAddCourse->Visible = false;
	pnlOfEditCourse->Visible = false;
	pnlEditStudent->Visible = true;
	pnlOfStudentOfCourse->Visible = false;
	pnlOfAddStudent->Visible = false;
	pnlCoursedataedit->Visible = false;
	StudentDatapanel->Visible = false;
	addCoursepp->BackColor = Color::Tan;
	addStudentpp->BackColor = Color::Tan;
	   
	stdofCoursepp->BackColor = Color::Tan;
	courseDatapp->BackColor = Color::Tan;
	editCoursepp->BackColor = Color::Tan;
	studentDatapp->BackColor = Color::Tan;
	sideBarExpand = true;
	slideBarTimer->Start();
}
private: System::Void pnlOfStudentOfCourse_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void clFinishedCourses_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void clCoursesInProgress_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtStudentGPA_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtStudentMaxHours_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtStudentAcademicYEar_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtStudentPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtStudentName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
	// All textboxes are filled, don't show the label massege
	if (nameText->Text->Length > 0 && passText->Text->Length > 0 && yearText->Text->Length > 0
		&& HoursText->Text->Length > 0 && gpaText->Text->Length > 0 && inCoursesText->Text->Length > 0)
	{
		allTxtLabel->Visible = false;
	}
	// At least one textbox is empty, show error message
	else
	{
		allTxtLabel->Visible = true;
		return;
	}

	// If the textbox is empty, set its text to "0"
	if (inCoursesText->Text->Length == 0)
	{
		inCoursesText->Text = "0";
	}
	if (gradesText->Text->Length == 0)
	{
		gradesText->Text = "0";
	}

	// retrieve the string values from the textbox and convert it to int

	int AcademicYearInt;
	int Hours;
	bool isHoursNum = int::TryParse(HoursText->Text, Hours);
	bool isAcademicYearNum = int::TryParse(yearText->Text, AcademicYearInt);

	if (isHoursNum == false || Hours > 20 || Hours < 0)
	{
		hoursLabel->Visible = true;
		return;
	}
	else
	{
		hoursLabel->Visible = false;
	}
	if (isAcademicYearNum == false || AcademicYearInt > 4 || AcademicYearInt < 1)
	{
		yearLabel->Visible = true;
		return;
	}
	else
	{
		yearLabel->Visible = false;
	}

	// convert the string to float
	float GPAfloat;
	bool isGpANum = float::TryParse(gpaText->Text, GPAfloat);
	if (isGpANum == false || GPAfloat > 4 || GPAfloat < 0)
	{
		gpaLabel->Visible = true;
		return;
	}
	else
	{
		gpaLabel->Visible = false;
	}


	//convert the string values to list

	String^ finishedString = FcoursesText->Text;
	cli::array<String^>^ finishedArray = finishedString->Split(',');
	List<String^>^ finishedList = gcnew List<String^>();
	for each (String ^ str in finishedArray) {
		finishedList->Add(str);
	}

	String^ InprogressString = inCoursesText->Text;
	cli::array<String^>^ InprogressArray = InprogressString->Split(',');
	List<String^>^ InprogressList = gcnew List<String^>();
	for each (String ^ str in InprogressArray) {
		InprogressList->Add(str);
	}

	String^ CoursesGrades = gradesText->Text;
	cli::array<String^>^ CoursesGradesArray = CoursesGrades->Split(',');
	//convert the string data from the text box to be float 
	cli::array<float>^ CoursesGradesFloatArray = gcnew cli::array<float>(CoursesGradesArray->Length);
	List<float>^ CoursesGradesList = gcnew List<float>();
	//if grades are not the same size as the finished courses
	if (finishedList->Count != CoursesGradesArray->Length)
	{
		gradesSizeLabel->Visible = true;
		return;
	}
	else
		gradesSizeLabel->Visible = false;
	for (int i = 0; i < CoursesGradesArray->Length; i++)
	{
		float grade;
		if (float::TryParse(CoursesGradesArray[i], grade) || (grade <= 4 && grade >= 0))
		{

			//CoursesGradesFloatArray[i] = grade;
			if (grade > 4 || float::TryParse(CoursesGradesArray[i], grade) == false)
			{
				GradesLabel->Visible = true;
				break;
			}
			CoursesGradesList->Add(grade);
		}
		else
		{
			if (gradesText->Text->Length == 0 || (grade > 4 || grade < 0))
			{
				GradesLabel->Visible = true;
				break;
			}
			else
			{

			}
		}
		if (gradesText->Text->Length == 0 || (grade > 4 || grade < 0))
		{
			GradesLabel->Visible = true;


		}
		else
		{
			// handle the case where the input is not a valid float
			GradesLabel->Visible = false;
			//break;
		}
	}
	if (GradesLabel->Visible)
		return;
	String^ Sname = nameText->Text;
	String^ Spass = passText->Text;
	Admin::createStudent(Sname, Spass, AcademicYearInt, Hours, GPAfloat, finishedList, InprogressList, CoursesGradesList);
	Student::saveStudentDataToFile();
	sucssLabel->Visible = true;


}
private: System::Void pnlOfAddStudent_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pnlOfAddCourse_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void addCourseBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	// All textboxes are filled, don't show the label massege
	if (nTxt->Text->Length > 0 &&
		htxt->Text->Length > 0 &&
		mtxt->Text->Length > 0 &&
		itxt->Text->Length > 0 &&
		ptxt->Text->Length > 0 &&
		ctxt->Text->Length > 0)
	{
		label11->Visible = false;
	}
	// At least one textbox is empty, show error message
	else
	{

		label11->Visible = true;
		return;
	}
	int hours;
	int maxStudents;

	bool isHoursValid = int::TryParse(htxt->Text, hours);
	bool isMaxStudentsValid = int::TryParse(mtxt->Text, maxStudents);
	if (isHoursValid == false &&( hours>4 || hours<0))
	{
		hlabel->Visible = true;
		//label11->Visible = false;

		return;
	}
	else
	{
		hlabel->Visible = false;

	}
	if (isMaxStudentsValid == false && (maxStudents>500 || maxStudents<0))
	{
		mlabel->Visible = true;
		return;
	}
	else
	{
		mlabel->Visible = false;
	}

	// get the course information from the text boxes
	String^ courseName = nTxt->Text;
	String^ instructor = itxt->Text;
	String^ code = ctxt->Text;
	String^ prereqStr = ptxt->Text;
	cli::array<String^>^ prerequisiteArray = prereqStr->Split(',');
	List<String^>^ prerequisitesList = gcnew List<String^>();
	for each (String ^ str in prerequisiteArray) {
		prerequisitesList->Add(str);
	}

	// Create a new instance of the Course class
	Course^ newCourse = gcnew Course();
	// Set the properties using the setters
	newCourse->setName(courseName);
	newCourse->setHours(hours);
	newCourse->setMaxNumberOfStudents(maxStudents);
	newCourse->setInstructor(instructor);
	Course::preRequires[courseName] = prerequisitesList;
	newCourse->setCode(code);

	if (Rradio->Checked == true)
	{

		newCourse->setIsRequirement(true);

	}
	else if (Eradio->Checked == true && Rradio->Checked == false)
	{
		newCourse->setIsRequirement(false);
	}
	bool canAdd = true;
	for each (auto i in Course::allCourses)
	{
		if (i->getName() == newCourse->getName())
		{
			canAdd = false;
			label33->Visible = true;
			break;
		}
	}
	if (canAdd)
	{

		Admin::addCourse(newCourse);
		Course::allCourses->Add(newCourse);
		Course::eachCourseHours->Add(courseName, hours);
		Course::saveCourseDataToFile();
		Course::saveCourseContentToFile();
		Course::saveCourseHoursToFile();
		label33->Visible = false;
		slabel->Visible = true;
	}



}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	   bool found = false;

private: System::Void viewbt_Click(System::Object^ sender, System::EventArgs^ e) {
	getstudentinAcourse(textBox1->Text,studentnamepanel,label10,label14,label9,label13,label12,panel6);
}
public: static List<studentname^>^ temps = gcnew List<studentname^>;

public: Course^ searchforCourse(String^ courseName)
{
	for each (auto i in Course::allCourses)
	{
		if (i->getName() == courseName)
			
			return i;
	}

	return nullptr;
}
	  void getstudentinAcourse(String^ courseName, FlowLayoutPanel^ yourFlow, Label^ entercourse, Label^ notfoundlab, Label^ tcc, Label^ num, Label^ st, Panel^ holder)
	  {
		  Course^ searchedcourse = gcnew Course;
		  found = false;
		  searchedcourse = searchforCourse(courseName);
		  if (searchedcourse == nullptr)
		  {
			  notfoundlab->Visible = true;
			  tcc->Visible = false;
			  num->Visible = false;
			  st->Visible = false;
			  holder->Visible = false;

			  choosestdbt->Visible = false;
			  textBox3->Visible = false;
			  label26->Visible = false;
			  button3->Visible = false;
			  choosestdbt->Visible = false;
			  textBox3->Text = "";
			  yourFlow->Controls->Clear();
			  studentname::allbtns->Clear();
			  yourFlow->Visible = false;
			  temps->Clear();
			  return;
		  }
		  else {
			  notfoundlab->Visible = false;
			  tcc->Visible = false;
			  num->Visible = false;
			  st->Visible = false;
			  holder->Visible = false;

			  choosestdbt->Visible = false;
			  textBox3->Visible = false;
			  label26->Visible = false;
			  button3->Visible = false;
			  choosestdbt->Visible = false;
			  textBox3->Text = "";
			  yourFlow->Controls->Clear();
			  studentname::allbtns->Clear();
			  yourFlow->Visible = false;
			  temps->Clear();
			  searchedcourse->setAllStudentsInCourse();
			  yourFlow->Controls->Clear();
			  temps->Clear();
			  for each (auto i in  searchedcourse->getAllStudentsInCourse())
			  {
				  for each (auto student in Student::allStudents)
				  {
					  studentname^ temp = gcnew studentname;
					  if (student->getID() == i) {
						  found = true;
						  temp->setStudentname(student->getName());
						  yourFlow->Controls->Add(temp);
						  temps->Add(temp);


					  }

				  }

			  }

			  if (found)
			  {
				  num->Text = Convert::ToString(temps->Count);
				  holder->Visible = true;

				  yourFlow->Visible = true;
				  tcc->Visible = true;
				  num->Visible = true;
				  st->Visible = true;

				  yourFlow->Height = 60 * temps->Count;
			  }
			  else
			  {
				  num->Text = "no";
				  holder->Visible = true;
			  }
		  }

	  }
	  courselistitem^ getcourselistitem(String^ courseName)
	  {
		  Course^ course = gcnew Course;
		  course = searchforCourse(courseName);
		  if (course != nullptr)
		  {
			  courselistitem^ tempp = gcnew courselistitem;
			  tempp->setName(course->getName());
			  tempp->setCode(course->getCode());
			  tempp->setInstructor(course->getInstructor());
			  tempp->setIsRequirement(course->getIsRequirement());
			  tempp->setHours(course->getHours());
			  tempp->setMaxNumberOfStudents(course->getMaxNumberOfStudents());
			  
			  return tempp;
			 
		  }
		  else {
			  return nullptr;
		  }
		  
	 }
	  void getcourselistitemInpanel(FlowLayoutPanel^ fp, String^ coursename)
	  {
		  fp->Controls->Clear();
		  if (getcourselistitem(coursename)) {

		  fp->Controls->Add(getcourselistitem(coursename));
		
		  }
		 
	  }
	  void editcourse(Course^ course,String^ temp )
	  {
		  if (temp != "no button clicked")
		  {
			  if (temp == "instructor")
			  {

				  bool valid = true;
				  for each (auto i  in textBox8->Text)
				  {
					  if (!((i >= 'a' && i <= 'z')|| (i >= 'A' && i <= 'Z')))
					  {
						  valid = false;
						  break;
					  }
				  }
				  if (!valid)
				  {
				  label43->Visible = true;
				  panel13->Visible = false;
				  label44->Visible = true;
				  textBox8->Visible = false;
				  button6->Visible = false;
				  }
				  else {

					  label43->Visible = false;
					  label42->Visible = true;
					  panel13->Visible = false;
					  textBox8->Visible = false;
					  button6->Visible = false;
					  label44->Visible = false;
				  course->setInstructor(textBox8->Text);
				  }
			  }
			  else if (temp == "requirment")
			  {
				  if (textBox8->Text == "required" || textBox8->Text == "Required")
				  {
					  label42->Visible = true;
					  panel13->Visible = false;
				  course->setIsRequirement(true);
				  }
				  else if(textBox8->Text == "elective" || textBox8->Text == "Elective"){

					  label42->Visible = true;
					  panel13->Visible = false;
					  course->setIsRequirement(false);
				  }
				  else {
					  label43->Visible = true;
					  label41->Visible = true;
				  }
			  }
			  else if (temp == "max students")
			  {
				  bool valid = true;
				  for each (auto i  in textBox8->Text)
				  {
					  if (((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')))
					  {
						  valid = false;

						  label43->Visible = true;
						  label40->Visible = true;
						  break;
					  }
				  }
				  if (valid)
				  {
					  if (course->getMaxNumberOfStudents() < Convert::ToInt32(textBox8->Text))
					  {
						  label42->Visible = true;

						  panel13->Visible = false;
						  course->setMaxNumberOfStudents(Convert::ToInt32(textBox8->Text));

					  }
					  else {
						  label43->Visible = true;
						  label40->Visible = true;

					  }
				  }
				 
			  }

			  label38->Visible = false;
			  panel13->Visible = true;
		  }
	
	 }
	  String^ getclickedbteditcourse()
	  {

		  label44->Visible = false;
		  label41->Visible = false;
		  label40->Visible = false;
		  label43->Visible = false;

		  if (instbt->BackColor == Color::Brown)
		  {
			  label38->Visible = false;
			  panel13->Visible = true;
			  textBox8->Visible = true;
			  button6->Visible = true;
			  return "instructor";

		  }
		  else  if (reqbt->BackColor == Color::Brown)
		  {
			  label38->Visible = false;
			  panel13->Visible = true;
			  textBox8->Visible = true;
			  button6->Visible = true;
			  return "requirment";

		  }
		  else if (maxstd->BackColor == Color::Brown)
		  {
			  label38->Visible = false;
			  panel13->Visible = true;
			  textBox8->Visible = true;
			  button6->Visible = true;

			  return "max students";

		  }

		  label38->Visible = true;
		  panel13->Visible = false;
		  textBox8->Visible = false;
		  button6->Visible = false;
		  return "no button clicked";
	  }
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void studentnamepanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void lbl7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void sideBar_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pnlOfEditCourse_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	getstudentinAcourse(textBox2->Text, stdpanel,label21,label22, label23, label24, label25,panel8);
	if (found)
	{
		choosestdbt->Visible = true;
		studentname::allbtns = temps;
	}
}
private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   studentname^ choosedstd = gcnew studentname;
private: System::Void choosestdbt_Click(System::Object^ sender, System::EventArgs^ e) {
	for each (auto bt in studentname::allbtns)
	{
		if (bt->getBt()->BackColor == Color::Brown)
		{
			textBox3->Visible = true;
			label26->Visible = true;
			button3->Visible = true;
			choosedstd = bt;
		}
	}

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	Admin::changeCourseStatus(choosedstd->getStudentname(), textBox2->Text, Convert::ToDouble(textBox3->Text));
	getstudentinAcourse(textBox2->Text, stdpanel, label21, label22, label23, label24, label25, panel8);
    studentname::allbtns = temps;
}
	   
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	slideBarTimer->Start();
}
private: System::Void htxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void hoursLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pnlEditStudent_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	label28->Text = admin->getNameAdmin();
}
private: System::Void btnLogOut_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	addCoursepp->BackColor = Color::Tan;
	addStudentpp->BackColor = Color::Tan;
	stdofCoursepp->BackColor = Color::Tan;
	courseDatapp->BackColor = Color::Tan;
	editCoursepp->BackColor = Color::Tan;
	studentDatapp->BackColor = Color::Tan;
}
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	addCoursepp->BackColor = Color::Tan;
	addStudentpp->BackColor = Color::Tan;
	stdofCoursepp->BackColor = Color::Tan;
	courseDatapp->BackColor = Color::Tan;
	editCoursepp->BackColor = Color::Tan;
	studentDatapp->BackColor = Color::Tan;
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button2_Click_2(System::Object^ sender, System::EventArgs^ e) {
	getcourselistitemInpanel(flowLayoutPanel1, textBox7->Text);
	if (getcourselistitem(textBox7->Text)) {
		panel12->Visible = true;
		label36->Visible = false;
	}
	else {
		label36->Visible = true;
		panel12->Visible = false;
	}

}
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlCoursedataedit->Visible = true;
	pnlOfAddCourse->Visible = false;
	pnlOfEditCourse->Visible = false;
	pnlEditStudent->Visible = false;
	pnlOfStudentOfCourse->Visible = false;
	pnlOfAddStudent->Visible = false;
	StudentDatapanel->Visible = false;
	addCoursepp->BackColor = Color::Tan;
	addStudentpp->BackColor = Color::Tan;
	   
	stdofCoursepp->BackColor = Color::Tan;
	courseDatapp->BackColor = Color::Tan;
	editCoursepp->BackColor = Color::Brown;
	studentDatapp->BackColor = Color::Tan;

	sideBarExpand = true;
	slideBarTimer->Start();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlCoursedataedit->Visible = true;
	pnlOfAddCourse->Visible = false;
	pnlOfEditCourse->Visible = false;
	pnlEditStudent->Visible = false;
	pnlOfStudentOfCourse->Visible = false;
	pnlOfAddStudent->Visible = false;
	StudentDatapanel->Visible = false;

	addCoursepp->BackColor = Color::Tan;
	addStudentpp->BackColor = Color::Tan;
	   
	stdofCoursepp->BackColor = Color::Tan;
	courseDatapp->BackColor = Color::Tan;
	editCoursepp->BackColor = Color::Brown;
	studentDatapp->BackColor = Color::Tan;

	sideBarExpand = true;
	slideBarTimer->Start();
}
private: System::Void lbl37_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pnlCoursedataedit_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel12_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void instbt_Click(System::Object^ sender, System::EventArgs^ e) {
	if (instbt->BackColor == Color::Tan)
	{
		instbt->BackColor = Color::Brown;
		reqbt->BackColor = Color::Tan;
		maxstd->BackColor = Color::Tan;

	}
	else {
		instbt->BackColor = Color::Tan;
	}
}
private: System::Void reqbt_Click(System::Object^ sender, System::EventArgs^ e) {
	if (reqbt->BackColor == Color::Tan)
	{
		instbt->BackColor = Color::Tan;
		reqbt->BackColor = Color::Brown;
		maxstd->BackColor = Color::Tan;

	}
	else {
		reqbt->BackColor = Color::Tan;
	}
}
private: System::Void maxstd_Click(System::Object^ sender, System::EventArgs^ e) {
	if (maxstd->BackColor == Color::Tan)
	{
		instbt->BackColor = Color::Tan;
		reqbt->BackColor = Color::Tan;
		maxstd->BackColor = Color::Brown;
	}
	else {
		maxstd->BackColor = Color::Tan;
	}
}
private: System::Void instbt_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

}
	   String^ editchoice = "no button clicked";

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	editchoice = getclickedbteditcourse();
	label42->Visible = false;

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	button6->Visible = false;
	textBox8->Visible = false;
	panel13->Visible = false;
	editcourse(searchforCourse(textBox7->Text), editchoice);
	Course::saveCourseContentToFile();
	Course::saveCourseDataToFile();
	Course::saveCourseHoursToFile();
}bool StudentDataPan = false;

private: System::Void pictureBox11_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlOfAddCourse->Visible = false;
	pnlOfEditCourse->Visible = false;
	pnlEditStudent->Visible = false;
	pnlOfStudentOfCourse->Visible = false;
	pnlOfAddStudent->Visible = false;
	pnlCoursedataedit->Visible = false;
	StudentDatapanel->Visible = true;
	addCoursepp->BackColor = Color::Tan;
	addStudentpp->BackColor = Color::Tan;
	   
	stdofCoursepp->BackColor = Color::Tan;
	courseDatapp->BackColor = Color::Tan;
	editCoursepp->BackColor = Color::Tan;
	studentDatapp->BackColor = Color::Brown;
}
private: System::Void StudentDataPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void StudentDatapanel_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	addCoursepp->BackColor = Color::Tan;
	addStudentpp->BackColor = Color::Tan;
	   
	stdofCoursepp->BackColor = Color::Tan;
	courseDatapp->BackColor = Color::Tan;
	editCoursepp->BackColor = Color::Tan;
	studentDatapp->BackColor = Color::Brown;
	pnlOfAddCourse->Visible = false;
	pnlOfEditCourse->Visible = false;
	pnlEditStudent->Visible = false;
	pnlOfStudentOfCourse->Visible = false;
	pnlOfAddStudent->Visible = false;
	pnlCoursedataedit->Visible = false;
	StudentDatapanel->Visible = true;

	sideBarExpand = true;
	slideBarTimer->Start();
}
	   Student^ searchStudent(String^ stdname)
	   {
		   for each (auto i in Student::allStudents)
		   {
			   if (i->getName() == stdname)
				   return i;
		   }
		   return nullptr;
	   }
	   void viewStudentData(FlowLayoutPanel^ finprog, FlowLayoutPanel^ ffinished )
	   {
		   Student^ Std = gcnew Student;
		   Std=searchStudent(textBox9->Text);
		   finprog->Controls->Clear();
		   ffinished->Controls->Clear();
		   finprog->Height = 0;
		   ffinished->Height = 0;
		   for each (auto var in Std->getCoursesINProgress())
		   {
			   courseButton^ temp = gcnew courseButton;
			   temp->setCourseName(var);
			   finprog->Controls->Add(temp);
		   }
		   finprog->Height = Std->getCoursesINProgress()->Count*60;
		   for each (auto var in Std->getFinishedCourses())
		   {

			   courseButton^ temp = gcnew courseButton;
			   temp->setCourseName(var);
			   ffinished->Controls->Add(temp);
		   }
		   l1->Text = Std->getName();
		   l2->Text = Std->getName();
		   l1->Visible = true;
		   l2->Visible = true;
		   ffinished->Height = Std->getFinishedCourses()->Count * 60;
	   }
private: System::Void label45_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (searchStudent(textBox9->Text) == nullptr)
	{
		label47->Visible = true;
		l1->Visible = false;
		l2->Visible = false;

	}
	else {
		panel15->Visible = true;	
		l1->Visible = true;
		l2->Visible = true;
		viewStudentData(finishedflowlaypanel, coursesinprogflowlayoutpanel);
	}
}
private: System::Void label47_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void coursesinprogflowlayoutpanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel11_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void stdpic_Click(System::Object^ sender, System::EventArgs^ e) {

	addCoursepp->BackColor = Color::Tan;
	addStudentpp->BackColor = Color::Tan;
	   
	stdofCoursepp->BackColor = Color::Tan;
	courseDatapp->BackColor = Color::Tan;
	editCoursepp->BackColor = Color::Tan;
	studentDatapp->BackColor = Color::Brown;
	pnlOfAddCourse->Visible = false;
	pnlOfEditCourse->Visible = false;
	pnlEditStudent->Visible = false;
	pnlOfStudentOfCourse->Visible = false;
	pnlOfAddStudent->Visible = false;
	pnlCoursedataedit->Visible = false;
	StudentDatapanel->Visible = true;

	sideBarExpand = true;
	slideBarTimer->Start();
}
};
}
