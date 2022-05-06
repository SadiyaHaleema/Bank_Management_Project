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
	/// Summary for MyForm14
	/// </summary>
	public ref class MyForm14 : public System::Windows::Forms::Form
	{
	private:
		MySqlConnection^ connection;
	public:
		int getCvc;
		MyForm14(int n)
		{
			InitializeComponent();
			getCvc = n;


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
			dataGridView1->Visible = false;
			button4->Visible = false;





			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm14()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm14::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(75, 60);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(204, 70);
			this->button1->TabIndex = 0;
			this->button1->Text = L"All Deposited Transaction";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm14::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Font = (gcnew System::Drawing::Font(L"Cambria", 11, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(571, 60);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(204, 70);
			this->button2->TabIndex = 1;
			this->button2->Text = L"All Withdrawal Transactions";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm14::button2_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(72, 497);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(127, 70);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm14::button3_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(645, 493);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(127, 70);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Done";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm14::button4_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button5->Font = (gcnew System::Drawing::Font(L"Cambria", 11, System::Drawing::FontStyle::Bold));
			this->button5->Location = System::Drawing::Point(318, 60);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(204, 70);
			this->button5->TabIndex = 4;
			this->button5->Text = L"All Transactions";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm14::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle1->Padding = System::Windows::Forms::Padding(2);
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(72, 161);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(703, 316);
			this->dataGridView1->TabIndex = 5;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(-1, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(948, 658);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm14
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(937, 624);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm14";
			this->Text = L"MyForm14";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();


		


	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {


		dataGridView1->Visible = true;
		button4->Visible = true;
		try
		{

			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select * from transaction where fromcvc = " + getCvc + "", connection);
			DataTable^ dt = gcnew DataTable();

			sda->Fill(dt);

			bindingSource1->DataSource = dt;

			dataGridView1->DataSource = bindingSource1;


		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error");
			MessageBox::Show(ex->Message);

		}




	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


	dataGridView1->Visible = true;
	button4->Visible = true;
	try
	{

		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select amount, trxid, date from dw_table where trxtype = 'deposit' AND cvc = "+getCvc+"", connection);
		DataTable^ dt = gcnew DataTable();

		sda->Fill(dt);

		bindingSource1->DataSource = dt;

		dataGridView1->DataSource = bindingSource1;


	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error");
		MessageBox::Show(ex->Message);

	}


}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {



	dataGridView1->Visible = false;
	button4->Visible = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {


	dataGridView1->Visible = true;
	button4->Visible = true;
	try
	{

		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select amount, trxid, date from dw_table where trxtype = 'withdraw' AND cvc = " + getCvc + "", connection);
		DataTable^ dt = gcnew DataTable();

		sda->Fill(dt);

		bindingSource1->DataSource = dt;

		dataGridView1->DataSource = bindingSource1;


	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error");
		MessageBox::Show(ex->Message);

	}



}
};
}
