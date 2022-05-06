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
	/// Summary for MyForm12
	/// </summary>
	public ref class MyForm12 : public System::Windows::Forms::Form
	{
	public:
		int getCvc;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:
		MySqlConnection^ connection;
		MyForm12(int cvc)
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

			textBox2->PasswordChar = '*';
			textBox2->MaxLength = 10;
			textBox3->PasswordChar = '*';
			textBox3->MaxLength = 10;
			textBox1->MaxLength = 10;




		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm12()
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm12::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Location = System::Drawing::Point(108, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 59);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Old Password";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm12::label1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold));
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label2->Location = System::Drawing::Point(111, 165);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 59);
			this->label2->TabIndex = 1;
			this->label2->Text = L"New Password";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold));
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label3->Location = System::Drawing::Point(110, 255);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(187, 59);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Confirm Password";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm12::label3_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox1->Location = System::Drawing::Point(458, 73);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(187, 59);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm12::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox2->Location = System::Drawing::Point(458, 161);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(187, 59);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold));
			this->textBox3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox3->Location = System::Drawing::Point(458, 251);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(187, 59);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(300, 353);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 48);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Done";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm12::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(-1, -6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(768, 466);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm12::pictureBox1_Click);
			// 
			// MyForm12
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(761, 458);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm12";
			this->Text = L"Password Change Form";
			this->Load += gcnew System::EventHandler(this, &MyForm12::MyForm12_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	MySqlDataReader^ dr;
	String^  pass;
	

	MySqlCommand^ cmd = gcnew MySqlCommand("select * from account_table where cvc = " + getCvc + " ", connection);


	connection->Open();

	dr = cmd->ExecuteReader();
	while (dr->Read())
	{

		pass = dr->GetString(11);


	}
	dr->Close();
	connection->Close();

	if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "")
	{



		if (pass ==(textBox1->Text))
		{


			if ((textBox2->Text) == (textBox3->Text))
			{

				MySqlCommand^ cmd2 = gcnew MySqlCommand("update account_table Set password = " + (textBox2->Text) + " where cvc = " + getCvc + " ", connection);


				connection->Open();

				dr = cmd2->ExecuteReader();

				dr->Close();
				connection->Close();

				MessageBox::Show("Password Changed SuccessFully....!", "Done");
				button1->Enabled = false;

			}
			else
			{

				MessageBox::Show("New Password Value and Confirm Password Value Not Matched....!", "Error");

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



		MessageBox::Show("All Fields are Required", "Error");

	}











}
private: System::Void MyForm12_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
