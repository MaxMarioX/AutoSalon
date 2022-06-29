#pragma once
#include "OknoMenu.h";

namespace Wyporzyczalnia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Logowanie
	/// </summary>
	public ref class Logowanie : public System::Windows::Forms::Form
	{
	public:
		Logowanie(void)
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
		~Logowanie()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtLogin;
	private: System::Windows::Forms::TextBox^  txtHaslo;
	private: System::Windows::Forms::Button^  btnZaloguj;
	private: System::Windows::Forms::Button^  btnWyjdz;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Logowanie::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtLogin = (gcnew System::Windows::Forms::TextBox());
			this->txtHaslo = (gcnew System::Windows::Forms::TextBox());
			this->btnZaloguj = (gcnew System::Windows::Forms::Button());
			this->btnWyjdz = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(90, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(339, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Aby rozpocz¹æ pracê z aplikacj¹ proszê podaæ poprawny login i has³o.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(90, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Login:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(90, 78);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Has³o:";
			// 
			// txtLogin
			// 
			this->txtLogin->Location = System::Drawing::Point(135, 37);
			this->txtLogin->Name = L"txtLogin";
			this->txtLogin->Size = System::Drawing::Size(288, 20);
			this->txtLogin->TabIndex = 3;
			this->txtLogin->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Logowanie::txtLogin_KeyPress);
			// 
			// txtHaslo
			// 
			this->txtHaslo->Location = System::Drawing::Point(135, 75);
			this->txtHaslo->Name = L"txtHaslo";
			this->txtHaslo->PasswordChar = '*';
			this->txtHaslo->Size = System::Drawing::Size(288, 20);
			this->txtHaslo->TabIndex = 4;
			this->txtHaslo->UseSystemPasswordChar = true;
			this->txtHaslo->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Logowanie::txtHaslo_KeyPress);
			// 
			// btnZaloguj
			// 
			this->btnZaloguj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnZaloguj->ForeColor = System::Drawing::Color::Black;
			this->btnZaloguj->Location = System::Drawing::Point(157, 122);
			this->btnZaloguj->Name = L"btnZaloguj";
			this->btnZaloguj->Size = System::Drawing::Size(75, 23);
			this->btnZaloguj->TabIndex = 5;
			this->btnZaloguj->Text = L"Zaloguj";
			this->btnZaloguj->UseVisualStyleBackColor = true;
			this->btnZaloguj->Click += gcnew System::EventHandler(this, &Logowanie::button1_Click);
			// 
			// btnWyjdz
			// 
			this->btnWyjdz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnWyjdz->ForeColor = System::Drawing::Color::Black;
			this->btnWyjdz->Location = System::Drawing::Point(296, 122);
			this->btnWyjdz->Name = L"btnWyjdz";
			this->btnWyjdz->Size = System::Drawing::Size(75, 23);
			this->btnWyjdz->TabIndex = 6;
			this->btnWyjdz->Text = L"WyjdŸ";
			this->btnWyjdz->UseVisualStyleBackColor = true;
			this->btnWyjdz->Click += gcnew System::EventHandler(this, &Logowanie::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 26);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(81, 83);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// Logowanie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(450, 157);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnWyjdz);
			this->Controls->Add(this->btnZaloguj);
			this->Controls->Add(this->txtHaslo);
			this->Controls->Add(this->txtLogin);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Logowanie";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AutoSalon";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void Zaloguj()
	{
		//Blokowanie przycisków i pól
		btnZaloguj->Enabled = false;
		txtHaslo->Enabled = false;
		txtLogin->Enabled = false;

		//Wyœwietlanie informacji o ³¹czeniu
		this->Text = L"AutoSalon - Logowanie...";

		//Ustawienia konfiguracyjne
		String^ konfiguracja = L"datasource=localhost;port=3306;username=root;password=marpla1234;database=auta;";
		MySqlConnection^ SQLpolacz = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("select * from PRACOWNIK where Login = '" + txtLogin->Text + "' and Haslo = '" + txtHaslo->Text + "';", SQLpolacz);
		MySqlDataReader^ odczytaj;

		try {
			SQLpolacz->Open();
			odczytaj = zapytanie->ExecuteReader();
			if (odczytaj->Read())
			{
				//Pobieranie info kto siê zalogowa³
				int id_uzytkownik = odczytaj->GetInt32(0);
				this->Hide();
				//Otwieranie okna g³ównego
				OknoMenu^ program = gcnew OknoMenu(id_uzytkownik, konfiguracja);
				program->ShowDialog();
				this->Close();
			}
			else {
				MessageBox::Show("Podano b³êdn¹ nazwê u¿ytkownika lub niepoprawne has³o!", "Logowanie nie powiod³o siê", MessageBoxButtons::OK, MessageBoxIcon::Error);
				btnZaloguj->Enabled = true;
				txtHaslo->Enabled = true;
				txtLogin->Enabled = true;
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		//Resetowanie
		this->Text = L"AutoSalon";

		//Zamykanie po³¹czenia
		SQLpolacz->Close();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Zaloguj();
	}
	private: System::Void txtLogin_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (e->KeyChar == (char)13)
		{
			Zaloguj();
		}
	}
	private: System::Void txtHaslo_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == (char)13)
	{
		Zaloguj();
	}
}
};
}