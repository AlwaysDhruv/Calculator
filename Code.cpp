#include<string>
#include<iostream>
#include<windows.h>
#include<vector>

#pragma once
using namespace std;
int ct=1;
double n1,n2,n3=1,fg=1,n;
double res;
double num1[1];
double num2[1];
double resu[1];


namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ Clear;
	private: System::Windows::Forms::Button^ BackSpace;
	private: System::Windows::Forms::Button^ Seven;





	private: System::Windows::Forms::Button^ Eight;

	private: System::Windows::Forms::Button^ Nine;

	private: System::Windows::Forms::Button^ Division;
	private: System::Windows::Forms::Button^ Forth;


	private: System::Windows::Forms::Button^ Five;

	private: System::Windows::Forms::Button^ Six;

	private: System::Windows::Forms::Button^ Multification;






	private: System::Windows::Forms::Button^ Three;

	private: System::Windows::Forms::Button^ Sumation;
	private: System::Windows::Forms::Button^ Zero;
	private: System::Windows::Forms::Button^ Point;




	private: System::Windows::Forms::Button^ Equal;

	private: System::Windows::Forms::Button^ Minus;
	private: System::Windows::Forms::Button^ PlusMinus;
	private: System::Windows::Forms::Button^ One;
	private: System::Windows::Forms::Button^ Two;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->BackSpace = (gcnew System::Windows::Forms::Button());
			this->Seven = (gcnew System::Windows::Forms::Button());
			this->Eight = (gcnew System::Windows::Forms::Button());
			this->Nine = (gcnew System::Windows::Forms::Button());
			this->Division = (gcnew System::Windows::Forms::Button());
			this->Forth = (gcnew System::Windows::Forms::Button());
			this->Five = (gcnew System::Windows::Forms::Button());
			this->Six = (gcnew System::Windows::Forms::Button());
			this->Multification = (gcnew System::Windows::Forms::Button());
			this->Three = (gcnew System::Windows::Forms::Button());
			this->Sumation = (gcnew System::Windows::Forms::Button());
			this->Zero = (gcnew System::Windows::Forms::Button());
			this->Point = (gcnew System::Windows::Forms::Button());
			this->Equal = (gcnew System::Windows::Forms::Button());
			this->Minus = (gcnew System::Windows::Forms::Button());
			this->PlusMinus = (gcnew System::Windows::Forms::Button());
			this->One = (gcnew System::Windows::Forms::Button());
			this->Two = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->textBox1->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(5, 7);
			this->textBox1->Margin = System::Windows::Forms::Padding(6);
			this->textBox1->MaxLength = 12;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(440, 80);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// Clear
			// 
			this->Clear->BackColor = System::Drawing::Color::Transparent;
			this->Clear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Clear->ForeColor = System::Drawing::Color::Black;
			this->Clear->Location = System::Drawing::Point(114, 104);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(103, 58);
			this->Clear->TabIndex = 1;
			this->Clear->Text = L"C";
			this->Clear->UseVisualStyleBackColor = false;
			this->Clear->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// BackSpace
			// 
			this->BackSpace->BackColor = System::Drawing::Color::Transparent;
			this->BackSpace->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BackSpace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BackSpace->ForeColor = System::Drawing::Color::Black;
			this->BackSpace->Location = System::Drawing::Point(223, 104);
			this->BackSpace->Name = L"BackSpace";
			this->BackSpace->Size = System::Drawing::Size(104, 58);
			this->BackSpace->TabIndex = 1;
			this->BackSpace->Text = L"<=";
			this->BackSpace->UseVisualStyleBackColor = false;
			this->BackSpace->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// Seven
			// 
			this->Seven->BackColor = System::Drawing::Color::Transparent;
			this->Seven->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Seven->ForeColor = System::Drawing::Color::Black;
			this->Seven->Location = System::Drawing::Point(5, 179);
			this->Seven->Name = L"Seven";
			this->Seven->Size = System::Drawing::Size(103, 58);
			this->Seven->TabIndex = 1;
			this->Seven->Text = L"7";
			this->Seven->UseVisualStyleBackColor = false;
			this->Seven->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// Eight
			// 
			this->Eight->BackColor = System::Drawing::Color::Transparent;
			this->Eight->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Eight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Eight->ForeColor = System::Drawing::Color::Black;
			this->Eight->Location = System::Drawing::Point(114, 179);
			this->Eight->Name = L"Eight";
			this->Eight->Size = System::Drawing::Size(104, 58);
			this->Eight->TabIndex = 1;
			this->Eight->Text = L"8";
			this->Eight->UseVisualStyleBackColor = false;
			this->Eight->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// Nine
			// 
			this->Nine->BackColor = System::Drawing::Color::Transparent;
			this->Nine->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nine->ForeColor = System::Drawing::Color::Black;
			this->Nine->Location = System::Drawing::Point(224, 179);
			this->Nine->Name = L"Nine";
			this->Nine->Size = System::Drawing::Size(103, 58);
			this->Nine->TabIndex = 1;
			this->Nine->Text = L"9";
			this->Nine->UseVisualStyleBackColor = false;
			this->Nine->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// Division
			// 
			this->Division->BackColor = System::Drawing::Color::Transparent;
			this->Division->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Division->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Division->ForeColor = System::Drawing::Color::Black;
			this->Division->Location = System::Drawing::Point(333, 104);
			this->Division->Name = L"Division";
			this->Division->Size = System::Drawing::Size(112, 58);
			this->Division->TabIndex = 1;
			this->Division->Text = L"/";
			this->Division->UseVisualStyleBackColor = false;
			this->Division->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// Forth
			// 
			this->Forth->BackColor = System::Drawing::Color::Transparent;
			this->Forth->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Forth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Forth->ForeColor = System::Drawing::Color::Black;
			this->Forth->Location = System::Drawing::Point(5, 252);
			this->Forth->Name = L"Forth";
			this->Forth->Size = System::Drawing::Size(103, 58);
			this->Forth->TabIndex = 1;
			this->Forth->Text = L"4";
			this->Forth->UseVisualStyleBackColor = false;
			this->Forth->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// Five
			// 
			this->Five->BackColor = System::Drawing::Color::Transparent;
			this->Five->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Five->ForeColor = System::Drawing::Color::Black;
			this->Five->Location = System::Drawing::Point(115, 252);
			this->Five->Name = L"Five";
			this->Five->Size = System::Drawing::Size(104, 58);
			this->Five->TabIndex = 1;
			this->Five->Text = L"5";
			this->Five->UseVisualStyleBackColor = false;
			this->Five->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// Six
			// 
			this->Six->BackColor = System::Drawing::Color::Transparent;
			this->Six->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Six->ForeColor = System::Drawing::Color::Black;
			this->Six->Location = System::Drawing::Point(224, 252);
			this->Six->Name = L"Six";
			this->Six->Size = System::Drawing::Size(103, 58);
			this->Six->TabIndex = 1;
			this->Six->Text = L"6";
			this->Six->UseVisualStyleBackColor = false;
			this->Six->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// Multification
			// 
			this->Multification->BackColor = System::Drawing::Color::Transparent;
			this->Multification->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Multification->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Multification->ForeColor = System::Drawing::Color::Black;
			this->Multification->Location = System::Drawing::Point(333, 252);
			this->Multification->Name = L"Multification";
			this->Multification->Size = System::Drawing::Size(112, 58);
			this->Multification->TabIndex = 1;
			this->Multification->Text = L"*";
			this->Multification->UseVisualStyleBackColor = false;
			this->Multification->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// Three
			// 
			this->Three->BackColor = System::Drawing::Color::Transparent;
			this->Three->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Three->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Three->ForeColor = System::Drawing::Color::Black;
			this->Three->Location = System::Drawing::Point(224, 326);
			this->Three->Name = L"Three";
			this->Three->Size = System::Drawing::Size(103, 58);
			this->Three->TabIndex = 1;
			this->Three->Text = L"3";
			this->Three->UseVisualStyleBackColor = false;
			this->Three->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// Sumation
			// 
			this->Sumation->BackColor = System::Drawing::Color::Transparent;
			this->Sumation->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Sumation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sumation->ForeColor = System::Drawing::Color::Black;
			this->Sumation->Location = System::Drawing::Point(333, 326);
			this->Sumation->Name = L"Sumation";
			this->Sumation->Size = System::Drawing::Size(112, 58);
			this->Sumation->TabIndex = 1;
			this->Sumation->Text = L"+";
			this->Sumation->UseVisualStyleBackColor = false;
			this->Sumation->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// Zero
			// 
			this->Zero->BackColor = System::Drawing::Color::Transparent;
			this->Zero->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Zero->ForeColor = System::Drawing::Color::Black;
			this->Zero->Location = System::Drawing::Point(114, 399);
			this->Zero->Name = L"Zero";
			this->Zero->Size = System::Drawing::Size(104, 58);
			this->Zero->TabIndex = 1;
			this->Zero->Text = L"0";
			this->Zero->UseVisualStyleBackColor = false;
			this->Zero->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// Point
			// 
			this->Point->BackColor = System::Drawing::Color::Transparent;
			this->Point->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Point->ForeColor = System::Drawing::Color::Black;
			this->Point->Location = System::Drawing::Point(224, 399);
			this->Point->Name = L"Point";
			this->Point->Size = System::Drawing::Size(103, 58);
			this->Point->TabIndex = 1;
			this->Point->Text = L".";
			this->Point->UseVisualStyleBackColor = false;
			this->Point->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// Equal
			// 
			this->Equal->BackColor = System::Drawing::Color::Transparent;
			this->Equal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Equal->ForeColor = System::Drawing::Color::Black;
			this->Equal->Location = System::Drawing::Point(333, 399);
			this->Equal->Name = L"Equal";
			this->Equal->Size = System::Drawing::Size(112, 58);
			this->Equal->TabIndex = 1;
			this->Equal->Text = L"=";
			this->Equal->UseVisualStyleBackColor = false;
			this->Equal->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// Minus
			// 
			this->Minus->BackColor = System::Drawing::Color::Transparent;
			this->Minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Minus->ForeColor = System::Drawing::Color::Black;
			this->Minus->Location = System::Drawing::Point(333, 179);
			this->Minus->Name = L"Minus";
			this->Minus->Size = System::Drawing::Size(112, 58);
			this->Minus->TabIndex = 1;
			this->Minus->Text = L"-";
			this->Minus->UseVisualStyleBackColor = false;
			this->Minus->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// PlusMinus
			// 
			this->PlusMinus->BackColor = System::Drawing::Color::Transparent;
			this->PlusMinus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->PlusMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlusMinus->ForeColor = System::Drawing::Color::Black;
			this->PlusMinus->Location = System::Drawing::Point(6, 399);
			this->PlusMinus->Name = L"PlusMinus";
			this->PlusMinus->Size = System::Drawing::Size(103, 58);
			this->PlusMinus->TabIndex = 1;
			this->PlusMinus->Text = L"+/-";
			this->PlusMinus->UseVisualStyleBackColor = false;
			this->PlusMinus->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// One
			// 
			this->One->BackColor = System::Drawing::Color::Transparent;
			this->One->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->One->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->One->ForeColor = System::Drawing::Color::Black;
			this->One->Location = System::Drawing::Point(6, 326);
			this->One->Name = L"One";
			this->One->Size = System::Drawing::Size(103, 58);
			this->One->TabIndex = 1;
			this->One->Text = L"1";
			this->One->UseVisualStyleBackColor = false;
			this->One->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// Two
			// 
			this->Two->BackColor = System::Drawing::Color::Transparent;
			this->Two->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Two->ForeColor = System::Drawing::Color::Black;
			this->Two->Location = System::Drawing::Point(115, 326);
			this->Two->Name = L"Two";
			this->Two->Size = System::Drawing::Size(104, 58);
			this->Two->TabIndex = 2;
			this->Two->Text = L"2";
			this->Two->UseVisualStyleBackColor = false;
			this->Two->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(450, 469);
			this->Controls->Add(this->Equal);
			this->Controls->Add(this->Sumation);
			this->Controls->Add(this->Multification);
			this->Controls->Add(this->Minus);
			this->Controls->Add(this->Division);
			this->Controls->Add(this->BackSpace);
			this->Controls->Add(this->Point);
			this->Controls->Add(this->Three);
			this->Controls->Add(this->Six);
			this->Controls->Add(this->Nine);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->Zero);
			this->Controls->Add(this->Two);
			this->Controls->Add(this->Five);
			this->Controls->Add(this->Eight);
			this->Controls->Add(this->PlusMinus);
			this->Controls->Add(this->One);
			this->Controls->Add(this->Forth);
			this->Controls->Add(this->Seven);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Casio";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ str = textBox1->Text;
		n = Convert::ToDouble(str);
		n = -n;
		str = Convert::ToString(n);
		textBox1->Text = str;
		textBox1->Focus();
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		fg = 1;
		String^ str = textBox1->Text;
		n1 = n1 + Convert::ToDouble(str);
		textBox1->Text = "";
		textBox1->Focus();
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ str = textBox1->Text;
		n2 = Convert::ToDouble(str);
		if (fg == 1)
		{
			str = Convert::ToString(n1 + n2);
			textBox1->Text = str;
			n2 = 0;
			n1 = 0;
		}
		else if (fg == 2)
		{
			str = Convert::ToString(n3 * n2);
			textBox1->Text = str;
			n2 = 0;
			n1 = 0;
			n3 = 1;
		}
		else if (fg == 3)
		{
			str = Convert::ToString(n1 - n2);
			textBox1->Text = str;

			n2 = 0;
			n1 = 0;
		}
		else if (fg == 4)
		{
			res = n1 / n2;
			textBox1->Text = res.ToString();
			n2 = 0;
			n1 = 0;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		n1 = 0;
		n2 = 0;
		res = 0;
		textBox1->Focus();
		//fg = 0;
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ str = textBox1->Text;
		n3 *= Convert::ToDouble(str);
		textBox1->Text = "";
		fg = 2;
		textBox1->Focus();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ str = textBox1->Text;
		n1 = Convert::ToDouble(str) - n1;
		textBox1->Text = "";
		fg = 3;
		textBox1->Focus();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ str = textBox1->Text;
		n1 = Convert::ToDouble(str);
		textBox1->Text = "";
		fg = 4;
		textBox1->Focus();
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "0";
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "2";
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "3";
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "4";
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "5";
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "6";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "7";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "8";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "9";
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += ".";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1);
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)Keys::Back && e->KeyChar != '.') {
			e->Handled = true;
		}
	}
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Oemplus || e->KeyCode == Keys::Add) {
			Sumation->BackColor = Color::LightGray;
			Sumation->Refresh();
			System::Threading::Thread::Sleep(100);
			this->Sumation->BackColor = System::Drawing::Color::Transparent;
			Sumation->Refresh();
			Sumation->PerformClick();
		}
		if (e->KeyCode == Keys::Multiply) {
			Multification->BackColor = Color::LightGray;
			Multification->Refresh();
			System::Threading::Thread::Sleep(100);
			this->Multification->BackColor = System::Drawing::Color::Transparent;
			Multification->Refresh();
			Multification->PerformClick();
		}
		if (e->KeyCode == Keys::Subtract || e->KeyCode == Keys::OemMinus) {
			Minus->BackColor = Color::LightGray;
			Minus->Refresh();
			System::Threading::Thread::Sleep(100);
			this->Minus->BackColor = System::Drawing::Color::Transparent;
			Minus->Refresh();
			Minus->PerformClick();
		}
		if (e->KeyCode == Keys::Divide) {
			Division->BackColor = Color::LightGray;
			Division->Refresh();
			System::Threading::Thread::Sleep(100);
			this->Division->BackColor = System::Drawing::Color::Transparent;
			Division->Refresh();
			Division->PerformClick();
		}
		if (e->KeyCode == Keys::Enter) {
			Equal->BackColor = Color::LightGray;
			Equal->Refresh();
			System::Threading::Thread::Sleep(100);
			this->Equal->BackColor = System::Drawing::Color::Transparent;
			Equal->Refresh();
			Equal->PerformClick();
		}
		if (e->KeyCode == Keys::Escape) {
			Clear->BackColor = Color::LightGray;
			Clear->Refresh();
			System::Threading::Thread::Sleep(100);
			this->Clear->BackColor = System::Drawing::Color::Transparent;
			Clear->Refresh();
			Clear->PerformClick();
		}
		if (e->KeyCode == Keys::Back) {
			BackSpace->BackColor = Color::LightGray;
			BackSpace->Refresh();
			System::Threading::Thread::Sleep(100);
			this->BackSpace->BackColor = System::Drawing::Color::Transparent;
			BackSpace->Refresh();
		}
		if (e->KeyCode == (Keys)220) {
			PlusMinus->BackColor = Color::LightGray;
			PlusMinus->Refresh();
			System::Threading::Thread::Sleep(100);
			this->PlusMinus->BackColor = System::Drawing::Color::Transparent;
			PlusMinus->Refresh();
			PlusMinus->PerformClick();
		}
		if (e->KeyCode == Keys::Decimal) {
			Point->BackColor = Color::LightGray;
			Point->Refresh();
			System::Threading::Thread::Sleep(100);
			this->Point->BackColor = System::Drawing::Color::Transparent;
			Point->Refresh();
		}
		if (e->KeyCode == Keys::NumPad1 || e->KeyCode == Keys::D1) {
			One->BackColor = Color::LightGray;
			One->Refresh();
			System::Threading::Thread::Sleep(100);
			this->One->BackColor = System::Drawing::Color::Transparent;
			One->Refresh();
		}
		if (e->KeyCode == Keys::NumPad2 || e->KeyCode == Keys::D2) {
			Two->BackColor = Color::LightGray;
			Two->Refresh();
			System::Threading::Thread::Sleep(100);
			this->Two->BackColor = System::Drawing::Color::Transparent;
			Two->Refresh();
		}
		if (e->KeyCode == Keys::NumPad3 || e->KeyCode == Keys::D3) {
			Three->BackColor = Color::LightGray;
			Three->Refresh();
			System::Threading::Thread::Sleep(100);
			this->Three->BackColor = System::Drawing::Color::Transparent;
			Three->Refresh();
		}
		if (e->KeyCode == Keys::NumPad4 || e->KeyCode == Keys::D4) {
			Forth->BackColor = Color::LightGray;
			Forth->Refresh();
			System::Threading::Thread::Sleep(100);
			this->Forth->BackColor = System::Drawing::Color::Transparent;
			Forth->Refresh();
		}
		if (e->KeyCode == Keys::NumPad5 || e->KeyCode == Keys::D5) {
			Five->BackColor = Color::LightGray;
			Five->Refresh();
			System::Threading::Thread::Sleep(100);
			this->Five->BackColor = System::Drawing::Color::Transparent;
			One->Refresh();
		}
		if (e->KeyCode == Keys::NumPad6 || e->KeyCode == Keys::D6) {
			Six->BackColor = Color::LightGray;
			Six->Refresh();
			System::Threading::Thread::Sleep(100);
			this->Six->BackColor = System::Drawing::Color::Transparent;
			One->Refresh();
		}
		if (e->KeyCode == Keys::NumPad7 || e->KeyCode == Keys::D7) {
			Seven->BackColor = Color::LightGray;
			Seven->Refresh();
			System::Threading::Thread::Sleep(100);
			this->Seven->BackColor = System::Drawing::Color::Transparent;
			One->Refresh();
		}
		if (e->KeyCode == Keys::NumPad8 || e->KeyCode == Keys::D8) {
			Eight->BackColor = Color::LightGray;
			Eight->Refresh();
			System::Threading::Thread::Sleep(100);
			this->Eight->BackColor = System::Drawing::Color::Transparent;
			One->Refresh();
		}
		if (e->KeyCode == Keys::NumPad9 || e->KeyCode == Keys::D9) {
			Nine->BackColor = Color::LightGray;
			Nine->Refresh();
			System::Threading::Thread::Sleep(100);
			this->Nine->BackColor = System::Drawing::Color::Transparent;
			One->Refresh();
		}
		if (e->KeyCode == Keys::NumPad0 || e->KeyCode == Keys::D0) {
			Zero->BackColor = Color::LightGray;
			Zero->Refresh();
			System::Threading::Thread::Sleep(100);
			this->Zero->BackColor = System::Drawing::Color::Transparent;
			One->Refresh();
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "1";
	}
	};
}
