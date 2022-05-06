#pragma once
#include "MyForm10.h"
namespace Project15 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Web;
	using namespace System::Net::Mail;
	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
		int cvc;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	public:
		MySqlConnection^ connection; 
		MyForm3(void)
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

			textBox4->PasswordChar = '*';
			textBox4->MaxLength =10 ;
			textBox2->PasswordChar = '*';
			textBox1->MaxLength = 8;

			label6->Visible = false;
			textBox5->Visible = false;
		
			//
			//TODO: Add the constructor code here
			//
		}
	

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;







	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(-3, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(937, 778);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Impact", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button8->Location = System::Drawing::Point(257, 653);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(448, 71);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Continue";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm3::button8_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox1->Location = System::Drawing::Point(466, 175);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(331, 69);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm3::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox2->Location = System::Drawing::Point(466, 304);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(331, 69);
			this->textBox2->TabIndex = 10;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold));
			this->textBox3->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox3->Location = System::Drawing::Point(466, 430);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(331, 69);
			this->textBox3->TabIndex = 11;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold));
			this->textBox4->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox4->Location = System::Drawing::Point(466, 550);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(331, 69);
			this->textBox4->TabIndex = 13;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Crimson;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label1->Location = System::Drawing::Point(271, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(448, 71);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Customer Sign In";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Ivory;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label2->Location = System::Drawing::Point(146, 175);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(231, 70);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Debit Card No.";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Impact", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Ivory;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label3->Location = System::Drawing::Point(146, 429);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(231, 70);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Enter CVC";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Impact", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Ivory;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label4->Location = System::Drawing::Point(146, 304);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(231, 70);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Enter Pin";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm3::label4_Click);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Impact", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Ivory;
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label5->Location = System::Drawing::Point(146, 549);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(231, 70);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Enter Password";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(370, 734);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 42);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Forgot Password";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click_1);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox5->Location = System::Drawing::Point(397, 674);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(113, 46);
			this->textBox5->TabIndex = 20;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm3::textBox5_TextChanged);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label6->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Ivory;
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
			this->label6->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label6->Location = System::Drawing::Point(336, 624);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(225, 45);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Enter Your CVC";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm3
			// 
			this->AccessibleName = L"Customer Login";
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(928, 775);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximumSize = System::Drawing::Size(981, 831);
			this->Name = L"MyForm3";
			this->Text = L"Customer Login";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {



	bool exist = false;

	int debitCard, pin;
	String^ pass;
	MySqlDataReader^ dr;

	if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "")
	{
		cvc = Int32::Parse(textBox3->Text);

		MySqlCommand^ cmd = gcnew MySqlCommand("select * from account_table where cvc = " + cvc + " ", connection);
	

		connection->Open();

		dr = cmd->ExecuteReader();
		while (dr->Read())
		{
			pass = dr->GetString(11);
			debitCard = dr->GetInt32(12);
			pin = dr->GetInt32(13);
			exist = true;

		}
		

		if (exist)
		{

			if (Int32::Parse(textBox2->Text)==pin && Int32::Parse(textBox1->Text)==debitCard && (textBox4->Text)==pass)
			{


			

				MyForm10^ obj = gcnew MyForm10(cvc);

				this->Hide();
				obj->ShowDialog();
				
				dr->Close();
				connection->Close();

			}


			else
			{
				MessageBox::Show("Error","Invalid Credentials");

				dr->Close();
				connection->Close();
			}

			




		}
		else
		{
			MessageBox::Show("Account does Not Exist\nTry Again with Valid Credentials\n\tOR\nCreate an Account First");
			dr->Close();
			connection->Close();
		}

	}
	else
	{
		MessageBox::Show("All Fields are Required...!\nTry Again");
		
		
		
		

	}










}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	MySqlDataReader^ dr;
	int  pin,  debitNumber;
	String^ getMail;
	String^ getpass;

	label6->Visible = true;
	textBox5->Visible = true;
	button8->Visible = false;

	bool exist = false;

	if (textBox5->Text != "")
	{





		MySqlCommand^ cmd = gcnew MySqlCommand("select * from account_table where cvc = " + Int32::Parse(textBox5->Text) + " ", connection);


		connection->Open();

		dr = cmd->ExecuteReader();
		while (dr->Read())
		{
			getMail = dr->GetString(7);
			getpass = dr->GetString(11);
			debitNumber = dr->GetInt32(12);
			pin = dr->GetInt32(13);
			exist = true;

		}


		if (exist)
		{
			
			
			
			
			try {

				MailMessage^ mail = gcnew MailMessage("hsbanksahiwal@gmail.com",getMail, "Welcom to HS BANK", "Your Credentials are: \nYour Debit Card Number is = " + debitNumber + "\nYour Pin for Login is = " + pin+"\nYour Password is  = "+getpass);
				SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com");
				client->Port = 587;
				client->Credentials = gcnew System::Net::NetworkCredential("hsbanksahiwal@gmail.com", "hsbanksahiwal@2001");
				client->EnableSsl = true;
				client->Send(mail);
				MessageBox::Show("Your Credentials have been sent to your Email Account");
				label6->Visible = false;
				textBox5->Visible = false;
				button8->Visible = true;
				button1->Visible = false;

			}
			catch (FormatException^ ex)
			{

				MessageBox::Show(ex->Message);

			}
			dr->Close();
			connection->Close();
		}
			


			else
			{
				MessageBox::Show("Account Not Found", "Error");

				dr->Close();
				connection->Close();
			}



		





	}
	






}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
