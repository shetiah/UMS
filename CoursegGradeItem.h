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

	protected:
	private: System::Windows::Forms::Label^ courseNameLb;
	private: System::Windows::Forms::Label^ courseGradeLabel;
	private: System::Windows::Forms::Label^ cscodelabel;



	private: System::Windows::Forms::Label^ csgradelabel;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region MyRegion
	private: String^ courseName;
	private: String^ courseCode;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ csnamelabel;



	private: System::Windows::Forms::PictureBox^ pictureBox2;






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
			this->courseNameLb = (gcnew System::Windows::Forms::Label());
			this->courseGradeLabel = (gcnew System::Windows::Forms::Label());
			this->cscodelabel = (gcnew System::Windows::Forms::Label());
			this->csgradelabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->csnamelabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// courseNameLb
			// 
			this->courseNameLb->AutoSize = true;
			this->courseNameLb->Font = (gcnew System::Drawing::Font(L"Cooper Black", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->courseNameLb->Location = System::Drawing::Point(311, 177);
			this->courseNameLb->Name = L"courseNameLb";
			this->courseNameLb->Size = System::Drawing::Size(147, 23);
			this->courseNameLb->TabIndex = 2;
			this->courseNameLb->Text = L"Course name:";
			this->courseNameLb->Click += gcnew System::EventHandler(this, &CoursegGradeItem::courseNameLb_Click);
			// 
			// courseGradeLabel
			// 
			this->courseGradeLabel->AutoSize = true;
			this->courseGradeLabel->Font = (gcnew System::Drawing::Font(L"Cooper Black", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->courseGradeLabel->ForeColor = System::Drawing::Color::Tan;
			this->courseGradeLabel->Location = System::Drawing::Point(165, 281);
			this->courseGradeLabel->Name = L"courseGradeLabel";
			this->courseGradeLabel->Size = System::Drawing::Size(78, 23);
			this->courseGradeLabel->TabIndex = 3;
			this->courseGradeLabel->Text = L"Grade:";
			// 
			// cscodelabel
			// 
			this->cscodelabel->Font = (gcnew System::Drawing::Font(L"Cooper Black", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cscodelabel->ForeColor = System::Drawing::Color::Tan;
			this->cscodelabel->Location = System::Drawing::Point(3, 229);
			this->cscodelabel->Name = L"cscodelabel";
			this->cscodelabel->Size = System::Drawing::Size(504, 23);
			this->cscodelabel->TabIndex = 5;
			this->cscodelabel->Text = L"Code:";
			this->cscodelabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->cscodelabel->Click += gcnew System::EventHandler(this, &CoursegGradeItem::Codelb_Click);
			// 
			// csgradelabel
			// 
			this->csgradelabel->AutoSize = true;
			this->csgradelabel->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->csgradelabel->ForeColor = System::Drawing::Color::Brown;
			this->csgradelabel->Location = System::Drawing::Point(282, 283);
			this->csgradelabel->Name = L"csgradelabel";
			this->csgradelabel->Size = System::Drawing::Size(66, 21);
			this->csgradelabel->TabIndex = 6;
			this->csgradelabel->Text = L"label2";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel1->Controls->Add(this->courseGradeLabel);
			this->panel1->Controls->Add(this->csgradelabel);
			this->panel1->Controls->Add(this->csnamelabel);
			this->panel1->Controls->Add(this->cscodelabel);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->courseNameLb);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(510, 398);
			this->panel1->TabIndex = 13;
			// 
			// csnamelabel
			// 
			this->csnamelabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->csnamelabel->Font = (gcnew System::Drawing::Font(L"Cooper Black", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->csnamelabel->ForeColor = System::Drawing::Color::Tan;
			this->csnamelabel->Location = System::Drawing::Point(2, 166);
			this->csnamelabel->Name = L"csnamelabel";
			this->csnamelabel->Size = System::Drawing::Size(508, 43);
			this->csnamelabel->TabIndex = 1;
			this->csnamelabel->Text = L"cname";
			this->csnamelabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(169, 13);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(179, 141);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// CoursegGradeItem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel1);
			this->Name = L"CoursegGradeItem";
			this->Size = System::Drawing::Size(510, 398);
			this->Load += gcnew System::EventHandler(this, &CoursegGradeItem::CoursegGradeItem_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void courseNameLb_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CoursegGradeItem_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Codelb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
