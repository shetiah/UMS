#pragma once
#include "Admin.h"
namespace UMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for adminHome
	/// </summary>
	public ref class adminHome : public System::Windows::Forms::Form
	{
		Admin^ admin;
	public:
		adminHome(Admin^ admin)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->admin = admin;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~adminHome()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// adminHome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Name = L"adminHome";
			this->Text = L"adminHome";
			this->Load += gcnew System::EventHandler(this, &adminHome::adminHome_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void adminHome_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
