#pragma once
#include "MyForm7.h"
namespace Project15 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm10
	/// </summary>
	public ref class MyForm10 : public System::Windows::Forms::Form
	{
	public:
		int getCvc;
		MyForm10(int x)
		{
			InitializeComponent();
			getCvc = x;
			this->timer1->Start();

			



		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm10()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer1;
	protected:
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm10::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm10::timer1_Tick);
			// 
			// progressBar1
			// 
			this->progressBar1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->progressBar1->Location = System::Drawing::Point(64, 60);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(641, 36);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 0;
			this->progressBar1->Value = 50;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(192, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(371, 38);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Logging Into Your Account";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm10::label1_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(284, 184);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 38);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Continue";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm10::button1_Click);
			// 
			// MyForm10
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(782, 257);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->progressBar1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyForm10";
			this->Opacity = 0.8;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm10";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

		this->progressBar1->Increment(10);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (progressBar1->Value == 100)
		{
			timer1->Stop();
			MyForm7^ obj = gcnew MyForm7(getCvc);
			
			this->Hide();
			obj->ShowDialog();


		}
		else
		{

			MessageBox::Show("Wait\nLoading......... "+progressBar1->Value+"%");

		}

	}
};
}
