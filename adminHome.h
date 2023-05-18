#pragma once
#include "Admin.h"
#include"Course.h"
#include "Student.h"
#include "studentname.h"
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


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnAddStudent;

	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnLogOut;
	private: System::Windows::Forms::Timer^ slideBarTimer;
	private: System::Windows::Forms::Panel^ pnlOfPanels;
	private: System::Windows::Forms::Panel^ pnlOfAddCourse;
	private: System::Windows::Forms::Panel^ pnlOfAddStudent;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ EditCourseData;
	private: System::Windows::Forms::Button^ StudentData;
	private: System::Windows::Forms::Button^ StudentsOfCourse;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
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
			this->pnlOfbtns = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->EditCourseData = (gcnew System::Windows::Forms::Button());
			this->StudentData = (gcnew System::Windows::Forms::Button());
			this->StudentsOfCourse = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnLogOut = (gcnew System::Windows::Forms::Button());
			this->btnAddCourse = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnAddStudent = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->slideBarTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->pnlOfPanels = (gcnew System::Windows::Forms::Panel());
			this->pnlOfEditCourse = (gcnew System::Windows::Forms::Panel());
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
			this->pnlEditStudent = (gcnew System::Windows::Forms::Panel());
			this->pnlOfAddCourse = (gcnew System::Windows::Forms::Panel());
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
			this->sideBar->SuspendLayout();
			this->pnlOfbtns->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pnlOfPanels->SuspendLayout();
			this->pnlOfEditCourse->SuspendLayout();
			this->panel8->SuspendLayout();
			this->pnlOfStudentOfCourse->SuspendLayout();
			this->panel6->SuspendLayout();
			this->pnlOfAddCourse->SuspendLayout();
			this->pnlOfAddStudent->SuspendLayout();
			this->pnlOfData->SuspendLayout();
			this->SuspendLayout();
			// 
			// sideBar
			// 
			this->sideBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->sideBar->Controls->Add(this->pnlOfbtns);
			this->sideBar->Location = System::Drawing::Point(0, 0);
			this->sideBar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sideBar->MaximumSize = System::Drawing::Size(287, 473);
			this->sideBar->MinimumSize = System::Drawing::Size(60, 473);
			this->sideBar->Name = L"sideBar";
			this->sideBar->Size = System::Drawing::Size(60, 473);
			this->sideBar->TabIndex = 0;
			this->sideBar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminHome::sideBar_Paint);
			// 
			// pnlOfbtns
			// 
			this->pnlOfbtns->Controls->Add(this->panel5);
			this->pnlOfbtns->Controls->Add(this->panel4);
			this->pnlOfbtns->Controls->Add(this->panel3);
			this->pnlOfbtns->Controls->Add(this->pictureBox5);
			this->pnlOfbtns->Controls->Add(this->pictureBox4);
			this->pnlOfbtns->Controls->Add(this->pictureBox3);
			this->pnlOfbtns->Controls->Add(this->EditCourseData);
			this->pnlOfbtns->Controls->Add(this->StudentData);
			this->pnlOfbtns->Controls->Add(this->StudentsOfCourse);
			this->pnlOfbtns->Controls->Add(this->pictureBox2);
			this->pnlOfbtns->Controls->Add(this->panel2);
			this->pnlOfbtns->Controls->Add(this->pictureBox1);
			this->pnlOfbtns->Controls->Add(this->btnLogOut);
			this->pnlOfbtns->Controls->Add(this->btnAddCourse);
			this->pnlOfbtns->Controls->Add(this->panel1);
			this->pnlOfbtns->Controls->Add(this->btnAddStudent);
			this->pnlOfbtns->Controls->Add(this->panel7);
			this->pnlOfbtns->Location = System::Drawing::Point(0, 128);
			this->pnlOfbtns->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlOfbtns->Name = L"pnlOfbtns";
			this->pnlOfbtns->Size = System::Drawing::Size(287, 332);
			this->pnlOfbtns->TabIndex = 2;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(0, 222);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(7, 46);
			this->panel5->TabIndex = 9;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(0, 169);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(7, 46);
			this->panel4->TabIndex = 8;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(0, 119);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(7, 46);
			this->panel3->TabIndex = 7;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(16, 119);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(39, 46);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 14;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &adminHome::pictureBox5_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(16, 171);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(39, 46);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 13;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &adminHome::pictureBox4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(16, 223);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(39, 46);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 12;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &adminHome::pictureBox3_Click);
			// 
			// EditCourseData
			// 
			this->EditCourseData->AutoSize = true;
			this->EditCourseData->FlatAppearance->BorderSize = 0;
			this->EditCourseData->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->EditCourseData->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gainsboro;
			this->EditCourseData->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EditCourseData->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->EditCourseData->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->EditCourseData->Location = System::Drawing::Point(61, 174);
			this->EditCourseData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EditCourseData->Name = L"EditCourseData";
			this->EditCourseData->Size = System::Drawing::Size(229, 46);
			this->EditCourseData->TabIndex = 10;
			this->EditCourseData->Text = L"Course Data";
			this->EditCourseData->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->EditCourseData->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->EditCourseData->UseCompatibleTextRendering = true;
			this->EditCourseData->UseVisualStyleBackColor = true;
			this->EditCourseData->Click += gcnew System::EventHandler(this, &adminHome::button2_Click);
			// 
			// StudentData
			// 
			this->StudentData->AutoSize = true;
			this->StudentData->FlatAppearance->BorderSize = 0;
			this->StudentData->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->StudentData->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gainsboro;
			this->StudentData->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->StudentData->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->StudentData->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->StudentData->Location = System::Drawing::Point(61, 223);
			this->StudentData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->StudentData->Name = L"StudentData";
			this->StudentData->Size = System::Drawing::Size(223, 46);
			this->StudentData->TabIndex = 9;
			this->StudentData->Text = L"Student Data";
			this->StudentData->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->StudentData->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->StudentData->UseCompatibleTextRendering = true;
			this->StudentData->UseVisualStyleBackColor = true;
			this->StudentData->Click += gcnew System::EventHandler(this, &adminHome::StudentData_Click);
			// 
			// StudentsOfCourse
			// 
			this->StudentsOfCourse->AutoSize = true;
			this->StudentsOfCourse->FlatAppearance->BorderSize = 0;
			this->StudentsOfCourse->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->StudentsOfCourse->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gainsboro;
			this->StudentsOfCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->StudentsOfCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->StudentsOfCourse->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->StudentsOfCourse->Location = System::Drawing::Point(61, 123);
			this->StudentsOfCourse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->StudentsOfCourse->Name = L"StudentsOfCourse";
			this->StudentsOfCourse->Size = System::Drawing::Size(275, 46);
			this->StudentsOfCourse->TabIndex = 11;
			this->StudentsOfCourse->Text = L"Students Of A Course";
			this->StudentsOfCourse->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->StudentsOfCourse->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->StudentsOfCourse->UseCompatibleTextRendering = true;
			this->StudentsOfCourse->UseVisualStyleBackColor = true;
			this->StudentsOfCourse->Click += gcnew System::EventHandler(this, &adminHome::StudentsOfCourse_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(16, 66);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(39, 46);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &adminHome::pictureBox2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(0, 290);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(7, 41);
			this->panel2->TabIndex = 8;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(16, 12);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(39, 46);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &adminHome::pictureBox1_Click);
			// 
			// btnLogOut
			// 
			this->btnLogOut->AutoSize = true;
			this->btnLogOut->FlatAppearance->BorderSize = 0;
			this->btnLogOut->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->btnLogOut->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gainsboro;
			this->btnLogOut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogOut->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->btnLogOut->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnLogOut->Location = System::Drawing::Point(72, 290);
			this->btnLogOut->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnLogOut->Name = L"btnLogOut";
			this->btnLogOut->Size = System::Drawing::Size(208, 46);
			this->btnLogOut->TabIndex = 7;
			this->btnLogOut->Text = L"Log Out";
			this->btnLogOut->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnLogOut->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnLogOut->UseCompatibleTextRendering = true;
			this->btnLogOut->UseVisualStyleBackColor = true;
			// 
			// btnAddCourse
			// 
			this->btnAddCourse->AutoSize = true;
			this->btnAddCourse->FlatAppearance->BorderSize = 0;
			this->btnAddCourse->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->btnAddCourse->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gainsboro;
			this->btnAddCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->btnAddCourse->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnAddCourse->Location = System::Drawing::Point(61, 66);
			this->btnAddCourse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAddCourse->Name = L"btnAddCourse";
			this->btnAddCourse->Size = System::Drawing::Size(227, 46);
			this->btnAddCourse->TabIndex = 5;
			this->btnAddCourse->Text = L"Add Course";
			this->btnAddCourse->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAddCourse->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnAddCourse->UseCompatibleTextRendering = true;
			this->btnAddCourse->UseVisualStyleBackColor = true;
			this->btnAddCourse->Click += gcnew System::EventHandler(this, &adminHome::btnAddCourse_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(0, 66);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(7, 46);
			this->panel1->TabIndex = 6;
			// 
			// btnAddStudent
			// 
			this->btnAddStudent->AutoSize = true;
			this->btnAddStudent->FlatAppearance->BorderSize = 0;
			this->btnAddStudent->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->btnAddStudent->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gainsboro;
			this->btnAddStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddStudent->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->btnAddStudent->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnAddStudent->Location = System::Drawing::Point(61, 12);
			this->btnAddStudent->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAddStudent->Name = L"btnAddStudent";
			this->btnAddStudent->Size = System::Drawing::Size(227, 46);
			this->btnAddStudent->TabIndex = 3;
			this->btnAddStudent->Text = L"Add Student";
			this->btnAddStudent->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAddStudent->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnAddStudent->UseCompatibleTextRendering = true;
			this->btnAddStudent->UseVisualStyleBackColor = true;
			this->btnAddStudent->Click += gcnew System::EventHandler(this, &adminHome::btnAddStudent_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->Location = System::Drawing::Point(0, 12);
			this->panel7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(7, 46);
			this->panel7->TabIndex = 4;
			// 
			// slideBarTimer
			// 
			this->slideBarTimer->Interval = 10;
			this->slideBarTimer->Tick += gcnew System::EventHandler(this, &adminHome::slideBarTimer_Tick);
			// 
			// pnlOfPanels
			// 
			this->pnlOfPanels->Controls->Add(this->pnlOfEditCourse);
			this->pnlOfPanels->Controls->Add(this->pnlOfStudentOfCourse);
			this->pnlOfPanels->Controls->Add(this->pnlEditStudent);
			this->pnlOfPanels->Controls->Add(this->pnlOfAddCourse);
			this->pnlOfPanels->Controls->Add(this->pnlOfAddStudent);
			this->pnlOfPanels->Location = System::Drawing::Point(61, 0);
			this->pnlOfPanels->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlOfPanels->Name = L"pnlOfPanels";
			this->pnlOfPanels->Size = System::Drawing::Size(867, 472);
			this->pnlOfPanels->TabIndex = 1;
			// 
			// pnlOfEditCourse
			// 
			this->pnlOfEditCourse->BackColor = System::Drawing::Color::Transparent;
			this->pnlOfEditCourse->Controls->Add(this->stdpanel);
			this->pnlOfEditCourse->Controls->Add(this->button1);
			this->pnlOfEditCourse->Controls->Add(this->panel8);
			this->pnlOfEditCourse->Controls->Add(this->label22);
			this->pnlOfEditCourse->Controls->Add(this->label21);
			this->pnlOfEditCourse->Controls->Add(this->label20);
			this->pnlOfEditCourse->Controls->Add(this->textBox2);
			this->pnlOfEditCourse->Location = System::Drawing::Point(0, -62);
			this->pnlOfEditCourse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlOfEditCourse->Name = L"pnlOfEditCourse";
			this->pnlOfEditCourse->Size = System::Drawing::Size(867, 535);
			this->pnlOfEditCourse->TabIndex = 3;
			this->pnlOfEditCourse->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminHome::pnlOfEditCourse_Paint);
			// 
			// stdpanel
			// 
			this->stdpanel->Location = System::Drawing::Point(293, 278);
			this->stdpanel->Name = L"stdpanel";
			this->stdpanel->Size = System::Drawing::Size(200, 216);
			this->stdpanel->TabIndex = 17;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Tan;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->button1->FlatAppearance->BorderSize = 3;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->button1->Location = System::Drawing::Point(699, 156);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 38);
			this->button1->TabIndex = 16;
			this->button1->Text = L"view";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &adminHome::button1_Click);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Tan;
			this->panel8->Controls->Add(this->label25);
			this->panel8->Controls->Add(this->label24);
			this->panel8->Controls->Add(this->label23);
			this->panel8->Location = System::Drawing::Point(249, 231);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(302, 28);
			this->panel8->TabIndex = 6;
			this->panel8->Visible = false;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Tan;
			this->label25->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label25->Location = System::Drawing::Point(197, 3);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(88, 20);
			this->label25->TabIndex = 7;
			this->label25->Text = L"students ";
			this->label25->Click += gcnew System::EventHandler(this, &adminHome::label25_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Tan;
			this->label24->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label24->Location = System::Drawing::Point(164, 3);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(30, 20);
			this->label24->TabIndex = 6;
			this->label24->Text = L"no";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Tan;
			this->label23->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label23->Location = System::Drawing::Point(3, 3);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(155, 20);
			this->label23->TabIndex = 5;
			this->label23->Text = L"this course have:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Tan;
			this->label22->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label22->Location = System::Drawing::Point(339, 202);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(93, 20);
			this->label22->TabIndex = 4;
			this->label22->Text = L"not found";
			this->label22->Visible = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Tan;
			this->label21->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label21->Location = System::Drawing::Point(16, 137);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(557, 20);
			this->label21->TabIndex = 3;
			this->label21->Text = L"please enter the name of the course that you want to search for:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Tan;
			this->label20->Location = System::Drawing::Point(9, 73);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(312, 35);
			this->label20->TabIndex = 2;
			this->label20->Text = L"Add Course Grade: ";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Linen;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox2->Location = System::Drawing::Point(81, 163);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(587, 27);
			this->textBox2->TabIndex = 1;
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
			this->pnlOfStudentOfCourse->Location = System::Drawing::Point(0, -68);
			this->pnlOfStudentOfCourse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlOfStudentOfCourse->Name = L"pnlOfStudentOfCourse";
			this->pnlOfStudentOfCourse->Size = System::Drawing::Size(864, 538);
			this->pnlOfStudentOfCourse->TabIndex = 5;
			this->pnlOfStudentOfCourse->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminHome::pnlOfStudentOfCourse_Paint);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Tan;
			this->label19->Location = System::Drawing::Point(3, 77);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(333, 35);
			this->label19->TabIndex = 17;
			this->label19->Text = L"Students of a course:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Tan;
			this->label18->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label18->Location = System::Drawing::Point(12, 81);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(0, 20);
			this->label18->TabIndex = 16;
			// 
			// viewbt
			// 
			this->viewbt->BackColor = System::Drawing::Color::Tan;
			this->viewbt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->viewbt->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->viewbt->FlatAppearance->BorderSize = 3;
			this->viewbt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewbt->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->viewbt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->viewbt->Location = System::Drawing::Point(722, 162);
			this->viewbt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->viewbt->Name = L"viewbt";
			this->viewbt->Size = System::Drawing::Size(117, 38);
			this->viewbt->TabIndex = 15;
			this->viewbt->Text = L"view";
			this->viewbt->UseVisualStyleBackColor = false;
			this->viewbt->Click += gcnew System::EventHandler(this, &adminHome::viewbt_Click);
			// 
			// studentnamepanel
			// 
			this->studentnamepanel->AutoScroll = true;
			this->studentnamepanel->BackColor = System::Drawing::Color::Transparent;
			this->studentnamepanel->Location = System::Drawing::Point(302, 261);
			this->studentnamepanel->Name = L"studentnamepanel";
			this->studentnamepanel->Size = System::Drawing::Size(232, 277);
			this->studentnamepanel->TabIndex = 4;
			this->studentnamepanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminHome::studentnamepanel_Paint);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Tan;
			this->label14->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->label14->Location = System::Drawing::Point(223, 202);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(403, 20);
			this->label14->TabIndex = 13;
			this->label14->Text = L"not found:-> please enter another course name";
			this->label14->Visible = false;
			this->label14->Click += gcnew System::EventHandler(this, &adminHome::label14_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Tan;
			this->panel6->Controls->Add(this->label12);
			this->panel6->Controls->Add(this->label13);
			this->panel6->Controls->Add(this->label9);
			this->panel6->Location = System::Drawing::Point(270, 227);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(284, 28);
			this->panel6->TabIndex = 9;
			this->panel6->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Tan;
			this->label12->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->label12->Location = System::Drawing::Point(197, 5);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(84, 20);
			this->label12->TabIndex = 12;
			this->label12->Text = L"students";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Tan;
			this->label13->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->label13->Location = System::Drawing::Point(168, 5);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(30, 20);
			this->label13->TabIndex = 11;
			this->label13->Text = L"no";
			this->label13->Click += gcnew System::EventHandler(this, &adminHome::label13_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Tan;
			this->label9->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->label9->Location = System::Drawing::Point(3, 5);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(159, 20);
			this->label9->TabIndex = 8;
			this->label9->Text = L"this course have :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Tan;
			this->label10->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label10->Location = System::Drawing::Point(12, 143);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(515, 20);
			this->label10->TabIndex = 7;
			this->label10->Text = L"please enter the name of the course you want to search for:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Linen;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox1->Location = System::Drawing::Point(106, 170);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(587, 27);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &adminHome::textBox1_TextChanged);
			// 
			// pnlEditStudent
			// 
			this->pnlEditStudent->BackColor = System::Drawing::Color::Transparent;
			this->pnlEditStudent->Location = System::Drawing::Point(0, -68);
			this->pnlEditStudent->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlEditStudent->Name = L"pnlEditStudent";
			this->pnlEditStudent->Size = System::Drawing::Size(861, 473);
			this->pnlEditStudent->TabIndex = 4;
			// 
			// pnlOfAddCourse
			// 
			this->pnlOfAddCourse->BackColor = System::Drawing::Color::White;
			this->pnlOfAddCourse->Controls->Add(this->label15);
			this->pnlOfAddCourse->Controls->Add(this->slabel);
			this->pnlOfAddCourse->Controls->Add(this->label11);
			this->pnlOfAddCourse->Controls->Add(this->addCourseBtn);
			this->pnlOfAddCourse->Controls->Add(this->hlabel);
			this->pnlOfAddCourse->Controls->Add(this->mlabel);
			this->pnlOfAddCourse->Controls->Add(this->Eradio);
			this->pnlOfAddCourse->Controls->Add(this->Rradio);
			this->pnlOfAddCourse->Controls->Add(this->lblfgd);
			this->pnlOfAddCourse->Controls->Add(this->ctxt);
			this->pnlOfAddCourse->Controls->Add(this->ptxt);
			this->pnlOfAddCourse->Controls->Add(this->itxt);
			this->pnlOfAddCourse->Controls->Add(this->mtxt);
			this->pnlOfAddCourse->Controls->Add(this->htxt);
			this->pnlOfAddCourse->Controls->Add(this->nTxt);
			this->pnlOfAddCourse->Controls->Add(this->lbl7);
			this->pnlOfAddCourse->Controls->Add(this->lbl5);
			this->pnlOfAddCourse->Controls->Add(this->lbl4);
			this->pnlOfAddCourse->Controls->Add(this->lbl37);
			this->pnlOfAddCourse->Controls->Add(this->lbl2);
			this->pnlOfAddCourse->Controls->Add(this->lbl1);
			this->pnlOfAddCourse->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pnlOfAddCourse->Location = System::Drawing::Point(0, 0);
			this->pnlOfAddCourse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlOfAddCourse->Name = L"pnlOfAddCourse";
			this->pnlOfAddCourse->Size = System::Drawing::Size(867, 472);
			this->pnlOfAddCourse->TabIndex = 2;
			this->pnlOfAddCourse->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminHome::pnlOfAddCourse_Paint);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Cooper Black", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Tan;
			this->label15->Location = System::Drawing::Point(9, 13);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(241, 42);
			this->label15->TabIndex = 36;
			this->label15->Text = L"Add course:";
			// 
			// slabel
			// 
			this->slabel->AutoSize = true;
			this->slabel->BackColor = System::Drawing::Color::Transparent;
			this->slabel->ForeColor = System::Drawing::Color::Blue;
			this->slabel->Location = System::Drawing::Point(630, 444);
			this->slabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->slabel->Name = L"slabel";
			this->slabel->Size = System::Drawing::Size(175, 16);
			this->slabel->TabIndex = 35;
			this->slabel->Text = L"Course Added Successfully!";
			this->slabel->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(614, 354);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(214, 16);
			this->label11->TabIndex = 34;
			this->label11->Text = L"Sorry , you must fill all the textboxes";
			this->label11->Visible = false;
			// 
			// addCourseBtn
			// 
			this->addCourseBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->addCourseBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addCourseBtn->FlatAppearance->BorderSize = 0;
			this->addCourseBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addCourseBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addCourseBtn->ForeColor = System::Drawing::Color::Tan;
			this->addCourseBtn->Location = System::Drawing::Point(632, 377);
			this->addCourseBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addCourseBtn->Name = L"addCourseBtn";
			this->addCourseBtn->Size = System::Drawing::Size(173, 55);
			this->addCourseBtn->TabIndex = 33;
			this->addCourseBtn->Text = L"ADD";
			this->addCourseBtn->UseVisualStyleBackColor = false;
			this->addCourseBtn->Click += gcnew System::EventHandler(this, &adminHome::addCourseBtn_Click);
			// 
			// hlabel
			// 
			this->hlabel->AutoSize = true;
			this->hlabel->BackColor = System::Drawing::Color::Transparent;
			this->hlabel->ForeColor = System::Drawing::Color::Red;
			this->hlabel->Location = System::Drawing::Point(514, 158);
			this->hlabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->hlabel->Name = L"hlabel";
			this->hlabel->Size = System::Drawing::Size(165, 16);
			this->hlabel->TabIndex = 32;
			this->hlabel->Text = L"please enter numbers only";
			this->hlabel->Visible = false;
			// 
			// mlabel
			// 
			this->mlabel->AutoSize = true;
			this->mlabel->BackColor = System::Drawing::Color::Transparent;
			this->mlabel->ForeColor = System::Drawing::Color::Red;
			this->mlabel->Location = System::Drawing::Point(514, 200);
			this->mlabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->mlabel->Name = L"mlabel";
			this->mlabel->Size = System::Drawing::Size(165, 16);
			this->mlabel->TabIndex = 31;
			this->mlabel->Text = L"please enter numbers only";
			this->mlabel->Visible = false;
			// 
			// Eradio
			// 
			this->Eradio->AutoSize = true;
			this->Eradio->Font = (gcnew System::Drawing::Font(L"Cooper Black", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Eradio->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->Eradio->Location = System::Drawing::Point(404, 425);
			this->Eradio->Margin = System::Windows::Forms::Padding(4);
			this->Eradio->Name = L"Eradio";
			this->Eradio->Size = System::Drawing::Size(84, 19);
			this->Eradio->TabIndex = 30;
			this->Eradio->Text = L"Elective";
			this->Eradio->UseVisualStyleBackColor = true;
			// 
			// Rradio
			// 
			this->Rradio->AutoSize = true;
			this->Rradio->Checked = true;
			this->Rradio->Font = (gcnew System::Drawing::Font(L"Cooper Black", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rradio->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->Rradio->Location = System::Drawing::Point(404, 398);
			this->Rradio->Margin = System::Windows::Forms::Padding(4);
			this->Rradio->Name = L"Rradio";
			this->Rradio->Size = System::Drawing::Size(117, 19);
			this->Rradio->TabIndex = 29;
			this->Rradio->TabStop = true;
			this->Rradio->Text = L"Requirement";
			this->Rradio->UseVisualStyleBackColor = true;
			// 
			// lblfgd
			// 
			this->lblfgd->AutoSize = true;
			this->lblfgd->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9));
			this->lblfgd->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->lblfgd->Location = System::Drawing::Point(75, 399);
			this->lblfgd->Name = L"lblfgd";
			this->lblfgd->Size = System::Drawing::Size(308, 17);
			this->lblfgd->TabIndex = 28;
			this->lblfgd->Text = L"Is this course Requirement or Elective \?";
			// 
			// ctxt
			// 
			this->ctxt->Location = System::Drawing::Point(227, 340);
			this->ctxt->Margin = System::Windows::Forms::Padding(4);
			this->ctxt->Multiline = true;
			this->ctxt->Name = L"ctxt";
			this->ctxt->Size = System::Drawing::Size(265, 30);
			this->ctxt->TabIndex = 27;
			// 
			// ptxt
			// 
			this->ptxt->Location = System::Drawing::Point(227, 295);
			this->ptxt->Margin = System::Windows::Forms::Padding(4);
			this->ptxt->Multiline = true;
			this->ptxt->Name = L"ptxt";
			this->ptxt->Size = System::Drawing::Size(265, 30);
			this->ptxt->TabIndex = 26;
			// 
			// itxt
			// 
			this->itxt->Location = System::Drawing::Point(227, 243);
			this->itxt->Margin = System::Windows::Forms::Padding(4);
			this->itxt->Multiline = true;
			this->itxt->Name = L"itxt";
			this->itxt->Size = System::Drawing::Size(265, 30);
			this->itxt->TabIndex = 25;
			// 
			// mtxt
			// 
			this->mtxt->Location = System::Drawing::Point(227, 194);
			this->mtxt->Margin = System::Windows::Forms::Padding(4);
			this->mtxt->Multiline = true;
			this->mtxt->Name = L"mtxt";
			this->mtxt->Size = System::Drawing::Size(265, 30);
			this->mtxt->TabIndex = 24;
			// 
			// htxt
			// 
			this->htxt->Location = System::Drawing::Point(227, 151);
			this->htxt->Margin = System::Windows::Forms::Padding(4);
			this->htxt->Multiline = true;
			this->htxt->Name = L"htxt";
			this->htxt->Size = System::Drawing::Size(265, 30);
			this->htxt->TabIndex = 23;
			// 
			// nTxt
			// 
			this->nTxt->Location = System::Drawing::Point(227, 104);
			this->nTxt->Margin = System::Windows::Forms::Padding(4);
			this->nTxt->Multiline = true;
			this->nTxt->Name = L"nTxt";
			this->nTxt->Size = System::Drawing::Size(265, 30);
			this->nTxt->TabIndex = 22;
			// 
			// lbl7
			// 
			this->lbl7->AutoSize = true;
			this->lbl7->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->lbl7->Location = System::Drawing::Point(77, 347);
			this->lbl7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl7->Name = L"lbl7";
			this->lbl7->Size = System::Drawing::Size(53, 20);
			this->lbl7->TabIndex = 21;
			this->lbl7->Text = L"code:";
			this->lbl7->Click += gcnew System::EventHandler(this, &adminHome::lbl7_Click);
			// 
			// lbl5
			// 
			this->lbl5->AutoSize = true;
			this->lbl5->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9));
			this->lbl5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->lbl5->Location = System::Drawing::Point(78, 302);
			this->lbl5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl5->Name = L"lbl5";
			this->lbl5->Size = System::Drawing::Size(114, 17);
			this->lbl5->TabIndex = 20;
			this->lbl5->Text = L"Prerequisites:";
			// 
			// lbl4
			// 
			this->lbl4->AutoSize = true;
			this->lbl4->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9));
			this->lbl4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->lbl4->Location = System::Drawing::Point(78, 251);
			this->lbl4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl4->Name = L"lbl4";
			this->lbl4->Size = System::Drawing::Size(93, 17);
			this->lbl4->TabIndex = 19;
			this->lbl4->Text = L"Instructor:";
			// 
			// lbl37
			// 
			this->lbl37->AutoSize = true;
			this->lbl37->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9));
			this->lbl37->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->lbl37->Location = System::Drawing::Point(75, 204);
			this->lbl37->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl37->Name = L"lbl37";
			this->lbl37->Size = System::Drawing::Size(117, 17);
			this->lbl37->TabIndex = 18;
			this->lbl37->Text = L"Max Students:";
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9));
			this->lbl2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->lbl2->Location = System::Drawing::Point(78, 153);
			this->lbl2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(59, 17);
			this->lbl2->TabIndex = 17;
			this->lbl2->Text = L"Hours:";
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->lbl1->Location = System::Drawing::Point(79, 110);
			this->lbl1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(113, 17);
			this->lbl1->TabIndex = 16;
			this->lbl1->Text = L"Course Name:";
			// 
			// pnlOfAddStudent
			// 
			this->pnlOfAddStudent->BackColor = System::Drawing::Color::White;
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
			this->pnlOfAddStudent->Location = System::Drawing::Point(0, -64);
			this->pnlOfAddStudent->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlOfAddStudent->Name = L"pnlOfAddStudent";
			this->pnlOfAddStudent->Size = System::Drawing::Size(867, 534);
			this->pnlOfAddStudent->TabIndex = 2;
			this->pnlOfAddStudent->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminHome::pnlOfAddStudent_Paint);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Cooper Black", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Tan;
			this->label17->Location = System::Drawing::Point(13, 71);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(269, 42);
			this->label17->TabIndex = 25;
			this->label17->Text = L"Add Student:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(49, 92);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 16);
			this->label16->TabIndex = 24;
			// 
			// GradesLabel
			// 
			this->GradesLabel->AutoSize = true;
			this->GradesLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GradesLabel->ForeColor = System::Drawing::Color::Red;
			this->GradesLabel->Location = System::Drawing::Point(644, 376);
			this->GradesLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->GradesLabel->Name = L"GradesLabel";
			this->GradesLabel->Size = System::Drawing::Size(151, 19);
			this->GradesLabel->TabIndex = 23;
			this->GradesLabel->Text = L"\"Accept numbers Only\"";
			this->GradesLabel->Visible = false;
			// 
			// gpaLabel
			// 
			this->gpaLabel->AutoSize = true;
			this->gpaLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gpaLabel->ForeColor = System::Drawing::Color::Red;
			this->gpaLabel->Location = System::Drawing::Point(644, 299);
			this->gpaLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->gpaLabel->Name = L"gpaLabel";
			this->gpaLabel->Size = System::Drawing::Size(151, 19);
			this->gpaLabel->TabIndex = 22;
			this->gpaLabel->Text = L"\"Accept numbers Only\"";
			this->gpaLabel->Visible = false;
			// 
			// hoursLabel
			// 
			this->hoursLabel->AutoSize = true;
			this->hoursLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hoursLabel->ForeColor = System::Drawing::Color::Red;
			this->hoursLabel->Location = System::Drawing::Point(644, 252);
			this->hoursLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->hoursLabel->Name = L"hoursLabel";
			this->hoursLabel->Size = System::Drawing::Size(151, 19);
			this->hoursLabel->TabIndex = 21;
			this->hoursLabel->Text = L"\"Accept numbers Only\"";
			this->hoursLabel->Visible = false;
			// 
			// yearLabel
			// 
			this->yearLabel->AutoSize = true;
			this->yearLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->yearLabel->ForeColor = System::Drawing::Color::Red;
			this->yearLabel->Location = System::Drawing::Point(644, 212);
			this->yearLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->yearLabel->Name = L"yearLabel";
			this->yearLabel->Size = System::Drawing::Size(151, 19);
			this->yearLabel->TabIndex = 20;
			this->yearLabel->Text = L"\"Accept numbers Only\"";
			this->yearLabel->Visible = false;
			// 
			// sucssLabel
			// 
			this->sucssLabel->AutoSize = true;
			this->sucssLabel->CausesValidation = false;
			this->sucssLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sucssLabel->ForeColor = System::Drawing::Color::MediumBlue;
			this->sucssLabel->Location = System::Drawing::Point(654, 508);
			this->sucssLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->sucssLabel->Name = L"sucssLabel";
			this->sucssLabel->Size = System::Drawing::Size(197, 20);
			this->sucssLabel->TabIndex = 19;
			this->sucssLabel->Text = L"Student Added Succsessfully";
			this->sucssLabel->Visible = false;
			// 
			// allTxtLabel
			// 
			this->allTxtLabel->AutoSize = true;
			this->allTxtLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->allTxtLabel->ForeColor = System::Drawing::Color::Red;
			this->allTxtLabel->Location = System::Drawing::Point(654, 445);
			this->allTxtLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->allTxtLabel->Name = L"allTxtLabel";
			this->allTxtLabel->Size = System::Drawing::Size(185, 20);
			this->allTxtLabel->TabIndex = 18;
			this->allTxtLabel->Text = L"Please fill all the textBoxes";
			this->allTxtLabel->Visible = false;
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
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->btnSave->ForeColor = System::Drawing::Color::Tan;
			this->btnSave->Location = System::Drawing::Point(676, 467);
			this->btnSave->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(139, 39);
			this->btnSave->TabIndex = 1;
			this->btnSave->Text = L"ADD";
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
			this->pnlOfData->Location = System::Drawing::Point(106, 121);
			this->pnlOfData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlOfData->Name = L"pnlOfData";
			this->pnlOfData->Size = System::Drawing::Size(531, 368);
			this->pnlOfData->TabIndex = 0;
			// 
			// gradesText
			// 
			this->gradesText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gradesText->Location = System::Drawing::Point(187, 250);
			this->gradesText->Margin = System::Windows::Forms::Padding(4);
			this->gradesText->Multiline = true;
			this->gradesText->Name = L"gradesText";
			this->gradesText->Size = System::Drawing::Size(332, 24);
			this->gradesText->TabIndex = 23;
			this->gradesText->Text = L"0";
			// 
			// inCoursesText
			// 
			this->inCoursesText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inCoursesText->Location = System::Drawing::Point(187, 292);
			this->inCoursesText->Margin = System::Windows::Forms::Padding(4);
			this->inCoursesText->Multiline = true;
			this->inCoursesText->Name = L"inCoursesText";
			this->inCoursesText->Size = System::Drawing::Size(332, 24);
			this->inCoursesText->TabIndex = 22;
			// 
			// FcoursesText
			// 
			this->FcoursesText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FcoursesText->Location = System::Drawing::Point(187, 207);
			this->FcoursesText->Margin = System::Windows::Forms::Padding(4);
			this->FcoursesText->Multiline = true;
			this->FcoursesText->Name = L"FcoursesText";
			this->FcoursesText->Size = System::Drawing::Size(332, 24);
			this->FcoursesText->TabIndex = 20;
			this->FcoursesText->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label8->Location = System::Drawing::Point(17, 252);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 20);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Grades:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label6->Location = System::Drawing::Point(3, 291);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(187, 20);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Courses In Progress :";
			this->label6->Click += gcnew System::EventHandler(this, &adminHome::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label5->Location = System::Drawing::Point(17, 177);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 20);
			this->label5->TabIndex = 16;
			this->label5->Text = L"GPA:";
			this->label5->Click += gcnew System::EventHandler(this, &adminHome::label5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label7->Location = System::Drawing::Point(8, 211);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(160, 20);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Finished Courses:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label4->Location = System::Drawing::Point(17, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 20);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Max Hours:";
			this->label4->Click += gcnew System::EventHandler(this, &adminHome::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label3->Location = System::Drawing::Point(15, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(143, 20);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Academic Year:";
			this->label3->Click += gcnew System::EventHandler(this, &adminHome::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label2->Location = System::Drawing::Point(14, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 20);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Password:";
			this->label2->Click += gcnew System::EventHandler(this, &adminHome::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label1->Location = System::Drawing::Point(15, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 20);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Name:";
			this->label1->Click += gcnew System::EventHandler(this, &adminHome::label1_Click);
			// 
			// gpaText
			// 
			this->gpaText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gpaText->ForeColor = System::Drawing::SystemColors::WindowText;
			this->gpaText->Location = System::Drawing::Point(187, 173);
			this->gpaText->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gpaText->Multiline = true;
			this->gpaText->Name = L"gpaText";
			this->gpaText->Size = System::Drawing::Size(332, 24);
			this->gpaText->TabIndex = 4;
			this->gpaText->TextChanged += gcnew System::EventHandler(this, &adminHome::txtStudentGPA_TextChanged);
			// 
			// HoursText
			// 
			this->HoursText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HoursText->ForeColor = System::Drawing::SystemColors::WindowText;
			this->HoursText->Location = System::Drawing::Point(187, 130);
			this->HoursText->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->HoursText->Multiline = true;
			this->HoursText->Name = L"HoursText";
			this->HoursText->Size = System::Drawing::Size(332, 24);
			this->HoursText->TabIndex = 3;
			this->HoursText->TextChanged += gcnew System::EventHandler(this, &adminHome::txtStudentMaxHours_TextChanged);
			// 
			// yearText
			// 
			this->yearText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->yearText->ForeColor = System::Drawing::SystemColors::WindowText;
			this->yearText->Location = System::Drawing::Point(187, 88);
			this->yearText->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->yearText->Multiline = true;
			this->yearText->Name = L"yearText";
			this->yearText->Size = System::Drawing::Size(332, 24);
			this->yearText->TabIndex = 2;
			this->yearText->TextChanged += gcnew System::EventHandler(this, &adminHome::txtStudentAcademicYEar_TextChanged);
			// 
			// passText
			// 
			this->passText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passText->ForeColor = System::Drawing::SystemColors::WindowText;
			this->passText->Location = System::Drawing::Point(187, 51);
			this->passText->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->passText->Multiline = true;
			this->passText->Name = L"passText";
			this->passText->PasswordChar = '*';
			this->passText->Size = System::Drawing::Size(332, 24);
			this->passText->TabIndex = 1;
			this->passText->TextChanged += gcnew System::EventHandler(this, &adminHome::txtStudentPassword_TextChanged);
			// 
			// nameText
			// 
			this->nameText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameText->ForeColor = System::Drawing::SystemColors::WindowText;
			this->nameText->Location = System::Drawing::Point(187, 16);
			this->nameText->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->nameText->Multiline = true;
			this->nameText->Name = L"nameText";
			this->nameText->Size = System::Drawing::Size(332, 24);
			this->nameText->TabIndex = 0;
			this->nameText->TextChanged += gcnew System::EventHandler(this, &adminHome::txtStudentName_TextChanged);
			// 
			// adminHome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(925, 473);
			this->Controls->Add(this->sideBar);
			this->Controls->Add(this->pnlOfPanels);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"adminHome";
			this->Text = L"adminHome";
			this->Load += gcnew System::EventHandler(this, &adminHome::adminHome_Load);
			this->sideBar->ResumeLayout(false);
			this->pnlOfbtns->ResumeLayout(false);
			this->pnlOfbtns->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pnlOfPanels->ResumeLayout(false);
			this->pnlOfEditCourse->ResumeLayout(false);
			this->pnlOfEditCourse->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->pnlOfStudentOfCourse->ResumeLayout(false);
			this->pnlOfStudentOfCourse->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->pnlOfAddCourse->ResumeLayout(false);
			this->pnlOfAddCourse->PerformLayout();
			this->pnlOfAddStudent->ResumeLayout(false);
			this->pnlOfAddStudent->PerformLayout();
			this->pnlOfData->ResumeLayout(false);
			this->pnlOfData->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void adminHome_Load(System::Object^ sender, System::EventArgs^ e) {
	}

		   bool slideBarExpand;
private: System::Void slideBarTimer_Tick(System::Object^ sender, System::EventArgs^ e) {

	if (slideBarExpand) {
		sideBar->Width -= 20;
		if (sideBar->Width == sideBar->MinimumSize.Width) {
			slideBarExpand = false;
			slideBarTimer->Stop();
		}
	}
	else
	{
		sideBar->Width += 20;
		if (sideBar->Width == sideBar->MaximumSize.Width)
		{
			slideBarExpand = true;
			slideBarTimer->Stop();
		}
	}
}
private: System::Void btnAddStudent_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlOfAddCourse->Visible = false;
	pnlOfEditCourse->Visible = false;
	pnlEditStudent->Visible = false;
	pnlOfStudentOfCourse->Visible = false;
	pnlOfAddStudent->Visible = true;
	slideBarTimer->Start();
}
private: System::Void btnAddCourse_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlOfEditCourse->Visible = false;
	pnlEditStudent->Visible = false;
	pnlOfStudentOfCourse->Visible = false;
	pnlOfAddCourse->Visible = true;
	pnlOfAddStudent->Visible = false;
	slideBarTimer->Start();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlOfAddCourse->Visible = false;
	pnlOfEditCourse->Visible = false;
	pnlEditStudent->Visible = false;
	pnlOfStudentOfCourse->Visible = false;
	pnlOfAddStudent->Visible = true;
	slideBarTimer->Start();
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlOfAddCourse->Visible = true;
	pnlOfEditCourse->Visible = false;
	pnlEditStudent->Visible = false;
	pnlOfStudentOfCourse->Visible = false;
	pnlOfAddStudent->Visible = false;
	slideBarTimer->Start();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	slideBarTimer->Start();
	pnlOfAddCourse->Visible = false;
	pnlOfEditCourse->Visible = true;
	pnlEditStudent->Visible = false;
	pnlOfStudentOfCourse->Visible = false;
	pnlOfAddStudent->Visible = false;
	
}
private: System::Void StudentData_Click(System::Object^ sender, System::EventArgs^ e) {
	slideBarTimer->Start();
	pnlOfAddCourse->Visible = false;
	pnlOfEditCourse->Visible = false;
	pnlEditStudent->Visible = true;
	pnlOfStudentOfCourse->Visible = false;
	pnlOfAddStudent->Visible = false;

}
private: System::Void StudentsOfCourse_Click(System::Object^ sender, System::EventArgs^ e) {
	slideBarTimer->Start();
	pnlOfAddCourse->Visible = false;
	pnlOfEditCourse->Visible = false;
	pnlEditStudent->Visible = false;
	pnlOfStudentOfCourse->Visible = true;
	pnlOfAddStudent->Visible = false;
	slideBarTimer->Start();

}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlOfAddCourse->Visible = false;
	pnlOfEditCourse->Visible = false;
	pnlEditStudent->Visible = false;
	pnlOfStudentOfCourse->Visible = true;
	pnlOfAddStudent->Visible = false;
	slideBarTimer->Start();

	label13->Visible = false;
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlOfAddCourse->Visible = false;
	pnlOfEditCourse->Visible = true;
	pnlEditStudent->Visible = false;
	pnlOfStudentOfCourse->Visible = false;
	pnlOfAddStudent->Visible = false;
	slideBarTimer->Start();
	label24->Visible = false;
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlOfAddCourse->Visible = false;
	pnlOfEditCourse->Visible = false;
	pnlEditStudent->Visible = true;
	pnlOfStudentOfCourse->Visible = false;
	pnlOfAddStudent->Visible = false;
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
}
private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
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

	if (isHoursNum == false)
	{
		hoursLabel->Visible = true;
		return;
	}
	else
	{
		hoursLabel->Visible = false;
	}
	if (isAcademicYearNum == false)
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
	if (isGpANum == false)
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

	for (int i = 0; i < CoursesGradesArray->Length; i++)
	{
		float grade;
		if (float::TryParse(CoursesGradesArray[i], grade))
		{
			CoursesGradesFloatArray[i] = grade;
			CoursesGradesList->Add(grade);
		}
		else
		{
			if (gradesText->Text->Length == 0)
			{
				GradesLabel->Visible = false;


			}
			else
			{
				// handle the case where the input is not a valid float
				GradesLabel->Visible = true;
				return;
			}
		}
	}

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
	if (isHoursValid == false)
	{
		hlabel->Visible = true;
		//label11->Visible = false;

		return;
	}
	else
	{
		hlabel->Visible = false;

	}
	if (isMaxStudentsValid == false)
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
	Admin::addCourse(newCourse);
	Course::allCourses->Add(newCourse);
	Course::eachCourseHours->Add(courseName, hours);
	Course::saveCourseDataToFile();
	Course::saveCourseContentToFile();
	Course::saveCourseHoursToFile();
	slabel->Visible = true;


}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void viewbt_Click(System::Object^ sender, System::EventArgs^ e) {
	getstudentinAcourse(textBox1->Text,studentnamepanel,label10,label14,label9,label13,label12,panel6);
}
public:List<studentname^>^ temps = gcnew List<studentname^>;
public: Course^ searchforCourse(String^ courseName)
{
	for each (auto i in Course::allCourses)
	{
		if (i->getName() == courseName)
			return i;
	}
	return nullptr;
}
public: void getstudentinAcourse(String^ courseName, FlowLayoutPanel^ yourFlow, Label^ entercourse,Label^ notfoundlab,Label^ tcc,Label^ num , Label^ st,Panel^ holder)
{
	
	bool found = false;

	Course^ searchedcourse = gcnew Course;
	searchedcourse = searchforCourse(courseName);
	if (searchedcourse == nullptr)
	{
		notfoundlab->Visible = true;
		tcc->Visible = false;
		num->Visible = false;
		st->Visible = false;
		holder->Visible = false;

		yourFlow->Controls->Clear();
		yourFlow->Visible = false;
		temps->Clear();
		return;
	}
	else {
		notfoundlab->Visible = false;
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
}
};
}
