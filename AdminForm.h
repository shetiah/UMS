#pragma once

#include "Course.h"
#include "Student.h"
#include "welcomeForm.h"

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
	private: System::Windows::Forms::ListBox^ studentList;
	private: System::Windows::Forms::Button^ gobackbt;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void viewAllStudinaCourse(Course^ course) {
			List<Student^>^ S;
			this->studentList->DataSource = course->allStudentInProgress;
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
			this->studentList = (gcnew System::Windows::Forms::ListBox());
			this->gobackbt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// studentList
			// 
			this->studentList->FormattingEnabled = true;
			this->studentList->ItemHeight = 16;
			this->studentList->Location = System::Drawing::Point(240, 12);
			this->studentList->Name = L"studentList";
			this->studentList->Size = System::Drawing::Size(119, 164);
			this->studentList->TabIndex = 0;
			this->studentList->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminForm::studentList_SelectedIndexChanged);
			// 
			// gobackbt
			// 
			this->gobackbt->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->gobackbt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->gobackbt->Location = System::Drawing::Point(2, 0);
			this->gobackbt->Name = L"gobackbt";
			this->gobackbt->Size = System::Drawing::Size(175, 74);
			this->gobackbt->TabIndex = 2;
			this->gobackbt->Text = L"<-Go back\r\n";
			this->gobackbt->UseVisualStyleBackColor = false;
			this->gobackbt->Click += gcnew System::EventHandler(this, &AdminForm::gobackbt_Click);
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(446, 253);
			this->Controls->Add(this->gobackbt);
			this->Controls->Add(this->studentList);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	public: static bool gobacktoWelcomeForm = false;

	private: System::Void gobackbt_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
		//go back to welcome form
		this->gobacktoWelcomeForm = true;
		UMS::welcomeForm welcForm;
		welcForm.toadminLogin = false;
	
		
		//close this form
		this->Close();

	}

	

private: System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void studentList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	
};
}
