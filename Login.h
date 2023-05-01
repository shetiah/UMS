#pragma once
#include"Course.h"
#include"AddCourseForm.h"
#include "Student.h"
#include "messagebox.h"

inline bool validateData();
inline void studentLogin();
 
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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;










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
			this->LOGINbt = (gcnew System::Windows::Forms::Button());
			this->Cancelbt = (gcnew System::Windows::Forms::Button());
			this->lbemail = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbemail = (gcnew System::Windows::Forms::TextBox());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->toSignUplink = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// LOGINbt
			// 
			this->LOGINbt->BackColor = System::Drawing::Color::DodgerBlue;
			this->LOGINbt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LOGINbt->FlatAppearance->BorderSize = 0;
			this->LOGINbt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LOGINbt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LOGINbt->ForeColor = System::Drawing::Color::White;
			this->LOGINbt->Location = System::Drawing::Point(27, 332);
			this->LOGINbt->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->LOGINbt->Name = L"LOGINbt";
			this->LOGINbt->Size = System::Drawing::Size(428, 48);
			this->LOGINbt->TabIndex = 0;
			this->LOGINbt->Text = L"LOGIN";
			this->LOGINbt->UseVisualStyleBackColor = false;
			this->LOGINbt->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// Cancelbt
			// 
			this->Cancelbt->BackColor = System::Drawing::Color::DodgerBlue;
			this->Cancelbt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Cancelbt->FlatAppearance->BorderSize = 0;
			this->Cancelbt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cancelbt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancelbt->ForeColor = System::Drawing::Color::White;
			this->Cancelbt->Location = System::Drawing::Point(27, 423);
			this->Cancelbt->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Cancelbt->Name = L"Cancelbt";
			this->Cancelbt->Size = System::Drawing::Size(428, 48);
			this->Cancelbt->TabIndex = 1;
			this->Cancelbt->Text = L"Cancel";
			this->Cancelbt->UseVisualStyleBackColor = false;
			this->Cancelbt->Click += gcnew System::EventHandler(this, &Login::Cancelbt_Click);
			// 
			// lbemail
			// 
			this->lbemail->Cursor = System::Windows::Forms::Cursors::Default;
			this->lbemail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbemail->ForeColor = System::Drawing::Color::Gray;
			this->lbemail->Location = System::Drawing::Point(23, 136);
			this->lbemail->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbemail->Name = L"lbemail";
			this->lbemail->Size = System::Drawing::Size(98, 31);
			this->lbemail->TabIndex = 2;
			this->lbemail->Text = L"e-mail";
			this->lbemail->Click += gcnew System::EventHandler(this, &Login::lbemail_Click);
			// 
			// label1
			// 
			this->label1->Cursor = System::Windows::Forms::Cursors::Default;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Gray;
			this->label1->Location = System::Drawing::Point(22, 229);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 31);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Password";
			// 
			// tbemail
			// 
			this->tbemail->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tbemail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbemail->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->tbemail->Location = System::Drawing::Point(27, 169);
			this->tbemail->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tbemail->Multiline = true;
			this->tbemail->Name = L"tbemail";
			this->tbemail->Size = System::Drawing::Size(427, 43);
			this->tbemail->TabIndex = 4;
			// 
			// tbpassword
			// 
			this->tbpassword->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->tbpassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbpassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->tbpassword->Location = System::Drawing::Point(26, 262);
			this->tbpassword->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tbpassword->Multiline = true;
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->PasswordChar = '*';
			this->tbpassword->Size = System::Drawing::Size(427, 43);
			this->tbpassword->TabIndex = 5;
			// 
			// toSignUplink
			// 
			this->toSignUplink->ActiveLinkColor = System::Drawing::Color::Red;
			this->toSignUplink->AutoSize = true;
			this->toSignUplink->Cursor = System::Windows::Forms::Cursors::Hand;
			this->toSignUplink->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toSignUplink->Location = System::Drawing::Point(277, 387);
			this->toSignUplink->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->toSignUplink->Name = L"toSignUplink";
			this->toSignUplink->Size = System::Drawing::Size(52, 17);
			this->toSignUplink->TabIndex = 6;
			this->toSignUplink->TabStop = true;
			this->toSignUplink->Text = L"SignUp";
			this->toSignUplink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::linkLabel1_LinkClicked);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(971, 504);
			this->panel1->TabIndex = 7;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->toSignUplink);
			this->panel3->Controls->Add(this->pictureBox4);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->Cancelbt);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->LOGINbt);
			this->panel3->Controls->Add(this->lbemail);
			this->panel3->Controls->Add(this->tbemail);
			this->panel3->Controls->Add(this->tbpassword);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(468, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(503, 504);
			this->panel3->TabIndex = 1;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Login::panel3_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Gray;
			this->label3->Location = System::Drawing::Point(202, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 37);
			this->label3->TabIndex = 10;
			this->label3->Text = L"LogIn";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(148, 388);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 15);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Don\'t have an account\?";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(405, 269);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(36, 29);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(405, 176);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(36, 29);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->pictureBox2);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(503, 29);
			this->panel4->TabIndex = 6;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Right;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(465, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(38, 29);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Login::pictureBox2_click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(468, 504);
			this->panel2->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(468, 504);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(985, 528);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximumSize = System::Drawing::Size(1333, 788);
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
    public: Student^ student = nullptr;
    public: messagebox^ m;
    public: bool switchToRegister = false;
    public:static bool loggedIn = false;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	    //getting data
		String^ email = this->tbemail->Text;
		String^ password = this->tbpassword->Text;
		
		
		//to do : validate email and password
		
		//7atet elfnc hena awrehalk bs
		validateData();
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
            studentLogin();
			
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

private: System::Void pictureBox2_click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
