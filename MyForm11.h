#pragma once

namespace Project15 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm11
	/// </summary>
	public ref class MyForm11 : public System::Windows::Forms::Form
	{
		
		int getCvc;
	public:
		MyForm11(int cvc)
		{
			InitializeComponent();





			getCvc = cvc;



			try {

				String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=Hs_BankDb";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				
				MySqlCommand^ cmd = gcnew MySqlCommand("select * from balance where cvc = "+getCvc+" ", con);
				MySqlDataReader^ dr;
				con->Open();

				dr = cmd->ExecuteReader();
				while (dr->Read())
				{
					label5->Text = ""+dr->GetInt32(2);
					label6->Text = "" + dr->GetInt32(1);
					label7->Text = "" + dr->GetInt32(3);
					


				}
				dr->Close();
				con->Close();

			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error");
				MessageBox::Show(ex->Message);

			}


			


			

		

		


			


	 

			



			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm11()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm11::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::MidnightBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->label1->Location = System::Drawing::Point(309, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(320, 75);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Account Details";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button1->Location = System::Drawing::Point(423, 496);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 62);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Done";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm11::button1_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Location = System::Drawing::Point(165, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(213, 52);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Total Amount";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm11::label2_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->Location = System::Drawing::Point(162, 253);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(213, 52);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Deposit";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label4->Location = System::Drawing::Point(162, 369);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(213, 52);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Withdraw";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(576, 143);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(213, 52);
			this->label5->TabIndex = 6;
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm11::label5_Click);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(574, 247);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(213, 52);
			this->label6->TabIndex = 7;
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Click += gcnew System::EventHandler(this, &MyForm11::label6_Click);
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(572, 365);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(213, 52);
			this->label7->TabIndex = 8;
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label7->Click += gcnew System::EventHandler(this, &MyForm11::label7_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(-10, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(961, 592);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm11::pictureBox1_Click);
			// 
			// MyForm11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(948, 585);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm11";
			this->Text = L"MyForm11";
			this->Load += gcnew System::EventHandler(this, &MyForm11::MyForm11_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();

	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm11_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
