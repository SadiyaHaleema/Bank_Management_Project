#pragma once

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
	/// Summary for MyForm18
	/// </summary>
	public ref class MyForm18 : public System::Windows::Forms::Form
	{
	public:
		MySqlConnection^ connection;
		MySqlDataReader^ dr;
		MyForm18(void)
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
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm18()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm18::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(-8, -20);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(713, 515);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(69, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(211, 59);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Enter Old Email";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(69, 224);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 59);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Enter New Email";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(69, 353);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(211, 59);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Enter Confirm Email";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox1->Location = System::Drawing::Point(369, 95);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(306, 59);
			this->textBox1->TabIndex = 12;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Cambria", 10, System::Drawing::FontStyle::Bold));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox2->Location = System::Drawing::Point(369, 224);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(306, 59);
			this->textBox2->TabIndex = 13;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Cambria", 10, System::Drawing::FontStyle::Bold));
			this->textBox3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox3->Location = System::Drawing::Point(369, 342);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(306, 59);
			this->textBox3->TabIndex = 14;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(294, 426);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 58);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Done";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm18::button1_Click);
			// 
			// MyForm18
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(696, 493);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm18";
			this->Text = L"MyForm18";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		bool notValidEmail = false;
		
		String^ getEmail;
		connection->Open();
		if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "")
		{
			if (textBox2->Text != textBox3->Text)
			{
				MessageBox::Show("New Email Does not Match\nTry Again..!");
				connection->Close();
			}
			else
			{


				MySqlCommand^ cmd = gcnew MySqlCommand("select * from employee", connection);




				dr = cmd->ExecuteReader();
				while (dr->Read())
				{
					getEmail= dr->GetString(0);
				
					

				}




				dr->Close();













				try {

					MailMessage^ mail = gcnew MailMessage("hsbanksahiwal@gmail.com", textBox2->Text, "Welcom to HS BANK", "this Email Has been Registered with Your HS BANK Account");
					SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com");
					client->Port = 587;
					client->Credentials = gcnew System::Net::NetworkCredential("hsbanksahiwal@gmail.com", "hsbanksahiwal@2001");
					client->EnableSsl = true;
					client->Send(mail);


				}
				catch (FormatException^ ex)
				{


					notValidEmail = true;
					connection->Close();
				}


				if (!notValidEmail)
				{

					if (getEmail == textBox1->Text)
					{
						MySqlCommand^ cmd2 = gcnew MySqlCommand("update employee Set email = '" + textBox3->Text + "'", connection);

						dr = cmd2->ExecuteReader();
						dr->Close();
						connection->Close();


						MessageBox::Show("Congratulations........!\n");
					}
					else
					{

						MessageBox::Show("Email Does Not matched.\n");
						connection->Close();

					}


				


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
			connection->Close();
		}





	}
};
}
