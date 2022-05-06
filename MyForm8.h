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
	/// Summary for MyForm8
	/// </summary>
	public ref class MyForm8 : public System::Windows::Forms::Form
	{
		int getCvc;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
		   MySqlConnection^ connection;
	public:

		
		MyForm8(int cvc)
		{
			InitializeComponent();
			
			getCvc = cvc;
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

			textBox3->PasswordChar = '*';
			textBox3->MaxLength = 4;
			textBox2->PasswordChar = '*';
			textBox2->MaxLength = 4;
			textBox1->MaxLength = 4;






		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm8()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm8::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::GrayText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label1->Location = System::Drawing::Point(64, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(237, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter Old PIN";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::GrayText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label2->Location = System::Drawing::Point(64, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(237, 64);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter New PIN";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::GrayText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Impact", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label3->Location = System::Drawing::Point(64, 298);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(237, 64);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Confirm PIN";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(411, 69);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(237, 64);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(413, 182);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(237, 64);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(416, 298);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(237, 64);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->Font = (gcnew System::Drawing::Font(L"Impact", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(149, 420);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 57);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm8::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Font = (gcnew System::Drawing::Font(L"Impact", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(397, 421);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(162, 57);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Done";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm8::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(-3, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(727, 552);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm8::pictureBox1_Click);
			// 
			// MyForm8
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 552);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm8";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"MyForm8";
			this->Load += gcnew System::EventHandler(this, &MyForm8::MyForm8_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm8_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	MySqlDataReader^ dr;
	int pin;


	MySqlCommand^ cmd = gcnew MySqlCommand("select * from account_table where cvc = " + getCvc + " ", connection);


	connection->Open();

	dr = cmd->ExecuteReader();
	while (dr->Read())
	{
		
		pin = dr->GetInt32(13);
		

	}
	dr->Close();
	connection->Close();
	
	if(textBox1->Text!="" && textBox2->Text != ""&& textBox3->Text != "")
	{ 
	
	
	
		if (pin == Int32::Parse(textBox1->Text))
		{


			if (Int32::Parse(textBox2->Text) == Int32::Parse(textBox3->Text))
			{

				MySqlCommand^ cmd2 = gcnew MySqlCommand("update account_table Set pin= " + Int32::Parse(textBox2->Text) + " where cvc = "+getCvc+" ", connection);


				connection->Open();

				dr = cmd2->ExecuteReader();

				dr->Close();
				connection->Close();

				MessageBox::Show("Pin Changed SuccessFully....!", "Done");
				button2->Enabled = false;

			}
			else
			{

				MessageBox::Show("New Pin Value and Confirm Pin Value Not Matched....!", "Error");

			}

		}
		else
		{


			MessageBox::Show("Invalid Pin\nTry Again", "Error");
			dr->Close();
			connection->Close();

		}

	
	
	
	
	}
	else
	{ 
	
	

		MessageBox::Show("Error", "All Fields are Required");
	
	}

	






}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
