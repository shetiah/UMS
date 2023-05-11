#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


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
	public:void setCourseName(String^ cname);
	public:String^ getCourseName();
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
		void InitializeComponent(void)
		{
			this->courselab = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// courselab
			// 
			this->courselab->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->courselab->ForeColor = System::Drawing::Color::Black;
			this->courselab->Location = System::Drawing::Point(0, -1);
			this->courselab->Name = L"courselab";
			this->courselab->Size = System::Drawing::Size(219, 30);
			this->courselab->TabIndex = 0;
			this->courselab->Text = L"coursename";
			this->courselab->UseVisualStyleBackColor = false;
			this->courselab->Click += gcnew System::EventHandler(this, &courseButton::courselab_Click);
			// 
			// courseButton
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->courselab);
			this->Name = L"courseButton";
			this->Size = System::Drawing::Size(219, 30);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void selectlb_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   bool clicked = false;
	private: System::Void courselab_Click(System::Object^ sender, System::EventArgs^ e) {
		if(!clicked){
			courselab->BackColor= Color::Red;
			courselab->ForeColor = Color::White;
			clicked = true;
		}
		else
		{
			courselab->BackColor = Color::DeepSkyBlue;
			courselab->ForeColor = Color::Black;
			clicked = false;
		}
	}
	};
}
