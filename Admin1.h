#pragma once
#include "Course.h"

namespace UMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	/*
	5. View List of all students in a specific course.
	7. View List of all courses(Finished - Progressed) of a specific student.
	*/
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::ListBox^ studentsList;
	protected:

	private:
		/// <summary>
		/// Required designer variable. 
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void viewAllStudinaCourse(Course^ course) {
			this->studentsList->DataSource = course->allStudentInProgress;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->studentsList = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(79, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 49);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(9, 131);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Admin::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 87);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(9, 181);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(147, 12);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 5;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(147, 49);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 6;
			// 
			// studentsList
			// 
			this->studentsList->FormattingEnabled = true;
			this->studentsList->ItemHeight = 16;
			this->studentsList->Location = System::Drawing::Point(147, 106);
			this->studentsList->Name = L"studentsList";
			this->studentsList->Size = System::Drawing::Size(120, 84);
			this->studentsList->TabIndex = 7;
			this->studentsList->SelectedIndexChanged += gcnew System::EventHandler(this, &Admin::studentsList_SelectedIndexChanged);
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->studentsList);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Admin";
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &Admin::Admin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Admin_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void studentsList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
