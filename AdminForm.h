#pragma once

#include "Course.h"
#include "Student.h"
#include "welcomeForm.h"
#include "messagebox.h"
#include "Admin.h"
namespace UMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel3;
	protected:

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ Cancelbt;
	private: System::Windows::Forms::Button^ LOGINbt;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ lbemail;
	private: System::Windows::Forms::TextBox^ tbemail;
	private: System::Windows::Forms::TextBox^ tbpassword;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label2;





	protected:



















	protected:





















	protected:


















	protected:





































	protected:




















	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void viewAllStudinaCourse(Course^ course) {
			List<Student^>^ S;/*
			this->studentList->DataSource = course->allStudentInProgress;*/
			int studentCount=0;
			for (int i = 0; i < Student::allStudents->Count; i++)
			{
				for (int j = 0; j < course->allStudentInProgress->Count; j++)
				{
					if (Student::allStudents[i]->getID() == course->allStudentInProgress[j])
					{
						S[studentCount] = Student::allStudents[i];
						studentCount++;
					}
				}
			}
		}

		void viewCoursesFinishedofaStudent(Student^ student) {
			student->getFinishedCourses();
		}

		void viewAllStudInACourse(Student^ student) {
			student->getCoursesINProgress();
		}





		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Cancelbt = (gcnew System::Windows::Forms::Button());
			this->LOGINbt = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->lbemail = (gcnew System::Windows::Forms::Label());
			this->tbemail = (gcnew System::Windows::Forms::TextBox());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->Cancelbt);
			this->panel3->Controls->Add(this->LOGINbt);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->pictureBox4);
			this->panel3->Controls->Add(this->lbemail);
			this->panel3->Controls->Add(this->tbemail);
			this->panel3->Controls->Add(this->tbpassword);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Location = System::Drawing::Point(720, 118);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(604, 560);
			this->panel3->TabIndex = 2;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::panel3_Paint);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox3->Location = System::Drawing::Point(518, 195);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(59, 36);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &AdminForm::pictureBox3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"High Tower Text", 13.8F));
			this->label5->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label5->Location = System::Drawing::Point(11, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(500, 27);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Enter your name                                                       ";
			this->label5->Click += gcnew System::EventHandler(this, &AdminForm::label5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"High Tower Text", 13.8F));
			this->label2->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label2->Location = System::Drawing::Point(11, 318);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(497, 27);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Enter your password                                                ";
			this->label2->Click += gcnew System::EventHandler(this, &AdminForm::label2_Click_1);
			// 
			// Cancelbt
			// 
			this->Cancelbt->BackColor = System::Drawing::Color::Firebrick;
			this->Cancelbt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Cancelbt->FlatAppearance->BorderSize = 0;
			this->Cancelbt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Navy;
			this->Cancelbt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cancelbt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->Cancelbt->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->Cancelbt->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Cancelbt->Location = System::Drawing::Point(183, 473);
			this->Cancelbt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Cancelbt->Name = L"Cancelbt";
			this->Cancelbt->Size = System::Drawing::Size(231, 59);
			this->Cancelbt->TabIndex = 1;
			this->Cancelbt->Text = L"Cancel";
			this->Cancelbt->UseVisualStyleBackColor = false;
			this->Cancelbt->Click += gcnew System::EventHandler(this, &AdminForm::Cancelbt_Click);
			// 
			// LOGINbt
			// 
			this->LOGINbt->BackColor = System::Drawing::Color::SteelBlue;
			this->LOGINbt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LOGINbt->FlatAppearance->BorderSize = 0;
			this->LOGINbt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Navy;
			this->LOGINbt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LOGINbt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->LOGINbt->ForeColor = System::Drawing::Color::AliceBlue;
			this->LOGINbt->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->LOGINbt->Location = System::Drawing::Point(183, 395);
			this->LOGINbt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->LOGINbt->Name = L"LOGINbt";
			this->LOGINbt->Size = System::Drawing::Size(231, 55);
			this->LOGINbt->TabIndex = 0;
			this->LOGINbt->Text = L"LOGIN";
			this->LOGINbt->UseVisualStyleBackColor = false;
			this->LOGINbt->Click += gcnew System::EventHandler(this, &AdminForm::LOGINbt_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::SteelBlue;
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(244, 86);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 46);
			this->label3->TabIndex = 10;
			this->label3->Text = L"LogIn";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox4->Location = System::Drawing::Point(518, 313);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(59, 36);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &AdminForm::pictureBox4_Click);
			// 
			// lbemail
			// 
			this->lbemail->Cursor = System::Windows::Forms::Cursors::Default;
			this->lbemail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->lbemail->ForeColor = System::Drawing::Color::SteelBlue;
			this->lbemail->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->lbemail->Location = System::Drawing::Point(5, 149);
			this->lbemail->Name = L"lbemail";
			this->lbemail->Size = System::Drawing::Size(131, 38);
			this->lbemail->TabIndex = 2;
			this->lbemail->Text = L"Name";
			// 
			// tbemail
			// 
			this->tbemail->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tbemail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->tbemail->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->tbemail->Location = System::Drawing::Point(11, 195);
			this->tbemail->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbemail->Multiline = true;
			this->tbemail->Name = L"tbemail";
			this->tbemail->Size = System::Drawing::Size(568, 36);
			this->tbemail->TabIndex = 4;
			this->tbemail->TextChanged += gcnew System::EventHandler(this, &AdminForm::tbemail_TextChanged);
			// 
			// tbpassword
			// 
			this->tbpassword->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tbpassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->tbpassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->tbpassword->Location = System::Drawing::Point(9, 313);
			this->tbpassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbpassword->Multiline = true;
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->PasswordChar = '*';
			this->tbpassword->Size = System::Drawing::Size(568, 36);
			this->tbpassword->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->Cursor = System::Windows::Forms::Cursors::Default;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::SteelBlue;
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(4, 263);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 38);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Password";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(79, 76);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &AdminForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1356, 1);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(52, 55);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &AdminForm::pictureBox2_Click_1);
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1420, 800);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel3);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(1777, 970);
			this->Name = L"AdminForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->Text = L"AdminForm";
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
	public:static inline bool validatAdmintData(Admin^ admin);
	public:static inline void adminLogin(Admin^ admin);
	public: Admin^ admin = nullptr;
	public: static messagebox^ m;
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		//go back bt
		welcomeForm::gobacktoWelc = true;
		welcomeForm::toadmLogin = false;
		this->Close();



	}








	private: System::Void gobackbt_Click_2(System::Object^ sender, System::EventArgs^ e) {
	
	}

private: System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void studentList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

}

		private: System::Void gobackbt_Click(System::Object^ sender, System::EventArgs^ e) {


		}


	   private: System::Void gobackbt_Click_1(System::Object^ sender, System::EventArgs^ e) {

	   }



private: System::Void LOGINbt_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LOGINbt_Click_1(System::Object^ sender, System::EventArgs^ e) {
	adminLogin(admin);
	this->Close();
}
private: System::Void Cancelbt_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBox2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void tbemail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->label5->Hide();
		this->tbemail->Focus();
		if (this->tbemail->Text == "")
			label5->Show();
		this->tbemail->Focused;

			this->label5->Hide();
}
private: System::Void tbemail_GotFocus(System::Object^ sender, System::EventArgs^ e)
{
		this->label5->Hide();
		if (this->tbemail->Text == "")
			label5->Show();
}
private: System::Void tbemail_LostFocus(System::Object^ sender, System::EventArgs^ e)
{
	this->label5->Show();
	
}

private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label5->Hide();
	this->tbemail->Focus();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->label2->Hide();
	this->tbpassword->Focus();
}
	
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label5->Hide();
	this->tbemail->Focus();
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
