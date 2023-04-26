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
			// StudentDataForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(699, 534);
			this->Controls->Add(this->lbUserInfo);
			this->Name = L"StudentDataForm";
			this->Text = L"StudentDataForm";
			this->Load += gcnew System::EventHandler(this, &StudentDataForm::StudentDataForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StudentDataForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbUserInfo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
