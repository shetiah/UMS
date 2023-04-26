#pragma once
#include "Student.h"
#include "Login.h"

inline void viewAvCourses();
inline void filter();
inline void viewDetailsOfaCourse();
inline void viewAllCoursesInProgress();
inline void viewEveryCourseGrade();
inline void viewCGPA();
inline void StudentEditDAta();

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
		StudentDataForm(Student^ stud)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();

			lbUserInfo->Text = "ID=" + stud->getID() + ", Name=" + stud->getName() +
				", email=" + stud->getEmail() + ", address=" + stud->getPassword();
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
	private: System::Windows::Forms::Label^ lbUserInfo;
	private: System::Windows::Forms::Button^ button1;
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
			this->lbUserInfo = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbUserInfo
			// 
			this->lbUserInfo->AutoSize = true;
			this->lbUserInfo->Location = System::Drawing::Point(113, 112);
			this->lbUserInfo->Name = L"lbUserInfo";
			this->lbUserInfo->Size = System::Drawing::Size(44, 16);
			this->lbUserInfo->TabIndex = 0;
			this->lbUserInfo->Text = L"label1";
			this->lbUserInfo->Click += gcnew System::EventHandler(this, &StudentDataForm::lbUserInfo_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(347, 352);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 93);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StudentDataForm::button1_Click);
			// 
			// StudentDataForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(699, 534);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbUserInfo);
			this->Name = L"StudentDataForm";
			this->Text = L"StudentDataForm";
			this->Load += gcnew System::EventHandler(this, &StudentDataForm::StudentDataForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:static bool loggedOut = false;
	private: System::Void StudentDataForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbUserInfo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->loggedOut = true;
		UMS::Login::loggedIn = false;
		this->Close();
	}
	};
}
