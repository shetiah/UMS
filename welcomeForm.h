#pragma once
#include"courseButton.h"
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ tostudentbt;
	private: System::Windows::Forms::Button^ toadminbt;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	protected:



















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(welcomeForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tostudentbt = (gcnew System::Windows::Forms::Button());
			this->toadminbt = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label1->Name = L"label1";
			// 
			// tostudentbt
			// 
			this->tostudentbt->BackColor = System::Drawing::Color::CornflowerBlue;
			this->tostudentbt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->tostudentbt->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->tostudentbt->FlatAppearance->BorderSize = 0;
			this->tostudentbt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Olive;
			this->tostudentbt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Navy;
			resources->ApplyResources(this->tostudentbt, L"tostudentbt");
			this->tostudentbt->ForeColor = System::Drawing::Color::White;
			this->tostudentbt->Name = L"tostudentbt";
			this->tostudentbt->UseVisualStyleBackColor = false;
			this->tostudentbt->Click += gcnew System::EventHandler(this, &welcomeForm::tostudentbt_Click);
			// 
			// toadminbt
			// 
			this->toadminbt->BackColor = System::Drawing::Color::CornflowerBlue;
			this->toadminbt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->toadminbt->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->toadminbt->FlatAppearance->BorderSize = 0;
			this->toadminbt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Olive;
			this->toadminbt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Navy;
			resources->ApplyResources(this->toadminbt, L"toadminbt");
			this->toadminbt->ForeColor = System::Drawing::Color::White;
			this->toadminbt->Name = L"toadminbt";
			this->toadminbt->UseVisualStyleBackColor = false;
			this->toadminbt->Click += gcnew System::EventHandler(this, &welcomeForm::toadminbt_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox2, L"pictureBox2");
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &welcomeForm::pictureBox2_Click_1);
			// 
			// welcomeForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->toadminbt);
			this->Controls->Add(this->tostudentbt);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"welcomeForm";
			this->Load += gcnew System::EventHandler(this, &welcomeForm::welcomeForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:static bool tostdLogin = false;
		public:static bool toadmLogin = false;
		public:static bool gobacktoWelc = false;
		public:static bool tostdHomeForm = false;
		public:static bool toadminHome = false;

	   
	private: System::Void toadminbt_Click(System::Object^ sender, System::EventArgs^ e) {
		
		welcomeForm::gobacktoWelc = false;
		
		welcomeForm::toadmLogin = true;

		this->Close();

	}
	private: System::Void adminbt_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		this->Close();
	
	}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void welcomeForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}

		private: System::Void studentbt_Click(System::Object^ sender, System::EventArgs^ e) {

		}
private: System::Void tostudentbt_Click(System::Object^ sender, System::EventArgs^ e) {
	welcomeForm::gobacktoWelc = false;
	welcomeForm::tostdLogin = true;

	this->Close();

}
private: System::Void pictureBox2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
