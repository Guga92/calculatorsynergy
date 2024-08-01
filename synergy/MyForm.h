#pragma once

namespace synergy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btn_ac;
	private: System::Windows::Forms::Button^ btn_minus_plus;
	private: System::Windows::Forms::Button^ btn_percent;



	private: System::Windows::Forms::Button^ button_divide;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button_mult;



	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button_minus;

	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button_plus;

	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ btn_dot;



	private: System::Windows::Forms::Button^ button_equal;
	private: float first_num;
	private: char user_action = ' ';
	private: bool is_equal = false;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_ac = (gcnew System::Windows::Forms::Button());
			this->btn_minus_plus = (gcnew System::Windows::Forms::Button());
			this->btn_percent = (gcnew System::Windows::Forms::Button());
			this->button_divide = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button_mult = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->btn_dot = (gcnew System::Windows::Forms::Button());
			this->button_equal = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label
			// 
			this->label->BackColor = System::Drawing::Color::Silver;
			this->label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label->Location = System::Drawing::Point(21, 61);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(318, 65);
			this->label->TabIndex = 0;
			this->label->Text = L"0";
			this->label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(323, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(32, 25);
			this->button1->TabIndex = 1;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btn_ac
			// 
			this->btn_ac->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_ac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_ac->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_ac->Location = System::Drawing::Point(21, 140);
			this->btn_ac->Name = L"btn_ac";
			this->btn_ac->Size = System::Drawing::Size(75, 46);
			this->btn_ac->TabIndex = 2;
			this->btn_ac->Text = L"AC";
			this->btn_ac->UseVisualStyleBackColor = false;
			this->btn_ac->Click += gcnew System::EventHandler(this, &MyForm::btn_ac_Click);
			// 
			// btn_minus_plus
			// 
			this->btn_minus_plus->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_minus_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_minus_plus->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_minus_plus->Location = System::Drawing::Point(102, 140);
			this->btn_minus_plus->Name = L"btn_minus_plus";
			this->btn_minus_plus->Size = System::Drawing::Size(75, 46);
			this->btn_minus_plus->TabIndex = 3;
			this->btn_minus_plus->Text = L"+/-";
			this->btn_minus_plus->UseVisualStyleBackColor = false;
			this->btn_minus_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_plus_Click);
			// 
			// btn_percent
			// 
			this->btn_percent->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_percent->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_percent->Location = System::Drawing::Point(183, 140);
			this->btn_percent->Name = L"btn_percent";
			this->btn_percent->Size = System::Drawing::Size(75, 46);
			this->btn_percent->TabIndex = 4;
			this->btn_percent->Text = L"%";
			this->btn_percent->UseVisualStyleBackColor = false;
			this->btn_percent->Click += gcnew System::EventHandler(this, &MyForm::btn_percent_Click);
			// 
			// button_divide
			// 
			this->button_divide->BackColor = System::Drawing::Color::DarkOrange;
			this->button_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_divide->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_divide->Location = System::Drawing::Point(264, 140);
			this->button_divide->Name = L"button_divide";
			this->button_divide->Size = System::Drawing::Size(75, 46);
			this->button_divide->TabIndex = 5;
			this->button_divide->Text = L"/";
			this->button_divide->UseVisualStyleBackColor = false;
			this->button_divide->Click += gcnew System::EventHandler(this, &MyForm::button_divide_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(21, 192);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 46);
			this->button6->TabIndex = 6;
			this->button6->Text = L"7";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(102, 192);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 46);
			this->button7->TabIndex = 7;
			this->button7->Text = L"8";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(183, 192);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 46);
			this->button8->TabIndex = 8;
			this->button8->Text = L"9";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_mult
			// 
			this->button_mult->BackColor = System::Drawing::Color::DarkOrange;
			this->button_mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_mult->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_mult->Location = System::Drawing::Point(264, 192);
			this->button_mult->Name = L"button_mult";
			this->button_mult->Size = System::Drawing::Size(75, 46);
			this->button_mult->TabIndex = 9;
			this->button_mult->Text = L"*";
			this->button_mult->UseVisualStyleBackColor = false;
			this->button_mult->Click += gcnew System::EventHandler(this, &MyForm::button_mult_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button10->Location = System::Drawing::Point(21, 244);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 46);
			this->button10->TabIndex = 10;
			this->button10->Text = L"4";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button11->Location = System::Drawing::Point(102, 244);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 46);
			this->button11->TabIndex = 11;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button12->Location = System::Drawing::Point(183, 244);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 46);
			this->button12->TabIndex = 12;
			this->button12->Text = L"6";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_minus
			// 
			this->button_minus->BackColor = System::Drawing::Color::DarkOrange;
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minus->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_minus->Location = System::Drawing::Point(264, 244);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(75, 46);
			this->button_minus->TabIndex = 13;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = false;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button14->Location = System::Drawing::Point(21, 296);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 46);
			this->button14->TabIndex = 14;
			this->button14->Text = L"1";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button15->Location = System::Drawing::Point(102, 296);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 46);
			this->button15->TabIndex = 15;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button16->Location = System::Drawing::Point(183, 296);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 46);
			this->button16->TabIndex = 16;
			this->button16->Text = L"3";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::Color::DarkOrange;
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plus->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_plus->Location = System::Drawing::Point(264, 296);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(75, 46);
			this->button_plus->TabIndex = 17;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button18->Location = System::Drawing::Point(21, 348);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 46);
			this->button18->TabIndex = 18;
			this->button18->Text = L"0";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_dot
			// 
			this->btn_dot->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_dot->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_dot->Location = System::Drawing::Point(102, 348);
			this->btn_dot->Name = L"btn_dot";
			this->btn_dot->Size = System::Drawing::Size(75, 46);
			this->btn_dot->TabIndex = 20;
			this->btn_dot->Text = L".";
			this->btn_dot->UseVisualStyleBackColor = false;
			this->btn_dot->Click += gcnew System::EventHandler(this, &MyForm::btn_dot_Click);
			// 
			// button_equal
			// 
			this->button_equal->BackColor = System::Drawing::Color::DarkOrange;
			this->button_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_equal->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_equal->Location = System::Drawing::Point(183, 348);
			this->button_equal->Name = L"button_equal";
			this->button_equal->Size = System::Drawing::Size(156, 46);
			this->button_equal->TabIndex = 21;
			this->button_equal->Text = L"=";
			this->button_equal->UseVisualStyleBackColor = false;
			this->button_equal->Click += gcnew System::EventHandler(this, &MyForm::button_equal_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(367, 428);
			this->Controls->Add(this->button_equal);
			this->Controls->Add(this->btn_dot);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button_mult);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button_divide);
			this->Controls->Add(this->btn_percent);
			this->Controls->Add(this->btn_minus_plus);
			this->Controls->Add(this->btn_ac);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void BtnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label->ForeColor = Color::White;
		Button^ button = safe_cast<Button^>(sender);


		if (this->label->Text == "0" || is_equal)
			this->label->Text = button->Text;
		else
			this->label->Text = this->label->Text + button->Text;
		is_equal = false;
	}
	private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}
	private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
	}
	private: System::Void button_mult_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
	}
	private: System::Void button_divide_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	}
	private: System::Void math_action(char action) {
		this->first_num = System::Convert::ToDouble(this->label->Text);
		this->user_action = action;
		this->label->Text = "0";
	}
	private: System::Void button_equal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_action == ' ')
			return;

		float second = System::Convert::ToDouble(this->label->Text);
		float res;
		switch (this->user_action) {
		case '+': res = this->first_num + second; break;
		case '-': res = this->first_num - second; break;
		case '*': res = this->first_num * second; break;
		case '%': res = this->first_num * second / 100; break;
		case '/':
			if (second == 0) {
				res = 0;
				this->label->ForeColor = Color::DarkRed;
				MessageBox::Show(this, "Делить на ноль нельзя!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Hand);
			}
			else
				res = this->first_num / second;
			break;
			}
		this->is_equal = true;
			this->label->Text = System::Convert::ToString(res);
		}
	private: System::Void btn_ac_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label->Text = "0";
		this->label->ForeColor = Color::White;
		this->first_num = 0;
		this->user_action = ' ';
		this->is_equal = false;
	}
private: System::Void btn_minus_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	float num = System::Convert::ToDouble(this->label->Text);
	num *= -1;
	this->label->Text = System::Convert::ToString(num);
}
private: System::Void btn_percent_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('%');
}
private: System::Void btn_dot_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text = this->label->Text;
	if(!text->Contains(","))
	this->label->Text = text + ",";
}
};
	}