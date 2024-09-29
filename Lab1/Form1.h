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
	private: System::Windows::Forms::TextBox^ tab_a_textBox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tab_b_textBox;
	private: System::Windows::Forms::Button^ btn_tab_a;
	private: System::Windows::Forms::Button^ btn_tab_b;
	private: System::Windows::Forms::TextBox^ start_label;
	private: System::Windows::Forms::TextBox^ end_label;
	private: System::Windows::Forms::TextBox^ step_label;



	private: System::Windows::Forms::Label^ start;
	private: System::Windows::Forms::Label^ end;
	private: System::Windows::Forms::Label^ step;



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
			this->tab_a_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tab_b_textBox = (gcnew System::Windows::Forms::TextBox());
			this->btn_tab_a = (gcnew System::Windows::Forms::Button());
			this->btn_tab_b = (gcnew System::Windows::Forms::Button());
			this->start_label = (gcnew System::Windows::Forms::TextBox());
			this->end_label = (gcnew System::Windows::Forms::TextBox());
			this->step_label = (gcnew System::Windows::Forms::TextBox());
			this->start = (gcnew System::Windows::Forms::Label());
			this->end = (gcnew System::Windows::Forms::Label());
			this->step = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(118, 278);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(185, 28);
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
			this->title->Location = System::Drawing::Point(90, 9);
			this->title->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(287, 36);
			this->title->TabIndex = 1;
			this->title->Text = L"Дана програма обчислює значення\r\nфункції a(x,y,z,b) i b(x,y,z)";
			this->title->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->title->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label_x
			// 
			this->label_x->AutoSize = true;
			this->label_x->Location = System::Drawing::Point(50, 62);
			this->label_x->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_x->Name = L"label_x";
			this->label_x->Size = System::Drawing::Size(108, 16);
			this->label_x->TabIndex = 2;
			this->label_x->Text = L"Введіть число x\r\n";
			this->label_x->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// textBox_X
			// 
			this->textBox_X->Location = System::Drawing::Point(235, 62);
			this->textBox_X->Margin = System::Windows::Forms::Padding(4);
			this->textBox_X->Name = L"textBox_X";
			this->textBox_X->Size = System::Drawing::Size(153, 22);
			this->textBox_X->TabIndex = 3;
			this->textBox_X->TextChanged += gcnew System::EventHandler(this, &Form1::textBox_X_TextChanged);
			// 
			// textBox_Y
			// 
			this->textBox_Y->Location = System::Drawing::Point(235, 106);
			this->textBox_Y->Margin = System::Windows::Forms::Padding(4);
			this->textBox_Y->Name = L"textBox_Y";
			this->textBox_Y->Size = System::Drawing::Size(153, 22);
			this->textBox_Y->TabIndex = 4;
			// 
			// textBox_Z
			// 
			this->textBox_Z->Location = System::Drawing::Point(235, 149);
			this->textBox_Z->Margin = System::Windows::Forms::Padding(4);
			this->textBox_Z->Name = L"textBox_Z";
			this->textBox_Z->Size = System::Drawing::Size(153, 22);
			this->textBox_Z->TabIndex = 5;
			// 
			// textBox_A
			// 
			this->textBox_A->Location = System::Drawing::Point(235, 203);
			this->textBox_A->Margin = System::Windows::Forms::Padding(4);
			this->textBox_A->Name = L"textBox_A";
			this->textBox_A->Size = System::Drawing::Size(153, 22);
			this->textBox_A->TabIndex = 6;
			// 
			// textBox_B
			// 
			this->textBox_B->Location = System::Drawing::Point(235, 235);
			this->textBox_B->Margin = System::Windows::Forms::Padding(4);
			this->textBox_B->Name = L"textBox_B";
			this->textBox_B->Size = System::Drawing::Size(153, 22);
			this->textBox_B->TabIndex = 7;
			// 
			// label_y
			// 
			this->label_y->AutoSize = true;
			this->label_y->Location = System::Drawing::Point(50, 106);
			this->label_y->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_y->Name = L"label_y";
			this->label_y->Size = System::Drawing::Size(109, 16);
			this->label_y->TabIndex = 8;
			this->label_y->Text = L"Введіть число y\r\n";
			// 
			// label_z
			// 
			this->label_z->AutoSize = true;
			this->label_z->Location = System::Drawing::Point(50, 149);
			this->label_z->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_z->Name = L"label_z";
			this->label_z->Size = System::Drawing::Size(108, 16);
			this->label_z->TabIndex = 9;
			this->label_z->Text = L"Введіть число z";
			// 
			// label_a
			// 
			this->label_a->AutoSize = true;
			this->label_a->Location = System::Drawing::Point(50, 208);
			this->label_a->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_a->Name = L"label_a";
			this->label_a->Size = System::Drawing::Size(81, 16);
			this->label_a->TabIndex = 10;
			this->label_a->Text = L"значення a";
			this->label_a->Click += gcnew System::EventHandler(this, &Form1::label2_Click_1);
			// 
			// label_b
			// 
			this->label_b->AutoSize = true;
			this->label_b->Location = System::Drawing::Point(50, 240);
			this->label_b->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_b->Name = L"label_b";
			this->label_b->Size = System::Drawing::Size(81, 16);
			this->label_b->TabIndex = 11;
			this->label_b->Text = L"значення b";
			// 
			// tab_a_textBox
			// 
			this->tab_a_textBox->Location = System::Drawing::Point(12, 430);
			this->tab_a_textBox->Multiline = true;
			this->tab_a_textBox->Name = L"tab_a_textBox";
			this->tab_a_textBox->Size = System::Drawing::Size(206, 151);
			this->tab_a_textBox->TabIndex = 12;
			this->tab_a_textBox->TextChanged += gcnew System::EventHandler(this, &Form1::tab_a_textBox_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(139, 319);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 36);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Табулювання\r\na(x,y,z,b) i b(x,y,z)\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click_2);
			// 
			// tab_b_textBox
			// 
			this->tab_b_textBox->Location = System::Drawing::Point(239, 430);
			this->tab_b_textBox->Multiline = true;
			this->tab_b_textBox->Name = L"tab_b_textBox";
			this->tab_b_textBox->Size = System::Drawing::Size(206, 151);
			this->tab_b_textBox->TabIndex = 14;
			this->tab_b_textBox->TextChanged += gcnew System::EventHandler(this, &Form1::tab_b_textBox_TextChanged);
			// 
			// btn_tab_a
			// 
			this->btn_tab_a->Location = System::Drawing::Point(34, 603);
			this->btn_tab_a->Margin = System::Windows::Forms::Padding(4);
			this->btn_tab_a->Name = L"btn_tab_a";
			this->btn_tab_a->Size = System::Drawing::Size(146, 28);
			this->btn_tab_a->TabIndex = 15;
			this->btn_tab_a->Text = L"Табулювати a";
			this->btn_tab_a->UseVisualStyleBackColor = true;
			this->btn_tab_a->Click += gcnew System::EventHandler(this, &Form1::btn_tab_a_Click);
			// 
			// btn_tab_b
			// 
			this->btn_tab_b->Location = System::Drawing::Point(272, 603);
			this->btn_tab_b->Margin = System::Windows::Forms::Padding(4);
			this->btn_tab_b->Name = L"btn_tab_b";
			this->btn_tab_b->Size = System::Drawing::Size(139, 28);
			this->btn_tab_b->TabIndex = 16;
			this->btn_tab_b->Text = L"Табулювати b";
			this->btn_tab_b->UseVisualStyleBackColor = true;
			this->btn_tab_b->Click += gcnew System::EventHandler(this, &Form1::btn_tab_b_Click);
			// 
			// start_label
			// 
			this->start_label->Location = System::Drawing::Point(34, 390);
			this->start_label->Margin = System::Windows::Forms::Padding(4);
			this->start_label->Name = L"start_label";
			this->start_label->Size = System::Drawing::Size(118, 22);
			this->start_label->TabIndex = 17;
			// 
			// end_label
			// 
			this->end_label->Location = System::Drawing::Point(169, 390);
			this->end_label->Margin = System::Windows::Forms::Padding(4);
			this->end_label->Name = L"end_label";
			this->end_label->Size = System::Drawing::Size(118, 22);
			this->end_label->TabIndex = 18;
			// 
			// step_label
			// 
			this->step_label->Location = System::Drawing::Point(311, 390);
			this->step_label->Margin = System::Windows::Forms::Padding(4);
			this->step_label->Name = L"step_label";
			this->step_label->Size = System::Drawing::Size(118, 22);
			this->step_label->TabIndex = 19;
			// 
			// start
			// 
			this->start->AutoSize = true;
			this->start->Location = System::Drawing::Point(60, 370);
			this->start->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(61, 16);
			this->start->TabIndex = 20;
			this->start->Text = L"початок";
			this->start->Click += gcnew System::EventHandler(this, &Form1::label2_Click_2);
			// 
			// end
			// 
			this->end->AutoSize = true;
			this->end->Location = System::Drawing::Point(200, 370);
			this->end->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->end->Name = L"end";
			this->end->Size = System::Drawing::Size(48, 16);
			this->end->TabIndex = 21;
			this->end->Text = L"кінець";
			this->end->Click += gcnew System::EventHandler(this, &Form1::label2_Click_3);
			// 
			// step
			// 
			this->step->AutoSize = true;
			this->step->Location = System::Drawing::Point(351, 370);
			this->step->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->step->Name = L"step";
			this->step->Size = System::Drawing::Size(37, 16);
			this->step->TabIndex = 22;
			this->step->Text = L"крок";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(457, 644);
			this->Controls->Add(this->step);
			this->Controls->Add(this->end);
			this->Controls->Add(this->start);
			this->Controls->Add(this->step_label);
			this->Controls->Add(this->end_label);
			this->Controls->Add(this->start_label);
			this->Controls->Add(this->btn_tab_b);
			this->Controls->Add(this->btn_tab_a);
			this->Controls->Add(this->tab_b_textBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tab_a_textBox);
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
			this->Margin = System::Windows::Forms::Padding(4);
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
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_tab_a_Click(System::Object^ sender, System::EventArgs^ e) {
	double x_start = System::Convert::ToDouble(textBox_X->Text);
	double y = System::Convert::ToDouble(textBox_Y->Text);
	double z = System::Convert::ToDouble(textBox_Z->Text);
	double step = 0.1; // Or any other step value you choose
	double x_end = x_start + 10 * step; // Define the range for x

	ZavdClass Zavd;
	System::String^ result = gcnew System::String(Zavd.Tab_a(x_start, x_end, step, y, z).c_str());
	tab_a_textBox->Text = result;
}
private: System::Void textBox_X_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tab_a_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tab_b_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_tab_b_Click(System::Object^ sender, System::EventArgs^ e) {
	double x_start = System::Convert::ToDouble(start_label->Text);
	double y = System::Convert::ToDouble(textBox_Y->Text);
	double z = System::Convert::ToDouble(textBox_Z->Text);
	double step = System::Convert::ToDouble(step_label->Text);; // Or any other step value you choose
	double x_end = System::Convert::ToDouble(end_label->Text);; // Define the range for x

	ZavdClass Zavd;
	System::String^ result = gcnew System::String(Zavd.Tab_b(x_start, x_end, step, y, z).c_str());
	tab_b_textBox->Text = result;
}
private: System::Void label2_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_3(System::Object^ sender, System::EventArgs^ e) {
}
};
}
