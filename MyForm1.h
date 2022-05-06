#pragma once
#include "MyForm17.h"
#include "MyForm18.h"
#include "MyForm19.h"
#include "MyForm20.h"
#include <stdlib.h>

namespace Project15 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm1(String^ data)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::IO::FileSystemWatcher^ fileSystemWatcher1;
	private: System::Windows::Forms::Button^ button5;

	private: System::ComponentModel::IContainer^ components;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->fileSystemWatcher1 = (gcnew System::IO::FileSystemWatcher());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(-2, -22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(929, 712);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Ivory;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Impact", 14));
			this->button1->ForeColor = System::Drawing::Color::Yellow;
			this->button1->Location = System::Drawing::Point(81, 108);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(249, 89);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Balance Enquiry ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Font = (gcnew System::Drawing::Font(L"Impact", 14));
			this->button2->ForeColor = System::Drawing::Color::Yellow;
			this->button2->Location = System::Drawing::Point(412, 108);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(249, 89);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Change Password ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Font = (gcnew System::Drawing::Font(L"Impact", 14));
			this->button3->ForeColor = System::Drawing::Color::Yellow;
			this->button3->Location = System::Drawing::Point(81, 293);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(249, 89);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Customer Record";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Font = (gcnew System::Drawing::Font(L"Impact", 14));
			this->button4->ForeColor = System::Drawing::Color::Yellow;
			this->button4->Location = System::Drawing::Point(412, 293);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(249, 89);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Change Email ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// fileSystemWatcher1
			// 
			this->fileSystemWatcher1->EnableRaisingEvents = true;
			this->fileSystemWatcher1->SynchronizingObject = this;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->Font = (gcnew System::Drawing::Font(L"Impact", 14));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(289, 421);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(174, 63);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Log Out ";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(768, 513);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm1";
			this->Text = L"Admin Sign in options";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm19^ obj = gcnew MyForm19();

		obj->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm20^ obj = gcnew MyForm20();

		obj->Show();



	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm17^ obj = gcnew MyForm17();

		obj->Show();



	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {


		MyForm18^ obj = gcnew MyForm18();

		obj->Show();

	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);

	

	}
};
}