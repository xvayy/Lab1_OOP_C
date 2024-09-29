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
	private: System::Windows::Forms::Button^ btn_calculate_a_b;
	protected:

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
	private: System::Windows::Forms::Label^ title2;


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
			this->btn_calculate_a_b = (gcnew System::Windows::Forms::Button());
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
			this->title2 = (gcnew System::Windows::Forms::Label());
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
			// btn_calculate_a_b
			// 
			this->btn_calculate_a_b->Location = System::Drawing::Point(88, 226);
			this->btn_calculate_a_b->Name = L"btn_calculate_a_b";
			this->btn_calculate_a_b->Size = System::Drawing::Size(139, 23);
			this->btn_calculate_a_b->TabIndex = 0;
			this->btn_calculate_a_b->Text = L"Обчислити";
			this->btn_calculate_a_b->UseVisualStyleBackColor = true;
			this->btn_calculate_a_b->Click += gcnew System::EventHandler(this, &Form1::btn_calculate_a_b_Click);
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->title->Location = System::Drawing::Point(68, 7);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(242, 30);
			this->title->TabIndex = 1;
			this->title->Text = L"Дана програма обчислює значення\r\nфункції a(x,y,z,b) i b(x,y,z)";
			this->title->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label_x
			// 
			this->label_x->AutoSize = true;
			this->label_x->Location = System::Drawing::Point(38, 50);
			this->label_x->Name = L"label_x";
			this->label_x->Size = System::Drawing::Size(85, 13);
			this->label_x->TabIndex = 2;
			this->label_x->Text = L"Введіть число x\r\n";
			// 
			// textBox_X
			// 
			this->textBox_X->Location = System::Drawing::Point(176, 50);
			this->textBox_X->Name = L"textBox_X";
			this->textBox_X->Size = System::Drawing::Size(116, 20);
			this->textBox_X->TabIndex = 3;
			// 
			// textBox_Y
			// 
			this->textBox_Y->Location = System::Drawing::Point(176, 86);
			this->textBox_Y->Name = L"textBox_Y";
			this->textBox_Y->Size = System::Drawing::Size(116, 20);
			this->textBox_Y->TabIndex = 4;
			// 
			// textBox_Z
			// 
			this->textBox_Z->Location = System::Drawing::Point(176, 121);
			this->textBox_Z->Name = L"textBox_Z";
			this->textBox_Z->Size = System::Drawing::Size(116, 20);
			this->textBox_Z->TabIndex = 5;
			// 
			// textBox_A
			// 
			this->textBox_A->Location = System::Drawing::Point(176, 165);
			this->textBox_A->Name = L"textBox_A";
			this->textBox_A->Size = System::Drawing::Size(116, 20);
			this->textBox_A->TabIndex = 6;
			// 
			// textBox_B
			// 
			this->textBox_B->Location = System::Drawing::Point(176, 191);
			this->textBox_B->Name = L"textBox_B";
			this->textBox_B->Size = System::Drawing::Size(116, 20);
			this->textBox_B->TabIndex = 7;
			// 
			// label_y
			// 
			this->label_y->AutoSize = true;
			this->label_y->Location = System::Drawing::Point(38, 86);
			this->label_y->Name = L"label_y";
			this->label_y->Size = System::Drawing::Size(85, 13);
			this->label_y->TabIndex = 8;
			this->label_y->Text = L"Введіть число y\r\n";
			// 
			// label_z
			// 
			this->label_z->AutoSize = true;
			this->label_z->Location = System::Drawing::Point(38, 121);
			this->label_z->Name = L"label_z";
			this->label_z->Size = System::Drawing::Size(85, 13);
			this->label_z->TabIndex = 9;
			this->label_z->Text = L"Введіть число z";
			// 
			// label_a
			// 
			this->label_a->AutoSize = true;
			this->label_a->Location = System::Drawing::Point(38, 169);
			this->label_a->Name = L"label_a";
			this->label_a->Size = System::Drawing::Size(63, 13);
			this->label_a->TabIndex = 10;
			this->label_a->Text = L"значення a";
			// 
			// label_b
			// 
			this->label_b->AutoSize = true;
			this->label_b->Location = System::Drawing::Point(38, 195);
			this->label_b->Name = L"label_b";
			this->label_b->Size = System::Drawing::Size(63, 13);
			this->label_b->TabIndex = 11;
			this->label_b->Text = L"значення b";
			// 
			// tab_a_textBox
			// 
			this->tab_a_textBox->Location = System::Drawing::Point(0, 349);
			this->tab_a_textBox->Margin = System::Windows::Forms::Padding(2);
			this->tab_a_textBox->Multiline = true;
			this->tab_a_textBox->Name = L"tab_a_textBox";
			this->tab_a_textBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tab_a_textBox->Size = System::Drawing::Size(175, 123);
			this->tab_a_textBox->TabIndex = 12;
			// 
			// title2
			// 
			this->title2->AutoSize = true;
			this->title2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->title2->Location = System::Drawing::Point(104, 259);
			this->title2->Name = L"title2";
			this->title2->Size = System::Drawing::Size(123, 30);
			this->title2->TabIndex = 13;
			this->title2->Text = L"Табулювання\r\na(x,y,z,b) i b(x,y,z)\r\n";
			this->title2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// tab_b_textBox
			// 
			this->tab_b_textBox->Location = System::Drawing::Point(188, 349);
			this->tab_b_textBox->Margin = System::Windows::Forms::Padding(2);
			this->tab_b_textBox->Multiline = true;
			this->tab_b_textBox->Name = L"tab_b_textBox";
			this->tab_b_textBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tab_b_textBox->Size = System::Drawing::Size(175, 123);
			this->tab_b_textBox->TabIndex = 14;
			// 
			// btn_tab_a
			// 
			this->btn_tab_a->Location = System::Drawing::Point(26, 490);
			this->btn_tab_a->Name = L"btn_tab_a";
			this->btn_tab_a->Size = System::Drawing::Size(110, 23);
			this->btn_tab_a->TabIndex = 15;
			this->btn_tab_a->Text = L"Табулювати a";
			this->btn_tab_a->UseVisualStyleBackColor = true;
			this->btn_tab_a->Click += gcnew System::EventHandler(this, &Form1::btn_tab_a_Click);
			// 
			// btn_tab_b
			// 
			this->btn_tab_b->Location = System::Drawing::Point(204, 490);
			this->btn_tab_b->Name = L"btn_tab_b";
			this->btn_tab_b->Size = System::Drawing::Size(104, 23);
			this->btn_tab_b->TabIndex = 16;
			this->btn_tab_b->Text = L"Табулювати b";
			this->btn_tab_b->UseVisualStyleBackColor = true;
			this->btn_tab_b->Click += gcnew System::EventHandler(this, &Form1::btn_tab_b_Click);
			// 
			// start_label
			// 
			this->start_label->Location = System::Drawing::Point(26, 317);
			this->start_label->Name = L"start_label";
			this->start_label->Size = System::Drawing::Size(90, 20);
			this->start_label->TabIndex = 17;
			// 
			// end_label
			// 
			this->end_label->Location = System::Drawing::Point(127, 317);
			this->end_label->Name = L"end_label";
			this->end_label->Size = System::Drawing::Size(90, 20);
			this->end_label->TabIndex = 18;
			// 
			// step_label
			// 
			this->step_label->Location = System::Drawing::Point(233, 317);
			this->step_label->Name = L"step_label";
			this->step_label->Size = System::Drawing::Size(90, 20);
			this->step_label->TabIndex = 19;
			// 
			// start
			// 
			this->start->AutoSize = true;
			this->start->Location = System::Drawing::Point(45, 301);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(47, 13);
			this->start->TabIndex = 20;
			this->start->Text = L"початок";
			// 
			// end
			// 
			this->end->AutoSize = true;
			this->end->Location = System::Drawing::Point(150, 301);
			this->end->Name = L"end";
			this->end->Size = System::Drawing::Size(39, 13);
			this->end->TabIndex = 21;
			this->end->Text = L"кінець";
			// 
			// step
			// 
			this->step->AutoSize = true;
			this->step->Location = System::Drawing::Point(263, 301);
			this->step->Name = L"step";
			this->step->Size = System::Drawing::Size(31, 13);
			this->step->TabIndex = 22;
			this->step->Text = L"крок";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(359, 523);
			this->Controls->Add(this->step);
			this->Controls->Add(this->end);
			this->Controls->Add(this->start);
			this->Controls->Add(this->step_label);
			this->Controls->Add(this->end_label);
			this->Controls->Add(this->start_label);
			this->Controls->Add(this->btn_tab_b);
			this->Controls->Add(this->btn_tab_a);
			this->Controls->Add(this->tab_b_textBox);
			this->Controls->Add(this->title2);
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
			this->Controls->Add(this->btn_calculate_a_b);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_calculate_a_b_Click(System::Object^ sender, System::EventArgs^ e) {
		double x = System::Convert::ToDouble(textBox_X->Text);
		double y = System::Convert::ToDouble(textBox_Y->Text);
		double z = System::Convert::ToDouble(textBox_Z->Text);
		ZavdClass Zavd;
		Zavd.Fn_b(x, y, z);
		Zavd.Fn_a(x, y, z);
		textBox_A->Text = System::Convert::ToString(Zavd.getA());
		textBox_B->Text = System::Convert::ToString(Zavd.getB());
	}
	private: System::Void btn_tab_a_Click(System::Object^ sender, System::EventArgs^ e) {
		double x_start = System::Convert::ToDouble(start_label->Text);
		double y = System::Convert::ToDouble(textBox_Y->Text);
		double z = System::Convert::ToDouble(textBox_Z->Text);
		double step = System::Convert::ToDouble(step_label->Text);
		double x_end = System::Convert::ToDouble(end_label->Text);

		ZavdClass Zavd;
		System::String^ result_a = gcnew System::String(Zavd.Tab_a(x_start, x_end, step, y, z).c_str());
		tab_a_textBox->AppendText(result_a);
	}
	private: System::Void btn_tab_b_Click(System::Object^ sender, System::EventArgs^ e) {
		double x_start = System::Convert::ToDouble(start_label->Text);
		double y = System::Convert::ToDouble(textBox_Y->Text);
		double z = System::Convert::ToDouble(textBox_Z->Text);
		double step = System::Convert::ToDouble(step_label->Text);
		double x_end = System::Convert::ToDouble(end_label->Text);

		ZavdClass Zavd;
		System::String^ result_b = gcnew System::String(Zavd.Tab_b(x_start, x_end, step, y, z).c_str());
		tab_b_textBox->AppendText(result_b);
	}
};
}
