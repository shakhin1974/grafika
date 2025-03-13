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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(916, 617);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"||";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(837, 617);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L">>";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(1014, 652);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
		int x1 = 0, x2 = 0, x3 = 50, x4 = 150;

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		Graphics^ g = Graphics::FromHwnd(this->Handle);
		//g->DrawEllipse(gcnew Pen(Color::Yellow, 5), 110, 10, 110, 110);
		//g->DrawEllipse(gcnew Pen(Color::BlueViolet, 3), 110, 110, 110, 110);
		//g->FillRectangle(Brushes::Green, 95, 180, 141, 111);
		//g->FillRectangle(Brushes::Tomato, 200, 200, 1, 1);
		for (int x = 0; x < 1; x++) 
		{
			g->FillRectangle(Brushes::Gray, 0, -120 + x1, 100, 120);
			g->FillRectangle(Brushes::White, 0, 0+ x1, 100, 40);
			g->FillRectangle(Brushes::Blue, 0, 40+ x1, 100, 40);
			g->FillRectangle(Brushes::Red, 0, 80+ x1, 100, 40);			
			x1 += 120;

		}
		

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = Graphics::FromHwnd(this->Handle);
		for (int x = 0; x < 1; x++)
		{
			g->FillRectangle(Brushes::Gray, -100 + x2, 0, 100, 120);
			g->FillRectangle(Brushes::White, 0 + x2, 0, 100, 40);
			g->FillRectangle(Brushes::Blue, 0 + x2, 40, 100, 40);
			g->FillRectangle(Brushes::Red, 0 + x2, 80, 100, 40);
			x2 += 100;

		}
	}
	};
}
