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
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox13;









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
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(56, 23);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(145, 162);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// coursenamelb
			// 
			this->coursenamelb->AutoSize = true;
			this->coursenamelb->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->coursenamelb->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->coursenamelb->Location = System::Drawing::Point(13, 187);
			this->coursenamelb->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->coursenamelb->Name = L"coursenamelb";
			this->coursenamelb->Size = System::Drawing::Size(88, 15);
			this->coursenamelb->TabIndex = 1;
			this->coursenamelb->Text = L"Course Name :";
			this->coursenamelb->Click += gcnew System::EventHandler(this, &courselistitem::coursenamelb_Click);
			// 
			// codelb
			// 
			this->codelb->AutoSize = true;
			this->codelb->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codelb->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->codelb->Location = System::Drawing::Point(140, 202);
			this->codelb->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->codelb->Name = L"codelb";
			this->codelb->Size = System::Drawing::Size(32, 13);
			this->codelb->TabIndex = 2;
			this->codelb->Text = L"code";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->label3->Location = System::Drawing::Point(13, 213);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 15);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Instructor :";
			// 
			// instrData
			// 
			this->instrData->AutoSize = true;
			this->instrData->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->instrData->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->instrData->Location = System::Drawing::Point(140, 228);
			this->instrData->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->instrData->Name = L"instrData";
			this->instrData->Size = System::Drawing::Size(29, 13);
			this->instrData->TabIndex = 4;
			this->instrData->Text = L"instr";
			// 
			// maxstdslb
			// 
			this->maxstdslb->AutoSize = true;
			this->maxstdslb->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->maxstdslb->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->maxstdslb->Location = System::Drawing::Point(13, 238);
			this->maxstdslb->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->maxstdslb->Name = L"maxstdslb";
			this->maxstdslb->Size = System::Drawing::Size(88, 15);
			this->maxstdslb->TabIndex = 5;
			this->maxstdslb->Text = L"Max Students :";
			this->maxstdslb->Click += gcnew System::EventHandler(this, &courselistitem::maxstdslb_Click);
			// 
			// hourslb
			// 
			this->hourslb->AutoSize = true;
			this->hourslb->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->hourslb->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->hourslb->Location = System::Drawing::Point(13, 264);
			this->hourslb->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->hourslb->Name = L"hourslb";
			this->hourslb->Size = System::Drawing::Size(46, 15);
			this->hourslb->TabIndex = 6;
			this->hourslb->Text = L"Hours :";
			// 
			// hoursdt
			// 
			this->hoursdt->AutoSize = true;
			this->hoursdt->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hoursdt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->hoursdt->Location = System::Drawing::Point(140, 279);
			this->hoursdt->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->hoursdt->Name = L"hoursdt";
			this->hoursdt->Size = System::Drawing::Size(24, 13);
			this->hoursdt->TabIndex = 8;
			this->hoursdt->Text = L"hdt";
			// 
			// isreqlb
			// 
			this->isreqlb->AutoSize = true;
			this->isreqlb->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->isreqlb->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->isreqlb->Location = System::Drawing::Point(13, 291);
			this->isreqlb->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->isreqlb->Name = L"isreqlb";
			this->isreqlb->Size = System::Drawing::Size(63, 15);
			this->isreqlb->TabIndex = 9;
			this->isreqlb->Text = L"Required :";
			// 
			// isreqdata
			// 
			this->isreqdata->AutoSize = true;
			this->isreqdata->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->isreqdata->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->isreqdata->Location = System::Drawing::Point(140, 306);
			this->isreqdata->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->isreqdata->Name = L"isreqdata";
			this->isreqdata->Size = System::Drawing::Size(43, 13);
			this->isreqdata->TabIndex = 10;
			this->isreqdata->Text = L"isreqdt";
			// 
			// maxstdDt
			// 
			this->maxstdDt->AutoSize = true;
			this->maxstdDt->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maxstdDt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->maxstdDt->Location = System::Drawing::Point(140, 253);
			this->maxstdDt->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->maxstdDt->Name = L"maxstdDt";
			this->maxstdDt->Size = System::Drawing::Size(56, 13);
			this->maxstdDt->TabIndex = 11;
			this->maxstdDt->Text = L"maxstddt";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox18);
			this->panel1->Controls->Add(this->pictureBox17);
			this->panel1->Controls->Add(this->pictureBox16);
			this->panel1->Controls->Add(this->pictureBox15);
			this->panel1->Controls->Add(this->pictureBox14);
			this->panel1->Controls->Add(this->pictureBox13);
			this->panel1->Controls->Add(this->pictureBox12);
			this->panel1->Controls->Add(this->pictureBox11);
			this->panel1->Controls->Add(this->pictureBox10);
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
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
			this->panel1->Location = System::Drawing::Point(30, 22);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(196, 364);
			this->panel1->TabIndex = 12;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(220, 32);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(25, 29);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(112, 354);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(25, 29);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 13;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(220, 253);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(25, 29);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 14;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(46, 14);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(25, 29);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 15;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(23, 324);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(25, 29);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 16;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(26, 132);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(25, 29);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 17;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(206, 119);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(25, 29);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 18;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(206, 370);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(25, 29);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 19;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(5, 370);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(25, 29);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 20;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(3, 62);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(25, 29);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 21;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(188, 306);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(25, 29);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 22;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(176, 156);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(25, 29);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 23;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(158, 0);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(25, 29);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 24;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(75, 385);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(25, 29);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 25;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(233, 334);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(25, 29);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox16->TabIndex = 26;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(233, 168);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(25, 29);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox17->TabIndex = 27;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(158, 385);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(25, 29);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox18->TabIndex = 28;
			this->pictureBox18->TabStop = false;
			// 
			// courselistitem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"courselistitem";
			this->Size = System::Drawing::Size(261, 414);
			this->Load += gcnew System::EventHandler(this, &courselistitem::courselistitem_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void courselistitem_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void coursenamelb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void maxstdslb_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
