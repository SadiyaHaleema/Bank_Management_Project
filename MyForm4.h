#pragma once
#include<iostream>
#include<string>


namespace Project15 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace std;
	using namespace System::Web;
	using namespace System::Net::Mail;

	/// <summary>
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MySqlConnection^ connection;
		MySqlDataReader^ dr;
		int cvcNum, pin, debitNumber, account_number;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	public:

	public:

		MyForm4(void)
		{
			InitializeComponent();
			try {
				
				String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=Hs_BankDb";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				connection = con;
				
				connection = con;
			
					
					
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error");
				MessageBox::Show(ex->Message);

			}

			textBox8->PasswordChar = '*';
			textBox7->MaxLength = 10;
			textBox7->PasswordChar = '*';
			textBox8->MaxLength = 10;
			
			
			
			
		}	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;

	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox12;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm4::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label1->Location = System::Drawing::Point(75, 54);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label1->Size = System::Drawing::Size(168, 62);
			this->label1->TabIndex = 1;
			this->label1->Text = L"First Name";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label2->Location = System::Drawing::Point(75, 141);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label2->Size = System::Drawing::Size(168, 62);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Last Name";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label3->Location = System::Drawing::Point(75, 228);
			this->label3->Name = L"label3";
			this->label3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label3->Size = System::Drawing::Size(168, 62);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Father Name";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Black;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label4->Location = System::Drawing::Point(75, 315);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label4->Size = System::Drawing::Size(168, 62);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Mother Name";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Black;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label5->Location = System::Drawing::Point(75, 402);
			this->label5->Name = L"label5";
			this->label5->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label5->Size = System::Drawing::Size(168, 62);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Enter CNIC ";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Black;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
			this->label6->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label6->Location = System::Drawing::Point(654, 54);
			this->label6->Name = L"label6";
			this->label6->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label6->Size = System::Drawing::Size(168, 62);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Enter Email";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Black;
			this->label7->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label7.Image")));
			this->label7->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label7->Location = System::Drawing::Point(654, 228);
			this->label7->Name = L"label7";
			this->label7->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label7->Size = System::Drawing::Size(168, 62);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Date of Birth";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Black;
			this->label8->Font = (gcnew System::Drawing::Font(L"Cambria", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label8.Image")));
			this->label8->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label8->Location = System::Drawing::Point(654, 141);
			this->label8->Name = L"label8";
			this->label8->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label8->Size = System::Drawing::Size(168, 62);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Phone Number";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Black;
			this->label9->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label9.Image")));
			this->label9->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label9->Location = System::Drawing::Point(654, 315);
			this->label9->Name = L"label9";
			this->label9->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label9->Size = System::Drawing::Size(168, 62);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Gender";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Black;
			this->label10->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label10.Image")));
			this->label10->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label10->Location = System::Drawing::Point(654, 402);
			this->label10->Name = L"label10";
			this->label10->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label10->Size = System::Drawing::Size(168, 62);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Password";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::Black;
			this->label11->Font = (gcnew System::Drawing::Font(L"Cambria", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label11.Image")));
			this->label11->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label11->Location = System::Drawing::Point(654, 489);
			this->label11->Name = L"label11";
			this->label11->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label11->Size = System::Drawing::Size(168, 62);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Confirm Password";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::Black;
			this->label12->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label12.Image")));
			this->label12->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label12->Location = System::Drawing::Point(75, 489);
			this->label12->Name = L"label12";
			this->label12->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label12->Size = System::Drawing::Size(168, 62);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Address";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Location = System::Drawing::Point(659, 608);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(210, 58);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Open Account";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Location = System::Drawing::Point(334, 608);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(210, 58);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Blue;
			this->textBox1->Location = System::Drawing::Point(300, 54);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(292, 62);
			this->textBox1->TabIndex = 15;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Cambria", 16));
			this->textBox2->ForeColor = System::Drawing::Color::Blue;
			this->textBox2->Location = System::Drawing::Point(300, 315);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(292, 62);
			this->textBox2->TabIndex = 16;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Cambria", 16));
			this->textBox3->ForeColor = System::Drawing::Color::Blue;
			this->textBox3->Location = System::Drawing::Point(300, 402);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(292, 62);
			this->textBox3->TabIndex = 17;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Cambria", 16));
			this->textBox4->ForeColor = System::Drawing::Color::Blue;
			this->textBox4->Location = System::Drawing::Point(300, 489);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(292, 62);
			this->textBox4->TabIndex = 18;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Cambria", 16));
			this->textBox5->ForeColor = System::Drawing::Color::Blue;
			this->textBox5->Location = System::Drawing::Point(300, 228);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(292, 62);
			this->textBox5->TabIndex = 19;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Cambria", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::Blue;
			this->textBox6->Location = System::Drawing::Point(300, 141);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(292, 62);
			this->textBox6->TabIndex = 20;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Cambria", 16));
			this->textBox7->ForeColor = System::Drawing::Color::Blue;
			this->textBox7->Location = System::Drawing::Point(869, 489);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(292, 62);
			this->textBox7->TabIndex = 21;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm4::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Cambria", 16));
			this->textBox8->ForeColor = System::Drawing::Color::Blue;
			this->textBox8->Location = System::Drawing::Point(869, 402);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(292, 62);
			this->textBox8->TabIndex = 22;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Cambria", 16));
			this->textBox10->ForeColor = System::Drawing::Color::Blue;
			this->textBox10->Location = System::Drawing::Point(869, 141);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(292, 62);
			this->textBox10->TabIndex = 24;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Cambria", 16));
			this->textBox11->ForeColor = System::Drawing::Color::Blue;
			this->textBox11->Location = System::Drawing::Point(869, 54);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(292, 62);
			this->textBox11->TabIndex = 25;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1282, 738);
			this->pictureBox1->TabIndex = 26;
			this->pictureBox1->TabStop = false;
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Cambria", 16));
			this->textBox12->ForeColor = System::Drawing::Color::Blue;
			this->textBox12->Location = System::Drawing::Point(870, 228);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(292, 62);
			this->textBox12->TabIndex = 29;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Cambria", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->ForeColor = System::Drawing::Color::Blue;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->comboBox2->Location = System::Drawing::Point(870, 324);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(292, 45);
			this->comboBox2->TabIndex = 30;
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1278, 744);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm4";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm4::closingForm);
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
	}
	private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		bool notValidEmail = false;
		String^ str = textBox1->Text;
		connection->Open();
		if (textBox1->Text !="" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "" && textBox6->Text != "" && textBox7->Text != "" && textBox8->Text != "" && comboBox2->Text != "" && textBox10->Text != "" && textBox11->Text != "" && textBox12->Text != "")
		{
			if (textBox8->Text != textBox7->Text)
			{
				MessageBox::Show("Password Does not Match\nTry Again..!");
				connection->Close();
			}
			else
			{
				

				MySqlCommand^ cmd = gcnew MySqlCommand("select * from main_table", connection);
			

				
				
				dr = cmd->ExecuteReader();
				while (dr->Read())
				{
					cvcNum = dr->GetInt32(0);
					debitNumber = dr->GetInt32(1);
					pin = dr->GetInt32(2);
					account_number = dr->GetInt32(3);

				}
				
			
			
				
				dr->Close();
				
				
				
				
				
				

				

			


				
				try {

					MailMessage^ mail = gcnew MailMessage("hsbanksahiwal@gmail.com", textBox11->Text, "Welcom to HS BANK", "Your Account Has been Created Succesfully\nYour CVC Number is = " + cvcNum + "\nYour Account Number is = "+account_number+"\nYour Debit Card Number is = " + debitNumber + "\nYour Pin for Login is = " + pin);
					SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com");
					client->Port = 587;
					client->Credentials = gcnew System::Net::NetworkCredential("hsbanksahiwal@gmail.com", "hsbanksahiwal@2001");
					client->EnableSsl = true;
					client->Send(mail);


				}
				catch (FormatException^ ex)
				{
					
					
					notValidEmail = true;
				}


				if (!notValidEmail)
				{
					MySqlCommand^ cmd2 = gcnew MySqlCommand("insert into account_table values (" + cvcNum + ",'" + textBox1->Text + "','" + textBox6->Text + "','" + textBox5->Text + "','" + textBox2->Text + "','" + textBox3->Text + "','" + textBox4->Text + "','" + textBox11->Text + "','" + textBox10->Text + "','" + textBox12->Text + "','" + comboBox2->SelectedItem + "','" + textBox8->Text + "'," + debitNumber + "," + pin + ","+account_number+")", connection);
					
					dr = cmd2->ExecuteReader();
					dr->Close();
				


					MessageBox::Show("Congratulations........!\nYour Account has been created\nYour CVC Number is = " + cvcNum + "\nYour Account Number is = " + account_number + "\nYour Debit card Number is = " + debitNumber + "\nYour Pin is = " + pin , "Confirmation" );

					
					

					MySqlCommand^ cmd3 = gcnew MySqlCommand("insert into balance values (" + cvcNum + ",0,0,0) ", connection);
					
					dr = cmd3->ExecuteReader();
					dr->Close();
					
					cvcNum++;
					pin++;
					debitNumber++;
					account_number++;

					MySqlCommand^ cmd4 = gcnew MySqlCommand("update main_table Set maincvc=" + cvcNum + ",maindebit= " + debitNumber + ",pin = " + pin + ", main_account = "+account_number+"", connection);
				
					dr = cmd4->ExecuteReader();
					
					dr->Close();
					connection->Close();
					button1->Enabled = false;



				}


				
				
				else
				{

					MessageBox::Show("Email Address NOt Valid\nTry Again and Enter your Mail ");
					notValidEmail = false;
					
					dr->Close();
					connection->Close();

				}
				
				


				


			


			}
		}
		else

		{
		MessageBox::Show("All Fields are required\nTry Again..!");
		}
		
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	
	
		this->Hide();
	


	



}
private: System::Void closingForm(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {






}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}


