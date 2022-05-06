#pragma once
#include "MyForm8.h"
#include "MyForm9.h"
#include "MyForm11.h"
#include "MyForm12.h"
#include "MyForm13.h"
#include "MyForm14.h"

#include "MyForm15.h"
#include "MyForm16.h"
#include "MyForm5.h"

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
	/// Summary for MyForm7
	/// </summary>
	public ref class MyForm7 : public System::Windows::Forms::Form
	{
		int getCvc;
		
		
		MySqlConnection^ connection;
		MySqlDataReader^ dr;
	public:
		MyForm7(int cvc)
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
		~MyForm7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button10;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm7::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AccessibleName = L"Balance Check ";
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::LightCoral;
			this->button1->Location = System::Drawing::Point(221, 53);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(258, 73);
			this->button1->TabIndex = 0;
			this->button1->Text = L" Balance Check";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm7::button1_Click);
			// 
			// button2
			// 
			this->button2->AccessibleName = L"Balance Check ";
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::LightCoral;
			this->button2->Location = System::Drawing::Point(221, 163);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(258, 73);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Fund Transfer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm7::button2_Click);
			// 
			// button3
			// 
			this->button3->AccessibleName = L"Balance Check ";
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::LightCoral;
			this->button3->Location = System::Drawing::Point(221, 288);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(258, 73);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Fund Transfer Information";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm7::button3_Click);
			// 
			// button4
			// 
			this->button4->AccessibleName = L"Balance Check ";
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::LightCoral;
			this->button4->Location = System::Drawing::Point(782, 163);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(258, 73);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Transaction Details";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm7::button4_Click);
			// 
			// button5
			// 
			this->button5->AccessibleName = L"Balance Check ";
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold));
			this->button5->ForeColor = System::Drawing::Color::LightCoral;
			this->button5->Location = System::Drawing::Point(782, 304);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(258, 73);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Change PIN";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm7::button5_Click);
			// 
			// button6
			// 
			this->button6->AccessibleName = L"Balance Check ";
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold));
			this->button6->ForeColor = System::Drawing::Color::LightCoral;
			this->button6->Location = System::Drawing::Point(782, 434);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(258, 73);
			this->button6->TabIndex = 5;
			this->button6->Text = L"View Profile";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm7::button6_Click);
			// 
			// button7
			// 
			this->button7->AccessibleName = L"Balance Check ";
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold));
			this->button7->ForeColor = System::Drawing::Color::LightCoral;
			this->button7->Location = System::Drawing::Point(221, 545);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(258, 73);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Delete Account";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm7::button7_Click);
			// 
			// button8
			// 
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold));
			this->button8->ForeColor = System::Drawing::Color::LightCoral;
			this->button8->Location = System::Drawing::Point(221, 408);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(258, 73);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Change Password";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm7::button8_Click);
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::LightCoral;
			this->button9->Location = System::Drawing::Point(782, 40);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(258, 73);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Amount Deposit";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm7::button9_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(3, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1261, 663);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// button10
			// 
			this->button10->AccessibleName = L"Balance Check ";
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold));
			this->button10->ForeColor = System::Drawing::Color::LightCoral;
			this->button10->Location = System::Drawing::Point(782, 555);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(258, 73);
			this->button10->TabIndex = 10;
			this->button10->Text = L"Amount Withdraw";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm7::button10_Click);
			// 
			// MyForm7
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->ClientSize = System::Drawing::Size(1258, 638);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm7";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login Options";
			this->Load += gcnew System::EventHandler(this, &MyForm7::MyForm7_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		MyForm11^ obj = gcnew MyForm11(getCvc);

		obj->Show();
	}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		MyForm13^ obj = gcnew MyForm13(getCvc);

		obj->Show();

	}
	private: System::Void MyForm7_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		MyForm8^ obj = gcnew MyForm8(getCvc);

		obj->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		MyForm9^ obj = gcnew MyForm9(getCvc);

		obj->Show();

	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {


		MyForm12^ obj = gcnew MyForm12(getCvc);

		obj->Show();
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {


		MyForm15^ obj = gcnew MyForm15(getCvc);

		obj->Show();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm14^ obj = gcnew MyForm14(getCvc);

		obj->Show();
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

MyForm16^ obj = gcnew MyForm16(getCvc);

		obj->Show();		
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if(MessageBox::Show("Are You Sure ? ", "Alert", MessageBoxButtons::YesNo, MessageBoxIcon::Question)==System::Windows::Forms::DialogResult::Yes)
	{
		String^ str;


		try {

			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=Hs_BankDb";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			MySqlCommand^ cmd = gcnew MySqlCommand("select * from account_table where cvc = " + getCvc + "", con);
			MySqlDataReader^ dr;
			con->Open();

			dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				
				str = dr->GetString(7);



			}
			dr->Close();
			con->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error");
			MessageBox::Show(ex->Message);

		}




















		try
		{
			MySqlCommand^ cmd7 = gcnew MySqlCommand("delete from account_table where cvc = "+getCvc+"", connection);
			connection->Open();
			dr = cmd7->ExecuteReader();

			dr->Close();
			MySqlCommand^ cmd8 = gcnew MySqlCommand("delete from balance where cvc = " + getCvc + "", connection);
		
			dr = cmd8->ExecuteReader();
			dr->Close();
			MessageBox::Show("Account Deleted SuccessFully....!", "Confirmation");





			try {

				MailMessage^ mail = gcnew MailMessage("hsbanksahiwal@gmail.com", str, "Account Deletion","Your Account Has been deleted From HS BANK!");
				SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com");
				client->Port = 587;
				client->Credentials = gcnew System::Net::NetworkCredential("hsbanksahiwal@gmail.com", "hsbanksahiwal@2001");
				client->EnableSsl = true;
				client->Send(mail);


			}
			catch (FormatException^ ex)
			{
				MessageBox::Show("Email is inavlid\n", "ERROR");

			}






			this->Hide();








			
			connection->Close();

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
		MessageBox::Show("Operation Aborted..!", "Cancelling");
	}
	


}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	MyForm5^ obj = gcnew MyForm5(getCvc);

	obj->Show();

}
};
}