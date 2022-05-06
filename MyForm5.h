#pragma once

namespace Project15 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MySqlConnection^ connection;
		MyForm5(int cvc)
		{
			InitializeComponent();
			

			try {

				String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=Hs_BankDb";
				MySqlConnection^ con = gcnew MySqlConnection(constr);

				MySqlCommand^ cmd = gcnew MySqlCommand("select * from account_table where cvc = "+cvc+"", con);
				MySqlDataReader^ dr;
				con->Open();

				dr = cmd->ExecuteReader();
				while (dr->Read())
				{
					label8->Text = dr->GetString(1);
					label9->Text = dr->GetString(2);
					label10->Text = dr->GetString(3);

					label11->Text = dr->GetString(4);
					label12->Text = dr->GetString(5);
					label13->Text = dr->GetString(6);



					label20->Text = dr->GetString(7);
					label21->Text = dr->GetString(8);
					label22->Text = dr->GetString(9);


					label23->Text = dr->GetString(10);
					label24->Text = "" + dr->GetInt32(12);
					label25->Text = "" + dr->GetInt32(14);
					



				}
				dr->Close();
				con->Close();

			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error");
				MessageBox::Show(ex->Message);

			}


























		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm5::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
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
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 22, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Location = System::Drawing::Point(408, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(407, 47);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Customer Bio Data";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label2->Location = System::Drawing::Point(12, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(214, 47);
			this->label2->TabIndex = 1;
			this->label2->Text = L"First Name";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm5::label2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Green;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(1, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1301, 733);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm5::pictureBox1_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label3->Location = System::Drawing::Point(12, 207);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(214, 47);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Last Name";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm5::label3_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label4->Location = System::Drawing::Point(12, 298);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(214, 47);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Father Name";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label5->Location = System::Drawing::Point(12, 389);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(214, 47);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Mother Name";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
			this->label6->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label6->Location = System::Drawing::Point(12, 480);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(214, 47);
			this->label6->TabIndex = 6;
			this->label6->Text = L"CNIC Number";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Click += gcnew System::EventHandler(this, &MyForm5::label6_Click);
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label7->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label7.Image")));
			this->label7->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label7->Location = System::Drawing::Point(12, 571);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(214, 47);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Address";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label7->Click += gcnew System::EventHandler(this, &MyForm5::label7_Click);
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label8->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label8->Location = System::Drawing::Point(271, 116);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(309, 47);
			this->label8->TabIndex = 8;
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label9->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label9->Location = System::Drawing::Point(271, 207);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(309, 47);
			this->label9->TabIndex = 9;
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label9->Click += gcnew System::EventHandler(this, &MyForm5::label9_Click);
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label10->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label10->Location = System::Drawing::Point(271, 295);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(309, 47);
			this->label10->TabIndex = 10;
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label10->Click += gcnew System::EventHandler(this, &MyForm5::label10_Click);
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label11->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label11->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label11->Location = System::Drawing::Point(271, 389);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(309, 47);
			this->label11->TabIndex = 11;
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label11->Click += gcnew System::EventHandler(this, &MyForm5::label11_Click);
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label12->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label12->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label12->Location = System::Drawing::Point(271, 480);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(309, 47);
			this->label12->TabIndex = 12;
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label13->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label13->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label13->Location = System::Drawing::Point(271, 572);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(309, 47);
			this->label13->TabIndex = 13;
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label14->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label14.Image")));
			this->label14->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label14->Location = System::Drawing::Point(624, 117);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(214, 47);
			this->label14->TabIndex = 14;
			this->label14->Text = L"Email";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label15->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label15.Image")));
			this->label15->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label15->Location = System::Drawing::Point(623, 209);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(214, 47);
			this->label15->TabIndex = 15;
			this->label15->Text = L"Phone Number";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label16->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label16.Image")));
			this->label16->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label16->Location = System::Drawing::Point(623, 290);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(214, 47);
			this->label16->TabIndex = 16;
			this->label16->Text = L"Date of Birth";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label17->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label17.Image")));
			this->label17->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label17->Location = System::Drawing::Point(623, 387);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(214, 47);
			this->label17->TabIndex = 17;
			this->label17->Text = L"Gender";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label17->Click += gcnew System::EventHandler(this, &MyForm5::label17_Click);
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label18->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label18.Image")));
			this->label18->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label18->Location = System::Drawing::Point(623, 478);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(214, 47);
			this->label18->TabIndex = 18;
			this->label18->Text = L"Debit Card No.";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label19->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label19.Image")));
			this->label19->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label19->Location = System::Drawing::Point(623, 573);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(214, 47);
			this->label19->TabIndex = 19;
			this->label19->Text = L"Account No.";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label19->Click += gcnew System::EventHandler(this, &MyForm5::label19_Click);
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label20->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label20->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label20->Location = System::Drawing::Point(905, 115);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(309, 47);
			this->label20->TabIndex = 20;
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label20->Click += gcnew System::EventHandler(this, &MyForm5::label20_Click);
			// 
			// label21
			// 
			this->label21->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label21->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label21->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label21->Location = System::Drawing::Point(905, 209);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(309, 47);
			this->label21->TabIndex = 21;
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label22
			// 
			this->label22->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label22->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label22->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label22->Location = System::Drawing::Point(905, 290);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(309, 47);
			this->label22->TabIndex = 22;
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label23
			// 
			this->label23->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label23->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label23->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label23->Location = System::Drawing::Point(904, 385);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(309, 47);
			this->label23->TabIndex = 23;
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label24
			// 
			this->label24->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label24->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label24->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label24->Location = System::Drawing::Point(905, 479);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(309, 47);
			this->label24->TabIndex = 24;
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label24->Click += gcnew System::EventHandler(this, &MyForm5::label24_Click);
			// 
			// label25
			// 
			this->label25->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label25->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label25->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label25->Location = System::Drawing::Point(905, 572);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(309, 47);
			this->label25->TabIndex = 25;
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm5
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->ClientSize = System::Drawing::Size(1303, 731);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
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
			this->Name = L"MyForm5";
			this->Text = L"MyForm5";
			this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm5_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
