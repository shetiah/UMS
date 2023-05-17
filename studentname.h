#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace UMS {

	/// <summary>
	/// Summary for studentname
	/// </summary>
	public ref class studentname : public System::Windows::Forms::UserControl
	{
	public:
		studentname(void)
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
		~studentname()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ studentnamebt;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region MyRegion
	private :String^ studentName;
	public :String^ getStudentname();
	public	 :void setStudentname(String^ student);
#pragma endregion

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->studentnamebt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// studentnamebt
			// 
			this->studentnamebt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->studentnamebt->FlatAppearance->BorderColor = System::Drawing::Color::Tan;
			this->studentnamebt->FlatAppearance->BorderSize = 3;
			this->studentnamebt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Brown;
			this->studentnamebt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			this->studentnamebt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->studentnamebt->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studentnamebt->ForeColor = System::Drawing::Color::Tan;
			this->studentnamebt->Location = System::Drawing::Point(0, 0);
			this->studentnamebt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->studentnamebt->Name = L"studentnamebt";
			this->studentnamebt->Size = System::Drawing::Size(145, 45);
			this->studentnamebt->TabIndex = 1;
			this->studentnamebt->Text = L"ahmed mohsen salah";
			this->studentnamebt->UseCompatibleTextRendering = true;
			this->studentnamebt->UseVisualStyleBackColor = false;
			this->studentnamebt->Click += gcnew System::EventHandler(this, &studentname::studentnamebt_Click);
			// 
			// studentname
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->studentnamebt);
			this->Name = L"studentname";
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->Size = System::Drawing::Size(145, 45);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void studentnamebt_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
