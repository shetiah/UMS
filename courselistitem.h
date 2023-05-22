#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace UMS {

	/// <summary>
	/// Summary for courselistitem
	/// </summary>
	public ref class courselistitem : public System::Windows::Forms::UserControl
	{
	public:
		courselistitem()
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
#pragma region prop
	private:String^ name;
	private:String^ Code;
	private:String^ instructor;
	private:bool isRequirement;
	private:int maxNumberOfStudents;
	private: System::Windows::Forms::Label^ maxstdDt;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ coursenamelb;



























	private:int hours;
	public: void setName(String^ name);
	public:void setCode(String^ code);
	public: void setInstructor(String^ instructor);
	public: void setIsRequirement(bool isRequirement);
	public:void setMaxNumberOfStudents(int maxNumberOfStudents);
	public: void setHours(int hours);

	public: String^ getName();
	public:String^ getCode();
	public: String^ getInstructor();
	public:bool getIsRequirement();
	public:int getMaxNumberOfStudents();
	public: int getHours();
#pragma endregion






	protected:

	private: System::Windows::Forms::Label^ codelb;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ instrData;
	private: System::Windows::Forms::Label^ maxstdslb;
	private: System::Windows::Forms::Label^ hourslb;

	private: System::Windows::Forms::Label^ hoursdt;

	private: System::Windows::Forms::Label^ isreqdata;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(courselistitem::typeid));
			this->codelb = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->instrData = (gcnew System::Windows::Forms::Label());
			this->maxstdslb = (gcnew System::Windows::Forms::Label());
			this->hourslb = (gcnew System::Windows::Forms::Label());
			this->hoursdt = (gcnew System::Windows::Forms::Label());
			this->isreqdata = (gcnew System::Windows::Forms::Label());
			this->maxstdDt = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->coursenamelb = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// codelb
			// 
			this->codelb->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9));
			this->codelb->ForeColor = System::Drawing::Color::Brown;
			this->codelb->Location = System::Drawing::Point(0, 200);
			this->codelb->Name = L"codelb";
			this->codelb->Size = System::Drawing::Size(510, 26);
			this->codelb->TabIndex = 2;
			this->codelb->Text = L"code";
			this->codelb->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Tan;
			this->label3->Location = System::Drawing::Point(166, 271);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"instructor:";
			// 
			// instrData
			// 
			this->instrData->AutoSize = true;
			this->instrData->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->instrData->ForeColor = System::Drawing::Color::Brown;
			this->instrData->Location = System::Drawing::Point(267, 271);
			this->instrData->Name = L"instrData";
			this->instrData->Size = System::Drawing::Size(45, 17);
			this->instrData->TabIndex = 4;
			this->instrData->Text = L"instr";
			// 
			// maxstdslb
			// 
			this->maxstdslb->AutoSize = true;
			this->maxstdslb->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9));
			this->maxstdslb->ForeColor = System::Drawing::Color::Tan;
			this->maxstdslb->Location = System::Drawing::Point(166, 311);
			this->maxstdslb->Name = L"maxstdslb";
			this->maxstdslb->Size = System::Drawing::Size(76, 17);
			this->maxstdslb->TabIndex = 5;
			this->maxstdslb->Text = L"maxstds:";
			// 
			// hourslb
			// 
			this->hourslb->AutoSize = true;
			this->hourslb->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9));
			this->hourslb->ForeColor = System::Drawing::Color::Tan;
			this->hourslb->Location = System::Drawing::Point(166, 348);
			this->hourslb->Name = L"hourslb";
			this->hourslb->Size = System::Drawing::Size(57, 17);
			this->hourslb->TabIndex = 6;
			this->hourslb->Text = L"hours:";
			// 
			// hoursdt
			// 
			this->hoursdt->AutoSize = true;
			this->hoursdt->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9));
			this->hoursdt->ForeColor = System::Drawing::Color::Brown;
			this->hoursdt->Location = System::Drawing::Point(267, 348);
			this->hoursdt->Name = L"hoursdt";
			this->hoursdt->Size = System::Drawing::Size(35, 17);
			this->hoursdt->TabIndex = 8;
			this->hoursdt->Text = L"hdt";
			// 
			// isreqdata
			// 
			this->isreqdata->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9));
			this->isreqdata->ForeColor = System::Drawing::Color::Brown;
			this->isreqdata->Location = System::Drawing::Point(0, 226);
			this->isreqdata->Name = L"isreqdata";
			this->isreqdata->Size = System::Drawing::Size(511, 21);
			this->isreqdata->TabIndex = 10;
			this->isreqdata->Text = L"isrequired";
			this->isreqdata->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->isreqdata->Click += gcnew System::EventHandler(this, &courselistitem::isreqdata_Click);
			// 
			// maxstdDt
			// 
			this->maxstdDt->AutoSize = true;
			this->maxstdDt->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9));
			this->maxstdDt->ForeColor = System::Drawing::Color::Brown;
			this->maxstdDt->Location = System::Drawing::Point(267, 311);
			this->maxstdDt->Name = L"maxstdDt";
			this->maxstdDt->Size = System::Drawing::Size(81, 17);
			this->maxstdDt->TabIndex = 11;
			this->maxstdDt->Text = L"maxstddt";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel1->Controls->Add(this->coursenamelb);
			this->panel1->Controls->Add(this->codelb);
			this->panel1->Controls->Add(this->isreqdata);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->maxstdDt);
			this->panel1->Controls->Add(this->hoursdt);
			this->panel1->Controls->Add(this->hourslb);
			this->panel1->Controls->Add(this->maxstdslb);
			this->panel1->Controls->Add(this->instrData);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(510, 398);
			this->panel1->TabIndex = 12;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &courselistitem::panel1_Paint);
			// 
			// coursenamelb
			// 
			this->coursenamelb->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->coursenamelb->Font = (gcnew System::Drawing::Font(L"Cooper Black", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->coursenamelb->ForeColor = System::Drawing::Color::Tan;
			this->coursenamelb->Location = System::Drawing::Point(3, 157);
			this->coursenamelb->Name = L"coursenamelb";
			this->coursenamelb->Size = System::Drawing::Size(508, 43);
			this->coursenamelb->TabIndex = 1;
			this->coursenamelb->Text = L"cname";
			this->coursenamelb->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->coursenamelb->Click += gcnew System::EventHandler(this, &courselistitem::coursenamelb_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(169, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(179, 141);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// courselistitem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"courselistitem";
			this->Size = System::Drawing::Size(510, 398);
			this->Load += gcnew System::EventHandler(this, &courselistitem::courselistitem_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void courselistitem_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void coursenamelb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void maxstdslb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void isreqdata_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
