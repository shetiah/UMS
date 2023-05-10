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
		courselistitem(void)
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
	private:int hours;
	private: void setName(String^ name);
	private:void setCode(String^ code);
	private: void setInstructor(String^ instructor);
	private: void setIsRequirement(bool isRequirement);
	private:void setMaxNumberOfStudents(int maxNumberOfStudents);
	private: void setHours(int hours);

	private: String^ getName();
	private:String^ getCode();
	private: String^ getInstructor();
	private:bool getIsRequirement();
	private:int getMaxNumberOfStudents();
	private: int getHours();
#pragma endregion





	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ coursenamelb;
	private: System::Windows::Forms::Label^ code;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ instrData;
	private: System::Windows::Forms::Label^ maxstdslb;
	private: System::Windows::Forms::Label^ hourslb;
	private: System::Windows::Forms::Label^ maxlbdt;
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
			this->code = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->instrData = (gcnew System::Windows::Forms::Label());
			this->maxstdslb = (gcnew System::Windows::Forms::Label());
			this->hourslb = (gcnew System::Windows::Forms::Label());
			this->maxlbdt = (gcnew System::Windows::Forms::Label());
			this->hoursdt = (gcnew System::Windows::Forms::Label());
			this->isreqlb = (gcnew System::Windows::Forms::Label());
			this->isreqdata = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(63, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(193, 200);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// coursenamelb
			// 
			this->coursenamelb->AutoSize = true;
			this->coursenamelb->Location = System::Drawing::Point(63, 239);
			this->coursenamelb->Name = L"coursenamelb";
			this->coursenamelb->Size = System::Drawing::Size(48, 16);
			this->coursenamelb->TabIndex = 1;
			this->coursenamelb->Text = L"cname";
			// 
			// code
			// 
			this->code->AutoSize = true;
			this->code->Location = System::Drawing::Point(139, 239);
			this->code->Name = L"code";
			this->code->Size = System::Drawing::Size(38, 16);
			this->code->TabIndex = 2;
			this->code->Text = L"code";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(63, 271);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"instructor:";
			// 
			// instrData
			// 
			this->instrData->AutoSize = true;
			this->instrData->Location = System::Drawing::Point(142, 271);
			this->instrData->Name = L"instrData";
			this->instrData->Size = System::Drawing::Size(31, 16);
			this->instrData->TabIndex = 4;
			this->instrData->Text = L"instr";
			// 
			// maxstdslb
			// 
			this->maxstdslb->AutoSize = true;
			this->maxstdslb->Location = System::Drawing::Point(63, 317);
			this->maxstdslb->Name = L"maxstdslb";
			this->maxstdslb->Size = System::Drawing::Size(60, 16);
			this->maxstdslb->TabIndex = 5;
			this->maxstdslb->Text = L"maxstds:";
			// 
			// hourslb
			// 
			this->hourslb->AutoSize = true;
			this->hourslb->Location = System::Drawing::Point(63, 355);
			this->hourslb->Name = L"hourslb";
			this->hourslb->Size = System::Drawing::Size(40, 16);
			this->hourslb->TabIndex = 6;
			this->hourslb->Text = L"hours";
			// 
			// maxlbdt
			// 
			this->maxlbdt->AutoSize = true;
			this->maxlbdt->Location = System::Drawing::Point(142, 317);
			this->maxlbdt->Name = L"maxlbdt";
			this->maxlbdt->Size = System::Drawing::Size(61, 16);
			this->maxlbdt->TabIndex = 7;
			this->maxlbdt->Text = L"maxstddt";
			// 
			// hoursdt
			// 
			this->hoursdt->AutoSize = true;
			this->hoursdt->Location = System::Drawing::Point(142, 355);
			this->hoursdt->Name = L"hoursdt";
			this->hoursdt->Size = System::Drawing::Size(25, 16);
			this->hoursdt->TabIndex = 8;
			this->hoursdt->Text = L"hdt";
			// 
			// isreqlb
			// 
			this->isreqlb->AutoSize = true;
			this->isreqlb->Location = System::Drawing::Point(60, 389);
			this->isreqlb->Name = L"isreqlb";
			this->isreqlb->Size = System::Drawing::Size(37, 16);
			this->isreqlb->TabIndex = 9;
			this->isreqlb->Text = L"isreq";
			// 
			// isreqdata
			// 
			this->isreqdata->AutoSize = true;
			this->isreqdata->Location = System::Drawing::Point(135, 389);
			this->isreqdata->Name = L"isreqdata";
			this->isreqdata->Size = System::Drawing::Size(48, 16);
			this->isreqdata->TabIndex = 10;
			this->isreqdata->Text = L"isreqdt";
			// 
			// courselistitem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->isreqdata);
			this->Controls->Add(this->isreqlb);
			this->Controls->Add(this->hoursdt);
			this->Controls->Add(this->maxlbdt);
			this->Controls->Add(this->hourslb);
			this->Controls->Add(this->maxstdslb);
			this->Controls->Add(this->instrData);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->code);
			this->Controls->Add(this->coursenamelb);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"courselistitem";
			this->Size = System::Drawing::Size(348, 510);
			this->Load += gcnew System::EventHandler(this, &courselistitem::courselistitem_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void courselistitem_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
