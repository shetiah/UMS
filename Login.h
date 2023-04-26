#pragma once
#include"Course.h"
#include"AddCourseForm.h"
#include "Student.h"
#include "messagebox.h"
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

			this->CenterToScreen();
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
	private: System::Windows::Forms::Button^ LOGINbt;
	protected:

	private: System::Windows::Forms::Button^ Cancelbt;
	private: System::Windows::Forms::Label^ lbemail;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbemail;
	private: System::Windows::Forms::TextBox^ tbpassword;
	private: System::Windows::Forms::LinkLabel^ toSignUplink;










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
			this->LOGINbt = (gcnew System::Windows::Forms::Button());
			this->Cancelbt = (gcnew System::Windows::Forms::Button());
			this->lbemail = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbemail = (gcnew System::Windows::Forms::TextBox());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->toSignUplink = (gcnew System::Windows::Forms::LinkLabel());
			
			this->SuspendLayout();
			// 
			// LOGINbt
			// 
			this->LOGINbt->Location = System::Drawing::Point(186, 409);
			this->LOGINbt->Name = L"LOGINbt";
			this->LOGINbt->Size = System::Drawing::Size(172, 65);
			this->LOGINbt->TabIndex = 0;
			this->LOGINbt->Text = L"login";
			this->LOGINbt->UseVisualStyleBackColor = true;
			this->LOGINbt->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// Cancelbt
			// 
			this->Cancelbt->Location = System::Drawing::Point(485, 397);
			this->Cancelbt->Name = L"Cancelbt";
			this->Cancelbt->Size = System::Drawing::Size(165, 69);
			this->Cancelbt->TabIndex = 1;
			this->Cancelbt->Text = L"Cancel";
			this->Cancelbt->UseVisualStyleBackColor = true;
			this->Cancelbt->Click += gcnew System::EventHandler(this, &Login::Cancelbt_Click);
			// 
			// lbemail
			// 
			this->lbemail->Cursor = System::Windows::Forms::Cursors::Default;
			this->lbemail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbemail->Location = System::Drawing::Point(62, 94);
			this->lbemail->Name = L"lbemail";
			this->lbemail->Size = System::Drawing::Size(131, 38);
			this->lbemail->TabIndex = 2;
			this->lbemail->Text = L"e-mail";
			this->lbemail->Click += gcnew System::EventHandler(this, &Login::lbemail_Click);
			// 
			// label1
			// 
			this->label1->Cursor = System::Windows::Forms::Cursors::Default;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(62, 218);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 38);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Password";
			// 
			// tbemail
			// 
			this->tbemail->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tbemail->ForeColor = System::Drawing::Color::DarkBlue;
			this->tbemail->Location = System::Drawing::Point(305, 104);
			this->tbemail->Name = L"tbemail";
			this->tbemail->Size = System::Drawing::Size(423, 22);
			this->tbemail->TabIndex = 4;
			// 
			// tbpassword
			// 
			this->tbpassword->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tbpassword->ForeColor = System::Drawing::Color::DarkBlue;
			this->tbpassword->Location = System::Drawing::Point(305, 228);
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->Size = System::Drawing::Size(423, 22);
			this->tbpassword->TabIndex = 5;
			// 
			// toSignUplink
			// 
			this->toSignUplink->ActiveLinkColor = System::Drawing::Color::Red;
			this->toSignUplink->AutoSize = true;
			this->toSignUplink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toSignUplink->Location = System::Drawing::Point(979, 434);
			this->toSignUplink->Name = L"toSignUplink";
			this->toSignUplink->Size = System::Drawing::Size(108, 32);
			this->toSignUplink->TabIndex = 6;
			this->toSignUplink->TabStop = true;
			this->toSignUplink->Text = L"SignUp";
			this->toSignUplink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::linkLabel1_LinkClicked);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1135, 563);
			this->Controls->Add(this->toSignUplink);
			this->Controls->Add(this->tbpassword);
			this->Controls->Add(this->tbemail);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbemail);
			this->Controls->Add(this->Cancelbt);
			this->Controls->Add(this->LOGINbt);
			this->Name = L"Login";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
    public: Student^ student = nullptr;
	 public: messagebox^ m;
    public: bool switchToRegister = false;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	    //getting data
		String^ email = this->tbemail->Text;
		String^ password = this->tbpassword->Text;
		
		//to do : validate email and password
		//if it's valid login to studentDataForm
		//not valid give a message box 
		
        //can be helpful:
		if (email->Length == 0 || password->Length == 0) {
			/*MessageBox::Show("Please enter email and password",
				"Email or Password Empty", MessageBoxButtons::OK);
			return;*/
			m = gcnew messagebox;
			m->Show();
		}
		else {
			student = gcnew Student;
			//temporary:
			student->setEmail(email);
			student->setPassword(password);
			this->Close();
		}


		
		



	}


	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbemail_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		//register(sign up)

		this->switchToRegister = true;
		this->Close();
	}
	private: System::Void Cancelbt_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void loginlb_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		//to do : validate email and password
		//if it's valid login to studentDataForm
		//not valid give a message box 
		this->Close();


	}
};
}
