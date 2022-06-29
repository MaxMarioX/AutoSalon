#pragma once
#include "Faktura.h"
#include "FakturaLista.h"

namespace Wyporzyczalnia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PlatnosciMenu
	/// </summary>
	public ref class PlatnosciMenu : public System::Windows::Forms::Form
	{
	public: int ID_U;
	public: String^ BazaDanychSQL;
	public:
		PlatnosciMenu(int id_uzytkownik, String^ konfiguracja)
		{
			InitializeComponent();

			BazaDanychSQL = konfiguracja;
			ID_U = id_uzytkownik;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PlatnosciMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(77, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Wystaw fakturê";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PlatnosciMenu::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(77, 88);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(89, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Spis faktur";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &PlatnosciMenu::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(77, 163);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(89, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"WyjdŸ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &PlatnosciMenu::button3_Click);
			// 
			// PlatnosciMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(244, 198);
			this->ControlBox = false;
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"PlatnosciMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"P³atnoœci";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Faktura^ program = gcnew Faktura(ID_U, BazaDanychSQL);
		program->ShowDialog();
		this->Close();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		FakturaLista^ program = gcnew FakturaLista(ID_U, BazaDanychSQL);
		program->ShowDialog();
		this->Close();
	}
};
}
