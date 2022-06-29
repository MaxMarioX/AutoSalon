#pragma once
#include "Klienci.h"
#include "Pracownicy.h"
#include "Samochody.h"
#include "Rezerwacja.h"
#include "ZmienHaslo.h"
#include "Trwajace.h"
#include "Zwrot.h"
#include "Faktura.h"
#include "PlatnosciMenu.h"
#include "StatystykiAuta.h"
#include "OpisProjektu.h"

namespace Wyporzyczalnia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for OknoMenu
	/// </summary>
	public ref class OknoMenu : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Button^  btnPracownicy;
	private: System::Windows::Forms::Button^  btnSamochody;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  btnZmienHaslo;
	private: System::Windows::Forms::Button^  btnTrwajace;
	private: System::Windows::Forms::Button^  btnZwrot;
	public: String^ BazaDanychSQL;
	private: System::Windows::Forms::PictureBox^  pictureKlienci;
	private: System::Windows::Forms::PictureBox^  picturePracownicy;
	private: System::Windows::Forms::PictureBox^  pictureSamochody;
	private: System::Windows::Forms::PictureBox^  pictureRezerwacja;
	private: System::Windows::Forms::PictureBox^  pictureTrwaj¹ce;
	private: System::Windows::Forms::PictureBox^  pictureZwrot;
	private: System::Windows::Forms::Button^  btnPlatnosci;
	private: System::Windows::Forms::Button^  btnStatystyka;
	private: System::Windows::Forms::PictureBox^  picturePlatnosci;
	private: System::Windows::Forms::PictureBox^  pictureStatystyka;
	private: System::Windows::Forms::PictureBox^  pictureHaslo;
	private: System::Windows::Forms::PictureBox^  pictureZakoncz;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button2;

	public:

	public:
	public: int ID_U;
	public:
		OknoMenu(int id_uzytkownik, String^ konfiguracja)
		{
			InitializeComponent();
			
			ID_U = id_uzytkownik;
			BazaDanychSQL = konfiguracja;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OknoMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnZakoncz;
	private: System::Windows::Forms::Button^  btnKlienci;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(OknoMenu::typeid));
			this->btnZakoncz = (gcnew System::Windows::Forms::Button());
			this->btnKlienci = (gcnew System::Windows::Forms::Button());
			this->btnPracownicy = (gcnew System::Windows::Forms::Button());
			this->btnSamochody = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnZmienHaslo = (gcnew System::Windows::Forms::Button());
			this->btnTrwajace = (gcnew System::Windows::Forms::Button());
			this->btnZwrot = (gcnew System::Windows::Forms::Button());
			this->pictureKlienci = (gcnew System::Windows::Forms::PictureBox());
			this->picturePracownicy = (gcnew System::Windows::Forms::PictureBox());
			this->pictureSamochody = (gcnew System::Windows::Forms::PictureBox());
			this->pictureRezerwacja = (gcnew System::Windows::Forms::PictureBox());
			this->pictureTrwaj¹ce = (gcnew System::Windows::Forms::PictureBox());
			this->pictureZwrot = (gcnew System::Windows::Forms::PictureBox());
			this->btnPlatnosci = (gcnew System::Windows::Forms::Button());
			this->btnStatystyka = (gcnew System::Windows::Forms::Button());
			this->picturePlatnosci = (gcnew System::Windows::Forms::PictureBox());
			this->pictureStatystyka = (gcnew System::Windows::Forms::PictureBox());
			this->pictureHaslo = (gcnew System::Windows::Forms::PictureBox());
			this->pictureZakoncz = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureKlienci))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturePracownicy))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureSamochody))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureRezerwacja))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTrwaj¹ce))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureZwrot))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturePlatnosci))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureStatystyka))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHaslo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureZakoncz))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnZakoncz
			// 
			this->btnZakoncz->Location = System::Drawing::Point(329, 379);
			this->btnZakoncz->Name = L"btnZakoncz";
			this->btnZakoncz->Size = System::Drawing::Size(90, 23);
			this->btnZakoncz->TabIndex = 0;
			this->btnZakoncz->Text = L"Zakoñcz";
			this->btnZakoncz->UseVisualStyleBackColor = true;
			this->btnZakoncz->Click += gcnew System::EventHandler(this, &OknoMenu::btnZakoncz_Click);
			// 
			// btnKlienci
			// 
			this->btnKlienci->Location = System::Drawing::Point(12, 106);
			this->btnKlienci->Name = L"btnKlienci";
			this->btnKlienci->Size = System::Drawing::Size(90, 23);
			this->btnKlienci->TabIndex = 1;
			this->btnKlienci->Text = L"Klienci";
			this->btnKlienci->UseVisualStyleBackColor = true;
			this->btnKlienci->Click += gcnew System::EventHandler(this, &OknoMenu::btnKlienci_Click);
			// 
			// btnPracownicy
			// 
			this->btnPracownicy->Location = System::Drawing::Point(118, 106);
			this->btnPracownicy->Name = L"btnPracownicy";
			this->btnPracownicy->Size = System::Drawing::Size(90, 23);
			this->btnPracownicy->TabIndex = 2;
			this->btnPracownicy->Text = L"Pracownicy";
			this->btnPracownicy->UseVisualStyleBackColor = true;
			this->btnPracownicy->Click += gcnew System::EventHandler(this, &OknoMenu::btnPracownicy_Click);
			// 
			// btnSamochody
			// 
			this->btnSamochody->Location = System::Drawing::Point(223, 106);
			this->btnSamochody->Name = L"btnSamochody";
			this->btnSamochody->Size = System::Drawing::Size(90, 23);
			this->btnSamochody->TabIndex = 3;
			this->btnSamochody->Text = L"Samochody";
			this->btnSamochody->UseVisualStyleBackColor = true;
			this->btnSamochody->Click += gcnew System::EventHandler(this, &OknoMenu::btnSamochody_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(329, 106);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Rezerwacja";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OknoMenu::button1_Click);
			// 
			// btnZmienHaslo
			// 
			this->btnZmienHaslo->Location = System::Drawing::Point(223, 379);
			this->btnZmienHaslo->Name = L"btnZmienHaslo";
			this->btnZmienHaslo->Size = System::Drawing::Size(90, 23);
			this->btnZmienHaslo->TabIndex = 5;
			this->btnZmienHaslo->Text = L"Zmieñ has³o";
			this->btnZmienHaslo->UseVisualStyleBackColor = true;
			this->btnZmienHaslo->Click += gcnew System::EventHandler(this, &OknoMenu::btnZmienHaslo_Click);
			// 
			// btnTrwajace
			// 
			this->btnTrwajace->Location = System::Drawing::Point(12, 240);
			this->btnTrwajace->Name = L"btnTrwajace";
			this->btnTrwajace->Size = System::Drawing::Size(90, 23);
			this->btnTrwajace->TabIndex = 6;
			this->btnTrwajace->Text = L"Trwaj¹ce";
			this->btnTrwajace->UseVisualStyleBackColor = true;
			this->btnTrwajace->Click += gcnew System::EventHandler(this, &OknoMenu::btnTrwajace_Click);
			// 
			// btnZwrot
			// 
			this->btnZwrot->Location = System::Drawing::Point(118, 240);
			this->btnZwrot->Name = L"btnZwrot";
			this->btnZwrot->Size = System::Drawing::Size(90, 23);
			this->btnZwrot->TabIndex = 7;
			this->btnZwrot->Text = L"Zwrot";
			this->btnZwrot->UseVisualStyleBackColor = true;
			this->btnZwrot->Click += gcnew System::EventHandler(this, &OknoMenu::btnZwrot_Click);
			// 
			// pictureKlienci
			// 
			this->pictureKlienci->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureKlienci.Image")));
			this->pictureKlienci->Location = System::Drawing::Point(12, 12);
			this->pictureKlienci->Name = L"pictureKlienci";
			this->pictureKlienci->Size = System::Drawing::Size(90, 88);
			this->pictureKlienci->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureKlienci->TabIndex = 8;
			this->pictureKlienci->TabStop = false;
			// 
			// picturePracownicy
			// 
			this->picturePracownicy->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picturePracownicy.Image")));
			this->picturePracownicy->Location = System::Drawing::Point(118, 12);
			this->picturePracownicy->Name = L"picturePracownicy";
			this->picturePracownicy->Size = System::Drawing::Size(90, 88);
			this->picturePracownicy->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picturePracownicy->TabIndex = 9;
			this->picturePracownicy->TabStop = false;
			// 
			// pictureSamochody
			// 
			this->pictureSamochody->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureSamochody.Image")));
			this->pictureSamochody->Location = System::Drawing::Point(223, 12);
			this->pictureSamochody->Name = L"pictureSamochody";
			this->pictureSamochody->Size = System::Drawing::Size(90, 88);
			this->pictureSamochody->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureSamochody->TabIndex = 10;
			this->pictureSamochody->TabStop = false;
			// 
			// pictureRezerwacja
			// 
			this->pictureRezerwacja->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureRezerwacja.Image")));
			this->pictureRezerwacja->Location = System::Drawing::Point(329, 12);
			this->pictureRezerwacja->Name = L"pictureRezerwacja";
			this->pictureRezerwacja->Size = System::Drawing::Size(90, 88);
			this->pictureRezerwacja->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureRezerwacja->TabIndex = 11;
			this->pictureRezerwacja->TabStop = false;
			// 
			// pictureTrwaj¹ce
			// 
			this->pictureTrwaj¹ce->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureTrwaj¹ce.Image")));
			this->pictureTrwaj¹ce->Location = System::Drawing::Point(12, 146);
			this->pictureTrwaj¹ce->Name = L"pictureTrwaj¹ce";
			this->pictureTrwaj¹ce->Size = System::Drawing::Size(90, 88);
			this->pictureTrwaj¹ce->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureTrwaj¹ce->TabIndex = 12;
			this->pictureTrwaj¹ce->TabStop = false;
			// 
			// pictureZwrot
			// 
			this->pictureZwrot->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureZwrot.Image")));
			this->pictureZwrot->Location = System::Drawing::Point(118, 146);
			this->pictureZwrot->Name = L"pictureZwrot";
			this->pictureZwrot->Size = System::Drawing::Size(90, 88);
			this->pictureZwrot->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureZwrot->TabIndex = 13;
			this->pictureZwrot->TabStop = false;
			// 
			// btnPlatnosci
			// 
			this->btnPlatnosci->Location = System::Drawing::Point(223, 240);
			this->btnPlatnosci->Name = L"btnPlatnosci";
			this->btnPlatnosci->Size = System::Drawing::Size(90, 23);
			this->btnPlatnosci->TabIndex = 14;
			this->btnPlatnosci->Text = L"P³atnoœci";
			this->btnPlatnosci->UseVisualStyleBackColor = true;
			this->btnPlatnosci->Click += gcnew System::EventHandler(this, &OknoMenu::btnPlatnosci_Click);
			// 
			// btnStatystyka
			// 
			this->btnStatystyka->Location = System::Drawing::Point(329, 240);
			this->btnStatystyka->Name = L"btnStatystyka";
			this->btnStatystyka->Size = System::Drawing::Size(90, 23);
			this->btnStatystyka->TabIndex = 15;
			this->btnStatystyka->Text = L"Statystyki";
			this->btnStatystyka->UseVisualStyleBackColor = true;
			this->btnStatystyka->Click += gcnew System::EventHandler(this, &OknoMenu::btnStatystyka_Click);
			// 
			// picturePlatnosci
			// 
			this->picturePlatnosci->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picturePlatnosci.Image")));
			this->picturePlatnosci->Location = System::Drawing::Point(223, 146);
			this->picturePlatnosci->Name = L"picturePlatnosci";
			this->picturePlatnosci->Size = System::Drawing::Size(90, 88);
			this->picturePlatnosci->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picturePlatnosci->TabIndex = 16;
			this->picturePlatnosci->TabStop = false;
			// 
			// pictureStatystyka
			// 
			this->pictureStatystyka->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureStatystyka.Image")));
			this->pictureStatystyka->Location = System::Drawing::Point(329, 146);
			this->pictureStatystyka->Name = L"pictureStatystyka";
			this->pictureStatystyka->Size = System::Drawing::Size(90, 88);
			this->pictureStatystyka->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureStatystyka->TabIndex = 17;
			this->pictureStatystyka->TabStop = false;
			// 
			// pictureHaslo
			// 
			this->pictureHaslo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureHaslo.Image")));
			this->pictureHaslo->Location = System::Drawing::Point(223, 282);
			this->pictureHaslo->Name = L"pictureHaslo";
			this->pictureHaslo->Size = System::Drawing::Size(90, 88);
			this->pictureHaslo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureHaslo->TabIndex = 18;
			this->pictureHaslo->TabStop = false;
			// 
			// pictureZakoncz
			// 
			this->pictureZakoncz->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureZakoncz.Image")));
			this->pictureZakoncz->Location = System::Drawing::Point(329, 282);
			this->pictureZakoncz->Name = L"pictureZakoncz";
			this->pictureZakoncz->Size = System::Drawing::Size(90, 88);
			this->pictureZakoncz->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureZakoncz->TabIndex = 19;
			this->pictureZakoncz->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 269);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 133);
			this->pictureBox1->TabIndex = 22;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(121, 299);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Student:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(121, 322);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 13);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Mariusz Plaskota";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(121, 347);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 25;
			this->label3->Text = L"4216";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(120, 379);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 23);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Opis projektu";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &OknoMenu::button2_Click);
			// 
			// OknoMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->ClientSize = System::Drawing::Size(425, 409);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureZakoncz);
			this->Controls->Add(this->pictureHaslo);
			this->Controls->Add(this->pictureStatystyka);
			this->Controls->Add(this->picturePlatnosci);
			this->Controls->Add(this->btnStatystyka);
			this->Controls->Add(this->btnPlatnosci);
			this->Controls->Add(this->pictureZwrot);
			this->Controls->Add(this->pictureTrwaj¹ce);
			this->Controls->Add(this->pictureRezerwacja);
			this->Controls->Add(this->pictureSamochody);
			this->Controls->Add(this->picturePracownicy);
			this->Controls->Add(this->pictureKlienci);
			this->Controls->Add(this->btnZwrot);
			this->Controls->Add(this->btnTrwajace);
			this->Controls->Add(this->btnZmienHaslo);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnSamochody);
			this->Controls->Add(this->btnPracownicy);
			this->Controls->Add(this->btnKlienci);
			this->Controls->Add(this->btnZakoncz);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"OknoMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AutoSalon v1.0.0.0 - Mariusz Plaskota";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureKlienci))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturePracownicy))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureSamochody))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureRezerwacja))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTrwaj¹ce))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureZwrot))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturePlatnosci))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureStatystyka))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHaslo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureZakoncz))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//Zamknij okno
