#pragma once
#include "Student.h"
#include "Login.h"
#include "Admin.h"
#include<string>
#include<fstream>
#include<iostream>







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
		StudentDataForm()
		{
			InitializeComponent();
			this->CenterToScreen();
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





















	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ CITextBox;

	private: System::Windows::Forms::TextBox^ CTextBox;

	private: System::Windows::Forms::TextBox^ gpaTextBox;

	private: System::Windows::Forms::TextBox^ HTextBox;

	private: System::Windows::Forms::TextBox^ AYTextBox;

	private: System::Windows::Forms::TextBox^ SPassTextBox;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ SnameTextBox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ gpaError;
	private: System::Windows::Forms::Label^ HError;
	private: System::Windows::Forms::Label^ AError;
	private: System::Windows::Forms::Label^ label10;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentDataForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->gpaError = (gcnew System::Windows::Forms::Label());
			this->HError = (gcnew System::Windows::Forms::Label());
			this->AError = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->CITextBox = (gcnew System::Windows::Forms::TextBox());
			this->CTextBox = (gcnew System::Windows::Forms::TextBox());
			this->gpaTextBox = (gcnew System::Windows::Forms::TextBox());
			this->HTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AYTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SPassTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SnameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->gpaError);
			this->panel1->Controls->Add(this->HError);
			this->panel1->Controls->Add(this->AError);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(624, 602);
			this->panel1->TabIndex = 3;
			// 
			// gpaError
			// 
			this->gpaError->AutoSize = true;
			this->gpaError->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gpaError->ForeColor = System::Drawing::Color::Red;
			this->gpaError->Location = System::Drawing::Point(455, 336);
			this->gpaError->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->gpaError->Name = L"gpaError";
			this->gpaError->Size = System::Drawing::Size(151, 19);
			this->gpaError->TabIndex = 20;
			this->gpaError->Text = L"\"Accept numbers Only\"";
			this->gpaError->Visible = false;
			// 
			// HError
			// 
			this->HError->AutoSize = true;
			this->HError->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HError->ForeColor = System::Drawing::Color::Red;
			this->HError->Location = System::Drawing::Point(455, 297);
			this->HError->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->HError->Name = L"HError";
			this->HError->Size = System::Drawing::Size(151, 19);
			this->HError->TabIndex = 19;
			this->HError->Text = L"\"Accept numbers Only\"";
			this->HError->Visible = false;
			// 
			// AError
			// 
			this->AError->AutoSize = true;
			this->AError->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AError->ForeColor = System::Drawing::Color::Red;
			this->AError->Location = System::Drawing::Point(455, 256);
			this->AError->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->AError->Name = L"AError";
			this->AError->Size = System::Drawing::Size(151, 19);
			this->AError->TabIndex = 18;
			this->AError->Text = L"\"Accept numbers Only\"";
			this->AError->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(624, 602);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->CITextBox);
			this->panel2->Controls->Add(this->CTextBox);
			this->panel2->Controls->Add(this->gpaTextBox);
			this->panel2->Controls->Add(this->HTextBox);
			this->panel2->Controls->Add(this->AYTextBox);
			this->panel2->Controls->Add(this->SPassTextBox);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->SnameTextBox);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(621, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(671, 602);
			this->panel2->TabIndex = 4;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(251, 541);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(185, 20);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Please fill all the textBoxes";
			this->label9->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DodgerBlue;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(59, 480);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(571, 59);
			this->button1->TabIndex = 16;
			this->button1->Text = L"ADD";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &StudentDataForm::button1_Click_1);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Gray;
			this->label8->Location = System::Drawing::Point(135, 76);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(301, 46);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Add New Student";
			// 
			// CITextBox
			// 
			this->CITextBox->Location = System::Drawing::Point(144, 411);
			this->CITextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->CITextBox->Multiline = true;
			this->CITextBox->Name = L"CITextBox";
			this->CITextBox->Size = System::Drawing::Size(509, 24);
			this->CITextBox->TabIndex = 14;
			// 
			// CTextBox
			// 
			this->CTextBox->Location = System::Drawing::Point(144, 368);
			this->CTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->CTextBox->Multiline = true;
			this->CTextBox->Name = L"CTextBox";
			this->CTextBox->Size = System::Drawing::Size(509, 24);
			this->CTextBox->TabIndex = 13;
			// 
			// gpaTextBox
			// 
			this->gpaTextBox->Location = System::Drawing::Point(144, 332);
			this->gpaTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->gpaTextBox->Multiline = true;
			this->gpaTextBox->Name = L"gpaTextBox";
			this->gpaTextBox->Size = System::Drawing::Size(509, 24);
			this->gpaTextBox->TabIndex = 12;
			// 
			// HTextBox
			// 
			this->HTextBox->Location = System::Drawing::Point(144, 293);
			this->HTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->HTextBox->Multiline = true;
			this->HTextBox->Name = L"HTextBox";
			this->HTextBox->Size = System::Drawing::Size(509, 24);
			this->HTextBox->TabIndex = 11;
			// 
			// AYTextBox
			// 
			this->AYTextBox->Location = System::Drawing::Point(144, 252);
			this->AYTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->AYTextBox->Multiline = true;
			this->AYTextBox->Name = L"AYTextBox";
			this->AYTextBox->Size = System::Drawing::Size(509, 24);
			this->AYTextBox->TabIndex = 10;
			// 
			// SPassTextBox
			// 
			this->SPassTextBox->Location = System::Drawing::Point(144, 204);
			this->SPassTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->SPassTextBox->Multiline = true;
			this->SPassTextBox->Name = L"SPassTextBox";
			this->SPassTextBox->PasswordChar = '*';
			this->SPassTextBox->Size = System::Drawing::Size(509, 24);
			this->SPassTextBox->TabIndex = 9;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Gray;
			this->label7->Location = System::Drawing::Point(-4, 415);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(148, 19);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Courses in Progress :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Gray;
			this->label6->Location = System::Drawing::Point(-4, 375);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(127, 19);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Finished Courses :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Gray;
			this->label5->Location = System::Drawing::Point(-4, 336);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 19);
			this->label5->TabIndex = 6;
			this->label5->Text = L"GPA :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Gray;
			this->label4->Location = System::Drawing::Point(-4, 297);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(149, 19);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Max Hours Allowed :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Gray;
			this->label3->Location = System::Drawing::Point(-4, 256);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 19);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Academic Year :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Gray;
			this->label2->Location = System::Drawing::Point(-4, 208);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 19);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password :";
			// 
			// SnameTextBox
			// 
			this->SnameTextBox->Location = System::Drawing::Point(144, 158);
			this->SnameTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->SnameTextBox->Multiline = true;
			this->SnameTextBox->Name = L"SnameTextBox";
			this->SnameTextBox->Size = System::Drawing::Size(509, 24);
			this->SnameTextBox->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Gray;
			this->label1->Location = System::Drawing::Point(-4, 170);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Name :";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(671, 37);
			this->panel3->TabIndex = 0;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Right;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(599, 0);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(72, 37);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &StudentDataForm::pictureBox2_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->CausesValidation = false;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::MediumBlue;
			this->label10->Location = System::Drawing::Point(251, 449);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(197, 20);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Student Added Succsessfully";
			this->label10->Visible = false;
			// 
			// StudentDataForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1292, 602);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(1777, 970);
			this->Name = L"StudentDataForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudentDataForm";
			this->Load += gcnew System::EventHandler(this, &StudentDataForm::StudentDataForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void StudentDataForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbUserInfo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

	// All textboxes are filled, don't show the label massege

	if (SnameTextBox->Text->Length > 0 && SPassTextBox->Text->Length > 0
		&& AYTextBox->Text->Length > 0 && HTextBox->Text->Length > 0
		&& gpaTextBox->Text->Length > 0 && CTextBox->Text->Length > 0
		&& CITextBox->Text->Length > 0)
	{
		label9->Visible = false;

	}
	// At least one textbox is empty, show error message
	else
	{

		label9->Visible = true;
		return;
	}



	// retrieve the string values from the textbox and convert it to int
	int AcademicYearInt;
	int Hours;

	bool isHoursNum = int::TryParse(HTextBox->Text, Hours);
	bool isAcademicYearNum = int::TryParse(AYTextBox->Text, AcademicYearInt);


	if (isHoursNum==false)
	{
		HError->Visible = true;
	}
	else
	{
		HError->Visible = false;
	}
	if (isAcademicYearNum == false)
	{
		AError->Visible = true;
	}
	else
	{
		AError->Visible = false;
	}


	// convert the string to float
	float GPAfloat;
	bool isGpANum = float::TryParse(gpaTextBox->Text, GPAfloat);

	if (isGpANum == false)
	{
		gpaError->Visible = true;
	}
	else
	{
		gpaError->Visible = false;
	}




	//convert the string values to list
	String^ finishedString = CTextBox->Text;
	cli::array<String^>^ finishedArray = finishedString->Split(',');
	List<String^>^ finishedList = gcnew List<String^>();
	for each (String ^ str in finishedArray) {
		finishedList->Add(str);
	}

	String^ InprogressString = CITextBox->Text;
	cli::array<String^>^ InprogressArray = InprogressString->Split(',');
	List<String^>^ InprogressList = gcnew List<String^>();
	for each (String ^ str in InprogressArray) {
		InprogressList->Add(str);
	}

	String^ Sname = SnameTextBox->Text;
	String^ Spass = SPassTextBox->Text;


	Admin::createStudent(Sname,Spass, AcademicYearInt, Hours,GPAfloat,finishedList,InprogressList);
	Student::saveStudentDataToFile();
	label10->Visible = true;
	
}
};
}
