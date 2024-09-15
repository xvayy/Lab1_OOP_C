#pragma once
#include "ZavdClass.h"
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ title;

	private: System::Windows::Forms::Label^ label_x;
	private: System::Windows::Forms::TextBox^ textBox_X;
	private: System::Windows::Forms::TextBox^ textBox_Y;
	private: System::Windows::Forms::TextBox^ textBox_Z;
	private: System::Windows::Forms::TextBox^ textBox_A;
	private: System::Windows::Forms::TextBox^ textBox_B;
	private: System::Windows::Forms::Label^ label_y;
	private: System::Windows::Forms::Label^ label_z;
	private: System::Windows::Forms::Label^ label_a;
	private: System::Windows::Forms::Label^ label_b;





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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->title = (gcnew System::Windows::Forms::Label());
			this->label_x = (gcnew System::Windows::Forms::Label());
			this->textBox_X = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Y = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Z = (gcnew System::Windows::Forms::TextBox());
			this->textBox_A = (gcnew System::Windows::Forms::TextBox());
			this->textBox_B = (gcnew System::Windows::Forms::TextBox());
			this->label_y = (gcnew System::Windows::Forms::Label());
			this->label_z = (gcnew System::Windows::Forms::Label());
			this->label_a = (gcnew System::Windows::Forms::Label());
			this->label_b = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(64, 226);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->title->Location = System::Drawing::Point(12, 9);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(242, 30);
			this->title->TabIndex = 1;
			this->title->Text = L"Дана програма обчислює значення\r\nфункції a(x,y,z,b) i b(x,y,z)";
			this->title->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->title->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label_x
			// 
			this->label_x->AutoSize = true;
			this->label_x->Location = System::Drawing::Point(12, 50);
			this->label_x->Name = L"label_x";
			this->label_x->Size = System::Drawing::Size(85, 13);
			this->label_x->TabIndex = 2;
			this->label_x->Text = L"Введіть число x\r\n";
			this->label_x->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// textBox_X
			// 
			this->textBox_X->Location = System::Drawing::Point(135, 47);
			this->textBox_X->Name = L"textBox_X";
			this->textBox_X->Size = System::Drawing::Size(116, 20);
			this->textBox_X->TabIndex = 3;
			// 
			// textBox_Y
			// 
			this->textBox_Y->Location = System::Drawing::Point(135, 83);
			this->textBox_Y->Name = L"textBox_Y";
			this->textBox_Y->Size = System::Drawing::Size(116, 20);
			this->textBox_Y->TabIndex = 4;
			// 
			// textBox_Z
			// 
			this->textBox_Z->Location = System::Drawing::Point(135, 118);
			this->textBox_Z->Name = L"textBox_Z";
			this->textBox_Z->Size = System::Drawing::Size(116, 20);
			this->textBox_Z->TabIndex = 5;
			// 
			// textBox_A
			// 
			this->textBox_A->Location = System::Drawing::Point(135, 162);
			this->textBox_A->Name = L"textBox_A";
			this->textBox_A->Size = System::Drawing::Size(116, 20);
			this->textBox_A->TabIndex = 6;
			// 
			// textBox_B
			// 
			this->textBox_B->Location = System::Drawing::Point(135, 188);
			this->textBox_B->Name = L"textBox_B";
			this->textBox_B->Size = System::Drawing::Size(116, 20);
			this->textBox_B->TabIndex = 7;
			// 
			// label_y
			// 
			this->label_y->AutoSize = true;
			this->label_y->Location = System::Drawing::Point(12, 86);
			this->label_y->Name = L"label_y";
			this->label_y->Size = System::Drawing::Size(85, 13);
			this->label_y->TabIndex = 8;
			this->label_y->Text = L"Введіть число y\r\n";
			// 
			// label_z
			// 
			this->label_z->AutoSize = true;
			this->label_z->Location = System::Drawing::Point(12, 121);
			this->label_z->Name = L"label_z";
			this->label_z->Size = System::Drawing::Size(85, 13);
			this->label_z->TabIndex = 9;
			this->label_z->Text = L"Введіть число z";
			// 
			// label_a
			// 
			this->label_a->AutoSize = true;
			this->label_a->Location = System::Drawing::Point(12, 169);
			this->label_a->Name = L"label_a";
			this->label_a->Size = System::Drawing::Size(63, 13);
			this->label_a->TabIndex = 10;
			this->label_a->Text = L"значення a";
			this->label_a->Click += gcnew System::EventHandler(this, &Form1::label2_Click_1);
			// 
			// label_b
			// 
			this->label_b->AutoSize = true;
			this->label_b->Location = System::Drawing::Point(12, 195);
			this->label_b->Name = L"label_b";
			this->label_b->Size = System::Drawing::Size(63, 13);
			this->label_b->TabIndex = 11;
			this->label_b->Text = L"значення b";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label_b);
			this->Controls->Add(this->label_a);
			this->Controls->Add(this->label_z);
			this->Controls->Add(this->label_y);
			this->Controls->Add(this->textBox_B);
			this->Controls->Add(this->textBox_A);
			this->Controls->Add(this->textBox_Z);
			this->Controls->Add(this->textBox_Y);
			this->Controls->Add(this->textBox_X);
			this->Controls->Add(this->label_x);
			this->Controls->Add(this->title);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double x = System::Convert::ToDouble(textBox_X->Text);
		double y = System::Convert::ToDouble(textBox_Y->Text);
		double z = System::Convert::ToDouble(textBox_Z->Text);
		ZavdClass Zavd;
		Zavd.Fn_b(x, y, z);
		Zavd.Fn_a(x, y, z);
		textBox_A->Text = System::Convert::ToString(Zavd.geta());
		textBox_B->Text = System::Convert::ToString(Zavd.getb());
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