private: System::Void btnZakoncz_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
//Otwórz okno klienci
private: System::Void btnKlienci_Click(System::Object^  sender, System::EventArgs^  e) {
		Klienci^ program = gcnew Klienci(ID_U,BazaDanychSQL);
		program->ShowDialog();
	}
//Otwórz okno pracownicy
private: System::Void btnPracownicy_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ID_U == 1) {
			Pracownicy^ program = gcnew Pracownicy(ID_U, BazaDanychSQL);
			program->ShowDialog();
		}
		else {
			MessageBox::Show("Dostêp do pracowników ma jedynie administrator aplikacji!", "Odmowa dostêpu", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
//Otwórz okno samochody
private: System::Void btnSamochody_Click(System::Object^  sender, System::EventArgs^  e) {
		Samochody^ program = gcnew Samochody(ID_U,BazaDanychSQL);
		program->ShowDialog();
	}
//Otwórz okno rezerwacja
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Rezerwacja^ program = gcnew Rezerwacja(ID_U, BazaDanychSQL);
	program->ShowDialog();
}
//Otworz okno zmiana has³a
private: System::Void btnZmienHaslo_Click(System::Object^  sender, System::EventArgs^  e) {
	ZmienHaslo^ program = gcnew ZmienHaslo(ID_U, BazaDanychSQL);
	program->ShowDialog();
}
//Otwórz okno trwaj¹ce oferty
private: System::Void btnTrwajace_Click(System::Object^  sender, System::EventArgs^  e) {
	Trwajace^ program = gcnew Trwajace(ID_U, BazaDanychSQL);
	program->ShowDialog();
}
//Otwórz okno zwrot
private: System::Void btnZwrot_Click(System::Object^  sender, System::EventArgs^  e) {
	Zwrot^ program = gcnew Zwrot(ID_U, BazaDanychSQL);
	program->ShowDialog();
}
//Otwórz okno faktura
private: System::Void btnPlatnosci_Click(System::Object^  sender, System::EventArgs^  e) {
	PlatnosciMenu^ program = gcnew PlatnosciMenu(ID_U, BazaDanychSQL);
	program->ShowDialog();
}
//Otwórz okno statystyki
private: System::Void btnStatystyka_Click(System::Object^  sender, System::EventArgs^  e) {
	StatystykiAuta^ program = gcnew StatystykiAuta(ID_U, BazaDanychSQL);
	program->ShowDialog();
}
//Otwórz okno opis projektu
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	OpisProjektu^ program = gcnew OpisProjektu();
	program->ShowDialog();
}
};
}
