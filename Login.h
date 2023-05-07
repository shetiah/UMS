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


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbpassword;
	private: System::Windows::Forms::TextBox^ tbemail;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ LOGINbt;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ Cancelbt;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Panel^ panel3;





























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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->tbemail = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->LOGINbt = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Cancelbt = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->Cursor = System::Windows::Forms::Cursors::Default;
			resources->ApplyResources(this->label6, L"label6");
			this->label6->ForeColor = System::Drawing::Color::SteelBlue;
			this->label6->Name = L"label6";
			// 
			// tbpassword
			// 
			this->tbpassword->Cursor = System::Windows::Forms::Cursors::IBeam;
			resources->ApplyResources(this->tbpassword, L"tbpassword");
			this->tbpassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->TextChanged += gcnew System::EventHandler(this, &Login::tbpassword_TextChanged);
			// 
			// tbemail
			// 
			this->tbemail->Cursor = System::Windows::Forms::Cursors::IBeam;
			resources->ApplyResources(this->tbemail, L"tbemail");
			this->tbemail->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->tbemail->Name = L"tbemail";
			this->tbemail->TextChanged += gcnew System::EventHandler(this, &Login::tbemail_TextChanged);
			// 
			// label2
			// 
			this->label2->Cursor = System::Windows::Forms::Cursors::Default;
			resources->ApplyResources(this->label2, L"label2");
			this->label2->ForeColor = System::Drawing::Color::SteelBlue;
			this->label2->Name = L"label2";
			// 
			// LOGINbt
			// 
			this->LOGINbt->BackColor = System::Drawing::Color::SteelBlue;
			this->LOGINbt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LOGINbt->FlatAppearance->BorderSize = 0;
			this->LOGINbt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Navy;
			resources->ApplyResources(this->LOGINbt, L"LOGINbt");
			this->LOGINbt->ForeColor = System::Drawing::Color::White;
			this->LOGINbt->Name = L"LOGINbt";
			this->LOGINbt->UseVisualStyleBackColor = false;
			this->LOGINbt->Click += gcnew System::EventHandler(this, &Login::LOGINbt_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->pictureBox2);
			resources->ApplyResources(this->panel4, L"panel4");
			this->panel4->Name = L"panel4";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox2, L"pictureBox2");
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->TabStop = false;
			// 
			// Cancelbt
			// 
			this->Cancelbt->BackColor = System::Drawing::Color::SteelBlue;
			this->Cancelbt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Cancelbt->FlatAppearance->BorderSize = 0;
			this->Cancelbt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Navy;
			resources->ApplyResources(this->Cancelbt, L"Cancelbt");
			this->Cancelbt->ForeColor = System::Drawing::Color::White;
			this->Cancelbt->Name = L"Cancelbt";
			this->Cancelbt->UseVisualStyleBackColor = false;
			// 
			// pictureBox3
			// 
			resources->ApplyResources(this->pictureBox3, L"pictureBox3");
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			resources->ApplyResources(this->pictureBox4, L"pictureBox4");
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->TabStop = false;
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::Color::SteelBlue;
			this->label1->Name = L"label1";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->pictureBox4);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->Cancelbt);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->LOGINbt);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->tbemail);
			this->panel3->Controls->Add(this->tbpassword);
			this->panel3->Controls->Add(this->label6);
			resources->ApplyResources(this->panel3, L"panel3");
			this->panel3->Name = L"panel3";
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Login::panel3_Paint_2);
			// 
			// Login
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->panel3);
			this->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
    public: Student^ student = nullptr;
    public: static messagebox^ m;
    public: bool loggedIn = false;
    public:static bool validateStudentData(Student^ stud);
    public:static void studentLogin(Student^ stud);
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
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void LOGINbt_Click(System::Object^ sender, System::EventArgs^ e) {
	student = gcnew Student;
	student->setEmail(tbemail->Text);
	student->setPassword(tbpassword->Text);
	
	studentLogin(student);
	this->Close();

}
private: System::Void tbemail_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void tbpassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint_2(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
