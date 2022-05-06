#pragma once
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"


namespace Project15 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::MidnightBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label1->Location = System::Drawing::Point(198, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(395, 84);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Admin";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::MidnightBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label2->Location = System::Drawing::Point(199, 300);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(394, 84);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Customer";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 16, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::Yellow;
			this->button1->Location = System::Drawing::Point(296, 209);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(209, 62);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cambria", 16, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::Yellow;
			this->button2->Location = System::Drawing::Point(296, 400);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(209, 62);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Sign up";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->Font = (gcnew System::Drawing::Font(L"Cambria", 16, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::Yellow;
			this->button3->Location = System::Drawing::Point(296, 492);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(209, 62);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Login";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Lavender;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(200, 81);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(393, 525);
			this->label3->TabIndex = 6;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(-5, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(839, 694);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->ClientSize = System::Drawing::Size(831, 630);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HS_Bank";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm4^ form4 = gcnew MyForm4;
	form4->ShowDialog();

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	
	MyForm3^ form3 = gcnew MyForm3;
	form3->ShowDialog();


}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm2^ form2 = gcnew MyForm2;
	form2->ShowDialog();
	
}
};
}
