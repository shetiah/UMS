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





	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ coursenamelb;
	private: System::Windows::Forms::Label^ codelb;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ instrData;
	private: System::Windows::Forms::Label^ maxstdslb;
	private: System::Windows::Forms::Label^ hourslb;

	private: System::Windows::Forms::Label^ hoursdt;
	private: System::Windows::Forms::Label^ isreqlb;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->coursenamelb = (gcnew System::Windows::Forms::Label());
			this->codelb = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->instrData = (gcnew System::Windows::Forms::Label());
			this->maxstdslb = (gcnew System::Windows::Forms::Label());
			this->hourslb = (gcnew System::Windows::Forms::Label());
			this->hoursdt = (gcnew System::Windows::Forms::Label());
			this->isreqlb = (gcnew System::Windows::Forms::Label());
			this->isreqdata = (gcnew System::Windows::Forms::Label());
			this->maxstdDt = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(35, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(193, 200);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// coursenamelb
			// 
			this->coursenamelb->AutoSize = true;
			this->coursenamelb->Location = System::Drawing::Point(35, 230);
			this->coursenamelb->Name = L"coursenamelb";
			this->coursenamelb->Size = System::Drawing::Size(48, 16);
			this->coursenamelb->TabIndex = 1;
			this->coursenamelb->Text = L"cname";
			this->coursenamelb->Click += gcnew System::EventHandler(this, &courselistitem::coursenamelb_Click);
			// 
			// codelb
			// 
			this->codelb->AutoSize = true;
			this->codelb->Location = System::Drawing::Point(111, 230);
			this->codelb->Name = L"codelb";
			this->codelb->Size = System::Drawing::Size(38, 16);
			this->codelb->TabIndex = 2;
			this->codelb->Text = L"code";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(35, 262);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"instructor:";
			// 
			// instrData
			// 
			this->instrData->AutoSize = true;
			this->instrData->Location = System::Drawing::Point(114, 262);
			this->instrData->Name = L"instrData";
			this->instrData->Size = System::Drawing::Size(31, 16);
			this->instrData->TabIndex = 4;
			this->instrData->Text = L"instr";
			// 
			// maxstdslb
			// 
			this->maxstdslb->AutoSize = true;
			this->maxstdslb->Location = System::Drawing::Point(35, 308);
			this->maxstdslb->Name = L"maxstdslb";
			this->maxstdslb->Size = System::Drawing::Size(60, 16);
			this->maxstdslb->TabIndex = 5;
			this->maxstdslb->Text = L"maxstds:";
			// 
			// hourslb
			// 
			this->hourslb->AutoSize = true;
			this->hourslb->Location = System::Drawing::Point(35, 346);
			this->hourslb->Name = L"hourslb";
			this->hourslb->Size = System::Drawing::Size(40, 16);
			this->hourslb->TabIndex = 6;
			this->hourslb->Text = L"hours";
			// 
			// hoursdt
			// 
			this->hoursdt->AutoSize = true;
			this->hoursdt->Location = System::Drawing::Point(114, 346);
			this->hoursdt->Name = L"hoursdt";
			this->hoursdt->Size = System::Drawing::Size(25, 16);
			this->hoursdt->TabIndex = 8;
			this->hoursdt->Text = L"hdt";
			// 
			// isreqlb
			// 
			this->isreqlb->AutoSize = true;
			this->isreqlb->Location = System::Drawing::Point(32, 380);
			this->isreqlb->Name = L"isreqlb";
			this->isreqlb->Size = System::Drawing::Size(37, 16);
			this->isreqlb->TabIndex = 9;
			this->isreqlb->Text = L"isreq";
			// 
			// isreqdata
			// 
			this->isreqdata->AutoSize = true;
			this->isreqdata->Location = System::Drawing::Point(107, 380);
			this->isreqdata->Name = L"isreqdata";
			this->isreqdata->Size = System::Drawing::Size(48, 16);
			this->isreqdata->TabIndex = 10;
			this->isreqdata->Text = L"isreqdt";
			// 
			// maxstdDt
			// 
			this->maxstdDt->AutoSize = true;
			this->maxstdDt->Location = System::Drawing::Point(114, 308);
			this->maxstdDt->Name = L"maxstdDt";
			this->maxstdDt->Size = System::Drawing::Size(61, 16);
			this->maxstdDt->TabIndex = 11;
			this->maxstdDt->Text = L"maxstddt";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->maxstdDt);
			this->panel1->Controls->Add(this->isreqdata);
			this->panel1->Controls->Add(this->isreqlb);
			this->panel1->Controls->Add(this->hoursdt);
			this->panel1->Controls->Add(this->hourslb);
			this->panel1->Controls->Add(this->maxstdslb);
			this->panel1->Controls->Add(this->instrData);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->codelb);
			this->panel1->Controls->Add(this->coursenamelb);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(40, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(262, 448);
			this->panel1->TabIndex = 12;
			// 
			// courselistitem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel1);
			this->Name = L"courselistitem";
			this->Size = System::Drawing::Size(348, 510);
			this->Load += gcnew System::EventHandler(this, &courselistitem::courselistitem_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void courselistitem_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void coursenamelb_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
