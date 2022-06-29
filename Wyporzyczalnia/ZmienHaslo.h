#pragma once

namespace Wyporzyczalnia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for ZmienHaslo
	/// </summary>
	public ref class ZmienHaslo : public System::Windows::Forms::Form
	{
	public: int ID_U;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtAktualneHaslo;
	public:

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtNoweHaslo1;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtNoweHaslo2;

	private: System::Windows::Forms::Button^  button1;
	public: String^ BazaDanychSQL;
	public:
		ZmienHaslo(int id_uzytkownik, String^ konfiguracja)
		{
			InitializeComponent();
			
			ID_U = id_uzytkownik;
			BazaDanychSQL = konfiguracja;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ZmienHaslo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnWyjdz;
	protected:

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
			this->btnWyjdz = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtAktualneHaslo = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtNoweHaslo1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtNoweHaslo2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnWyjdz
			// 
			this->btnWyjdz->Location = System::Drawing::Point(216, 140);
			this->btnWyjdz->Name = L"btnWyjdz";
			this->btnWyjdz->Size = System::Drawing::Size(75, 23);
			this->btnWyjdz->TabIndex = 0;
			this->btnWyjdz->Text = L"WyjdŸ";
			this->btnWyjdz->UseVisualStyleBackColor = true;
			this->btnWyjdz->Click += gcnew System::EventHandler(this, &ZmienHaslo::btnWyjdz_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Aktualne has³o";
			// 
			// txtAktualneHaslo
			// 
			this->txtAktualneHaslo->Location = System::Drawing::Point(100, 15);
			this->txtAktualneHaslo->Name = L"txtAktualneHaslo";
			this->txtAktualneHaslo->PasswordChar = '*';
			this->txtAktualneHaslo->Size = System::Drawing::Size(268, 20);
			this->txtAktualneHaslo->TabIndex = 2;
			this->txtAktualneHaslo->UseSystemPasswordChar = true;
			this->txtAktualneHaslo->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ZmienHaslo::txtAktualneHaslo_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Nowe has³o";
			// 
			// txtNoweHaslo1
			// 
			this->txtNoweHaslo1->Location = System::Drawing::Point(100, 51);
			this->txtNoweHaslo1->Name = L"txtNoweHaslo1";
			this->txtNoweHaslo1->PasswordChar = '*';
			this->txtNoweHaslo1->Size = System::Drawing::Size(268, 20);
			this->txtNoweHaslo1->TabIndex = 4;
			this->txtNoweHaslo1->UseSystemPasswordChar = true;
			this->txtNoweHaslo1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ZmienHaslo::txtNoweHaslo1_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Powtórz has³o";
			// 
			// txtNoweHaslo2
			// 
			this->txtNoweHaslo2->Location = System::Drawing::Point(100, 89);
			this->txtNoweHaslo2->Name = L"txtNoweHaslo2";
			this->txtNoweHaslo2->PasswordChar = '*';
			this->txtNoweHaslo2->Size = System::Drawing::Size(268, 20);
			this->txtNoweHaslo2->TabIndex = 6;
			this->txtNoweHaslo2->UseSystemPasswordChar = true;
			this->txtNoweHaslo2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ZmienHaslo::txtNoweHaslo2_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(113, 140);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"ZatwierdŸ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ZmienHaslo::button1_Click);
			// 
			// ZmienHaslo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(380, 175);
			this->ControlBox = false;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtNoweHaslo2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtNoweHaslo1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtAktualneHaslo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnWyjdz);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"ZmienHaslo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Zmiana has³a pracownika";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//Funkcja pomocnicza - Wprowadzanie nowego has³a
private: void WprowadzNoweHaslo()
{
	if (txtNoweHaslo1->Text == txtNoweHaslo2->Text)
	{
		MySqlConnection^ SQLpolacz = gcnew MySqlConnection(BazaDanychSQL);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("UPDATE pracownik SET Haslo = '" + txtNoweHaslo1->Text + "' WHERE ID_Pracownik = " + ID_U + " AND Haslo = '" + txtAktualneHaslo->Text + "';", SQLpolacz);
		try {
			SQLpolacz->Open();
			if (zapytanie->ExecuteNonQuery())
			{
				MessageBox::Show("Has³o zosta³o zmienione!", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->Close();
			}
			else {
				MessageBox::Show("Has³o nie zosta³o zmienione, poniewa¿ stare has³o jest niepoprawne!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
				txtAktualneHaslo->Text = "";
				txtNoweHaslo1->Text = "";
				txtNoweHaslo2->Text = "";
			}
			SQLpolacz->Close();
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
		}
	}
	else {
		MessageBox::Show("Proszê ponownie wpisaæ nowe has³o!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
		txtNoweHaslo1->Text = "";
		txtNoweHaslo2->Text = "";
	}
}

//Opuœæ okno
private: System::Void btnWyjdz_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
}
//Wprowadzanie nowego has³a
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	WprowadzNoweHaslo();
}
//Wprowadzanie nowego has³a - ENTER
private: System::Void txtAktualneHaslo_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == (char)13)
		WprowadzNoweHaslo();
}
private: System::Void txtNoweHaslo1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == (char)13)
		WprowadzNoweHaslo();
}
private: System::Void txtNoweHaslo2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == (char)13)
		WprowadzNoweHaslo();
}
};
}
