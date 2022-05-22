#pragma once
#include <iostream>
#include <map>
#include <string>

std::map <int, const double> index_value{
		{0, 1},
		{1, 63.5643},
		{2, 66.6135},
		{3, 44.7111},
		{4, 0.015893},
		{5, 0.136571},
		{5, 0.102716},
		{6, 0.032086},
		{7, 0.071389},
		{8, 0.05019},
		{9, 0.096064},
		{10, 0.102716},
		{11, 2.495145},
		{12, 209.490129},
		{13, 35.645587},
		{14, 0.004851},
		{15, 4.019142},
		{15, 0.418567},
		{16, 0.042431},
		{17, 13.338971},
		{18, 63.7428},
		{19, 1.485737},
		{20, 1.7039193911},
		{21, 0.015884},
		{22, 7.947109},
		{23, 1.091144},
		{24, 0.078716},
		{25, 14.584041},
		{26, 4.161269},
		{27, 3.208217},
		{28, 1.006265},
		{29, 3.33848},
		{30, 0.020745},
		{31, 23.773841},
		{32, 0.034699},
		{33, 79.2647},
		{34, 4.003115},
		{35, 0.518056},
		{36, 0.154752},
		{37, 1.794693},
		{38, 40.477486},
		{39, 0.564621},
		{40, 6.54405},
		{41, 17.492035},
		{42, 166.883535},
		{43, 0.324042},
		{44, 64.249994},
		{45, 18.252839},
		{46, 0.009378},
		{47,17.051204},
		{48,14.4088},
		{49,0.062898},
		{50,13.5186},
		{51,7.342533},
		{52,24.464799},
		{53,0.002903},
		{54,17.128513},
		{55,79.317357},
		{56,4.94809},
		{57,0.573458},
		{58,44.866656},
		{59,0.025572},
		{60,7.90909},
		{61,0.110871},
		{62,0.141364},
		{63,3.048129},
		{64,0.005005},
		{65,5.08718},
		{66,1.854578},
		{67,2.155751},
		{68,0.027634},
		{69,27.609741},
		{70,9.471655},
		{71,18.1612},
		{72,4.02234},
		{73,0.017533},
		{74,0.005703},
		{75,2.16205},
		{76,1.551184},
		{77,9.00408},
		{78,29.425232},
		{79,1.225584},
		{80,79.317357},
		{81,8.940622},
		{82,2.71028},
		{83,0.07517},
		{84,6.38799},
		{85,0.178454},
		{86,4.283333},
		{87,1.24733},
		{88,3.98585},
		{89,0.002903},
		{90,0.415068},
		{91,0.491565},
		{92, 1},
		{93, 1}
	};

namespace CalculatorWinForms {

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
	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ ansver;
	private: System::Windows::Forms::TextBox^ basic;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ansver = (gcnew System::Windows::Forms::TextBox());
			this->basic = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(60, 113);
			this->button1->Margin = System::Windows::Forms::Padding(3, 10, 3, 10);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 55);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Посчитать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 14);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Исходная валюта:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(94) {
				L"RUB", L"USD", L"EUR", L"AUD", L"COP", L"KMF",
					L"XAF", L"CDF", L"KPW", L"KRW", L"CRC", L"XOF", L"CUP", L"KWD", L"ANG", L"LAK", L"LSL", L"LRD", L"LBP", L"LYD", L"CHF", L"MUR",
					L"MRU", L"MGA", L"MOP", L"MKD", L"MWK", L"MYR", L"MVR", L"MXN", L"MZN", L"MDL", L"MNT", L"XCD", L"MMK", L"GBP", L"NAD", L"NPR",
					L"NGN", L"NIO", L"NZD", L"XPF", L"NOK", L"AED", L"OMR", L"PKR", L"PAB", L"PGK", L"PYG", L"PEN", L"PLN", L"RWF", L"RON", L"SVC",
					L"WST", L"STN", L"SAR", L"SHP", L"SCR", L"RSD", L"SGD", L"SYP", L"SBD", L"SOS", L"SDG", L"SRD", L"SLL", L"TJS", L"THB", L"TWD",
					L"TZS", L"TOP", L"TTD", L"TMT", L"TRY", L"UGX", L"UZS", L"UAH", L"UYU", L"DKK", L"FJD", L"PHP", L"FKP", L"HRK", L"CZK", L"CLP",
					L"SEK", L"LKR", L"ERN", L"ETB", L"ZAR", L"SSP", L"JMD", L"JPY"
			});
			this->comboBox1->Location = System::Drawing::Point(208, 22);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(64, 22);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(94) {
				L"RUB", L"USD", L"EUR", L"AUD", L"COP", L"KMF",
					L"XAF", L"CDF", L"KPW", L"KRW", L"CRC", L"XOF", L"CUP", L"KWD", L"ANG", L"LAK", L"LSL", L"LRD", L"LBP", L"LYD", L"CHF", L"MUR",
					L"MRU", L"MGA", L"MOP", L"MKD", L"MWK", L"MYR", L"MVR", L"MXN", L"MZN", L"MDL", L"MNT", L"XCD", L"MMK", L"GBP", L"NAD", L"NPR",
					L"NGN", L"NIO", L"NZD", L"XPF", L"NOK", L"AED", L"OMR", L"PKR", L"PAB", L"PGK", L"PYG", L"PEN", L"PLN", L"RWF", L"RON", L"SVC",
					L"WST", L"STN", L"SAR", L"SHP", L"SCR", L"RSD", L"SGD", L"SYP", L"SBD", L"SOS", L"SDG", L"SRD", L"SLL", L"TJS", L"THB", L"TWD",
					L"TZS", L"TOP", L"TTD", L"TMT", L"TRY", L"UGX", L"UZS", L"UAH", L"UYU", L"DKK", L"FJD", L"PHP", L"FKP", L"HRK", L"CZK", L"CLP",
					L"SEK", L"LKR", L"ERN", L"ETB", L"ZAR", L"SSP", L"JMD", L"JPY"
			});
			this->comboBox2->Location = System::Drawing::Point(208, 78);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(64, 22);
			this->comboBox2->TabIndex = 4;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(171, 14);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Результирующая валюта:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// ansver
			// 
			this->ansver->Enabled = false;
			this->ansver->Location = System::Drawing::Point(15, 197);
			this->ansver->Name = L"ansver";
			this->ansver->Size = System::Drawing::Size(257, 22);
			this->ansver->TabIndex = 9;
			// 
			// basic
			// 
			this->basic->Location = System::Drawing::Point(15, 50);
			this->basic->Name = L"basic";
			this->basic->Size = System::Drawing::Size(257, 22);
			this->basic->TabIndex = 10;
			this->basic->TextChanged += gcnew System::EventHandler(this, &MyForm::basic_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 14);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Результат:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 222);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(269, 39);
			this->label4->TabIndex = 12;
			this->label4->Text = L"По данным с ru.moneyratestoday.com на 19.05.2022\r\n\r\n\r\n";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// MyForm
			// 
			this->AcceptButton = this->button1;
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(284, 236);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->basic);
			this->Controls->Add(this->ansver);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Валютный калькулятор";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double buf = Convert::ToDouble(basic->Text) * index_value[comboBox1->SelectedIndex];
		ansver->Text = Convert::ToString(buf / index_value[comboBox2->SelectedIndex]);
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
	private: System::Void toolStripComboBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void toolStripTextBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void basic_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
