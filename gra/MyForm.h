#pragma once
#include "windows.h"

namespace gra {

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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1175, 566);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"/\\";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1096, 566);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L">>";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(907, 566);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"\\/";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1001, 566);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"<<";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(1264, 601);
			MyForm::Width = 1280;
			MyForm::Height = 640;
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}

		int x1 = 600, x2 = 320, x3 = 680, x4 = 320;
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{ Graphics^ g = Graphics::FromHwnd(this->Handle);
		for (size_t i = 0; i < 1; i++)
		{ 	g->DrawLine(gcnew Pen(Color::Gray), x1, x2, x3, x4); //Линия
			x2 -= 10; x4 -= 10;
			g->DrawLine(gcnew Pen(Color::White), x1, x2, x3, x4); //Линия
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = Graphics::FromHwnd(this->Handle);
		for (size_t i = 0; i < 1; i++)
		{ g->DrawLine(gcnew Pen(Color::Gray), x1, x2, x3, x4); //Линия
			x1 += 10;
			x3 += 10;
			g->DrawLine(gcnew Pen(Color::White), x1, x2, x3, x4); //Линия
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ g = Graphics::FromHwnd(this->Handle);
	for (size_t i = 0; i < 1; i++)
	{
		g->DrawLine(gcnew Pen(Color::Gray), x1, x2, x3, x4); //Линия
		x2 += 10;
		x4 += 10;
		g->DrawLine(gcnew Pen(Color::White), x1, x2, x3, x4); //Линия
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ g = Graphics::FromHwnd(this->Handle);
	for (size_t i = 0; i < 1; i++)
	{

		g->DrawLine(gcnew Pen(Color::Gray), x1, x2, x3, x4); //Линия
		x1 -= 10;
		x3 -= 10;
		g->DrawLine(gcnew Pen(Color::White), x1, x2, x3, x4); //Линия
	}
}
};
}
