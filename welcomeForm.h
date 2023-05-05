#pragma once

namespace UMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for welcomeForm
	/// </summary>
	public ref class welcomeForm : public System::Windows::Forms::Form
	{
	public:
		welcomeForm(void)
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
		~welcomeForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ studentbt;
	private: System::Windows::Forms::Button^ adminbt;
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
			this->studentbt = (gcnew System::Windows::Forms::Button());
			this->adminbt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// studentbt
			// 
			this->studentbt->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->studentbt->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studentbt->Location = System::Drawing::Point(388, 135);
			this->studentbt->Name = L"studentbt";
			this->studentbt->Size = System::Drawing::Size(282, 256);
			this->studentbt->TabIndex = 1;
			this->studentbt->Text = L"Student";
			this->studentbt->UseVisualStyleBackColor = false;
			this->studentbt->Click += gcnew System::EventHandler(this, &welcomeForm::studentbt_Click);
			// 
			// adminbt
			// 
			this->adminbt->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->adminbt->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adminbt->Location = System::Drawing::Point(34, 135);
			this->adminbt->Name = L"adminbt";
			this->adminbt->Size = System::Drawing::Size(282, 256);
			this->adminbt->TabIndex = 2;
			this->adminbt->Text = L"Admin";
			this->adminbt->UseVisualStyleBackColor = false;
			this->adminbt->Click += gcnew System::EventHandler(this, &welcomeForm::adminbt_Click);
			// 
			// welcomeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(706, 540);
			this->Controls->Add(this->adminbt);
			this->Controls->Add(this->studentbt);
			this->Name = L"welcomeForm";
			this->Text = L"welcomeForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	public:  bool toStudentLogin = false;
	public:  bool toadminLogin = false;

	private: System::Void studentbt_Click(System::Object^ sender, System::EventArgs^ e) {
		//go to student login form
		this->toStudentLogin = true;
		
		
		//close welcome Form
		this->Close();
	}
	private: System::Void adminbt_Click(System::Object^ sender, System::EventArgs^ e) {
		//go to admin login form
		this->toadminLogin = true;


		//close welcome Form
		this->Close();
	}
	};
}
