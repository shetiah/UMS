#pragma once
#include "Admin.h"
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

	private: System::Windows::Forms::TextBox^ txtStudentName;
	private: System::Windows::Forms::TextBox^ txtStudentAcademicYear;


	private: System::Windows::Forms::TextBox^ txtStudentPassword;
	private: System::Windows::Forms::TextBox^ txtStudentMaxHours;
	private: System::Windows::Forms::TextBox^ txtStudentGPA;

	private: System::Windows::Forms::CheckedListBox^ clFinishedCourses;
	private: System::Windows::Forms::CheckedListBox^ clCoursesInProgress;
	private: System::Windows::Forms::TextBox^ txtStudentGrades;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Panel^ panel8;





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
			this->pnlOfAddStudent = (gcnew System::Windows::Forms::Panel());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->pnlOfData = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->clCoursesInProgress = (gcnew System::Windows::Forms::CheckedListBox());
			this->txtStudentGPA = (gcnew System::Windows::Forms::TextBox());
			this->txtStudentMaxHours = (gcnew System::Windows::Forms::TextBox());
			this->txtStudentAcademicYear = (gcnew System::Windows::Forms::TextBox());
			this->txtStudentPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtStudentName = (gcnew System::Windows::Forms::TextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->clFinishedCourses = (gcnew System::Windows::Forms::CheckedListBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtStudentGrades = (gcnew System::Windows::Forms::TextBox());
			this->pnlOfStudentOfCourse = (gcnew System::Windows::Forms::Panel());
			this->pnlEditStudent = (gcnew System::Windows::Forms::Panel());
			this->pnlOfEditCourse = (gcnew System::Windows::Forms::Panel());
			this->pnlOfAddCourse = (gcnew System::Windows::Forms::Panel());
			this->sideBar->SuspendLayout();
			this->pnlOfbtns->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pnlOfPanels->SuspendLayout();
			this->pnlOfAddStudent->SuspendLayout();
			this->pnlOfData->SuspendLayout();
			this->panel8->SuspendLayout();
			this->SuspendLayout();
			// 
			// sideBar
			// 
			this->sideBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->sideBar->Controls->Add(this->pnlOfbtns);
			this->sideBar->Location = System::Drawing::Point(0, 0);
			this->sideBar->MaximumSize = System::Drawing::Size(287, 472);
			this->sideBar->MinimumSize = System::Drawing::Size(60, 472);
			this->sideBar->Name = L"sideBar";
			this->sideBar->Size = System::Drawing::Size(60, 472);
			this->sideBar->TabIndex = 0;
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
			this->EditCourseData->Location = System::Drawing::Point(61, 173);
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
			this->StudentsOfCourse->Size = System::Drawing::Size(223, 46);
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
			this->pictureBox2->Location = System::Drawing::Point(16, 67);
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
			this->panel2->Location = System::Drawing::Point(0, 291);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(7, 41);
			this->panel2->TabIndex = 8;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(16, 12);
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
			this->btnLogOut->Location = System::Drawing::Point(72, 291);
			this->btnLogOut->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnLogOut->Name = L"btnLogOut";
			this->btnLogOut->Size = System::Drawing::Size(208, 39);
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
			this->btnAddCourse->Location = System::Drawing::Point(61, 67);
			this->btnAddCourse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAddCourse->Name = L"btnAddCourse";
			this->btnAddCourse->Size = System::Drawing::Size(226, 46);
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
			this->panel1->Location = System::Drawing::Point(0, 67);
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
			this->btnAddStudent->Size = System::Drawing::Size(226, 46);
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
			this->pnlOfPanels->Controls->Add(this->pnlOfAddStudent);
			this->pnlOfPanels->Controls->Add(this->pnlOfStudentOfCourse);
			this->pnlOfPanels->Controls->Add(this->pnlEditStudent);
			this->pnlOfPanels->Controls->Add(this->pnlOfEditCourse);
			this->pnlOfPanels->Controls->Add(this->pnlOfAddCourse);
			this->pnlOfPanels->Location = System::Drawing::Point(61, 68);
			this->pnlOfPanels->Name = L"pnlOfPanels";
			this->pnlOfPanels->Size = System::Drawing::Size(866, 404);
			this->pnlOfPanels->TabIndex = 1;
			// 
			// pnlOfAddStudent
			// 
			this->pnlOfAddStudent->BackColor = System::Drawing::Color::Gainsboro;
			this->pnlOfAddStudent->Controls->Add(this->btnSave);
			this->pnlOfAddStudent->Controls->Add(this->pnlOfData);
			this->pnlOfAddStudent->Location = System::Drawing::Point(0, 0);
			this->pnlOfAddStudent->Name = L"pnlOfAddStudent";
			this->pnlOfAddStudent->Size = System::Drawing::Size(866, 404);
			this->pnlOfAddStudent->TabIndex = 2;
			this->pnlOfAddStudent->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminHome::pnlOfAddStudent_Paint);
			// 
			// btnSave
			// 
			this->btnSave->BackColor = System::Drawing::Color::DarkGray;
			this->btnSave->FlatAppearance->BorderSize = 0;
			this->btnSave->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->btnSave->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGreen;
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSave->Location = System::Drawing::Point(714, 335);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(139, 40);
			this->btnSave->TabIndex = 1;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &adminHome::btnSave_Click);
			// 
			// pnlOfData
			// 
			this->pnlOfData->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlOfData->Controls->Add(this->label6);
			this->pnlOfData->Controls->Add(this->label5);
			this->pnlOfData->Controls->Add(this->label4);
			this->pnlOfData->Controls->Add(this->label3);
			this->pnlOfData->Controls->Add(this->label2);
			this->pnlOfData->Controls->Add(this->label1);
			this->pnlOfData->Controls->Add(this->clCoursesInProgress);
			this->pnlOfData->Controls->Add(this->txtStudentGPA);
			this->pnlOfData->Controls->Add(this->txtStudentMaxHours);
			this->pnlOfData->Controls->Add(this->txtStudentAcademicYear);
			this->pnlOfData->Controls->Add(this->txtStudentPassword);
			this->pnlOfData->Controls->Add(this->txtStudentName);
			this->pnlOfData->Controls->Add(this->panel8);
			this->pnlOfData->Location = System::Drawing::Point(164, 27);
			this->pnlOfData->Name = L"pnlOfData";
			this->pnlOfData->Size = System::Drawing::Size(530, 348);
			this->pnlOfData->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->label6->Location = System::Drawing::Point(12, 175);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(188, 25);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Courses In Progress";
			this->label6->Click += gcnew System::EventHandler(this, &adminHome::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->label5->Location = System::Drawing::Point(12, 140);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 25);
			this->label5->TabIndex = 16;
			this->label5->Text = L"GPA:";
			this->label5->Click += gcnew System::EventHandler(this, &adminHome::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->label4->Location = System::Drawing::Point(12, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 25);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Max Hours:";
			this->label4->Click += gcnew System::EventHandler(this, &adminHome::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->label3->Location = System::Drawing::Point(12, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 25);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Academic Year:";
			this->label3->Click += gcnew System::EventHandler(this, &adminHome::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->label2->Location = System::Drawing::Point(12, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 25);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Password:";
			this->label2->Click += gcnew System::EventHandler(this, &adminHome::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->label1->Location = System::Drawing::Point(12, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 25);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Name:";
			this->label1->Click += gcnew System::EventHandler(this, &adminHome::label1_Click);
			// 
			// clCoursesInProgress
			// 
			this->clCoursesInProgress->FormattingEnabled = true;
			this->clCoursesInProgress->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"a", L"b", L"c", L"d" });
			this->clCoursesInProgress->Location = System::Drawing::Point(222, 174);
			this->clCoursesInProgress->Name = L"clCoursesInProgress";
			this->clCoursesInProgress->Size = System::Drawing::Size(212, 38);
			this->clCoursesInProgress->TabIndex = 6;
			this->clCoursesInProgress->SelectedIndexChanged += gcnew System::EventHandler(this, &adminHome::clCoursesInProgress_SelectedIndexChanged);
			// 
			// txtStudentGPA
			// 
			this->txtStudentGPA->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtStudentGPA->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->txtStudentGPA->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txtStudentGPA->Location = System::Drawing::Point(222, 139);
			this->txtStudentGPA->Multiline = true;
			this->txtStudentGPA->Name = L"txtStudentGPA";
			this->txtStudentGPA->Size = System::Drawing::Size(212, 29);
			this->txtStudentGPA->TabIndex = 4;
			this->txtStudentGPA->TextChanged += gcnew System::EventHandler(this, &adminHome::txtStudentGPA_TextChanged);
			// 
			// txtStudentMaxHours
			// 
			this->txtStudentMaxHours->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtStudentMaxHours->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->txtStudentMaxHours->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txtStudentMaxHours->Location = System::Drawing::Point(222, 104);
			this->txtStudentMaxHours->Multiline = true;
			this->txtStudentMaxHours->Name = L"txtStudentMaxHours";
			this->txtStudentMaxHours->Size = System::Drawing::Size(212, 29);
			this->txtStudentMaxHours->TabIndex = 3;
			this->txtStudentMaxHours->TextChanged += gcnew System::EventHandler(this, &adminHome::txtStudentMaxHours_TextChanged);
			// 
			// txtStudentAcademicYear
			// 
			this->txtStudentAcademicYear->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtStudentAcademicYear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->txtStudentAcademicYear->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txtStudentAcademicYear->Location = System::Drawing::Point(222, 69);
			this->txtStudentAcademicYear->Multiline = true;
			this->txtStudentAcademicYear->Name = L"txtStudentAcademicYear";
			this->txtStudentAcademicYear->Size = System::Drawing::Size(212, 29);
			this->txtStudentAcademicYear->TabIndex = 2;
			this->txtStudentAcademicYear->TextChanged += gcnew System::EventHandler(this, &adminHome::txtStudentAcademicYEar_TextChanged);
			// 
			// txtStudentPassword
			// 
			this->txtStudentPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtStudentPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->txtStudentPassword->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txtStudentPassword->Location = System::Drawing::Point(222, 34);
			this->txtStudentPassword->Multiline = true;
			this->txtStudentPassword->Name = L"txtStudentPassword";
			this->txtStudentPassword->Size = System::Drawing::Size(212, 29);
			this->txtStudentPassword->TabIndex = 1;
			this->txtStudentPassword->TextChanged += gcnew System::EventHandler(this, &adminHome::txtStudentPassword_TextChanged);
			// 
			// txtStudentName
			// 
			this->txtStudentName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtStudentName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->txtStudentName->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txtStudentName->Location = System::Drawing::Point(222, 0);
			this->txtStudentName->Multiline = true;
			this->txtStudentName->Name = L"txtStudentName";
			this->txtStudentName->Size = System::Drawing::Size(212, 29);
			this->txtStudentName->TabIndex = 0;
			this->txtStudentName->TextChanged += gcnew System::EventHandler(this, &adminHome::txtStudentName_TextChanged);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::LightGray;
			this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->label8);
			this->panel8->Controls->Add(this->clFinishedCourses);
			this->panel8->Controls->Add(this->label7);
			this->panel8->Controls->Add(this->txtStudentGrades);
			this->panel8->Location = System::Drawing::Point(0, 255);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(530, 93);
			this->panel8->TabIndex = 20;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(11, 48);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 25);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Grades:";
			// 
			// clFinishedCourses
			// 
			this->clFinishedCourses->FormattingEnabled = true;
			this->clFinishedCourses->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"x", L"y", L"z", L"mmmmmm" });
			this->clFinishedCourses->Location = System::Drawing::Point(221, 8);
			this->clFinishedCourses->Name = L"clFinishedCourses";
			this->clFinishedCourses->Size = System::Drawing::Size(212, 38);
			this->clFinishedCourses->TabIndex = 7;
			this->clFinishedCourses->SelectedIndexChanged += gcnew System::EventHandler(this, &adminHome::clFinishedCourses_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(11, 11);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(165, 25);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Finished Courses:";
			// 
			// txtStudentGrades
			// 
			this->txtStudentGrades->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtStudentGrades->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->txtStudentGrades->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txtStudentGrades->Location = System::Drawing::Point(221, 52);
			this->txtStudentGrades->Multiline = true;
			this->txtStudentGrades->Name = L"txtStudentGrades";
			this->txtStudentGrades->Size = System::Drawing::Size(212, 29);
			this->txtStudentGrades->TabIndex = 5;
			// 
			// pnlOfStudentOfCourse
			// 
			this->pnlOfStudentOfCourse->BackColor = System::Drawing::Color::Green;
			this->pnlOfStudentOfCourse->Location = System::Drawing::Point(24, 24);
			this->pnlOfStudentOfCourse->Name = L"pnlOfStudentOfCourse";
			this->pnlOfStudentOfCourse->Size = System::Drawing::Size(866, 404);
			this->pnlOfStudentOfCourse->TabIndex = 5;
			this->pnlOfStudentOfCourse->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminHome::pnlOfStudentOfCourse_Paint);
			// 
			// pnlEditStudent
			// 
			this->pnlEditStudent->BackColor = System::Drawing::Color::Red;
			this->pnlEditStudent->Location = System::Drawing::Point(16, 16);
			this->pnlEditStudent->Name = L"pnlEditStudent";
			this->pnlEditStudent->Size = System::Drawing::Size(866, 404);
			this->pnlEditStudent->TabIndex = 4;
			// 
			// pnlOfEditCourse
			// 
			this->pnlOfEditCourse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pnlOfEditCourse->Location = System::Drawing::Point(0, 0);
			this->pnlOfEditCourse->Name = L"pnlOfEditCourse";
			this->pnlOfEditCourse->Size = System::Drawing::Size(866, 404);
			this->pnlOfEditCourse->TabIndex = 3;
			// 
			// pnlOfAddCourse
			// 
			this->pnlOfAddCourse->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pnlOfAddCourse->Location = System::Drawing::Point(0, 0);
			this->pnlOfAddCourse->Name = L"pnlOfAddCourse";
			this->pnlOfAddCourse->Size = System::Drawing::Size(866, 404);
			this->pnlOfAddCourse->TabIndex = 2;
			// 
			// adminHome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(926, 472);
			this->Controls->Add(this->sideBar);
			this->Controls->Add(this->pnlOfPanels);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
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
			this->pnlOfAddStudent->ResumeLayout(false);
			this->pnlOfData->ResumeLayout(false);
			this->pnlOfData->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void adminHome_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
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
	pnlOfAddCourse->Visible = true;
	pnlOfEditCourse->Visible = false;
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
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlOfAddCourse->Visible = false;
	pnlOfEditCourse->Visible = true;
	pnlEditStudent->Visible = false;
	pnlOfStudentOfCourse->Visible = false;
	pnlOfAddStudent->Visible = false;
	slideBarTimer->Start();
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


	if (!(txtStudentName->Text->Length == 0 && txtStudentPassword->Text->Length == 0 && txtStudentMaxHours->Text->Length == 0
		&& txtStudentAcademicYear->Text->Length == 0 && txtStudentGPA->Text->Length == 0) ){




		String^ StudentName;
		String^ StudentPassword;
		String^ StudentMaxHours;
		String^ StudentAcademicYear;
		String^ StudentGPA;

		StudentName = txtStudentName->Text;
		StudentPassword = txtStudentPassword->Text;
		StudentMaxHours = txtStudentMaxHours->Text;
		StudentAcademicYear = txtStudentAcademicYear->Text;
		StudentGPA = txtStudentGPA->Text;

		List<String^>^ checkedFinishedCourses = gcnew List<String^>();
		for each (String ^ S in clFinishedCourses->CheckedItems) {
			checkedFinishedCourses->Add(S);

		}
		List<String^>^ CheckedCoursesInProgress = gcnew List<String^>();
		for each (String ^ S in clCoursesInProgress->CheckedItems) {
			CheckedCoursesInProgress->Add(S);

		}
		String^ CoursesGrades = txtStudentGrades->Text;
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
				if (txtStudentGrades->Text->Length == 0)
				{
					txtStudentGrades->Visible = false;


				}
				else
				{
					// handle the case where the input is not a valid float
					txtStudentGrades->Visible = true;
					return;
				}
			}
		}
		int AcademicYearInt, MaxHoursInt;
		float StudentGPAFloat;
		bool x = int::TryParse(StudentAcademicYear, AcademicYearInt);
		bool y = int::TryParse(StudentMaxHours, MaxHoursInt);
		bool z = float::TryParse(StudentGPA, StudentGPAFloat);
		Admin::createStudent(StudentName, StudentPassword, AcademicYearInt, MaxHoursInt, StudentGPAFloat, checkedFinishedCourses, CheckedCoursesInProgress, CoursesGradesList);
		Student::saveStudentDataToFile();

	}
	else {

	}
}
private: System::Void pnlOfAddStudent_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
