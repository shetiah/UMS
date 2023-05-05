#pragma once
//#using <mscorlib.dll>
#include"Course.h"
#include "Student.h"
#include<string>
#include<fstream>
#include<iostream>
using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;



//To Do: Move the function add course to the Admin class (After finishing the admin)
inline void addCourse(Course^ newCourse) { //farah and maya
	String^ courseName = newCourse->getName();
	List<String^>^ prerequisites = Course::preRequires[courseName];

	// If the course already exists in the dictionary, do nothing
	if (Course::preRequires->ContainsKey(courseName))
	{
		return;
	}
	// Add the new course to the dictionary with an empty list of prerequisites
	Course::preRequires->Add(courseName, prerequisites);
	Course::allCourses->Add(newCourse);
}



namespace UMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddCourseForm
	/// </summary>
	public ref class AddCourseForm : public System::Windows::Forms::Form
	{
		bool sidebarExpand;
	public:
		AddCourseForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddCourseForm()
		{
			if (components)
			{
				delete components;
			}
		}/*
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ addCourseBtn;*/


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
	private: System::Windows::Forms::Button^ addCourseBtn;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ nameTextBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ hoursTextBox;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ maxStudentsTextBox;
	private: System::Windows::Forms::TextBox^ instructorTextBox;
	private: System::Windows::Forms::TextBox^ prereqTextBox;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ codeTextBox;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label12;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::FlowLayoutPanel^ sidebar;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ button5;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ menuButton;

	private: System::Windows::Forms::Timer^ SidebarTimer;

	private: System::ComponentModel::IContainer^ components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddCourseForm::typeid));
			this->addCourseBtn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->hoursTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->maxStudentsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->instructorTextBox = (gcnew System::Windows::Forms::TextBox());
			this->prereqTextBox = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->codeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->sidebar = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuButton = (gcnew System::Windows::Forms::PictureBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SidebarTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->sidebar->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuButton))->BeginInit();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// addCourseBtn
			// 
			this->addCourseBtn->Location = System::Drawing::Point(403, 398);
			this->addCourseBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addCourseBtn->Name = L"addCourseBtn";
			this->addCourseBtn->Size = System::Drawing::Size(139, 55);
			this->addCourseBtn->TabIndex = 1;
			this->addCourseBtn->Text = L"ADD";
			this->addCourseBtn->UseVisualStyleBackColor = true;
			this->addCourseBtn->Click += gcnew System::EventHandler(this, &AddCourseForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 27);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Course Name:";
			// 
			// nameTextBox
			// 
			this->nameTextBox->Location = System::Drawing::Point(113, 27);
			this->nameTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(132, 22);
			this->nameTextBox->TabIndex = 3;
			this->nameTextBox->TextChanged += gcnew System::EventHandler(this, &AddCourseForm::nameTextBox_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(45, 68);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Hours:";
			// 
			// hoursTextBox
			// 
			this->hoursTextBox->Location = System::Drawing::Point(113, 68);
			this->hoursTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->hoursTextBox->Name = L"hoursTextBox";
			this->hoursTextBox->Size = System::Drawing::Size(132, 22);
			this->hoursTextBox->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(5, 114);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Max Students:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 153);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Instructor:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 196);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 16);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Prerequisites:";
			// 
			// maxStudentsTextBox
			// 
			this->maxStudentsTextBox->Location = System::Drawing::Point(113, 114);
			this->maxStudentsTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->maxStudentsTextBox->Name = L"maxStudentsTextBox";
			this->maxStudentsTextBox->Size = System::Drawing::Size(132, 22);
			this->maxStudentsTextBox->TabIndex = 9;
			// 
			// instructorTextBox
			// 
			this->instructorTextBox->Location = System::Drawing::Point(113, 153);
			this->instructorTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->instructorTextBox->Name = L"instructorTextBox";
			this->instructorTextBox->Size = System::Drawing::Size(132, 22);
			this->instructorTextBox->TabIndex = 10;
			// 
			// prereqTextBox
			// 
			this->prereqTextBox->Location = System::Drawing::Point(113, 196);
			this->prereqTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->prereqTextBox->Name = L"prereqTextBox";
			this->prereqTextBox->Size = System::Drawing::Size(132, 22);
			this->prereqTextBox->TabIndex = 11;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(19, 59);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(105, 20);
			this->radioButton1->TabIndex = 12;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Requirement";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(19, 87);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(76, 20);
			this->radioButton2->TabIndex = 13;
			this->radioButton2->Text = L"Elective";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(15, 17);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(230, 16);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Is this course Requirement or Elective";
			this->label7->Click += gcnew System::EventHandler(this, &AddCourseForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(51, 242);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 16);
			this->label8->TabIndex = 15;
			this->label8->Text = L"code:";
			// 
			// codeTextBox
			// 
			this->codeTextBox->Location = System::Drawing::Point(113, 242);
			this->codeTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->codeTextBox->Name = L"codeTextBox";
			this->codeTextBox->Size = System::Drawing::Size(132, 22);
			this->codeTextBox->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::Control;
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(363, 370);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(214, 16);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Sorry , you must fill all the textboxes";
			this->label9->Visible = false;
			this->label9->Click += gcnew System::EventHandler(this, &AddCourseForm::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::Control;
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(253, 71);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(165, 16);
			this->label10->TabIndex = 18;
			this->label10->Text = L"please enter numbers only";
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::Control;
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(253, 117);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(165, 16);
			this->label11->TabIndex = 19;
			this->label11->Text = L"please enter numbers only";
			this->label11->Visible = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(944, 34);
			this->panel1->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label12->Location = System::Drawing::Point(261, 9);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(268, 24);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Universty Management System";
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::Firebrick;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(903, 10);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(29, 21);
			this->button3->TabIndex = 0;
			this->button3->Text = L"X";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AddCourseForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(903, 10);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(29, 21);
			this->button2->TabIndex = 0;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(903, 10);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(29, 21);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::Control;
			this->label13->ForeColor = System::Drawing::Color::Blue;
			this->label13->Location = System::Drawing::Point(387, 470);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(175, 16);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Course Added Successfully!";
			this->label13->Visible = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->radioButton2);
			this->panel2->Controls->Add(this->radioButton1);
			this->panel2->Location = System::Drawing::Point(645, 62);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(273, 121);
			this->panel2->TabIndex = 22;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->codeTextBox);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->prereqTextBox);
			this->panel3->Controls->Add(this->instructorTextBox);
			this->panel3->Controls->Add(this->maxStudentsTextBox);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->hoursTextBox);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->nameTextBox);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Location = System::Drawing::Point(171, 62);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(429, 283);
			this->panel3->TabIndex = 23;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AddCourseForm::panel3_Paint);
			// 
			// sidebar
			// 
			this->sidebar->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->sidebar->Controls->Add(this->panel5);
			this->sidebar->Controls->Add(this->panel7);
			this->sidebar->Controls->Add(this->panel6);
			this->sidebar->Controls->Add(this->panel4);
			this->sidebar->Dock = System::Windows::Forms::DockStyle::Left;
			this->sidebar->Location = System::Drawing::Point(0, 34);
			this->sidebar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sidebar->MaximumSize = System::Drawing::Size(147, 462);
			this->sidebar->MinimumSize = System::Drawing::Size(40, 462);
			this->sidebar->Name = L"sidebar";
			this->sidebar->Size = System::Drawing::Size(147, 462);
			this->sidebar->TabIndex = 24;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel5->Controls->Add(this->label1);
			this->panel5->Controls->Add(this->menuButton);
			this->panel5->Location = System::Drawing::Point(3, 2);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(143, 58);
			this->panel5->TabIndex = 1;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AddCourseForm::panel5_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Menu";
			this->label1->Click += gcnew System::EventHandler(this, &AddCourseForm::label1_Click);
			// 
			// menuButton
			// 
			this->menuButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->menuButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuButton.Image")));
			this->menuButton->Location = System::Drawing::Point(3, 14);
			this->menuButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->menuButton->Name = L"menuButton";
			this->menuButton->Size = System::Drawing::Size(27, 26);
			this->menuButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->menuButton->TabIndex = 0;
			this->menuButton->TabStop = false;
			this->menuButton->Click += gcnew System::EventHandler(this, &AddCourseForm::menuButton_Click);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->button6);
			this->panel7->Location = System::Drawing::Point(3, 64);
			this->panel7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(143, 52);
			this->panel7->TabIndex = 0;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->Location = System::Drawing::Point(0, 2);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(143, 43);
			this->button6->TabIndex = 25;
			this->button6->Text = L"Home";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &AddCourseForm::button4_Click);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->button5);
			this->panel6->Location = System::Drawing::Point(3, 120);
			this->panel6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(143, 52);
			this->panel6->TabIndex = 0;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(-3, 6);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(143, 43);
			this->button5->TabIndex = 25;
			this->button5->Text = L"Admin";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &AddCourseForm::button4_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button4);
			this->panel4->Location = System::Drawing::Point(3, 176);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(143, 52);
			this->panel4->TabIndex = 0;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(0, 6);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(143, 43);
			this->button4->TabIndex = 25;
			this->button4->Text = L"Student";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &AddCourseForm::button4_Click);
			// 
			// SidebarTimer
			// 
			this->SidebarTimer->Tick += gcnew System::EventHandler(this, &AddCourseForm::SidebarTimer_Tick);
			// 
			// AddCourseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(944, 495);
			this->Controls->Add(this->sidebar);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->addCourseBtn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"AddCourseForm";
			this->Text = L"UMS";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &AddCourseForm::AddCourseForm_Load_1);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->sidebar->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuButton))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddCourseForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
		   private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			   label13->Visible = false;
			   // All textboxes are filled, don't show the label massege

			   if (nameTextBox->Text->Length > 0 &&
				   hoursTextBox->Text->Length > 0 &&
				   maxStudentsTextBox->Text->Length > 0 &&
				   instructorTextBox->Text->Length > 0 &&
				   prereqTextBox->Text->Length > 0 &&
				   codeTextBox->Text->Length > 0)
			   {
				   label9->Visible = false;
			   }
			   // At least one textbox is empty, show error message
			   else
			   {

				   label9->Visible = true;
				   return;
			   }

			   int hours;
			   int maxStudents;

			   bool isHoursValid = int::TryParse(hoursTextBox->Text, hours);
			   bool isMaxStudentsValid = int::TryParse(maxStudentsTextBox->Text, maxStudents);

			   if (isHoursValid == false)
			   {
				   label10->Visible = true;
				   label11->Visible = false;

				   return;
			   }
			   else if (isMaxStudentsValid == false)
			   {
				   label10->Visible = false;

				   label11->Visible = true;
				   return;

			   }
			   else if (isHoursValid == false && isMaxStudentsValid == false)
			   {
				   label10->Visible = true;
				   label11->Visible = true;
				   return;

			   }

			   // get the course information from the text boxes
			   String^ courseName = nameTextBox->Text;



			   String^ instructor = instructorTextBox->Text;
			   String^ prereqStr = prereqTextBox->Text;
			   String^ code = codeTextBox->Text;

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

			   if (radioButton1->Checked == true)
			   {

				   newCourse->setIsRequirement(true);

			   }
			   else if (radioButton2->Checked == true && radioButton1->Checked == false)
			   {
				   newCourse->setIsRequirement(false);
			   }
			   label13->Visible = true;
			   addCourse(newCourse);
			   Course::allCourses->Add(newCourse);
			   Course::eachCourseHours->Add(courseName, hours);
		   }


	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e)
	{}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Course::saveCourseDataToFile();
	Course::saveCourseContentToFile();
	Course::saveCourseHoursToFile();
	Student::saveStudentDataToFile();
	Environment::Exit(0);
}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void AddCourseForm_Load_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void SidebarTimer_Tick(System::Object^ sender, System::EventArgs^ e) {

	
	// set min and max size of side bar
	if (sidebarExpand) {
		// minimize if expand
		sidebar->Width = 10;
		if (sidebar->Width == sidebar->MinimumSize.Width) {
			sidebarExpand = false;
			SidebarTimer->Stop();
		}
	}
	else {
		sidebar->Width += 10;
		if (sidebar->Width == sidebar->MaximumSize.Width) {
			sidebarExpand = true;
			SidebarTimer->Stop();
		}
	}
}

private: System::Void menuButton_Click(System::Object^ sender, System::EventArgs^ e) {
	SidebarTimer->Start();
}
private: System::Void nameTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
