#pragma once
#include "Student.h"
#include "Login.h"
#include "Admin.h"
#include<string>
#include<fstream>
#include<iostream>
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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ pnlbuttons;
	private: System::Windows::Forms::Button^ btnCourseInProgress;





	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btnCourseGrade;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnFilter;
	private: System::Windows::Forms::Button^ btnGPA;
	private: System::Windows::Forms::Panel^ PnlOfFilter;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ pnlOfCourseGrades;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ pnlOfDetailsOfCourse;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ pnlOfCoursesInProgress;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ pnlOfGPA;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Panel^ panel11;


	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ btnDetailsOfCourse;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

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
		void registerCourse(Course^ course)
		{

			List<String^>^ temp = this->stud->getCoursesINProgress();
			temp->Add(course->getName());
			stud->setCoursesINProgress(temp);
			course->allStudentInProgress->Add(this->stud->getID());

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentPageForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pnlbuttons = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->btnDetailsOfCourse = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->btnCourseInProgress = (gcnew System::Windows::Forms::Button());
			this->btnGPA = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnCourseGrade = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->btnFilter = (gcnew System::Windows::Forms::Button());
			this->PnlOfFilter = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pnlOfCourseGrades = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pnlOfDetailsOfCourse = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pnlOfCoursesInProgress = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pnlOfGPA = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->pnlbuttons->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->PnlOfFilter->SuspendLayout();
			this->pnlOfCourseGrades->SuspendLayout();
			this->pnlOfDetailsOfCourse->SuspendLayout();
			this->pnlOfCoursesInProgress->SuspendLayout();
			this->pnlOfGPA->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AllowDrop = true;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->pnlbuttons);
			this->panel1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel1->Location = System::Drawing::Point(-1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(255, 521);
			this->panel1->TabIndex = 0;
			// 
			// pnlbuttons
			// 
			this->pnlbuttons->BackColor = System::Drawing::Color::Transparent;
			this->pnlbuttons->Controls->Add(this->panel4);
			this->pnlbuttons->Controls->Add(this->btnDetailsOfCourse);
			this->pnlbuttons->Controls->Add(this->panel11);
			this->pnlbuttons->Controls->Add(this->panel10);
			this->pnlbuttons->Controls->Add(this->panel8);
			this->pnlbuttons->Controls->Add(this->btnCourseInProgress);
			this->pnlbuttons->Controls->Add(this->btnGPA);
			this->pnlbuttons->Controls->Add(this->panel3);
			this->pnlbuttons->Controls->Add(this->panel2);
			this->pnlbuttons->Location = System::Drawing::Point(0, 140);
			this->pnlbuttons->Name = L"pnlbuttons";
			this->pnlbuttons->Size = System::Drawing::Size(255, 277);
			this->pnlbuttons->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(0, 127);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(12, 41);
			this->panel4->TabIndex = 8;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentPageForm::panel4_Paint);
			// 
			// btnDetailsOfCourse
			// 
			this->btnDetailsOfCourse->AutoSize = true;
			this->btnDetailsOfCourse->FlatAppearance->BorderSize = 0;
			this->btnDetailsOfCourse->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->btnDetailsOfCourse->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumTurquoise;
			this->btnDetailsOfCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDetailsOfCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDetailsOfCourse->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDetailsOfCourse.Image")));
			this->btnDetailsOfCourse->Location = System::Drawing::Point(-15, 127);
			this->btnDetailsOfCourse->Name = L"btnDetailsOfCourse";
			this->btnDetailsOfCourse->Size = System::Drawing::Size(390, 41);
			this->btnDetailsOfCourse->TabIndex = 7;
			this->btnDetailsOfCourse->Text = L"Details Of Course";
			this->btnDetailsOfCourse->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnDetailsOfCourse->UseVisualStyleBackColor = true;
			this->btnDetailsOfCourse->Click += gcnew System::EventHandler(this, &StudentPageForm::btnDetailsOfCourse_Click_1);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::White;
			this->panel11->Location = System::Drawing::Point(0, 221);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(12, 41);
			this->panel11->TabIndex = 6;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::White;
			this->panel10->Location = System::Drawing::Point(0, 174);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(12, 41);
			this->panel10->TabIndex = 5;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::White;
			this->panel8->Controls->Add(this->panel9);
			this->panel8->Location = System::Drawing::Point(0, 77);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(12, 44);
			this->panel8->TabIndex = 3;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::White;
			this->panel9->Location = System::Drawing::Point(0, 0);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(12, 41);
			this->panel9->TabIndex = 4;
			// 
			// btnCourseInProgress
			// 
			this->btnCourseInProgress->AutoSize = true;
			this->btnCourseInProgress->FlatAppearance->BorderSize = 0;
			this->btnCourseInProgress->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->btnCourseInProgress->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumTurquoise;
			this->btnCourseInProgress->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCourseInProgress->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCourseInProgress->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCourseInProgress.Image")));
			this->btnCourseInProgress->Location = System::Drawing::Point(13, 174);
			this->btnCourseInProgress->Name = L"btnCourseInProgress";
			this->btnCourseInProgress->Size = System::Drawing::Size(270, 41);
			this->btnCourseInProgress->TabIndex = 0;
			this->btnCourseInProgress->Text = L"Courses in Progress";
			this->btnCourseInProgress->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnCourseInProgress->UseVisualStyleBackColor = true;
			this->btnCourseInProgress->Click += gcnew System::EventHandler(this, &StudentPageForm::btnCourseInProgress_Click);
			// 
			// btnGPA
			// 
			this->btnGPA->AutoSize = true;
			this->btnGPA->FlatAppearance->BorderSize = 0;
			this->btnGPA->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->btnGPA->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumTurquoise;
			this->btnGPA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGPA->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGPA->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGPA.Image")));
			this->btnGPA->Location = System::Drawing::Point(-45, 221);
			this->btnGPA->Name = L"btnGPA";
			this->btnGPA->Size = System::Drawing::Size(352, 41);
			this->btnGPA->TabIndex = 4;
			this->btnGPA->Text = L"GPA";
			this->btnGPA->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnGPA->UseVisualStyleBackColor = true;
			this->btnGPA->Click += gcnew System::EventHandler(this, &StudentPageForm::btnGPA_Click);
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
			this->btnCourseGrade->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumTurquoise;
			this->btnCourseGrade->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCourseGrade->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCourseGrade->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->btnCourseGrade->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCourseGrade.Image")));
			this->btnCourseGrade->Location = System::Drawing::Point(-18, -6);
			this->btnCourseGrade->Name = L"btnCourseGrade";
			this->btnCourseGrade->Size = System::Drawing::Size(363, 50);
			this->btnCourseGrade->TabIndex = 0;
			this->btnCourseGrade->Text = L"  Course Grade";
			this->btnCourseGrade->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnCourseGrade->UseVisualStyleBackColor = true;
			this->btnCourseGrade->Click += gcnew System::EventHandler(this, &StudentPageForm::btnCourseGrade_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->btnFilter);
			this->panel2->Location = System::Drawing::Point(0, 27);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(255, 38);
			this->panel2->TabIndex = 0;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->Location = System::Drawing::Point(0, 3);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(12, 44);
			this->panel7->TabIndex = 2;
			// 
			// btnFilter
			// 
			this->btnFilter->AutoSize = true;
			this->btnFilter->FlatAppearance->BorderSize = 0;
			this->btnFilter->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->btnFilter->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumTurquoise;
			this->btnFilter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFilter->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFilter->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFilter.Image")));
			this->btnFilter->Location = System::Drawing::Point(-45, 3);
			this->btnFilter->Name = L"btnFilter";
			this->btnFilter->Size = System::Drawing::Size(403, 41);
			this->btnFilter->TabIndex = 0;
			this->btnFilter->Text = L"   Filter";
			this->btnFilter->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnFilter->UseVisualStyleBackColor = true;
			this->btnFilter->Click += gcnew System::EventHandler(this, &StudentPageForm::btnFilter_Click);
			// 
			// PnlOfFilter
			// 
			this->PnlOfFilter->Controls->Add(this->label1);
			this->PnlOfFilter->Location = System::Drawing::Point(255, 65);
			this->PnlOfFilter->Name = L"PnlOfFilter";
			this->PnlOfFilter->Size = System::Drawing::Size(692, 456);
			this->PnlOfFilter->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Default;
			this->label1->Location = System::Drawing::Point(-3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Filter";
			this->label1->Click += gcnew System::EventHandler(this, &StudentPageForm::label1_Click_1);
			// 
			// pnlOfCourseGrades
			// 
			this->pnlOfCourseGrades->Controls->Add(this->label2);
			this->pnlOfCourseGrades->Location = System::Drawing::Point(255, 62);
			this->pnlOfCourseGrades->Name = L"pnlOfCourseGrades";
			this->pnlOfCourseGrades->Size = System::Drawing::Size(692, 456);
			this->pnlOfCourseGrades->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Default;
			this->label2->Location = System::Drawing::Point(-3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"CourseGrades";
			// 
			// pnlOfDetailsOfCourse
			// 
			this->pnlOfDetailsOfCourse->Controls->Add(this->label3);
			this->pnlOfDetailsOfCourse->Location = System::Drawing::Point(255, 62);
			this->pnlOfDetailsOfCourse->Name = L"pnlOfDetailsOfCourse";
			this->pnlOfDetailsOfCourse->Size = System::Drawing::Size(692, 459);
			this->pnlOfDetailsOfCourse->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Default;
			this->label3->Location = System::Drawing::Point(-3, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 16);
			this->label3->TabIndex = 1;
			this->label3->Text = L"DetailsOfCpurse";
			// 
			// pnlOfCoursesInProgress
			// 
			this->pnlOfCoursesInProgress->Controls->Add(this->label4);
			this->pnlOfCoursesInProgress->Location = System::Drawing::Point(255, 62);
			this->pnlOfCoursesInProgress->Name = L"pnlOfCoursesInProgress";
			this->pnlOfCoursesInProgress->Size = System::Drawing::Size(692, 459);
			this->pnlOfCoursesInProgress->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Default;
			this->label4->Location = System::Drawing::Point(-3, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 16);
			this->label4->TabIndex = 1;
			this->label4->Text = L"CoursesInProgress";
			// 
			// pnlOfGPA
			// 
			this->pnlOfGPA->Controls->Add(this->label5);
			this->pnlOfGPA->Location = System::Drawing::Point(255, 65);
			this->pnlOfGPA->Name = L"pnlOfGPA";
			this->pnlOfGPA->Size = System::Drawing::Size(689, 456);
			this->pnlOfGPA->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::Default;
			this->label5->Location = System::Drawing::Point(3, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 16);
			this->label5->TabIndex = 1;
			this->label5->Text = L"GPA";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::DarkViolet;
			this->panel6->Controls->Add(this->button1);
			this->panel6->Controls->Add(this->pictureBox1);
			this->panel6->Location = System::Drawing::Point(255, -5);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(689, 83);
			this->panel6->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lavender;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(594, 44);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Edit Profile";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(630, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(30, 32);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// StudentPageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(944, 520);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->pnlOfGPA);
			this->Controls->Add(this->pnlOfCoursesInProgress);
			this->Controls->Add(this->pnlOfDetailsOfCourse);
			this->Controls->Add(this->pnlOfCourseGrades);
			this->Controls->Add(this->PnlOfFilter);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"StudentPageForm";
			this->Text = L"StudentPageForm";
			this->Load += gcnew System::EventHandler(this, &StudentPageForm::StudentPageForm_Load);
			this->panel1->ResumeLayout(false);
			this->pnlbuttons->ResumeLayout(false);
			this->pnlbuttons->PerformLayout();
			this->panel8->ResumeLayout(false);
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
			this->pnlOfCoursesInProgress->ResumeLayout(false);
			this->pnlOfCoursesInProgress->PerformLayout();
			this->pnlOfGPA->ResumeLayout(false);
			this->pnlOfGPA->PerformLayout();
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	public: bool loggedOut = false;

	private: System::Void StudentPageForm_Load(System::Object^ sender, System::EventArgs^ e) {

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
		pnlOfGPA->Visible = false;

	}

	private: System::Void btnCourseInProgress_Click(System::Object^ sender, System::EventArgs^ e) {
		PnlOfFilter->Visible = false;
		pnlOfDetailsOfCourse->Visible = false;
		pnlOfCoursesInProgress->Visible = true;
		pnlOfCourseGrades->Visible = false;
		pnlOfGPA->Visible = false;
	}
	private: System::Void btnCourseGrade_Click(System::Object^ sender, System::EventArgs^ e) {
		PnlOfFilter->Visible = false;
		pnlOfDetailsOfCourse->Visible = false;
		pnlOfCoursesInProgress->Visible = false;
		pnlOfCourseGrades->Visible = true;
		pnlOfGPA->Visible = false;
	}
	private: System::Void btnDetailsOfCourse_Click(System::Object^ sender, System::EventArgs^ e) {
		PnlOfFilter->Visible = false;
		pnlOfDetailsOfCourse->Visible = true;
		pnlOfCoursesInProgress->Visible = false;
		pnlOfCourseGrades->Visible = false;
		pnlOfGPA->Visible = false;
	}
private: System::Void btnGPA_Click(System::Object^ sender, System::EventArgs^ e) {

	PnlOfFilter->Visible = false;
	pnlOfDetailsOfCourse->Visible = false;
	pnlOfCoursesInProgress->Visible = false;
	pnlOfCourseGrades->Visible = false;
	pnlOfGPA->Visible = true;
}


private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnDetailsOfCourse_Click_1(System::Object^ sender, System::EventArgs^ e) {
	PnlOfFilter->Visible = false;
	pnlOfDetailsOfCourse->Visible = true;
	pnlOfCoursesInProgress->Visible = false;
	pnlOfCourseGrades->Visible = false;
	pnlOfGPA->Visible = false;
}
};

}