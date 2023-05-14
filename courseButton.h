#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

using namespace System::Collections::Generic;

namespace UMS {

	/// <summary>
	/// Summary for courseButton
	/// </summary>
	public ref class courseButton : public System::Windows::Forms::UserControl
	{
	public:
		courseButton(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	public:static List<courseButton^>^ alldetailsbtns= gcnew List<courseButton^>();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~courseButton()
		{
			if (components)
			{
				delete components;
			}
		}
#pragma region MyRegion
	private:String^ coursename;
	private:Button^ bt= gcnew System::Windows::Forms::Button();
	
	public:void setCourseName(String^ cname);
	public:String^ getCourseName();
	public:Button^ getBt();
	public:void setBtColor(Color color);
	public:void setforecolor(Color color);
	public:bool isselected = false;
	public:static bool registerCourse = false;
	public:static bool courseDetails = false;

#pragma endregion

	private: System::Windows::Forms::Button^ courselab;
	protected:

	protected:

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
		/// 
		/// 
		/// 
		Button^ cslbtemp = (gcnew System::Windows::Forms::Button());
		void InitializeComponent(void)
		{
			this->courselab = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// courselab
			// 
			this->courselab->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->courselab->FlatAppearance->BorderSize = 0;
			this->courselab->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->courselab->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8, System::Drawing::FontStyle::Bold));
			this->courselab->ForeColor = System::Drawing::Color::Tan;
			this->courselab->Location = System::Drawing::Point(0, -1);
			this->courselab->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->courselab->Name = L"courselab";
			this->courselab->Size = System::Drawing::Size(219, 30);
			this->courselab->TabIndex = 0;
			this->courselab->Text = L"coursename";
			this->courselab->UseVisualStyleBackColor = false;
			this->courselab->Click += gcnew System::EventHandler(this, &courseButton::courselab_Click);
			this->courselab->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &courseButton::mourseclick);
			// 
			// courseButton
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->courselab);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"courseButton";
			this->Size = System::Drawing::Size(219, 30);
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void selectlb_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		 
	private: System::Void courselab_Click(System::Object^ sender, System::EventArgs^ e) {
		int c = 0;
		if(courselab->BackColor == ColorTranslator::FromHtml("#17171F")){
			courselab->BackColor= Color::Brown;
			courselab->ForeColor = Color::White;
			isselected = true;
			if (courseDetails)
			{
				for each (auto i in this->alldetailsbtns)
				{
					
					if (i->courselab != this->courselab)
					{
						i->courselab->BackColor = ColorTranslator::FromHtml("#17171F");
						i->courselab->ForeColor = Color::Tan;
						i->isselected = false;
					}
					
				}
			}
		
		}
		else
		{
			courselab->BackColor = ColorTranslator::FromHtml("#17171F");
			courselab->ForeColor = Color::White;
			isselected = false;
		}
	}
	private: System::Void mourseclick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	
	}
};
}
