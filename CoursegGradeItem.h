#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace UMS {

	/// <summary>
	/// Summary for CoursegGradeItem
	/// </summary>
	public ref class CoursegGradeItem : public System::Windows::Forms::UserControl
	{
	public:
		CoursegGradeItem(void)
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
		~CoursegGradeItem()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ courseNameLb;
	private: System::Windows::Forms::Label^ courseGradeLabel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Codelb;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region MyRegion
	private: String^ courseName;
	private: String^ courseCode;
	private: float courseGrade;
	public: String^ getName();
	public: String^ getCode();
	public: float getGrade();
	public: void setName(String^ Name);
	public: void setCode(String^ Code);
	public: void setGrade(float Grade);
#pragma endregion


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CoursegGradeItem::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->courseNameLb = (gcnew System::Windows::Forms::Label());
			this->courseGradeLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Codelb = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(24, 34);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(231, 169);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// courseNameLb
			// 
			this->courseNameLb->AutoSize = true;
			this->courseNameLb->Font = (gcnew System::Drawing::Font(L"Cooper Black", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->courseNameLb->Location = System::Drawing::Point(3, 229);
			this->courseNameLb->Name = L"courseNameLb";
			this->courseNameLb->Size = System::Drawing::Size(144, 23);
			this->courseNameLb->TabIndex = 2;
			this->courseNameLb->Text = L"course name:";
			this->courseNameLb->Click += gcnew System::EventHandler(this, &CoursegGradeItem::courseNameLb_Click);
			// 
			// courseGradeLabel
			// 
			this->courseGradeLabel->AutoSize = true;
			this->courseGradeLabel->Font = (gcnew System::Drawing::Font(L"Cooper Black", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->courseGradeLabel->Location = System::Drawing::Point(3, 261);
			this->courseGradeLabel->Name = L"courseGradeLabel";
			this->courseGradeLabel->Size = System::Drawing::Size(78, 23);
			this->courseGradeLabel->TabIndex = 3;
			this->courseGradeLabel->Text = L"Grade:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(187, 236);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"label1";
			// 
			// Codelb
			// 
			this->Codelb->AutoSize = true;
			this->Codelb->Font = (gcnew System::Drawing::Font(L"Cooper Black", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Codelb->Location = System::Drawing::Point(3, 298);
			this->Codelb->Name = L"Codelb";
			this->Codelb->Size = System::Drawing::Size(66, 23);
			this->Codelb->TabIndex = 5;
			this->Codelb->Text = L"Code:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(187, 268);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(187, 298);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"label3";
			// 
			// CoursegGradeItem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Codelb);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->courseGradeLabel);
			this->Controls->Add(this->courseNameLb);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"CoursegGradeItem";
			this->Size = System::Drawing::Size(281, 374);
			this->Load += gcnew System::EventHandler(this, &CoursegGradeItem::CoursegGradeItem_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void courseNameLb_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CoursegGradeItem_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
