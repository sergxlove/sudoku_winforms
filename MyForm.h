#pragma once

namespace sudokuwinforms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Wheat;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 22);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(911, 557);
			this->textBox1->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->ClientSize = System::Drawing::Size(953, 621);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	array<int,2>^ swaping_rows(array<int,2>^ first_array,int poz_first_row,int poz_second_row)
	{
		int size = 9;
		array<int>^ rows = gcnew array<int>(size);
		array<int, 2>^ second_array = gcnew array<int, 2>(size, size);
		second_array = first_array;
		for (int i = 0;i < size;i++)
		{
			rows[i] = second_array[i, poz_first_row];
		}
		for (int i = 0;i < size;i++)
		{
			second_array[i, poz_first_row] = second_array[i, poz_second_row];
		}
		for (int i = 0;i < size;i++)
		{
			second_array[i, poz_second_row] = rows[i];
		}
		return second_array;
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		int size = 9;
		int value = 1;
		int count = 1;
		int start_value = 1;
		array<int, 2>^ field = gcnew array<int, 2>(size, size);
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
				textBox1->Text += field[i, j];
				textBox1->Text += "\t";
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
			textBox1->Text += "\r\n";
		} 
		field = swaping_rows(field, 0, 2);
		for (int i = 0;i < size;i++)
		{
			for (int j = 0;j < size;j++)
			{
				textBox1->Text += field[i, j];
				textBox1->Text += "\t";
			}
			textBox1->Text += "\r\n";
		}
	}
	};
}
