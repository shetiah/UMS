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
	private: System::Windows::Forms::Label^ csnamelabel;

	private: System::Windows::Forms::Label^ Codelb;
	private: System::Windows::Forms::Label^ csgradelabel;
	private: System::Windows::Forms::Label^ cscodelabel;



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
			this->csnamelabel = (gcnew System::Windows::Forms::Label());
			this->Codelb = (gcnew System::Windows::Forms::Label());
			this->csgradelabel = (gcnew System::Windows::Forms::Label());
			this->cscodelabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(27, 20);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(226, 162);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// courseNameLb
			// 
			this->courseNameLb->AutoSize = true;
			this->courseNameLb->Font = (gcnew System::Drawing::Font(L"Cooper Black", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->courseNameLb->Location = System::Drawing::Point(13, 217);
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
			this->courseGradeLabel->Location = System::Drawing::Point(13, 310);
			this->courseGradeLabel->Name = L"courseGradeLabel";
			this->courseGradeLabel->Size = System::Drawing::Size(78, 23);
			this->courseGradeLabel->TabIndex = 3;
			this->courseGradeLabel->Text = L"Grade:";
			// 
			// csnamelabel
			// 
			this->csnamelabel->AutoSize = true;
			this->csnamelabel->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->csnamelabel->Location = System::Drawing::Point(166, 223);
			this->csnamelabel->Name = L"csnamelabel";
			this->csnamelabel->Size = System::Drawing::Size(53, 17);
			this->csnamelabel->TabIndex = 4;
			this->csnamelabel->Text = L"label1";
			// 
			// Codelb
			// 
			this->Codelb->AutoSize = true;
			this->Codelb->Font = (gcnew System::Drawing::Font(L"Cooper Black", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Codelb->Location = System::Drawing::Point(13, 266);
			this->Codelb->Name = L"Codelb";
			this->Codelb->Size = System::Drawing::Size(66, 23);
			this->Codelb->TabIndex = 5;
			this->Codelb->Text = L"Code:";
			this->Codelb->Click += gcnew System::EventHandler(this, &CoursegGradeItem::Codelb_Click);
			// 
			// csgradelabel
			// 
			this->csgradelabel->AutoSize = true;
			this->csgradelabel->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->csgradelabel->Location = System::Drawing::Point(166, 314);
			this->csgradelabel->Name = L"csgradelabel";
			this->csgradelabel->Size = System::Drawing::Size(53, 17);
			this->csgradelabel->TabIndex = 6;
			this->csgradelabel->Text = L"label2";
			// 
			// cscodelabel
			// 
			this->cscodelabel->AutoSize = true;
			this->cscodelabel->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cscodelabel->Location = System::Drawing::Point(166, 270);
			this->cscodelabel->Name = L"cscodelabel";
			this->cscodelabel->Size = System::Drawing::Size(53, 17);
			this->cscodelabel->TabIndex = 7;
			this->cscodelabel->Text = L"label3";
			// 
			// CoursegGradeItem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->cscodelabel);
			this->Controls->Add(this->csgradelabel);
			this->Controls->Add(this->Codelb);
			this->Controls->Add(this->csnamelabel);
			this->Controls->Add(this->courseGradeLabel);
			this->Controls->Add(this->courseNameLb);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"CoursegGradeItem";
			this->Size = System::Drawing::Size(359, 374);
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
private: System::Void Codelb_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
