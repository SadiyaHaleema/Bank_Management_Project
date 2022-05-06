#pragma once
#include "MyForm1.h"
namespace Project15 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MySqlConnection^ connection;
		MySqlDataReader^ dr;
		MyForm2(void)
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
			textBox3->MaxLength = 5;
			
			textBox3->PasswordChar = '*';
			
		}
	

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;







	private: System::Windows::Forms::Button^ button7;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(-1, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(798, 669);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm2::pictureBox1_Click);
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button7->Font = (gcnew System::Drawing::Font(L"Cambria", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Yellow;
			this->button7->Location = System::Drawing::Point(203, 543);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(326, 95);
			this->button7->TabIndex = 10;
			this->button7->Text = L"Verify Credentials";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm2::button7_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Cornsilk;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label2->Location = System::Drawing::Point(98, 281);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(191, 66);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Email";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm2::label2_Click_1);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Cornsilk;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label3->Location = System::Drawing::Point(98, 365);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(191, 66);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Branch Code";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Cornsilk;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label4->Location = System::Drawing::Point(98, 452);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(191, 66);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Password";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->textBox1->Location = System::Drawing::Point(346, 281);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(333, 66);
			this->textBox1->TabIndex = 15;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Bold));
			this->textBox2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->textBox2->Location = System::Drawing::Point(346, 365);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(333, 66);
			this->textBox2->TabIndex = 16;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Bold));
			this->textBox3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->textBox3->Location = System::Drawing::Point(345, 452);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(333, 66);
			this->textBox3->TabIndex = 17;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox3_TextChanged);
			// 
			// MyForm2
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->ClientSize = System::Drawing::Size(789, 649);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin Sign in";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ form1 = gcnew MyForm1;

		form1->ShowDialog();

	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {






	MySqlDataReader^ dr;
	int pin;
	String^ getEmail;


	MySqlCommand^ cmd = gcnew MySqlCommand("select * from employee ", connection);


	connection->Open();

	dr = cmd->ExecuteReader();
	while (dr->Read())
	{

		pin = dr->GetInt32(1);
		getEmail = dr->GetString(0);


	}
	dr->Close();
	connection->Close();

	if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "")
	{



		if (pin == Int32::Parse(textBox3->Text) && getEmail == textBox1->Text)
		{


			

			


			MyForm1^ form1 = gcnew MyForm1;
			form1->ShowDialog();

		}
		else
		{


			MessageBox::Show("Invalid Credentials\nTry Again", "Error");
			
			dr->Close();
			connection->Close();

		}





	}
	else
	{



		MessageBox::Show("Error", "All Fields are Required");

		dr->Close();
		connection->Close();
	}














}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
