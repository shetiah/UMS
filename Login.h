#pragma once
#include"Course.h"
#include"AddCourseForm.h"
#include "Student.h"
#include "messagebox.h"
#include "welcomeForm.h"
 
namespace UMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->CenterToScreen();/*
			this->axWindowsMediaPlayer1->URL = "U:\\UMS\\images\\rep.mp4";*/
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;


	private: System::Windows::Forms::Button^ Cancelbt;
	private: System::Windows::Forms::Button^ LOGINbt;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ lbemail;
	private: System::Windows::Forms::TextBox^ tbemail;
	private: System::Windows::Forms::TextBox^ tbpassword;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	protected:




	protected:

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
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->Cancelbt = (gcnew System::Windows::Forms::Button());
			this->LOGINbt = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lbemail = (gcnew System::Windows::Forms::Label());
			this->tbemail = (gcnew System::Windows::Forms::TextBox());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->pictureBox6);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->Cancelbt);
			this->panel3->Controls->Add(this->LOGINbt);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->lbemail);
			this->panel3->Controls->Add(this->tbemail);
			this->panel3->Controls->Add(this->tbpassword);
			this->panel3->Controls->Add(this->label1);
			resources->ApplyResources(this->panel3, L"panel3");
			this->panel3->Name = L"panel3";
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Login::panel3_Paint);
			// 
			// pictureBox6
			// 
			resources->ApplyResources(this->pictureBox6, L"pictureBox6");
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Login::pictureBox6_Click);
			// 
			// pictureBox3
			// 
			resources->ApplyResources(this->pictureBox3, L"pictureBox3");
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Login::pictureBox3_Click);
			// 
			// Cancelbt
			// 
			this->Cancelbt->BackColor = System::Drawing::Color::Firebrick;
			this->Cancelbt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Cancelbt->FlatAppearance->BorderSize = 0;
			this->Cancelbt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Navy;
			resources->ApplyResources(this->Cancelbt, L"Cancelbt");
			this->Cancelbt->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->Cancelbt->Name = L"Cancelbt";
			this->Cancelbt->UseVisualStyleBackColor = false;
			this->Cancelbt->Click += gcnew System::EventHandler(this, &Login::Cancelbt_Click_1);
			// 
			// LOGINbt
			// 
			this->LOGINbt->BackColor = System::Drawing::Color::SteelBlue;
			this->LOGINbt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LOGINbt->FlatAppearance->BorderSize = 0;
			this->LOGINbt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Navy;
			resources->ApplyResources(this->LOGINbt, L"LOGINbt");
			this->LOGINbt->ForeColor = System::Drawing::Color::AliceBlue;
			this->LOGINbt->Name = L"LOGINbt";
			this->LOGINbt->UseVisualStyleBackColor = false;
			this->LOGINbt->Click += gcnew System::EventHandler(this, &Login::LOGINbt_Click_1);
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::Color::SteelBlue;
			this->label3->Name = L"label3";
			// 
			// lbemail
			// 
			this->lbemail->Cursor = System::Windows::Forms::Cursors::Default;
			resources->ApplyResources(this->lbemail, L"lbemail");
			this->lbemail->ForeColor = System::Drawing::Color::SteelBlue;
			this->lbemail->Name = L"lbemail";
			// 
			// tbemail
			// 
			this->tbemail->Cursor = System::Windows::Forms::Cursors::IBeam;
			resources->ApplyResources(this->tbemail, L"tbemail");
			this->tbemail->ForeColor = System::Drawing::SystemColors::GrayText;
			this->tbemail->Name = L"tbemail";
			this->tbemail->TextChanged += gcnew System::EventHandler(this, &Login::tbemail_TextChanged_1);
			this->tbemail->Enter += gcnew System::EventHandler(this, &Login::tbemail_enter);
			this->tbemail->Leave += gcnew System::EventHandler(this, &Login::tbemail_leave);
			// 
			// tbpassword
			// 
			this->tbpassword->Cursor = System::Windows::Forms::Cursors::IBeam;
			resources->ApplyResources(this->tbpassword, L"tbpassword");
			this->tbpassword->ForeColor = System::Drawing::SystemColors::GrayText;
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->Enter += gcnew System::EventHandler(this, &Login::tbpassword_enter);
			this->tbpassword->Leave += gcnew System::EventHandler(this, &Login::tbpassword_leave);
			// 
			// label1
			// 
			this->label1->Cursor = System::Windows::Forms::Cursors::Default;
			resources->ApplyResources(this->label1, L"label1");
			this->label1->ForeColor = System::Drawing::Color::SteelBlue;
			this->label1->Name = L"label1";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox2, L"pictureBox2");
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Login::pictureBox2_Click_1);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox5, L"pictureBox5");
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Login::pictureBox5_Click);
			// 
			// Login
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
    public: static Student^ student = gcnew Student;
    public: static messagebox^ m;
    public: bool loggedIn = false;
    public:static bool validateStudentData(Student^ stud);
    public:static bool studentLogin(Student^ stud);

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Login bt


		
		



	}
	private: System::Void gobackbt_Click(System::Object^ sender, System::EventArgs^ e) {
		//go back to welcomeForm button



		
		//go back to welcome form 
		/*UMS::welcomeForm::gobacktoWelcomeForm = true;
		UMS::welcomeForm welcForm;
		welcForm.toStudentLogin = false;*/

		
		//close the login form
		this->Close();
	}
	private: System::Void Cancelbt_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}





	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbemail_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		//register(sign up)

	
	}
	

private: System::Void pictureBox2_click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}


private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void panel3_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void LOGINbt_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void tbemail_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void tbpassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint_2(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void axWindowsMediaPlayer1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void axWindowsMediaPlayer1_Enter_1(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBox2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//go back bt
	welcomeForm::gobacktoWelc = true;
	welcomeForm::tostdLogin = false;
	this->Close();
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Cancelbt_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void tbemail_enter(System::Object^ sender, System::EventArgs^ e) {
	if (tbemail->Text == "Enter your email")
	{
		tbemail->Text = "";
		tbemail->ForeColor =Color::Black;
	}
}
private: System::Void tbemail_leave(System::Object^ sender, System::EventArgs^ e) {
	if (tbemail->Text =="")
	{
		 tbemail->Text = "Enter your email";
		tbemail->ForeColor = Color::Gray;
	}
}
private: System::Void tbpassword_enter(System::Object^ sender, System::EventArgs^ e) {
	if (tbpassword->Text == "Enter your password")
	{
		tbpassword->Text = "";
		tbpassword->ForeColor = Color::Black;
		tbpassword->PasswordChar = '*';
	}
}
private: System::Void tbpassword_leave(System::Object^ sender, System::EventArgs^ e) {
	if (tbpassword->Text == "")
	{
		tbpassword->Text = "Enter your password"; 
		tbpassword->PasswordChar = NULL;
		tbpassword->ForeColor = Color::Gray;
	}
}
private: System::Void tbemail_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LOGINbt_Click_1(System::Object^ sender, System::EventArgs^ e) {
	student->setEmail(tbemail->Text);
	student->setPassword(tbpassword->Text);
	if (studentLogin(student))
	{
		for each (auto i in Student::allStudents)
		{
			if (i->getEmail() == student->getEmail() && i->getPassword() == student->getPassword()) {
				student = i;
			}
		}
		this->Close();
	}
	else {

		tbemail->Text = "Enter your email";
		tbemail->ForeColor = Color::Gray;

		tbpassword->Text = "Enter your password";
		tbpassword->PasswordChar = NULL;
		tbpassword->ForeColor = Color::Gray;
	}
}
};
}
