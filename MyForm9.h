#pragma once
#include<iostream>
#include<ctime>
namespace Project15 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Drawing;
	using namespace System::Web;
	using namespace System::Net::Mail;

	/// <summary>
	/// Summary for MyForm9
	/// </summary>
	public ref class MyForm9 : public System::Windows::Forms::Form
	{
		int getCvc;
		MySqlConnection^ connection;
	private: System::Windows::Forms::ComboBox^ List2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




		   MySqlDataReader^ dr;
	public:
		MyForm9(int cvc)
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
			

			MySqlCommand^ cmd = gcnew MySqlCommand("select * from account_table ", connection);


			connection->Open();

			dr = cmd->ExecuteReader();
			while (dr->Read())
			{

				int dataCvc = dr->GetInt32(0);
				List2->Items->Add(dataCvc);


			}
			dr->Close();
			connection->Close();


			
			label1->Visible = false;
			label2->Visible = false;
			label3->Visible = false;

			textBox1->Visible = false;
			textBox2->Visible = false;
			textBox3->Visible = false;

			button1->Visible = false;
			button2->Visible = false;

			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm9()
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
	private: System::Windows::Forms::Label^ label4;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm9::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->List2 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Location = System::Drawing::Point(53, 213);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 67);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Account Number";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm9::label1_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Location = System::Drawing::Point(53, 352);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 67);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Amount ";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->Location = System::Drawing::Point(53, 486);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(187, 67);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Mobile Number";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm9::label3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold));
			this->textBox1->ForeColor = System::Drawing::Color::MediumBlue;
			this->textBox1->Location = System::Drawing::Point(359, 213);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(310, 67);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold));
			this->textBox2->ForeColor = System::Drawing::Color::MediumBlue;
			this->textBox2->Location = System::Drawing::Point(359, 352);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(310, 67);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold));
			this->textBox3->ForeColor = System::Drawing::Color::MediumBlue;
			this->textBox3->Location = System::Drawing::Point(359, 483);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(310, 67);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm9::textBox3_TextChanged);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Tomato;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->Location = System::Drawing::Point(435, 594);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 50);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Transfer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm9::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Tomato;
			this->button2->Location = System::Drawing::Point(105, 594);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(178, 50);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm9::button2_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label4->Location = System::Drawing::Point(53, 89);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(187, 67);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Enter CVC";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm9::label4_Click);
			// 
			// List2
			// 
			this->List2->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold));
			this->List2->ForeColor = System::Drawing::Color::MediumBlue;
			this->List2->FormattingEnabled = true;
			this->List2->Location = System::Drawing::Point(359, 109);
			this->List2->Name = L"List2";
			this->List2->Size = System::Drawing::Size(310, 41);
			this->List2->Sorted = true;
			this->List2->TabIndex = 9;
			this->List2->Click += gcnew System::EventHandler(this, &MyForm9::List2_Click);
			this->List2->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm9::comboBox1_MouseCaptureChanged);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->Font = (gcnew System::Drawing::Font(L"Impact", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Tomato;
			this->button3->Location = System::Drawing::Point(287, 205);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 42);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Go...";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm9::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->ImageLocation = L"";
			this->pictureBox1->Location = System::Drawing::Point(-2, -3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(789, 720);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(787, 715);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->List2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm9";
			this->Text = L"MyForm9";
			this->Load += gcnew System::EventHandler(this, &MyForm9::MyForm9_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		int Fromtotal, Fromwithdraw, Tototal, todeposit, getAmount, fromaccount, toaccount;
		String^ toname;
		String^ fromname;
		String^ tomail;
		String^ frommail;



		

		MySqlCommand^ cmd1 = gcnew MySqlCommand("select * from balance where cvc = "+getCvc+" ", connection);


		connection->Open();

		dr = cmd1->ExecuteReader();
		while (dr->Read())
		{
		
			Fromtotal = dr->GetInt32(2);
			Fromwithdraw = dr->GetInt32(3);
			
			

		}
		dr->Close();
		connection->Close();

	      getAmount = Int32::Parse(textBox2->Text);
		if (Fromtotal < getAmount)
		{
			MessageBox::Show("You have Insufficient Balance\nYour Balance is = " + Fromtotal + "\nTry Again"+getAmount);




		}
		else
		{



			MySqlCommand^ cmd2 = gcnew MySqlCommand("select * from balance where cvc = " + Int32::Parse(List2->SelectedItem->ToString()) + " ", connection);


			connection->Open();

			dr = cmd2->ExecuteReader();
			while (dr->Read())
			{

				
				todeposit = dr->GetInt32(1);
				Tototal = dr->GetInt32(2);
			
				

			}
			dr->Close();
			connection->Close();




			MySqlCommand^ to = gcnew MySqlCommand("select * from account_table where cvc = " + Int32::Parse(List2->SelectedItem->ToString()) + " ", connection);


			connection->Open();

			dr = to->ExecuteReader();
			while (dr->Read())
			{

				toname = dr->GetString(1);
				
				tomail = dr->GetString(7);
				toaccount = dr->GetInt32(14);

			}
			dr->Close();
			connection->Close();


			MySqlCommand^ from= gcnew MySqlCommand("select * from account_table where cvc = " + getCvc + " ", connection);


			connection->Open();

			dr = from->ExecuteReader();
			while (dr->Read())
			{

				fromname = dr->GetString(1);

				frommail = dr->GetString(7);
				fromaccount = dr->GetInt32(14);

			}
			dr->Close();
			connection->Close();



			Fromtotal -= getAmount;
			Fromwithdraw += getAmount;

			Tototal += getAmount;
			todeposit += getAmount;
			

			MySqlCommand^ cmd3 = gcnew MySqlCommand("update balance  Set total = " +Fromtotal + ",withdraw = " +Fromwithdraw + "   where cvc = " +getCvc + " ", connection);


			connection->Open();

			dr = cmd3->ExecuteReader();

			dr->Close();
			connection->Close();

			MySqlCommand^ cmd4 = gcnew MySqlCommand("update balance  Set total = "+Tototal+",deposit = "+todeposit+"   where cvc = " + Int32::Parse(List2->SelectedItem->ToString()) + " ", connection);


			connection->Open();

			dr = cmd4->ExecuteReader();
		
			dr->Close();
			connection->Close();


			String^ date = "April 19";
			/*time_t curr_time;
			tm* curr_tm;
			char date_string[100];
			

			time(&curr_time);
			curr_tm = localtime(&curr_time);

			strftime(date_string, 50, "Today is %B %d, %Y", curr_tm);
			std::string date(date_string);*/



			MySqlCommand^ cmd = gcnew MySqlCommand("select * from main_table", connection);
			int trxid;

			connection->Open();

			dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				trxid = dr->GetInt32(4);

			}




			dr->Close();
			connection->Close();


		
			MySqlCommand^ cmd5 = gcnew MySqlCommand("insert into transaction values ("+getCvc+","+ Int32::Parse(List2->SelectedItem->ToString()) +","+fromaccount+","+toaccount+",'"+ date +"',"+trxid+","+getAmount+")  ", connection);


			connection->Open();

			dr = cmd5->ExecuteReader();

			dr->Close();
			connection->Close();


			//toMail
			try {

				MailMessage^ mail = gcnew MailMessage("hsbanksahiwal@gmail.com", tomail, "Transaction", "Transaction ID: "+trxid+" \n\nYou have received  "+getAmount+" From "+fromname+" with CVC = "+getCvc+"\nAccount Number = "+fromaccount+"\n On = "+date+"\nYour New Balance is = "+Tototal+" " );
				SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com");
				client->Port = 587;
				client->Credentials = gcnew System::Net::NetworkCredential("hsbanksahiwal@gmail.com", "hsbanksahiwal@2001");
				client->EnableSsl = true;
				client->Send(mail);


			}
			catch (FormatException^ ex)
			{


				MessageBox::Show("Error Occured", "Error");
			}

			//FromMail


			try {

				MailMessage^ mail = gcnew MailMessage("hsbanksahiwal@gmail.com", frommail, "Transaction", "Transaction ID: " + trxid + " \n\nYou have sent  " + getAmount + " To " + toname + " with CVC = " + Int32::Parse(List2->SelectedItem->ToString()) + "\nAccount Number = " + toaccount + "\n On = " + date + "\nYour New Balance is = " + Fromtotal + " ");
				SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com");
				client->Port = 587;
				client->Credentials = gcnew System::Net::NetworkCredential("hsbanksahiwal@gmail.com", "hsbanksahiwal@2001");
				client->EnableSsl = true;
				client->Send(mail);


			}
			catch (FormatException^ ex)
			{


				MessageBox::Show("Error Occured", "Error");
			}



			trxid += 3;
			MySqlCommand^ cmd6 = gcnew MySqlCommand("update main_table Set trxid="+trxid+" ", connection);
			connection->Open();
			dr = cmd6->ExecuteReader();

			dr->Close();
			connection->Close();




			MessageBox::Show("Transaction done SuccessFully","Confirmation");




			


		}






















	}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void comboBox1_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {

	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {


	if (List2->SelectedItem)
	{


		if(Int32::Parse(List2->SelectedItem->ToString())==getCvc)
			{
		
		
		
			MessageBox::Show("Can Not Send to your Own Account", "Error");
		
		
		
		}
		else
		{
			button3->Visible = false;
			List2->Enabled = false;

			label1->Visible = true;
			label2->Visible = true;
			label3->Visible = true;

			textBox1->Visible = true;
			textBox2->Visible = true;
			textBox3->Visible = true;
			button1->Visible = true;
			button2->Visible = true;


			MySqlCommand^ cmd = gcnew MySqlCommand("select * from account_table where cvc = " + Int32::Parse(List2->SelectedItem->ToString()) + " ", connection);


			connection->Open();

			dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				textBox1->Text = dr->GetInt32(14).ToString();
				textBox3->Text = dr->GetString(8);

			}
			dr->Close();
			connection->Close();









		}
	}


	else
	{
		MessageBox::Show("select First", "Error");

	}
}
private: System::Void List2_Click(System::Object^ sender, System::EventArgs^ e) {



	
}
private: System::Void MyForm9_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {


	this->Hide();


}
};
}
