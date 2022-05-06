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
	/// Summary for MyForm15
	/// </summary>
	public ref class MyForm15 : public System::Windows::Forms::Form
	{
	public:
		int getCvc;
		MySqlConnection^ connection;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:
		MySqlDataReader^ dr;
		MyForm15(int cvc)
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





		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm15()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm15::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(194, 300);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 64);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Done";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm15::button1_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(128, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(271, 49);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Deposit Amount";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold));
			this->textBox1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox1->Location = System::Drawing::Point(332, 150);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(186, 60);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label2->Location = System::Drawing::Point(12, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(209, 60);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Enter Amount";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(-3, -3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(606, 462);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm15::pictureBox1_Click);
			// 
			// MyForm15
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 416);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm15";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm15";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		int total, trxid, deposit;



		if ((textBox1->Text != "") && (Int32::Parse(textBox1->Text) > 0))
		{



			try
			{
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from main_table", connection);


			connection->Open();

			dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				trxid = dr->GetInt32(4);

			}




			dr->Close();
			connection->Close();
			MySqlCommand^ cmd2 = gcnew MySqlCommand("select * from balance where cvc = " + getCvc + " ", connection);


			connection->Open();

			dr = cmd2->ExecuteReader();
			while (dr->Read())
			{


				deposit = dr->GetInt32(1);
				total = dr->GetInt32(2);



			}
			dr->Close();
			connection->Close();

			total += Int32::Parse(textBox1->Text);
			deposit += Int32::Parse(textBox1->Text);




			MySqlCommand^ cmd4 = gcnew MySqlCommand("update balance  Set total = " + total + ",deposit = " + deposit + "   where cvc = " + getCvc + " ", connection);


			connection->Open();

			dr = cmd4->ExecuteReader();

			dr->Close();
			connection->Close();
			String^ str = "deposit";
			String^ date = "April 19";
			MySqlCommand^ cmd7 = gcnew MySqlCommand("insert into dw_table values(" + getCvc + ", " + Int32::Parse(textBox1->Text) + "," + trxid + ",'" + str + "','" + date + "') ", connection);


			connection->Open();

			dr = cmd7->ExecuteReader();

			dr->Close();

			connection->Close();

			trxid += 3;
			MySqlCommand^ cmd6 = gcnew MySqlCommand("update main_table Set trxid=" + trxid + " ", connection);
			connection->Open();
			dr = cmd6->ExecuteReader();

			dr->Close();
			connection->Close();

			MessageBox::Show("Deposited SuccessFully", "Done");
			this->Hide();

		}


			catch (Exception^ ex)
			{
				MessageBox::Show("Error");
				MessageBox::Show(ex->Message);
				dr->Close();
				connection->Close();


			}



		}

		else
		{

			MessageBox::Show("Invalid Values","Error");
			dr->Close();
			connection->Close();

		}



	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
