#pragma once
#include "Student.h"

namespace UMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SignUp
	/// </summary>
	public ref class SignUp : public System::Windows::Forms::Form
	{
	public:
		SignUp(void)
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
		~SignUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^ toLoginlink;
	protected:

	private: System::Windows::Forms::TextBox^ passwordtxb;
	protected:

	private: System::Windows::Forms::TextBox^ emailtxb;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lbemail;
	private: System::Windows::Forms::Button^ Cancelbt;
	private: System::Windows::Forms::Button^ SignUpbt;

	private: System::Windows::Forms::TextBox^ idtxb;

	private: System::Windows::Forms::TextBox^ nametx;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

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
			this->toLoginlink = (gcnew System::Windows::Forms::LinkLabel());
			this->passwordtxb = (gcnew System::Windows::Forms::TextBox());
			this->emailtxb = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lbemail = (gcnew System::Windows::Forms::Label());
			this->Cancelbt = (gcnew System::Windows::Forms::Button());
			this->SignUpbt = (gcnew System::Windows::Forms::Button());
			this->idtxb = (gcnew System::Windows::Forms::TextBox());
			this->nametx = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// toLoginlink
			// 
			this->toLoginlink->ActiveLinkColor = System::Drawing::Color::Red;
			this->toLoginlink->AutoSize = true;
			this->toLoginlink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toLoginlink->Location = System::Drawing::Point(755, 431);
			this->toLoginlink->Name = L"toLoginlink";
			this->toLoginlink->Size = System::Drawing::Size(85, 32);
			this->toLoginlink->TabIndex = 13;
			this->toLoginlink->TabStop = true;
			this->toLoginlink->Text = L"Login";
			this->toLoginlink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &SignUp::linkLabel1_LinkClicked);
			// 
			// passwordtxb
			// 
			this->passwordtxb->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->passwordtxb->ForeColor = System::Drawing::Color::DarkBlue;
			this->passwordtxb->Location = System::Drawing::Point(275, 267);
			this->passwordtxb->Name = L"passwordtxb";
			this->passwordtxb->Size = System::Drawing::Size(423, 22);
			this->passwordtxb->TabIndex = 12;
			// 
			// emailtxb
			// 
			this->emailtxb->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->emailtxb->ForeColor = System::Drawing::Color::DarkBlue;
			this->emailtxb->Location = System::Drawing::Point(275, 215);
			this->emailtxb->Name = L"emailtxb";
			this->emailtxb->Size = System::Drawing::Size(423, 22);
			this->emailtxb->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->Cursor = System::Windows::Forms::Cursors::Default;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(32, 257);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 38);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Password";
			// 
			// lbemail
			// 
			this->lbemail->Cursor = System::Windows::Forms::Cursors::Default;
			this->lbemail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbemail->Location = System::Drawing::Point(32, 199);
			this->lbemail->Name = L"lbemail";
			this->lbemail->Size = System::Drawing::Size(151, 38);
			this->lbemail->TabIndex = 9;
			this->lbemail->Text = L"e-mail";
			// 
			// Cancelbt
			// 
			this->Cancelbt->Location = System::Drawing::Point(506, 342);
			this->Cancelbt->Name = L"Cancelbt";
			this->Cancelbt->Size = System::Drawing::Size(165, 69);
			this->Cancelbt->TabIndex = 8;
			this->Cancelbt->Text = L"Cancel";
			this->Cancelbt->UseVisualStyleBackColor = true;
			this->Cancelbt->Click += gcnew System::EventHandler(this, &SignUp::Cancelbt_Click);
			// 
			// SignUpbt
			// 
			this->SignUpbt->Location = System::Drawing::Point(262, 344);
			this->SignUpbt->Name = L"SignUpbt";
			this->SignUpbt->Size = System::Drawing::Size(172, 65);
			this->SignUpbt->TabIndex = 7;
			this->SignUpbt->Text = L"SignUp";
			this->SignUpbt->UseVisualStyleBackColor = true;
			this->SignUpbt->Click += gcnew System::EventHandler(this, &SignUp::okbt_Click);
			// 
			// idtxb
			// 
			this->idtxb->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->idtxb->ForeColor = System::Drawing::Color::DarkBlue;
			this->idtxb->Location = System::Drawing::Point(275, 157);
			this->idtxb->Name = L"idtxb";
			this->idtxb->Size = System::Drawing::Size(423, 22);
			this->idtxb->TabIndex = 17;
			// 
			// nametx
			// 
			this->nametx->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->nametx->ForeColor = System::Drawing::Color::DarkBlue;
			this->nametx->Location = System::Drawing::Point(275, 105);
			this->nametx->Name = L"nametx";
			this->nametx->Size = System::Drawing::Size(423, 22);
			this->nametx->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->Cursor = System::Windows::Forms::Cursors::Default;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(32, 147);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 38);
			this->label1->TabIndex = 15;
			this->label1->Text = L"ID\r\n";
			// 
			// label2
			// 
			this->label2->Cursor = System::Windows::Forms::Cursors::Default;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(32, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 38);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Name";
			// 
			// SignUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(890, 514);
			this->Controls->Add(this->idtxb);
			this->Controls->Add(this->nametx);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->toLoginlink);
			this->Controls->Add(this->passwordtxb);
			this->Controls->Add(this->emailtxb);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lbemail);
			this->Controls->Add(this->Cancelbt);
			this->Controls->Add(this->SignUpbt);
			this->Name = L"SignUp";
			this->Text = L"SignUp";
			this->Load += gcnew System::EventHandler(this, &SignUp::SignUp_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: Student^ student = nullptr;

	public: bool switchToLogin = false;


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Cancelbt_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void okbt_Click(System::Object^ sender, System::EventArgs^ e) {
		
		//getting data
		String^ Name = nametx->Text;
		String^ email = nametx->Text;
		String^ Password = passwordtxb->Text;
		String^ idtext = idtxb->Text;
		//validate if empty:
		if (email->Length == 0 || Password->Length == 0 || Name->Length == 0 || idtext->Length == 0) {
			MessageBox::Show("Please fill all the fields",
				"one field or more is empty", MessageBoxButtons::OK);
			return;
		}
		else if ( idtext->Length == 0) {
			MessageBox::Show("Please fill all the fields",
				"one field or more is empty", MessageBoxButtons::OK);
			return;
		}
		else {

			this->Close();
		}

		//possible exception here: 
		int id = int::Parse(idtxb->Text);

		//to do : validate data
		//store to obj student defined in this form if valid
		student = gcnew Student;

		student->setName(Name);
		student->setEmail(email);
		student->setPassword(Password);
		student->setID(id);

			

		//to do : store to file

	}
	private: System::Void SignUp_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		//to do : if data is valid do this:
		this->switchToLogin = true;
		this->Close();
		// else view a message box: 
	}
};
}
