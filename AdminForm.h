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


	private: System::Windows::Forms::Button^ Cancelbt;
	private: System::Windows::Forms::Button^ LOGINbt;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ lbemail;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox5;






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
			List<int>^ studentsInCourse = course->getAllStudentsInCourse();
			for (int i = 0; i < Student::allStudents->Count; i++)
			{
				for (int j = 0; j < studentsInCourse->Count; j++)
				{
					if (Student::allStudents[i]->getID() == studentsInCourse[j])
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Cancelbt = (gcnew System::Windows::Forms::Button());
			this->LOGINbt = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->lbemail = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Controls->Add(this->Cancelbt);
			this->panel3->Controls->Add(this->LOGINbt);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->pictureBox4);
			this->panel3->Controls->Add(this->lbemail);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->textBox2);
			resources->ApplyResources(this->panel3, L"panel3");
			this->panel3->Name = L"panel3";
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::panel3_Paint);
			// 
			// pictureBox3
			// 
			resources->ApplyResources(this->pictureBox3, L"pictureBox3");
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &AdminForm::pictureBox3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox1->Name = L"textBox1";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &AdminForm::textBox1_TextChanged);
			this->textBox1->Enter += gcnew System::EventHandler(this, &AdminForm::tbnameEnter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &AdminForm::tbname_leave);
			// 
			// Cancelbt
			// 
			this->Cancelbt->BackColor = System::Drawing::Color::Firebrick;
			this->Cancelbt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Cancelbt->FlatAppearance->BorderSize = 0;
			this->Cancelbt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Navy;
			resources->ApplyResources(this->Cancelbt, L"Cancelbt");
			this->Cancelbt->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Cancelbt->Name = L"Cancelbt";
			this->Cancelbt->UseVisualStyleBackColor = false;
			this->Cancelbt->Click += gcnew System::EventHandler(this, &AdminForm::Cancelbt_Click);
			// 
			// LOGINbt
			// 
			this->LOGINbt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->LOGINbt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LOGINbt->FlatAppearance->BorderSize = 0;
			this->LOGINbt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Navy;
			resources->ApplyResources(this->LOGINbt, L"LOGINbt");
			this->LOGINbt->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LOGINbt->Name = L"LOGINbt";
			this->LOGINbt->UseVisualStyleBackColor = false;
			this->LOGINbt->Click += gcnew System::EventHandler(this, &AdminForm::LOGINbt_Click_1);
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label3->Name = L"label3";
			// 
			// pictureBox4
			// 
			resources->ApplyResources(this->pictureBox4, L"pictureBox4");
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &AdminForm::pictureBox4_Click);
			// 
			// lbemail
			// 
			this->lbemail->Cursor = System::Windows::Forms::Cursors::Default;
			resources->ApplyResources(this->lbemail, L"lbemail");
			this->lbemail->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->lbemail->Name = L"lbemail";
			// 
			// label1
			// 
			this->label1->Cursor = System::Windows::Forms::Cursors::Default;
			resources->ApplyResources(this->label1, L"label1");
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label1->Name = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &AdminForm::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			resources->ApplyResources(this->textBox2, L"textBox2");
			this->textBox2->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox2->Name = L"textBox2";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &AdminForm::textBox2_TextChanged);
			this->textBox2->Enter += gcnew System::EventHandler(this, &AdminForm::tbpassword_enter);
			this->textBox2->Leave += gcnew System::EventHandler(this, &AdminForm::tbpassword_leave);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &AdminForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox2, L"pictureBox2");
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &AdminForm::pictureBox2_Click_1);
			// 
			// pictureBox5
			// 
			resources->ApplyResources(this->pictureBox5, L"pictureBox5");
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->TabStop = false;
			// 
			// AdminForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel3);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AdminForm";
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
	public:static inline bool validatAdmintData(Admin^ admin);
	public:static inline bool adminLogin(Admin^ admin);
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
	admin = gcnew Admin;
	admin->setNameAdmin(textBox1->Text);
	admin->setPasswordAdmin(textBox2->Text);
    if (adminLogin(admin))
	{
		this->Close();
	}
	else {

		textBox1->Text = "Enter your name";
		textBox1->ForeColor = Color::Gray;

		textBox2->Text = "Enter your password";
		textBox2->PasswordChar = NULL;
		textBox2->ForeColor = Color::Gray;
	}
}
private: System::Void Cancelbt_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBox2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void tbemail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void tbemail_GotFocus(System::Object^ sender, System::EventArgs^ e)
{
		
}
private: System::Void tbemail_LostFocus(System::Object^ sender, System::EventArgs^ e)
{
	
}

private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
}
	
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbnameEnter(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Enter your name")
	{
		textBox1->Text = "";
		textBox1->ForeColor = Color::Black;
	}
}
private: System::Void tbname_leave(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "")
	{
		textBox1->Text = "Enter your name";
		textBox1->ForeColor = Color::Gray;
	}
}
private: System::Void tbpassword_enter(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "Enter your password")
	{
		textBox2->Text = "";
		textBox2->ForeColor = Color::Black;
		textBox2->PasswordChar = '*';
	}
}
private: System::Void tbpassword_leave(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "")
	{
		textBox2->Text = "Enter your password";
		textBox2->PasswordChar = NULL;
		textBox2->ForeColor = Color::Gray;
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
