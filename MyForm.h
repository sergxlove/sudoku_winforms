#pragma once

namespace sudokuwinforms {

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
			this->KeyPreview = true;
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Label^ label57;
	private: System::Windows::Forms::Label^ label58;
	private: System::Windows::Forms::Label^ label59;
	private: System::Windows::Forms::Label^ label60;
	private: System::Windows::Forms::Label^ label61;
	private: System::Windows::Forms::Label^ label62;
	private: System::Windows::Forms::Label^ label63;
	private: System::Windows::Forms::Label^ label64;
	private: System::Windows::Forms::Label^ label65;
	private: System::Windows::Forms::Label^ label66;
	private: System::Windows::Forms::Label^ label67;
	private: System::Windows::Forms::Label^ label68;
	private: System::Windows::Forms::Label^ label69;
	private: System::Windows::Forms::Label^ label70;
	private: System::Windows::Forms::Label^ label71;
	private: System::Windows::Forms::Label^ label72;
	private: System::Windows::Forms::Label^ label73;
	private: System::Windows::Forms::Label^ label74;
	private: System::Windows::Forms::Label^ label75;
	private: System::Windows::Forms::Label^ label76;
	private: System::Windows::Forms::Label^ label77;
	private: System::Windows::Forms::Label^ label78;
	private: System::Windows::Forms::Label^ label79;
	private: System::Windows::Forms::Label^ label80;
	private: System::Windows::Forms::Label^ label81;
	private: System::Windows::Forms::Label^ label82;
	private: System::Windows::Forms::Label^ label83;
	private: System::Windows::Forms::Label^ label84;
	private: System::Windows::Forms::Label^ label85;
	private: System::Windows::Forms::Label^ label86;
	private: System::Windows::Forms::Label^ label87;
	private: System::Windows::Forms::Label^ label88;
	private: System::Windows::Forms::Label^ label89;
	private: System::Windows::Forms::Label^ label91;
	private: System::Windows::Forms::Label^ label90;
	private: Label^ label_field;
	private: Label^ label_value;
	private: Label^ label_color;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: array<int, 2>^ arr_label;
	private: array<bool, 2>^ array_visible;
	private: array<int, 2>^ field_for_check;
	private: int number_label;
	private: System::Windows::Forms::Button^ button4;
	private: int index = 0;
	private: int poz_x = 99;
	private: int poz_y = 99;
	private: int count_point = 0;
	private: int count_hint = 0;
	private: int seconds = 0;
	private: int minutes = 0;
	private: System::Windows::Forms::Label^ label92;
	private: System::Windows::Forms::Label^ label93;
	private: System::Windows::Forms::Label^ label94;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: int label_value_for_keys = 0;
	protected:
	protected:
		void OnPaint(PaintEventArgs^ e) override
		{
			Graphics^ g = e->Graphics;
			Pen^ pen = gcnew Pen(Color::White, 2);
			g->DrawLine(pen, 30, 10, 565, 10);
			g->DrawLine(pen, 30, 10, 30, 600);
			g->DrawLine(pen, 30, 600, 565, 600);
			g->DrawLine(pen, 565, 10, 565, 600);
			g->DrawLine(pen, 203, 10, 203, 600);
			g->DrawLine(pen, 386, 10, 386, 600);
			g->DrawLine(pen, 30, 210, 565, 210);
			g->DrawLine(pen, 30, 407, 565, 407);
		}
private: System::ComponentModel::IContainer^ components;
protected:
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Gray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::Window;
			this->label1->Location = System::Drawing::Point(29, 761);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 75);
			this->label1->TabIndex = 0;
			this->label1->Text = L"1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::Click_value);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Gray;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::Window;
			this->label2->Location = System::Drawing::Point(120, 761);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 75);
			this->label2->TabIndex = 1;
			this->label2->Text = L"2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::Click_value);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Gray;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::Window;
			this->label3->Location = System::Drawing::Point(215, 761);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 75);
			this->label3->TabIndex = 2;
			this->label3->Text = L"3";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::Click_value);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Gray;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::Window;
			this->label4->Location = System::Drawing::Point(309, 761);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 75);
			this->label4->TabIndex = 3;
			this->label4->Text = L"4";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::Click_value);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Gray;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::Window;
			this->label5->Location = System::Drawing::Point(403, 761);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 75);
			this->label5->TabIndex = 4;
			this->label5->Text = L"5";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::Click_value);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Gray;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::Window;
			this->label6->Location = System::Drawing::Point(497, 761);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 75);
			this->label6->TabIndex = 5;
			this->label6->Text = L"6";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::Click_value);
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Gray;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::Window;
			this->label7->Location = System::Drawing::Point(591, 761);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 75);
			this->label7->TabIndex = 6;
			this->label7->Text = L"7";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::Click_value);
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Gray;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::SystemColors::Window;
			this->label8->Location = System::Drawing::Point(683, 761);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 75);
			this->label8->TabIndex = 7;
			this->label8->Text = L"8";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::Click_value);
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Gray;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::Window;
			this->label9->Location = System::Drawing::Point(777, 761);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 75);
			this->label9->TabIndex = 8;
			this->label9->Text = L"9";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::Click_value);
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Gray;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::SystemColors::Window;
			this->label10->Location = System::Drawing::Point(49, 666);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(65, 65);
			this->label10->TabIndex = 9;
			this->label10->Text = L".";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::Gray;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::SystemColors::Window;
			this->label11->Location = System::Drawing::Point(120, 666);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(65, 65);
			this->label11->TabIndex = 10;
			this->label11->Text = L".";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::Gray;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::SystemColors::Window;
			this->label12->Location = System::Drawing::Point(191, 666);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 65);
			this->label12->TabIndex = 11;
			this->label12->Text = L".";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::Gray;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::SystemColors::Window;
			this->label13->Location = System::Drawing::Point(49, 591);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(65, 65);
			this->label13->TabIndex = 12;
			this->label13->Text = L".";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::Gray;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::SystemColors::Window;
			this->label14->Location = System::Drawing::Point(120, 591);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(65, 65);
			this->label14->TabIndex = 13;
			this->label14->Text = L".";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::Color::Gray;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::SystemColors::Window;
			this->label15->Location = System::Drawing::Point(191, 591);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(65, 65);
			this->label15->TabIndex = 14;
			this->label15->Text = L".";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::Color::Gray;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::SystemColors::Window;
			this->label16->Location = System::Drawing::Point(49, 515);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(65, 65);
			this->label16->TabIndex = 15;
			this->label16->Text = L".";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::Gray;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::SystemColors::Window;
			this->label17->Location = System::Drawing::Point(120, 515);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(65, 65);
			this->label17->TabIndex = 16;
			this->label17->Text = L".";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label17->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::Color::Gray;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::SystemColors::Window;
			this->label18->Location = System::Drawing::Point(191, 515);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(65, 65);
			this->label18->TabIndex = 17;
			this->label18->Text = L".";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label18->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::Color::Gray;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::SystemColors::Window;
			this->label19->Location = System::Drawing::Point(191, 274);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(65, 65);
			this->label19->TabIndex = 26;
			this->label19->Text = L".";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label19->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::Color::Gray;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->ForeColor = System::Drawing::SystemColors::Window;
			this->label20->Location = System::Drawing::Point(120, 274);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(65, 65);
			this->label20->TabIndex = 25;
			this->label20->Text = L".";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label20->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label21
			// 
			this->label21->BackColor = System::Drawing::Color::Gray;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->ForeColor = System::Drawing::SystemColors::Window;
			this->label21->Location = System::Drawing::Point(49, 274);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(65, 65);
			this->label21->TabIndex = 24;
			this->label21->Text = L".";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label21->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label22
			// 
			this->label22->BackColor = System::Drawing::Color::Gray;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->ForeColor = System::Drawing::SystemColors::Window;
			this->label22->Location = System::Drawing::Point(191, 350);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(65, 65);
			this->label22->TabIndex = 23;
			this->label22->Text = L".";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label22->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label23
			// 
			this->label23->BackColor = System::Drawing::Color::Gray;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->ForeColor = System::Drawing::SystemColors::Window;
			this->label23->Location = System::Drawing::Point(120, 350);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(65, 65);
			this->label23->TabIndex = 22;
			this->label23->Text = L".";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label23->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label24
			// 
			this->label24->BackColor = System::Drawing::Color::Gray;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->ForeColor = System::Drawing::SystemColors::Window;
			this->label24->Location = System::Drawing::Point(49, 350);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(65, 65);
			this->label24->TabIndex = 21;
			this->label24->Text = L".";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label24->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label25
			// 
			this->label25->BackColor = System::Drawing::Color::Gray;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->ForeColor = System::Drawing::SystemColors::Window;
			this->label25->Location = System::Drawing::Point(191, 425);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(65, 65);
			this->label25->TabIndex = 20;
			this->label25->Text = L".";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label25->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label26
			// 
			this->label26->BackColor = System::Drawing::Color::Gray;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->ForeColor = System::Drawing::SystemColors::Window;
			this->label26->Location = System::Drawing::Point(120, 425);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(65, 65);
			this->label26->TabIndex = 19;
			this->label26->Text = L".";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label26->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label27
			// 
			this->label27->BackColor = System::Drawing::Color::Gray;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->ForeColor = System::Drawing::SystemColors::Window;
			this->label27->Location = System::Drawing::Point(49, 425);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(65, 65);
			this->label27->TabIndex = 18;
			this->label27->Text = L".";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label27->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label28
			// 
			this->label28->BackColor = System::Drawing::Color::Gray;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->ForeColor = System::Drawing::SystemColors::Window;
			this->label28->Location = System::Drawing::Point(191, 30);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(65, 65);
			this->label28->TabIndex = 35;
			this->label28->Text = L".";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label28->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label29
			// 
			this->label29->BackColor = System::Drawing::Color::Gray;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->ForeColor = System::Drawing::SystemColors::Window;
			this->label29->Location = System::Drawing::Point(120, 30);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(65, 65);
			this->label29->TabIndex = 34;
			this->label29->Text = L".";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label29->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label30
			// 
			this->label30->BackColor = System::Drawing::Color::Gray;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->ForeColor = System::Drawing::SystemColors::Window;
			this->label30->Location = System::Drawing::Point(49, 30);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(65, 65);
			this->label30->TabIndex = 33;
			this->label30->Text = L".";
			this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label30->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label31
			// 
			this->label31->BackColor = System::Drawing::Color::Gray;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->ForeColor = System::Drawing::SystemColors::Window;
			this->label31->Location = System::Drawing::Point(191, 106);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(65, 65);
			this->label31->TabIndex = 32;
			this->label31->Text = L".";
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label31->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label32
			// 
			this->label32->BackColor = System::Drawing::Color::Gray;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label32->ForeColor = System::Drawing::SystemColors::Window;
			this->label32->Location = System::Drawing::Point(120, 106);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(65, 65);
			this->label32->TabIndex = 31;
			this->label32->Text = L".";
			this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label32->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label33
			// 
			this->label33->BackColor = System::Drawing::Color::Gray;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->ForeColor = System::Drawing::SystemColors::Window;
			this->label33->Location = System::Drawing::Point(49, 106);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(65, 65);
			this->label33->TabIndex = 30;
			this->label33->Text = L".";
			this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label33->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label34
			// 
			this->label34->BackColor = System::Drawing::Color::Gray;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label34->ForeColor = System::Drawing::SystemColors::Window;
			this->label34->Location = System::Drawing::Point(191, 181);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(65, 65);
			this->label34->TabIndex = 29;
			this->label34->Text = L".";
			this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label34->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label35
			// 
			this->label35->BackColor = System::Drawing::Color::Gray;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label35->ForeColor = System::Drawing::SystemColors::Window;
			this->label35->Location = System::Drawing::Point(120, 181);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(65, 65);
			this->label35->TabIndex = 28;
			this->label35->Text = L".";
			this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label35->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label36
			// 
			this->label36->BackColor = System::Drawing::Color::Gray;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label36->ForeColor = System::Drawing::SystemColors::Window;
			this->label36->Location = System::Drawing::Point(49, 181);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(65, 65);
			this->label36->TabIndex = 27;
			this->label36->Text = L".";
			this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label36->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label37
			// 
			this->label37->BackColor = System::Drawing::Color::Gray;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label37->ForeColor = System::Drawing::SystemColors::Window;
			this->label37->Location = System::Drawing::Point(430, 30);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(65, 65);
			this->label37->TabIndex = 44;
			this->label37->Text = L".";
			this->label37->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label37->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label38
			// 
			this->label38->BackColor = System::Drawing::Color::Gray;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label38->ForeColor = System::Drawing::SystemColors::Window;
			this->label38->Location = System::Drawing::Point(359, 30);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(65, 65);
			this->label38->TabIndex = 43;
			this->label38->Text = L".";
			this->label38->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label38->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label39
			// 
			this->label39->BackColor = System::Drawing::Color::Gray;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label39->ForeColor = System::Drawing::SystemColors::Window;
			this->label39->Location = System::Drawing::Point(288, 30);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(65, 65);
			this->label39->TabIndex = 42;
			this->label39->Text = L".";
			this->label39->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label39->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label40
			// 
			this->label40->BackColor = System::Drawing::Color::Gray;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label40->ForeColor = System::Drawing::SystemColors::Window;
			this->label40->Location = System::Drawing::Point(430, 106);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(65, 65);
			this->label40->TabIndex = 41;
			this->label40->Text = L".";
			this->label40->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label40->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label41
			// 
			this->label41->BackColor = System::Drawing::Color::Gray;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label41->ForeColor = System::Drawing::SystemColors::Window;
			this->label41->Location = System::Drawing::Point(359, 106);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(65, 65);
			this->label41->TabIndex = 40;
			this->label41->Text = L".";
			this->label41->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label41->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label42
			// 
			this->label42->BackColor = System::Drawing::Color::Gray;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label42->ForeColor = System::Drawing::SystemColors::Window;
			this->label42->Location = System::Drawing::Point(288, 106);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(65, 65);
			this->label42->TabIndex = 39;
			this->label42->Text = L".";
			this->label42->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label42->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label43
			// 
			this->label43->BackColor = System::Drawing::Color::Gray;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label43->ForeColor = System::Drawing::SystemColors::Window;
			this->label43->Location = System::Drawing::Point(430, 181);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(65, 65);
			this->label43->TabIndex = 38;
			this->label43->Text = L".";
			this->label43->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label43->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label44
			// 
			this->label44->BackColor = System::Drawing::Color::Gray;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label44->ForeColor = System::Drawing::SystemColors::Window;
			this->label44->Location = System::Drawing::Point(359, 181);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(65, 65);
			this->label44->TabIndex = 37;
			this->label44->Text = L".";
			this->label44->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label44->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label45
			// 
			this->label45->BackColor = System::Drawing::Color::Gray;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label45->ForeColor = System::Drawing::SystemColors::Window;
			this->label45->Location = System::Drawing::Point(288, 181);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(65, 65);
			this->label45->TabIndex = 36;
			this->label45->Text = L".";
			this->label45->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label45->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label46
			// 
			this->label46->BackColor = System::Drawing::Color::Gray;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label46->ForeColor = System::Drawing::SystemColors::Window;
			this->label46->Location = System::Drawing::Point(430, 274);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(65, 65);
			this->label46->TabIndex = 53;
			this->label46->Text = L".";
			this->label46->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label46->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label47
			// 
			this->label47->BackColor = System::Drawing::Color::Gray;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label47->ForeColor = System::Drawing::SystemColors::Window;
			this->label47->Location = System::Drawing::Point(359, 274);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(65, 65);
			this->label47->TabIndex = 52;
			this->label47->Text = L".";
			this->label47->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label47->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label48
			// 
			this->label48->BackColor = System::Drawing::Color::Gray;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label48->ForeColor = System::Drawing::SystemColors::Window;
			this->label48->Location = System::Drawing::Point(288, 274);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(65, 65);
			this->label48->TabIndex = 51;
			this->label48->Text = L".";
			this->label48->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label48->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label49
			// 
			this->label49->BackColor = System::Drawing::Color::Gray;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label49->ForeColor = System::Drawing::SystemColors::Window;
			this->label49->Location = System::Drawing::Point(430, 350);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(65, 65);
			this->label49->TabIndex = 50;
			this->label49->Text = L".";
			this->label49->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label49->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label50
			// 
			this->label50->BackColor = System::Drawing::Color::Gray;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label50->ForeColor = System::Drawing::SystemColors::Window;
			this->label50->Location = System::Drawing::Point(359, 350);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(65, 65);
			this->label50->TabIndex = 49;
			this->label50->Text = L".";
			this->label50->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label50->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label51
			// 
			this->label51->BackColor = System::Drawing::Color::Gray;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label51->ForeColor = System::Drawing::SystemColors::Window;
			this->label51->Location = System::Drawing::Point(288, 350);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(65, 65);
			this->label51->TabIndex = 48;
			this->label51->Text = L".";
			this->label51->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label51->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label52
			// 
			this->label52->BackColor = System::Drawing::Color::Gray;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label52->ForeColor = System::Drawing::SystemColors::Window;
			this->label52->Location = System::Drawing::Point(430, 425);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(65, 65);
			this->label52->TabIndex = 47;
			this->label52->Text = L".";
			this->label52->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label52->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label53
			// 
			this->label53->BackColor = System::Drawing::Color::Gray;
			this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label53->ForeColor = System::Drawing::SystemColors::Window;
			this->label53->Location = System::Drawing::Point(359, 425);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(65, 65);
			this->label53->TabIndex = 46;
			this->label53->Text = L".";
			this->label53->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label53->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label54
			// 
			this->label54->BackColor = System::Drawing::Color::Gray;
			this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label54->ForeColor = System::Drawing::SystemColors::Window;
			this->label54->Location = System::Drawing::Point(288, 425);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(65, 65);
			this->label54->TabIndex = 45;
			this->label54->Text = L".";
			this->label54->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label54->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label55
			// 
			this->label55->BackColor = System::Drawing::Color::Gray;
			this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label55->ForeColor = System::Drawing::SystemColors::Window;
			this->label55->Location = System::Drawing::Point(430, 515);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(65, 65);
			this->label55->TabIndex = 62;
			this->label55->Text = L".";
			this->label55->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label55->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label56
			// 
			this->label56->BackColor = System::Drawing::Color::Gray;
			this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label56->ForeColor = System::Drawing::SystemColors::Window;
			this->label56->Location = System::Drawing::Point(359, 515);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(65, 65);
			this->label56->TabIndex = 61;
			this->label56->Text = L".";
			this->label56->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label56->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label57
			// 
			this->label57->BackColor = System::Drawing::Color::Gray;
			this->label57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label57->ForeColor = System::Drawing::SystemColors::Window;
			this->label57->Location = System::Drawing::Point(288, 515);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(65, 65);
			this->label57->TabIndex = 60;
			this->label57->Text = L".";
			this->label57->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label57->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label58
			// 
			this->label58->BackColor = System::Drawing::Color::Gray;
			this->label58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label58->ForeColor = System::Drawing::SystemColors::Window;
			this->label58->Location = System::Drawing::Point(430, 591);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(65, 65);
			this->label58->TabIndex = 59;
			this->label58->Text = L".";
			this->label58->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label58->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label59
			// 
			this->label59->BackColor = System::Drawing::Color::Gray;
			this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label59->ForeColor = System::Drawing::SystemColors::Window;
			this->label59->Location = System::Drawing::Point(359, 591);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(65, 65);
			this->label59->TabIndex = 58;
			this->label59->Text = L".";
			this->label59->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label59->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label60
			// 
			this->label60->BackColor = System::Drawing::Color::Gray;
			this->label60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label60->ForeColor = System::Drawing::SystemColors::Window;
			this->label60->Location = System::Drawing::Point(288, 591);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(65, 65);
			this->label60->TabIndex = 57;
			this->label60->Text = L".";
			this->label60->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label60->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label61
			// 
			this->label61->BackColor = System::Drawing::Color::Gray;
			this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label61->ForeColor = System::Drawing::SystemColors::Window;
			this->label61->Location = System::Drawing::Point(430, 666);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(65, 65);
			this->label61->TabIndex = 56;
			this->label61->Text = L".";
			this->label61->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label61->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label62
			// 
			this->label62->BackColor = System::Drawing::Color::Gray;
			this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label62->ForeColor = System::Drawing::SystemColors::Window;
			this->label62->Location = System::Drawing::Point(359, 666);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(65, 65);
			this->label62->TabIndex = 55;
			this->label62->Text = L".";
			this->label62->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label62->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label63
			// 
			this->label63->BackColor = System::Drawing::Color::Gray;
			this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label63->ForeColor = System::Drawing::SystemColors::Window;
			this->label63->Location = System::Drawing::Point(288, 666);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(65, 65);
			this->label63->TabIndex = 54;
			this->label63->Text = L".";
			this->label63->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label63->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label64
			// 
			this->label64->BackColor = System::Drawing::Color::Gray;
			this->label64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label64->ForeColor = System::Drawing::SystemColors::Window;
			this->label64->Location = System::Drawing::Point(672, 30);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(65, 65);
			this->label64->TabIndex = 71;
			this->label64->Text = L".";
			this->label64->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label64->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label65
			// 
			this->label65->BackColor = System::Drawing::Color::Gray;
			this->label65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label65->ForeColor = System::Drawing::SystemColors::Window;
			this->label65->Location = System::Drawing::Point(601, 30);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(65, 65);
			this->label65->TabIndex = 70;
			this->label65->Text = L".";
			this->label65->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label65->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label66
			// 
			this->label66->BackColor = System::Drawing::Color::Gray;
			this->label66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label66->ForeColor = System::Drawing::SystemColors::Window;
			this->label66->Location = System::Drawing::Point(530, 30);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(65, 65);
			this->label66->TabIndex = 69;
			this->label66->Text = L".";
			this->label66->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label66->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label67
			// 
			this->label67->BackColor = System::Drawing::Color::Gray;
			this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label67->ForeColor = System::Drawing::SystemColors::Window;
			this->label67->Location = System::Drawing::Point(672, 106);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(65, 65);
			this->label67->TabIndex = 68;
			this->label67->Text = L".";
			this->label67->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label67->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label68
			// 
			this->label68->BackColor = System::Drawing::Color::Gray;
			this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label68->ForeColor = System::Drawing::SystemColors::Window;
			this->label68->Location = System::Drawing::Point(601, 106);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(65, 65);
			this->label68->TabIndex = 67;
			this->label68->Text = L".";
			this->label68->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label68->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label69
			// 
			this->label69->BackColor = System::Drawing::Color::Gray;
			this->label69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label69->ForeColor = System::Drawing::SystemColors::Window;
			this->label69->Location = System::Drawing::Point(530, 106);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(65, 65);
			this->label69->TabIndex = 66;
			this->label69->Text = L".";
			this->label69->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label69->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label70
			// 
			this->label70->BackColor = System::Drawing::Color::Gray;
			this->label70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label70->ForeColor = System::Drawing::SystemColors::Window;
			this->label70->Location = System::Drawing::Point(672, 181);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(65, 65);
			this->label70->TabIndex = 65;
			this->label70->Text = L".";
			this->label70->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label70->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label71
			// 
			this->label71->BackColor = System::Drawing::Color::Gray;
			this->label71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label71->ForeColor = System::Drawing::SystemColors::Window;
			this->label71->Location = System::Drawing::Point(601, 181);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(65, 65);
			this->label71->TabIndex = 64;
			this->label71->Text = L".";
			this->label71->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label71->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label72
			// 
			this->label72->BackColor = System::Drawing::Color::Gray;
			this->label72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label72->ForeColor = System::Drawing::SystemColors::Window;
			this->label72->Location = System::Drawing::Point(530, 181);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(65, 65);
			this->label72->TabIndex = 63;
			this->label72->Text = L".";
			this->label72->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label72->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label73
			// 
			this->label73->BackColor = System::Drawing::Color::Gray;
			this->label73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label73->ForeColor = System::Drawing::SystemColors::Window;
			this->label73->Location = System::Drawing::Point(672, 274);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(65, 65);
			this->label73->TabIndex = 80;
			this->label73->Text = L".";
			this->label73->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label73->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label74
			// 
			this->label74->BackColor = System::Drawing::Color::Gray;
			this->label74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label74->ForeColor = System::Drawing::SystemColors::Window;
			this->label74->Location = System::Drawing::Point(601, 274);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(65, 65);
			this->label74->TabIndex = 79;
			this->label74->Text = L".";
			this->label74->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label74->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label75
			// 
			this->label75->BackColor = System::Drawing::Color::Gray;
			this->label75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label75->ForeColor = System::Drawing::SystemColors::Window;
			this->label75->Location = System::Drawing::Point(530, 274);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(65, 65);
			this->label75->TabIndex = 78;
			this->label75->Text = L".";
			this->label75->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label75->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label76
			// 
			this->label76->BackColor = System::Drawing::Color::Gray;
			this->label76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label76->ForeColor = System::Drawing::SystemColors::Window;
			this->label76->Location = System::Drawing::Point(672, 350);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(65, 65);
			this->label76->TabIndex = 77;
			this->label76->Text = L".";
			this->label76->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label76->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label77
			// 
			this->label77->BackColor = System::Drawing::Color::Gray;
			this->label77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label77->ForeColor = System::Drawing::SystemColors::Window;
			this->label77->Location = System::Drawing::Point(601, 350);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(65, 65);
			this->label77->TabIndex = 76;
			this->label77->Text = L".";
			this->label77->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label77->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label78
			// 
			this->label78->BackColor = System::Drawing::Color::Gray;
			this->label78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label78->ForeColor = System::Drawing::SystemColors::Window;
			this->label78->Location = System::Drawing::Point(530, 350);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(65, 65);
			this->label78->TabIndex = 75;
			this->label78->Text = L".";
			this->label78->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label78->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label79
			// 
			this->label79->BackColor = System::Drawing::Color::Gray;
			this->label79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label79->ForeColor = System::Drawing::SystemColors::Window;
			this->label79->Location = System::Drawing::Point(672, 425);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(65, 65);
			this->label79->TabIndex = 74;
			this->label79->Text = L".";
			this->label79->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label79->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label80
			// 
			this->label80->BackColor = System::Drawing::Color::Gray;
			this->label80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label80->ForeColor = System::Drawing::SystemColors::Window;
			this->label80->Location = System::Drawing::Point(601, 425);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(65, 65);
			this->label80->TabIndex = 73;
			this->label80->Text = L".";
			this->label80->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label80->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label81
			// 
			this->label81->BackColor = System::Drawing::Color::Gray;
			this->label81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label81->ForeColor = System::Drawing::SystemColors::Window;
			this->label81->Location = System::Drawing::Point(530, 425);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(65, 65);
			this->label81->TabIndex = 72;
			this->label81->Text = L".";
			this->label81->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label81->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label82
			// 
			this->label82->BackColor = System::Drawing::Color::Gray;
			this->label82->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label82->ForeColor = System::Drawing::SystemColors::Window;
			this->label82->Location = System::Drawing::Point(672, 515);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(65, 65);
			this->label82->TabIndex = 89;
			this->label82->Text = L".";
			this->label82->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label82->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label83
			// 
			this->label83->BackColor = System::Drawing::Color::Gray;
			this->label83->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label83->ForeColor = System::Drawing::SystemColors::Window;
			this->label83->Location = System::Drawing::Point(601, 515);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(65, 65);
			this->label83->TabIndex = 88;
			this->label83->Text = L".";
			this->label83->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label83->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label84
			// 
			this->label84->BackColor = System::Drawing::Color::Gray;
			this->label84->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label84->ForeColor = System::Drawing::SystemColors::Window;
			this->label84->Location = System::Drawing::Point(530, 515);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(65, 65);
			this->label84->TabIndex = 87;
			this->label84->Text = L".";
			this->label84->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label84->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label85
			// 
			this->label85->BackColor = System::Drawing::Color::Gray;
			this->label85->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label85->ForeColor = System::Drawing::SystemColors::Window;
			this->label85->Location = System::Drawing::Point(672, 591);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(65, 65);
			this->label85->TabIndex = 86;
			this->label85->Text = L".";
			this->label85->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label85->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label86
			// 
			this->label86->BackColor = System::Drawing::Color::Gray;
			this->label86->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label86->ForeColor = System::Drawing::SystemColors::Window;
			this->label86->Location = System::Drawing::Point(601, 591);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(65, 65);
			this->label86->TabIndex = 85;
			this->label86->Text = L".";
			this->label86->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label86->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label87
			// 
			this->label87->BackColor = System::Drawing::Color::Gray;
			this->label87->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label87->ForeColor = System::Drawing::SystemColors::Window;
			this->label87->Location = System::Drawing::Point(530, 591);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(65, 65);
			this->label87->TabIndex = 84;
			this->label87->Text = L".";
			this->label87->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label87->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label88
			// 
			this->label88->BackColor = System::Drawing::Color::Gray;
			this->label88->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label88->ForeColor = System::Drawing::SystemColors::Window;
			this->label88->Location = System::Drawing::Point(672, 666);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(65, 65);
			this->label88->TabIndex = 83;
			this->label88->Text = L".";
			this->label88->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label88->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label89
			// 
			this->label89->BackColor = System::Drawing::Color::Gray;
			this->label89->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label89->ForeColor = System::Drawing::SystemColors::Window;
			this->label89->Location = System::Drawing::Point(601, 666);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(65, 65);
			this->label89->TabIndex = 82;
			this->label89->Text = L".";
			this->label89->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label89->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label90
			// 
			this->label90->BackColor = System::Drawing::Color::Gray;
			this->label90->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label90->ForeColor = System::Drawing::SystemColors::Window;
			this->label90->Location = System::Drawing::Point(530, 666);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(65, 65);
			this->label90->TabIndex = 81;
			this->label90->Text = L".";
			this->label90->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label90->Click += gcnew System::EventHandler(this, &MyForm::Click_field);
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label91->ForeColor = System::Drawing::SystemColors::Window;
			this->label91->Location = System::Drawing::Point(795, 10);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(295, 91);
			this->label91->TabIndex = 90;
			this->label91->Text = L"sudoku";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::Window;
			this->button1->Location = System::Drawing::Point(870, 761);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(266, 75);
			this->button1->TabIndex = 91;
			this->button1->Text = L"Стереть";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gray;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::Window;
			this->button2->Location = System::Drawing::Point(780, 207);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(331, 75);
			this->button2->TabIndex = 92;
			this->button2->Text = L"Новая игра";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gray;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::Window;
			this->button3->Location = System::Drawing::Point(780, 299);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(331, 75);
			this->button3->TabIndex = 93;
			this->button3->Text = L"Проверить";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gray;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::Window;
			this->button4->Location = System::Drawing::Point(780, 390);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(331, 75);
			this->button4->TabIndex = 94;
			this->button4->Text = L"Подсказка";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(811, 481);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(250, 250);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 95;
			this->pictureBox1->TabStop = false;
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label92->ForeColor = System::Drawing::SystemColors::Window;
			this->label92->Location = System::Drawing::Point(977, 117);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(75, 54);
			this->label92->TabIndex = 96;
			this->label92->Text = L"00";
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label93->ForeColor = System::Drawing::SystemColors::Window;
			this->label93->Location = System::Drawing::Point(854, 117);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(75, 54);
			this->label93->TabIndex = 97;
			this->label93->Text = L"00";
			// 
			// label94
			// 
			this->label94->AutoSize = true;
			this->label94->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label94->ForeColor = System::Drawing::SystemColors::Window;
			this->label94->Location = System::Drawing::Point(935, 117);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(36, 54);
			this->label94->TabIndex = 98;
			this->label94->Text = L":";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->ClientSize = System::Drawing::Size(1148, 857);
			this->Controls->Add(this->label94);
			this->Controls->Add(this->label93);
			this->Controls->Add(this->label92);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label91);
			this->Controls->Add(this->label82);
			this->Controls->Add(this->label83);
			this->Controls->Add(this->label84);
			this->Controls->Add(this->label85);
			this->Controls->Add(this->label86);
			this->Controls->Add(this->label87);
			this->Controls->Add(this->label88);
			this->Controls->Add(this->label89);
			this->Controls->Add(this->label90);
			this->Controls->Add(this->label73);
			this->Controls->Add(this->label74);
			this->Controls->Add(this->label75);
			this->Controls->Add(this->label76);
			this->Controls->Add(this->label77);
			this->Controls->Add(this->label78);
			this->Controls->Add(this->label79);
			this->Controls->Add(this->label80);
			this->Controls->Add(this->label81);
			this->Controls->Add(this->label64);
			this->Controls->Add(this->label65);
			this->Controls->Add(this->label66);
			this->Controls->Add(this->label67);
			this->Controls->Add(this->label68);
			this->Controls->Add(this->label69);
			this->Controls->Add(this->label70);
			this->Controls->Add(this->label71);
			this->Controls->Add(this->label72);
			this->Controls->Add(this->label55);
			this->Controls->Add(this->label56);
			this->Controls->Add(this->label57);
			this->Controls->Add(this->label58);
			this->Controls->Add(this->label59);
			this->Controls->Add(this->label60);
			this->Controls->Add(this->label61);
			this->Controls->Add(this->label62);
			this->Controls->Add(this->label63);
			this->Controls->Add(this->label46);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->label48);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->label50);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->label52);
			this->Controls->Add(this->label53);
			this->Controls->Add(this->label54);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"sudoku";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Form1_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	void swaping_rows(array<int, 2>^ &first_array, int poz_first_rows, int poz_second_rows)
	{
		int size = 9;
		array<int>^ cols = gcnew array<int>(size);
		for (int i = 0;i < size;i++)
		{
			cols[i] = first_array[poz_first_rows, i];
		}
		for (int i = 0;i < size;i++)
		{
			first_array[poz_first_rows, i] = first_array[poz_second_rows, i];
		}
		for (int i = 0;i < size;i++)
		{
			first_array[poz_second_rows, i] = cols[i];
		}
	}
	void swaping_cols(array<int,2>^ &first_array,int poz_first_cols,int poz_second_cols)
	{
		int size = 9;
		array<int>^ rows = gcnew array<int>(size);
		for (int i = 0;i < size;i++)
		{
			rows[i] = first_array[i, poz_first_cols];
		}
		for (int i = 0;i < size;i++)
		{
			first_array[i, poz_first_cols] = first_array[i, poz_second_cols];
		}
		for (int i = 0;i < size;i++)
		{
			first_array[i, poz_second_cols] = rows[i];
		}
	}
	void sort_field(array<int, 2>^& first_array)
	{
		Random^ random = gcnew Random();
		int first_poz = 0;
		int second_poz = 0;
		//0-2
		for (int i = 0;i < 3;)
		{
			first_poz = random->Next(0, 3);
			second_poz = random->Next(0, 3);
			if (first_poz != second_poz)
			{
				swaping_rows(first_array, first_poz, second_poz);
				i++;
			}
		}
		for (int i = 0;i < 3;)
		{
			first_poz = random->Next(0, 3);
			second_poz = random->Next(0, 3);
			if (first_poz != second_poz)
			{
				swaping_cols(first_array, first_poz, second_poz);
				i++;
			}
		}
		//3-5
		for (int i = 0;i < 3;)
		{
			first_poz = random->Next(3, 6);
			second_poz = random->Next(3, 6);
			if (first_poz != second_poz)
			{
				swaping_rows(first_array, first_poz, second_poz);
				i++;
			}
		}
		for (int i = 0;i < 3;)
		{
			first_poz = random->Next(3, 6);
			second_poz = random->Next(3, 6);
			if (first_poz != second_poz)
			{
				swaping_cols(first_array, first_poz, second_poz);
				i++;
			}
		}
		//6-8
		for (int i = 0;i < 3;)
		{
			first_poz = random->Next(6, 9);
			second_poz = random->Next(6, 9);
			if (first_poz != second_poz)
			{
				swaping_rows(first_array, first_poz, second_poz);
				i++;
			}
		}
		for (int i = 0;i < 3;)
		{
			first_poz = random->Next(6, 9);
			second_poz = random->Next(6, 9);
			if (first_poz != second_poz)
			{
				swaping_cols(first_array, first_poz, second_poz);
				i++;
			}
		}
	}
	array<bool,2>^ completoin_array_visible()
	{
		Random^ random = gcnew Random();
		array<bool, 2>^ arr;
		int value = random->Next(0, 6);
		if (value == 0)
		{
			arr = gcnew array<bool, 2>(9, 9)
			{
				{ 0,1,0,0,0,1,0,1,0} ,
				{ 1,0,1,0,1,0,0,0,1 },
				{ 0,1,0,0,0,1,0,0,0 },
				{ 0,0,0,0,0,0,1,0,1 },
				{ 0,1,0,0,0,0,0,1,0 },
				{ 1,0,1,0,0,0,0,0,0 },
				{ 0,0,0,1,0,0,0,1,0 },
				{ 1,0,0,0,1,0,1,0,1 },
				{ 0,1,0,1,0,0,0,1,0 },
			};
		}
		if (value == 1)
		{
			arr = gcnew array<bool, 2>(9, 9)
			{
				{0,0,1,0,1,0,1,0,0},
				{1,0,0,0,1,0,0,0,1},
				{0,1,0,1,0,1,0,1,0},
				{0,0,1,0,0,0,1,0,0},
				{1,0,0,0,0,0,0,0,1},
				{0,0,1,0,0,0,1,0,0},
				{0,1,0,1,0,1,0,1,0},
				{1,0,0,0,1,0,0,0,1},
				{0,0,1,0,1,0,1,0,0},
			};
		}
		if (value == 2)
		{
			arr = gcnew array<bool, 2>(9, 9)
			{
				{1,1,0,0,1,0,1,1,1},
				{1,1,0,0,0,0,0,0,1},
				{1,1,0,1,1,0,0,0,1},
				{1,0,0,0,0,0,1,0,0},
				{0,1,0,0,1,0,0,1,0},
				{0,0,1,0,0,0,0,0,1},
				{1,0,0,0,1,1,0,1,1},
				{1,0,0,0,0,0,0,1,1},
				{1,1,1,0,1,0,0,1,1},
			};
		}
		if (value == 3)
		{
			arr = gcnew array<bool, 2>(9, 9)
			{
				{0,1,1,0,0,0,0,1,0},
				{1,0,1,0,0,0,1,0,0},
				{1,0,0,0,0,1,0,1,0},
				{0,1,1,0,1,0,1,0,0},
				{0,0,0,1,0,1,0,0,0},
				{0,0,1,0,1,0,1,1,0},
				{0,1,0,1,0,0,0,0,1},
				{0,0,1,0,0,0,1,0,1},
				{0,1,0,0,0,0,1,1,0},
			};
		}
		if (value == 4)
		{
			arr = gcnew array<bool, 2>(9, 9)
			{
				{1,1,0,0,1,0,0,1,1},
				{1,1,0,0,0,1,0,1,1},
				{0,1,0,0,0,1,1,0,0},
				{1,1,0,1,1,0,1,0,0},
				{1,0,0,1,0,0,1,0,0},
				{0,0,0,1,0,1,0,1,0},
				{0,0,0,0,1,1,0,1,1},
				{0,0,0,1,1,0,0,0,1},
				{1,1,0,0,0,0,0,0,1},
			};
		}
		if (value == 5)
		{
			arr = gcnew array<bool, 2>(9, 9)
			{
				{0,1,0,0,0,0,1,0,0},
				{0,0,0,0,1,1,0,1,0},
				{0,0,1,1,1,0,0,1,0},
				{0,1,1,0,0,0,0,1,0},
				{1,0,0,1,0,1,0,0,1},
				{0,1,0,0,0,0,1,1,0},
				{0,1,0,0,1,1,1,0,0},
				{0,1,0,1,1,0,0,0,0},
				{0,0,1,0,0,0,0,1,0},
			};
		}
		return arr;
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		int size = 9;
		int value = 1;
		int count = 1;
		int start_value = 1;
		int index_field = 0;
		array<int, 2>^ field = gcnew array<int, 2>(size, size);
		array_visible = gcnew array<bool, 2>(9, 9);
		field_for_check = gcnew array<int, 2>(9, 9);
		Random^ random = gcnew Random();
		for (int i = 0;i < size;i++)
		{
			value = start_value;
			for (int j = 0;j < size;j++)
			{
				if (value == 10)
				{
					value = 1;
				}
				field[i, j] = value;
				value++;
			}
			if (count == 3)
			{
				count = 1;
				start_value -= 5;
			}
			else
			{
				start_value += 3;
				count++;
			}
		}
		sort_field(field);
		field_for_check = field;
		arr_label = gcnew array<int, 2>(9, 9) {
			{30,29,28,39,38,37,66,65,64},
			{33,32,31,42,41,40,69,68,67},
			{36,35,34,45,44,43,72,71,70},
			{21,20,19,48,47,46,75,74,73},
			{24,23,22,51,50,49,78,77,76},
			{27,26,25,54,53,52,81,80,79},
			{16,17,18,57,56,55,84,83,82},
			{13,14,15,60,59,58,87,86,85},
			{10,11,12,63,62,61,90,89,88},
		};
		array_visible = completoin_array_visible();
		for (int i = 0;i < 9;i++)
		{
			for (int j = 0;j < 9;j++)
			{
				if (array_visible[i, j] == true)
				{
					label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[i,j], true)[0]);
					label_color->Text = Convert::ToString(field[i, j]);
				}
			}
		}
		timer1->Start();
	}
    private: System::Void Click_field(System::Object^ sender, System::EventArgs^ e) {
		label_field = safe_cast<Label^>(sender);
		number_label = (Convert::ToInt32(label_field->Name[5])-48) * 10 + (Convert::ToInt32(label_field->Name[6])-48);
		poz_x = 99;
		poz_y = 99;
		for (int i = 0;i < 9;i++)
		{
			for (int j = 0;j < 9;j++)
			{
				if (arr_label[i, j] == number_label)
				{
					poz_x = i;
					poz_y = j;
					break;
				}
			}
			if (poz_x != 99 && poz_y != 99)
			{
				break;
			}
		}
		for (int i = 0;i < 9;i++)
		{
			for (int j = 0;j < 9;j++)
			{
				index = arr_label[i, j];
				label_color = dynamic_cast<Label^>(this->Controls->Find("label" + index, true)[0]);
				label_color->BackColor = Color::FromArgb(128, 128, 128);
			}
		}
		for (int i = 0;i < 9;i++)
		{
			index = arr_label[poz_x, i];
			label_color = dynamic_cast<Label^>(this->Controls->Find("label" + index, true)[0]);
			label_color->BackColor = Color::LightGray;
		}
		for (int i = 0;i < 9;i++)
		{
			index = arr_label[i, poz_y];
			label_color = dynamic_cast<Label^>(this->Controls->Find("label" + index, true)[0]);
			label_color->BackColor = Color::LightGray;
		}
		label_color = dynamic_cast<Label^>(this->Controls->Find("label" + number_label, true)[0]);
		label_color->BackColor = Color::FromArgb(90, 90, 90);
    }
	private: System::Void Click_value(System::Object^ sender, System::EventArgs^ e) {
		number_label = (Convert::ToInt32(label_field->Name[5]) - 48) * 10 + (Convert::ToInt32(label_field->Name[6]) - 48);
		poz_x = 99;
		poz_y = 99;
		for (int i = 0;i < 9;i++)
		{
			for (int j = 0;j < 9;j++)
			{
				if (arr_label[i, j] == number_label)
				{
					poz_x = i;
					poz_y = j;
					break;
				}
			}
			if (poz_x != 99 && poz_y != 99)
			{
				break;
			}
		}
		if (array_visible[poz_x, poz_y]!=true)
		{
			label_value = safe_cast<Label^>(sender);
			label_field->Text = label_value->Text;
			label_field->ForeColor = Color::Blue;
			for (int i = 0;i < 9;i++)
			{
				for (int j = 0;j < 9;j++)
				{
					label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[i, j], true)[0]);
					if (label_color->BackColor == Color::FromArgb(90,90,90))
					{
						label_color->BackColor = Color::FromArgb(128, 128, 128);
					}
				}
			}
			for (int i = 0;i < 9;i++)
			{
				for (int j = 0;j < 9;j++)
				{
					label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[i,j], true)[0]);
					if (label_color->Text != ".")
					{
						if (label_value->Text == label_color->Text)
						{
							label_color->BackColor = Color::FromArgb(90, 90, 90);
						}
					}
				}
			}
		}
		else
		{
			MessageBox::Show(this, "невозможно изменить готовое значение", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		number_label = (Convert::ToInt32(label_field->Name[5]) - 48) * 10 + (Convert::ToInt32(label_field->Name[6]) - 48);
		poz_x = 99;
		poz_y = 99;
		for (int i = 0;i < 9;i++)
		{
			for (int j = 0;j < 9;j++)
			{
				if (arr_label[i, j] == number_label)
				{
					poz_x = i;
					poz_y = j;
					break;
				}
			}
			if (poz_x != 99 && poz_y != 99)
			{
				break;
			}
		}
		if (array_visible[poz_x, poz_y] != true)
		{
			label_field->Text = ".";
			label_field->ForeColor = Color::White;
		}
		else
		{
			MessageBox::Show(this, "невозможно очистить готовое значение", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Stop();
	seconds = 0;
	minutes = 0;
	label92->Text = "00";
	label93->Text = "00";
	int size = 9;
	int value = 1;
	int count = 1;
	int start_value = 1;
	array<int, 2>^ field = gcnew array<int, 2>(size, size);
	Random^ random = gcnew Random();
	for (int i = 0;i < 9;i++)
	{
		for (int j = 0;j < 9;j++)
		{
			label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[i, j], true)[0]);
			label_color->Text = ".";
			label_color->ForeColor = Color::White;
		}
	}
	for (int i = 0;i < size;i++)
	{
		value = start_value;
		for (int j = 0;j < size;j++)
		{
			if (value == 10)
			{
				value = 1;
			}
			field[i, j] = value;
			value++;
		}
		if (count == 3)
		{
			count = 1;
			start_value -= 5;
		}
		else
		{
			start_value += 3;
			count++;
		}
	}
	sort_field(field);
	field_for_check = field;
	array_visible = completoin_array_visible();
	for (int i = 0;i < 9;i++)
	{
		for (int j = 0;j < 9;j++)
		{
			if (array_visible[i, j] == true)
			{
				label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[i, j], true)[0]);
				label_color->Text = Convert::ToString(field[i, j]);
			}
		}
	}
	timer1->Start();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	count_point = 0;
	for (int i = 0;i < 9;i++)
	{
		for (int j = 0;j < 9;j++)
		{
			label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[i, j], true)[0]);
			if (label_color->Text != "."&&array_visible[i,j]!=true)
			{
				if (label_color->Text == Convert::ToString(field_for_check[i, j]))
				{
					label_color->ForeColor = Color::Green;
				}
				else
				{
					label_color->ForeColor = Color::Red;
				}
			}
			if (label_color->Text == ".")
			{
				count_point++;
			}
		}
	}
	if (count_point == 0)
	{
		for (int i = 0;i < 9;i++)
		{
			for (int j = 0;j < 9;j++)
			{
				label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[i, j], true)[0]);
				if (label_color->ForeColor == Color::Red)
				{
					count_point++;
				}
			}
		}
		if (count_point == 0)
		{
			MessageBox::Show(this, "Поздравляем! Вы выйграли", "Victory", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (count_hint < 3)
	{
		bool check = false;
		Random^ random = gcnew Random();
		int value_for_hint = 0;
		while (check == false)
		{
			value_for_hint = random->Next(10,91);
			poz_x = 99;
			poz_y = 90;
			for (int i = 0;i < 9;i++)
			{
				for (int j = 0;j < 9;j++)
				{
					if (arr_label[i, j] == value_for_hint)
					{
						poz_x = i;
						poz_y = j;
						break;
					}
				}
				if (poz_x != 99 && poz_y != 99)
				{
					break;
				}
			}
			if (array_visible[poz_x, poz_y] == false)
			{
				label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[poz_x,poz_y], true)[0]);
				label_color->Text = Convert::ToString(field_for_check[poz_x, poz_y]);
				check = true;
				count_hint++;
			}
		}
	}
	else
	{
		MessageBox::Show(this, "Исчерпано возможное количество подсказок", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	} 
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	seconds++;
	if (seconds == 60)
	{
		minutes++;
		label93->Text = Convert::ToString(minutes);
		seconds = 0;
		label92->Text = Convert::ToString(seconds);
		if (minutes > 40)
		{
			label92->ForeColor = Color::Red;
			label93->ForeColor = Color::Red;
		}
	}
	else
	{
		label92->Text = Convert::ToString(seconds);
	}
}
private: System::Void Form1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	number_label = (Convert::ToInt32(label_field->Name[5]) - 48) * 10 + (Convert::ToInt32(label_field->Name[6]) - 48);
	poz_x = 99;
	poz_y = 99;
	for (int i = 0;i < 9;i++)
	{
		for (int j = 0;j < 9;j++)
		{
			if (arr_label[i, j] == number_label)
			{
				poz_x = i;
				poz_y = j;
				break;
			}
		}
		if (poz_x != 99 && poz_y != 99)
		{
			break;
		}
	}
	if (array_visible[poz_x, poz_y] != true)
	{
		while (true)
		{
			if (e->KeyCode == Keys::D1)
			{
				label_field->Text = Convert::ToString(1);
				label_value_for_keys = 1;
				break;
			}
			if (e->KeyCode == Keys::D2)
			{
				label_field->Text = Convert::ToString(2);
				label_value_for_keys = 2;
				break;
			}
			if (e->KeyCode == Keys::D3)
			{
				label_field->Text = Convert::ToString(3);
				label_value_for_keys = 3;
				break;
			}
			if (e->KeyCode == Keys::D4)
			{
				label_field->Text = Convert::ToString(4);
				label_value_for_keys = 4;
				break;
			}
			if (e->KeyCode == Keys::D5)
			{
				label_field->Text = Convert::ToString(5);
				label_value_for_keys = 5;
				break;
			}
			if (e->KeyCode == Keys::D6)
			{
				label_field->Text = Convert::ToString(6);
				label_value_for_keys = 6;
				break;
			}
			if (e->KeyCode == Keys::D7)
			{
				label_field->Text = Convert::ToString(7);
				label_value_for_keys = 7;
				break;
			}
			if (e->KeyCode == Keys::D8)
			{
				label_field->Text = Convert::ToString(8);
				label_value_for_keys = 8;
				break;
			}
			if (e->KeyCode == Keys::D9)
			{
				label_field->Text = Convert::ToString(9);
				label_value_for_keys = 9;
				break;
			}
		}
		label_field->ForeColor = Color::Blue;
		for (int i = 0;i < 9;i++)
		{
			for (int j = 0;j < 9;j++)
			{
				label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[i, j], true)[0]);
				if (label_color->BackColor == Color::FromArgb(90, 90, 90))
				{
					label_color->BackColor = Color::FromArgb(128, 128, 128);
				}
			}
		}
		for (int i = 0;i < 9;i++)
		{
			for (int j = 0;j < 9;j++)
			{
				label_color = dynamic_cast<Label^>(this->Controls->Find("label" + arr_label[i, j], true)[0]);
				if (label_color->Text != ".")
				{
					if (label_color->Text==Convert::ToString(label_value_for_keys))
					{
						label_color->BackColor = Color::FromArgb(90, 90, 90);
					}
				}
			}
		}
	}
	else
	{
		MessageBox::Show(this, "невозможно изменить готовое значение", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
