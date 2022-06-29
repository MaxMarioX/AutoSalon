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
	/// Summary for Zwrot
	/// </summary>
	public ref class Zwrot : public System::Windows::Forms::Form
	{
	public: String^ BazaDanychSQL;
	private: System::Windows::Forms::GroupBox^  groupBoxZestawienieAut;
	public:

	private: System::Windows::Forms::DataGridView^  dataGridViewSamochody;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnSzukaj;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBoxDaneKlienta;
	private: System::Windows::Forms::TextBox^  txtPeselK;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  txtNazwiskoK;
	private: System::Windows::Forms::TextBox^  txtImieK;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBoxDanePracownika;
	private: System::Windows::Forms::TextBox^  txtPesel;

	private: System::Windows::Forms::TextBox^  txtNazwisko;
	private: System::Windows::Forms::TextBox^  txtImie;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  groupBoxDaneAuta;
	private: System::Windows::Forms::TextBox^  txtModel;
	private: System::Windows::Forms::TextBox^  txtMarka;
	private: System::Windows::Forms::TextBox^  txtNrRejestracyjny;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::GroupBox^  groupBoxSerwis;
	private: System::Windows::Forms::GroupBox^  groupBoxOdsKarne;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::CheckBox^  checkBoxInnaKara;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::CheckBox^  checkBoxPoTerminie;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::CheckBox^  checkBoxWymagaNaprawy;
	private: System::Windows::Forms::GroupBox^  groupBoxWyjdz;
	private: System::Windows::Forms::Button^  Wyjdz;
	private: System::Windows::Forms::Label^  label25;

	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::GroupBox^  groupBoxTermin;
	private: System::Windows::Forms::Label^  labelCzasStop;
	private: System::Windows::Forms::Label^  labelDataStop;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  labelCzasStart;
	private: System::Windows::Forms::Label^  labelDataStart;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  labelOstatecznaCena;

	private: System::Windows::Forms::Label^  labelGodzinySp;

	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::GroupBox^  groupBoxZatwierdzZwrot;
	private: System::Windows::Forms::Button^  btnZatwierdz;
	public: String^ data_rejestracji;
	public: String^ data_zwrotu;
	public: String^ czas_rejestacji;
	public: String^ czas_zwrotu;
	public: String^ data_zwrotu_teraz;
	public: String^ czas_zwrotu_teraz;
	public: int ID_Rejestracja = 0;
	public: int ID_Klienta = 0;
	public: int ID_Pracownik = 0;
	public: int ID_Samochodu = 0;
	System::Int32 Dzien1;
	System::Int32 Miesiac1;
	System::Int32 Rok1;
	System::Int32 Czas1;
	System::Int32 Dzien2;
	System::Int32 Miesiac2;
	System::Int32 Rok2;
	System::Int32 Czas2;
	System::String^ CenaS;
	Decimal Cena;
	Decimal Cena_rejestracja;
	Decimal Odsetki;
	Decimal Wymaga_naprawy;
	Decimal Dodatkowe;
	Decimal Rabat;
	String^ Odsetki_Kropka;
	String^ Wymaga_naprawy_Kropka;
	String^ Dodatkowe_Kropka;
	String^ Rabat_Kropka;
	Double CenaLaczna;
	Double CenaOstateczna; // = (Cena_rejestracja + Odsetki + Wymaga_naprawy + Dodatkowe) - Rabat;
	private: System::Windows::Forms::TextBox^  textBox7;
	public:

	public:
	public: int ID_U;
	public:
		Zwrot(int id_uzytkownik, String^ konfiguracja)
		{
			InitializeComponent();

			ID_U = id_uzytkownik;
			BazaDanychSQL = konfiguracja;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Zwrot()
		{
			if (components)
			{
				delete components;
			}
		}
private: System::ComponentModel::IContainer^  components;
protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBoxZestawienieAut = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnSzukaj = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewSamochody = (gcnew System::Windows::Forms::DataGridView());
			this->groupBoxDaneKlienta = (gcnew System::Windows::Forms::GroupBox());
			this->txtPeselK = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtNazwiskoK = (gcnew System::Windows::Forms::TextBox());
			this->txtImieK = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBoxDanePracownika = (gcnew System::Windows::Forms::GroupBox());
			this->txtPesel = (gcnew System::Windows::Forms::TextBox());
			this->txtNazwisko = (gcnew System::Windows::Forms::TextBox());
			this->txtImie = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBoxDaneAuta = (gcnew System::Windows::Forms::GroupBox());
			this->txtModel = (gcnew System::Windows::Forms::TextBox());
			this->txtMarka = (gcnew System::Windows::Forms::TextBox());
			this->txtNrRejestracyjny = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBoxSerwis = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->labelOstatecznaCena = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxOdsKarne = (gcnew System::Windows::Forms::GroupBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxInnaKara = (gcnew System::Windows::Forms::CheckBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxPoTerminie = (gcnew System::Windows::Forms::CheckBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxWymagaNaprawy = (gcnew System::Windows::Forms::CheckBox());
			this->groupBoxWyjdz = (gcnew System::Windows::Forms::GroupBox());
			this->Wyjdz = (gcnew System::Windows::Forms::Button());
			this->groupBoxTermin = (gcnew System::Windows::Forms::GroupBox());
			this->labelGodzinySp = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->labelCzasStop = (gcnew System::Windows::Forms::Label());
			this->labelDataStop = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->labelCzasStart = (gcnew System::Windows::Forms::Label());
			this->labelDataStart = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBoxZatwierdzZwrot = (gcnew System::Windows::Forms::GroupBox());
			this->btnZatwierdz = (gcnew System::Windows::Forms::Button());
			this->groupBoxZestawienieAut->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSamochody))->BeginInit();
			this->groupBoxDaneKlienta->SuspendLayout();
			this->groupBoxDanePracownika->SuspendLayout();
			this->groupBoxDaneAuta->SuspendLayout();
			this->groupBoxSerwis->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBoxOdsKarne->SuspendLayout();
			this->groupBoxWyjdz->SuspendLayout();
			this->groupBoxTermin->SuspendLayout();
			this->groupBoxZatwierdzZwrot->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxZestawienieAut
			// 
			this->groupBoxZestawienieAut->Controls->Add(this->label1);
			this->groupBoxZestawienieAut->Controls->Add(this->btnSzukaj);
			this->groupBoxZestawienieAut->Controls->Add(this->textBox1);
			this->groupBoxZestawienieAut->Controls->Add(this->dataGridViewSamochody);
			this->groupBoxZestawienieAut->Location = System::Drawing::Point(3, 1);
			this->groupBoxZestawienieAut->Name = L"groupBoxZestawienieAut";
			this->groupBoxZestawienieAut->Size = System::Drawing::Size(637, 317);
			this->groupBoxZestawienieAut->TabIndex = 1;
			this->groupBoxZestawienieAut->TabStop = false;
			this->groupBoxZestawienieAut->Text = L"Zestawienie aut aktualnie wypo¿yczonych";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"ID Klienta:";
			// 
			// btnSzukaj
			// 
			this->btnSzukaj->Location = System::Drawing::Point(552, 23);
			this->btnSzukaj->Name = L"btnSzukaj";
			this->btnSzukaj->Size = System::Drawing::Size(75, 23);
			this->btnSzukaj->TabIndex = 2;
			this->btnSzukaj->Text = L"Szukaj auta";
			this->btnSzukaj->UseVisualStyleBackColor = true;
			this->btnSzukaj->Click += gcnew System::EventHandler(this, &Zwrot::btnSzukaj_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(71, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(475, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Zwrot::textBox1_KeyPress);
			// 
			// dataGridViewSamochody
			// 
			this->dataGridViewSamochody->AllowUserToAddRows = false;
			this->dataGridViewSamochody->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSamochody->Location = System::Drawing::Point(9, 51);
			this->dataGridViewSamochody->Name = L"dataGridViewSamochody";
			this->dataGridViewSamochody->ReadOnly = true;
			this->dataGridViewSamochody->Size = System::Drawing::Size(618, 257);
			this->dataGridViewSamochody->TabIndex = 0;
			this->dataGridViewSamochody->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Zwrot::dataGridViewSamochody_CellClick);
			// 
			// groupBoxDaneKlienta
			// 
			this->groupBoxDaneKlienta->Controls->Add(this->txtPeselK);
			this->groupBoxDaneKlienta->Controls->Add(this->label9);
			this->groupBoxDaneKlienta->Controls->Add(this->txtNazwiskoK);
			this->groupBoxDaneKlienta->Controls->Add(this->txtImieK);
			this->groupBoxDaneKlienta->Controls->Add(this->label3);
			this->groupBoxDaneKlienta->Controls->Add(this->label2);
			this->groupBoxDaneKlienta->Location = System::Drawing::Point(3, 324);
			this->groupBoxDaneKlienta->Name = L"groupBoxDaneKlienta";
			this->groupBoxDaneKlienta->Size = System::Drawing::Size(212, 117);
			this->groupBoxDaneKlienta->TabIndex = 2;
			this->groupBoxDaneKlienta->TabStop = false;
			this->groupBoxDaneKlienta->Text = L"Dane klienta";
			// 
			// txtPeselK
			// 
			this->txtPeselK->Enabled = false;
			this->txtPeselK->Location = System::Drawing::Point(73, 82);
			this->txtPeselK->Name = L"txtPeselK";
			this->txtPeselK->Size = System::Drawing::Size(107, 20);
			this->txtPeselK->TabIndex = 29;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 85);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(33, 13);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Pesel";
			// 
			// txtNazwiskoK
			// 
			this->txtNazwiskoK->Enabled = false;
			this->txtNazwiskoK->Location = System::Drawing::Point(73, 50);
			this->txtNazwiskoK->Name = L"txtNazwiskoK";
			this->txtNazwiskoK->Size = System::Drawing::Size(107, 20);
			this->txtNazwiskoK->TabIndex = 27;
			// 
			// txtImieK
			// 
			this->txtImieK->BackColor = System::Drawing::SystemColors::Window;
			this->txtImieK->Enabled = false;
			this->txtImieK->Location = System::Drawing::Point(73, 20);
			this->txtImieK->Name = L"txtImieK";
			this->txtImieK->Size = System::Drawing::Size(107, 20);
			this->txtImieK->TabIndex = 26;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(6, 53);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Nazwisko";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(6, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Imiê";
			// 
			// groupBoxDanePracownika
			// 
			this->groupBoxDanePracownika->Controls->Add(this->txtPesel);
			this->groupBoxDanePracownika->Controls->Add(this->txtNazwisko);
			this->groupBoxDanePracownika->Controls->Add(this->txtImie);
			this->groupBoxDanePracownika->Controls->Add(this->label4);
			this->groupBoxDanePracownika->Controls->Add(this->label5);
			this->groupBoxDanePracownika->Controls->Add(this->label6);
			this->groupBoxDanePracownika->Location = System::Drawing::Point(221, 324);
			this->groupBoxDanePracownika->Name = L"groupBoxDanePracownika";
			this->groupBoxDanePracownika->Size = System::Drawing::Size(202, 117);
			this->groupBoxDanePracownika->TabIndex = 3;
			this->groupBoxDanePracownika->TabStop = false;
			this->groupBoxDanePracownika->Text = L"Dane pracownika";
			// 
			// txtPesel
			// 
			this->txtPesel->Enabled = false;
			this->txtPesel->Location = System::Drawing::Point(65, 82);
			this->txtPesel->Name = L"txtPesel";
			this->txtPesel->Size = System::Drawing::Size(116, 20);
			this->txtPesel->TabIndex = 32;
			// 
			// txtNazwisko
			// 
			this->txtNazwisko->Enabled = false;
			this->txtNazwisko->Location = System::Drawing::Point(65, 50);
			this->txtNazwisko->Name = L"txtNazwisko";
			this->txtNazwisko->Size = System::Drawing::Size(116, 20);
			this->txtNazwisko->TabIndex = 31;
			// 
			// txtImie
			// 
			this->txtImie->Enabled = false;
			this->txtImie->Location = System::Drawing::Point(65, 16);
			this->txtImie->Name = L"txtImie";
			this->txtImie->Size = System::Drawing::Size(116, 20);
			this->txtImie->TabIndex = 30;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(5, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 13);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Pesel";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(5, 53);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 13);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Nazwisko";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(5, 23);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(26, 13);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Imiê";
			// 
			// groupBoxDaneAuta
			// 
			this->groupBoxDaneAuta->Controls->Add(this->txtModel);
			this->groupBoxDaneAuta->Controls->Add(this->txtMarka);
			this->groupBoxDaneAuta->Controls->Add(this->txtNrRejestracyjny);
			this->groupBoxDaneAuta->Controls->Add(this->label7);
			this->groupBoxDaneAuta->Controls->Add(this->label8);
			this->groupBoxDaneAuta->Controls->Add(this->label10);
			this->groupBoxDaneAuta->Location = System::Drawing::Point(429, 324);
			this->groupBoxDaneAuta->Name = L"groupBoxDaneAuta";
			this->groupBoxDaneAuta->Size = System::Drawing::Size(211, 117);
			this->groupBoxDaneAuta->TabIndex = 4;
			this->groupBoxDaneAuta->TabStop = false;
			this->groupBoxDaneAuta->Text = L"Dane Samochodu";
			// 
			// txtModel
			// 
			this->txtModel->Enabled = false;
			this->txtModel->Location = System::Drawing::Point(84, 82);
			this->txtModel->Name = L"txtModel";
			this->txtModel->Size = System::Drawing::Size(117, 20);
			this->txtModel->TabIndex = 11;
			// 
			// txtMarka
			// 
			this->txtMarka->Enabled = false;
			this->txtMarka->Location = System::Drawing::Point(84, 50);
			this->txtMarka->Name = L"txtMarka";
			this->txtMarka->Size = System::Drawing::Size(117, 20);
			this->txtMarka->TabIndex = 10;
			// 
			// txtNrRejestracyjny
			// 
			this->txtNrRejestracyjny->Enabled = false;
			this->txtNrRejestracyjny->Location = System::Drawing::Point(84, 20);
			this->txtNrRejestracyjny->Name = L"txtNrRejestracyjny";
			this->txtNrRejestracyjny->Size = System::Drawing::Size(117, 20);
			this->txtNrRejestracyjny->TabIndex = 9;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 85);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Model";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 53);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Marka";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 23);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(72, 13);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Numer rejestr.";
			// 
			// groupBoxSerwis
			// 
			this->groupBoxSerwis->Controls->Add(this->groupBox1);
			this->groupBoxSerwis->Controls->Add(this->checkBox1);
			this->groupBoxSerwis->Controls->Add(this->label25);
			this->groupBoxSerwis->Controls->Add(this->textBox7);
			this->groupBoxSerwis->Controls->Add(this->groupBoxOdsKarne);
			this->groupBoxSerwis->Location = System::Drawing::Point(646, 156);
			this->groupBoxSerwis->Name = L"groupBoxSerwis";
			this->groupBoxSerwis->Size = System::Drawing::Size(229, 234);
			this->groupBoxSerwis->TabIndex = 6;
			this->groupBoxSerwis->TabStop = false;
			this->groupBoxSerwis->Text = L"Obliczanie ceny";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->labelOstatecznaCena);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Location = System::Drawing::Point(6, 168);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(217, 56);
			this->groupBox1->TabIndex = 23;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"£¹czny koszt";
			// 
			// labelOstatecznaCena
			// 
			this->labelOstatecznaCena->AutoSize = true;
			this->labelOstatecznaCena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelOstatecznaCena->ForeColor = System::Drawing::Color::Red;
			this->labelOstatecznaCena->Location = System::Drawing::Point(95, 25);
			this->labelOstatecznaCena->Name = L"labelOstatecznaCena";
			this->labelOstatecznaCena->Size = System::Drawing::Size(0, 17);
			this->labelOstatecznaCena->TabIndex = 1;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label15->Location = System::Drawing::Point(6, 25);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(90, 17);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Do zap³aty:";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(12, 29);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(88, 17);
			this->checkBox1->TabIndex = 22;
			this->checkBox1->Text = L"Udziel rabatu";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Zwrot::checkBox1_CheckedChanged);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(195, 36);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(27, 13);
			this->label25->TabIndex = 21;
			this->label25->Text = L"z³/h";
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(129, 29);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(60, 20);
			this->textBox7->TabIndex = 20;
			this->textBox7->Text = L"0,00";
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Zwrot::textBox7_KeyPress);
			// 
			// groupBoxOdsKarne
			// 
			this->groupBoxOdsKarne->Controls->Add(this->label21);
			this->groupBoxOdsKarne->Controls->Add(this->label20);
			this->groupBoxOdsKarne->Controls->Add(this->label19);
			this->groupBoxOdsKarne->Controls->Add(this->textBox5);
			this->groupBoxOdsKarne->Controls->Add(this->checkBoxInnaKara);
			this->groupBoxOdsKarne->Controls->Add(this->textBox4);
			this->groupBoxOdsKarne->Controls->Add(this->checkBoxPoTerminie);
			this->groupBoxOdsKarne->Controls->Add(this->textBox3);
			this->groupBoxOdsKarne->Controls->Add(this->checkBoxWymagaNaprawy);
			this->groupBoxOdsKarne->Location = System::Drawing::Point(6, 55);
			this->groupBoxOdsKarne->Name = L"groupBoxOdsKarne";
			this->groupBoxOdsKarne->Size = System::Drawing::Size(216, 112);
			this->groupBoxOdsKarne->TabIndex = 14;
			this->groupBoxOdsKarne->TabStop = false;
			this->groupBoxOdsKarne->Text = L"Odsetki karne";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(189, 93);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(16, 13);
			this->label21->TabIndex = 22;
			this->label21->Text = L"z³";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(189, 60);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(16, 13);
			this->label20->TabIndex = 21;
			this->label20->Text = L"z³";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(189, 29);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(16, 13);
			this->label19->TabIndex = 20;
			this->label19->Text = L"z³";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(123, 82);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(60, 20);
			this->textBox5->TabIndex = 19;
			this->textBox5->Text = L"0,00";
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Zwrot::textBox5_KeyPress);
			// 
			// checkBoxInnaKara
			// 
			this->checkBoxInnaKara->AutoSize = true;
			this->checkBoxInnaKara->Location = System::Drawing::Point(6, 84);
			this->checkBoxInnaKara->Name = L"checkBoxInnaKara";
			this->checkBoxInnaKara->Size = System::Drawing::Size(81, 17);
			this->checkBoxInnaKara->TabIndex = 18;
			this->checkBoxInnaKara->Text = L"Dodatkowe";
			this->checkBoxInnaKara->UseVisualStyleBackColor = true;
			this->checkBoxInnaKara->CheckedChanged += gcnew System::EventHandler(this, &Zwrot::checkBoxInnaKara_CheckedChanged);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(123, 52);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(60, 20);
			this->textBox4->TabIndex = 17;
			this->textBox4->Text = L"0,00";
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Zwrot::textBox4_KeyPress);
			// 
			// checkBoxPoTerminie
			// 
			this->checkBoxPoTerminie->AutoSize = true;
			this->checkBoxPoTerminie->Location = System::Drawing::Point(6, 54);
			this->checkBoxPoTerminie->Name = L"checkBoxPoTerminie";
			this->checkBoxPoTerminie->Size = System::Drawing::Size(118, 17);
			this->checkBoxPoTerminie->TabIndex = 16;
			this->checkBoxPoTerminie->Text = L"Oddano po terminie";
			this->checkBoxPoTerminie->UseVisualStyleBackColor = true;
			this->checkBoxPoTerminie->CheckedChanged += gcnew System::EventHandler(this, &Zwrot::checkBoxPoTerminie_CheckedChanged);
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(123, 22);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(60, 20);
			this->textBox3->TabIndex = 15;
			this->textBox3->Text = L"0,00";
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Zwrot::textBox3_KeyPress);
			// 
			// checkBoxWymagaNaprawy
			// 
			this->checkBoxWymagaNaprawy->AutoSize = true;
			this->checkBoxWymagaNaprawy->Location = System::Drawing::Point(6, 24);
			this->checkBoxWymagaNaprawy->Name = L"checkBoxWymagaNaprawy";
			this->checkBoxWymagaNaprawy->Size = System::Drawing::Size(111, 17);
			this->checkBoxWymagaNaprawy->TabIndex = 14;
			this->checkBoxWymagaNaprawy->Text = L"Wymaga naprawy";
			this->checkBoxWymagaNaprawy->UseVisualStyleBackColor = true;
			this->checkBoxWymagaNaprawy->CheckedChanged += gcnew System::EventHandler(this, &Zwrot::checkBoxWymagaNaprawy_CheckedChanged);
			// 
			// groupBoxWyjdz
			// 
			this->groupBoxWyjdz->Controls->Add(this->Wyjdz);
			this->groupBoxWyjdz->Location = System::Drawing::Point(646, 1);
			this->groupBoxWyjdz->Name = L"groupBoxWyjdz";
			this->groupBoxWyjdz->Size = System::Drawing::Size(229, 46);
			this->groupBoxWyjdz->TabIndex = 13;
			this->groupBoxWyjdz->TabStop = false;
			this->groupBoxWyjdz->Text = L"Opuœæ to okno";
			// 
			// Wyjdz
			// 
			this->Wyjdz->Location = System::Drawing::Point(78, 17);
			this->Wyjdz->Name = L"Wyjdz";
			this->Wyjdz->Size = System::Drawing::Size(75, 23);
			this->Wyjdz->TabIndex = 1;
			this->Wyjdz->Text = L"WyjdŸ";
			this->Wyjdz->UseVisualStyleBackColor = true;
			this->Wyjdz->Click += gcnew System::EventHandler(this, &Zwrot::Wyjdz_Click);
			// 
			// groupBoxTermin
			// 
			this->groupBoxTermin->Controls->Add(this->labelGodzinySp);
			this->groupBoxTermin->Controls->Add(this->label17);
			this->groupBoxTermin->Controls->Add(this->labelCzasStop);
			this->groupBoxTermin->Controls->Add(this->labelDataStop);
			this->groupBoxTermin->Controls->Add(this->label12);
			this->groupBoxTermin->Controls->Add(this->labelCzasStart);
			this->groupBoxTermin->Controls->Add(this->labelDataStart);
			this->groupBoxTermin->Controls->Add(this->label11);
			this->groupBoxTermin->Location = System::Drawing::Point(646, 52);
			this->groupBoxTermin->Name = L"groupBoxTermin";
			this->groupBoxTermin->Size = System::Drawing::Size(229, 98);
			this->groupBoxTermin->TabIndex = 4;
			this->groupBoxTermin->TabStop = false;
			this->groupBoxTermin->Text = L"Termin";
			// 
			// labelGodzinySp
			// 
			this->labelGodzinySp->AutoSize = true;
			this->labelGodzinySp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelGodzinySp->ForeColor = System::Drawing::Color::Red;
			this->labelGodzinySp->Location = System::Drawing::Point(93, 73);
			this->labelGodzinySp->Name = L"labelGodzinySp";
			this->labelGodzinySp->Size = System::Drawing::Size(0, 13);
			this->labelGodzinySp->TabIndex = 27;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(14, 73);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(62, 13);
			this->label17->TabIndex = 26;
			this->label17->Text = L"SpóŸnienie:";
			// 
			// labelCzasStop
			// 
			this->labelCzasStop->AutoSize = true;
			this->labelCzasStop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelCzasStop->ForeColor = System::Drawing::Color::Red;
			this->labelCzasStop->Location = System::Drawing::Point(176, 49);
			this->labelCzasStop->Name = L"labelCzasStop";
			this->labelCzasStop->Size = System::Drawing::Size(0, 13);
			this->labelCzasStop->TabIndex = 25;
			// 
			// labelDataStop
			// 
			this->labelDataStop->AutoSize = true;
			this->labelDataStop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelDataStop->ForeColor = System::Drawing::Color::Red;
			this->labelDataStop->Location = System::Drawing::Point(93, 49);
			this->labelDataStop->Name = L"labelDataStop";
			this->labelDataStop->Size = System::Drawing::Size(0, 13);
			this->labelDataStop->TabIndex = 24;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(14, 49);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(67, 13);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Data zwrotu:";
			// 
			// labelCzasStart
			// 
			this->labelCzasStart->AutoSize = true;
			this->labelCzasStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelCzasStart->ForeColor = System::Drawing::Color::Green;
			this->labelCzasStart->Location = System::Drawing::Point(176, 25);
			this->labelCzasStart->Name = L"labelCzasStart";
			this->labelCzasStart->Size = System::Drawing::Size(0, 13);
			this->labelCzasStart->TabIndex = 22;
			// 
			// labelDataStart
			// 
			this->labelDataStart->AutoSize = true;
			this->labelDataStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelDataStart->ForeColor = System::Drawing::Color::Green;
			this->labelDataStart->Location = System::Drawing::Point(93, 25);
			this->labelDataStart->Name = L"labelDataStart";
			this->labelDataStart->Size = System::Drawing::Size(0, 13);
			this->labelDataStart->TabIndex = 21;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label11->Location = System::Drawing::Point(14, 25);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(83, 13);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Data rezerwacji:";
			// 
			// groupBoxZatwierdzZwrot
			// 
			this->groupBoxZatwierdzZwrot->Controls->Add(this->btnZatwierdz);
			this->groupBoxZatwierdzZwrot->Location = System::Drawing::Point(646, 396);
			this->groupBoxZatwierdzZwrot->Name = L"groupBoxZatwierdzZwrot";
			this->groupBoxZatwierdzZwrot->Size = System::Drawing::Size(229, 45);
			this->groupBoxZatwierdzZwrot->TabIndex = 14;
			this->groupBoxZatwierdzZwrot->TabStop = false;
			this->groupBoxZatwierdzZwrot->Text = L"Zatwierdzanie";
			// 
			// btnZatwierdz
			// 
			this->btnZatwierdz->Location = System::Drawing::Point(78, 16);
			this->btnZatwierdz->Name = L"btnZatwierdz";
			this->btnZatwierdz->Size = System::Drawing::Size(75, 23);
			this->btnZatwierdz->TabIndex = 0;
			this->btnZatwierdz->Text = L"Zwróæ auto";
			this->btnZatwierdz->UseVisualStyleBackColor = true;
			this->btnZatwierdz->Click += gcnew System::EventHandler(this, &Zwrot::btnZatwierdz_Click);
			// 
			// Zwrot
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(883, 446);
			this->ControlBox = false;
			this->Controls->Add(this->groupBoxZatwierdzZwrot);
			this->Controls->Add(this->groupBoxTermin);
			this->Controls->Add(this->groupBoxWyjdz);
			this->Controls->Add(this->groupBoxSerwis);
			this->Controls->Add(this->groupBoxDaneAuta);
			this->Controls->Add(this->groupBoxDanePracownika);
			this->Controls->Add(this->groupBoxDaneKlienta);
			this->Controls->Add(this->groupBoxZestawienieAut);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Zwrot";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Zwrot";
			this->Load += gcnew System::EventHandler(this, &Zwrot::Zwrot_Load);
			this->groupBoxZestawienieAut->ResumeLayout(false);
			this->groupBoxZestawienieAut->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSamochody))->EndInit();
			this->groupBoxDaneKlienta->ResumeLayout(false);
			this->groupBoxDaneKlienta->PerformLayout();
			this->groupBoxDanePracownika->ResumeLayout(false);
			this->groupBoxDanePracownika->PerformLayout();
			this->groupBoxDaneAuta->ResumeLayout(false);
			this->groupBoxDaneAuta->PerformLayout();
			this->groupBoxSerwis->ResumeLayout(false);
			this->groupBoxSerwis->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBoxOdsKarne->ResumeLayout(false);
			this->groupBoxOdsKarne->PerformLayout();
			this->groupBoxWyjdz->ResumeLayout(false);
			this->groupBoxTermin->ResumeLayout(false);
			this->groupBoxTermin->PerformLayout();
			this->groupBoxZatwierdzZwrot->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
//Funkcja pomocnicza sprawdzaj¹ca czy rok jest przestêpny
private: int CzyRokPrzestepny(int month, int year)
{
	int years = year;

	if (month <= 2)
		years--;

	return years / 4 - years / 100 + years / 400;
}
//Funkcja licz¹ca ile dni dzieli jedn¹ datê od drugiej
private: int IleDniMiedzyDatami(int sDzien, int sMiesiac, int sRok, int eDzien, int eMiesiac, int eRok)
{
	const int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	long int n1 = sRok * 365 + sDzien;

	for (int i = 0; i < sMiesiac - 1; i++)
		n1 += monthDays[i];
	n1 += CzyRokPrzestepny(sMiesiac, sRok);

	long int n2 = eRok * 365 + eDzien;
	for (int i = 0; i < eMiesiac - 1; i++)
		n2 += monthDays[i];
	n2 += CzyRokPrzestepny(eMiesiac, eRok);

	return(n2 - n1);
}
//Funkcja pobieraj¹ca dzisiejsz¹ datê i czas zapisywan¹ przy zwrocie
private: void PobierzDzisiejszaDate()
{
	System::DateTime^ DataAktualna = System::DateTime::Now;

	String^ DzienObecny;
	String^ MiesiacObecny;
	String^ RokObecny;;
	String^ DataObecna;
	String^ CzasObecny;

	if (DataAktualna->Day < 10)
	{
		DzienObecny = "0" + Convert::ToString(DataAktualna->Day);
	}
	else {
		DzienObecny = Convert::ToString(DataAktualna->Day);
	}
	
	if (DataAktualna->Month < 10)
	{
		MiesiacObecny = "0" + Convert::ToString(DataAktualna->Month);
	}
	else {
		MiesiacObecny = Convert::ToString(DataAktualna->Month);
	}
	
	RokObecny = Convert::ToString(DataAktualna->Year);
	
	if (DataAktualna->Hour < 10)
	{
		CzasObecny = "0" + Convert::ToString(DataAktualna->Hour);
	}
	else {
		CzasObecny = Convert::ToString(DataAktualna->Hour);
	}

	data_zwrotu_teraz = DzienObecny + "." + MiesiacObecny + "." + RokObecny;
	czas_zwrotu_teraz = CzasObecny + ":00";
}
//Funkcja zamieniaj¹ca przecinek na kropkê
private: void ZamienNaKropke()
{
	String^ tmp;
	if (checkBox1->Checked) {
		tmp = Convert::ToString(textBox7->Text);
		Rabat_Kropka = tmp->Replace(',', '.');
	}
	else {
		Rabat_Kropka = "0.00";
	}

	if (checkBoxWymagaNaprawy->Checked) {
		tmp = Convert::ToString(textBox3->Text);
		Wymaga_naprawy_Kropka = tmp->Replace(',', '.');
	}
	else {
		Wymaga_naprawy_Kropka = "0.00";
	}

	if (checkBoxPoTerminie->Checked) {
		tmp = Convert::ToString(textBox4->Text);
		Odsetki_Kropka = tmp->Replace(',', '.');
	}
	else {
		Odsetki_Kropka = "0.00";
	}

	if (checkBoxInnaKara->Checked) {
		tmp = Convert::ToString(textBox5->Text);
		Dodatkowe_Kropka = tmp->Replace(',', '.');
	}
	else {
		Dodatkowe_Kropka = "0.00";
	}
}
//Funkcja pomocnicza sprawdzaj¹ca czy pola odsetek i rabatu s¹ wype³nione
private: bool SprawdzPola()
{
	bool final = true;

	if (checkBox1->Checked)
	{
		if (textBox7->Text->Length < 3)
		{
			final = false;
			textBox7->BackColor = Color::Red;
		}
	}
	if (checkBoxWymagaNaprawy->Checked)
	{
		if (textBox3->Text->Length < 3)
		{
			final = false;
			textBox3->BackColor = Color::Red;
		}
	}
	if (checkBoxPoTerminie->Checked)
	{
		if (textBox4->Text->Length < 3)
		{
			final = false;
			textBox4->BackColor = Color::Red;
		}
	}
	if (checkBoxInnaKara->Checked)
	{
		if (textBox5->Text->Length < 3)
		{
			final = false;
			textBox5->BackColor = Color::Red;
		}
	}

	return final;
}
//Funkcja licz¹ca cenê ostateczn¹
private: void PoliczCeneOsteteczna()
{
	CenaOstateczna = ((Double)Cena_rejestracja + (Double)Odsetki + (Double)Wymaga_naprawy + (Double)Dodatkowe) - (Double)Rabat;
	labelOstatecznaCena->Text = Convert::ToString(CenaOstateczna) + " z³";
}
//Funkcja pomocnicza sprawdzaj¹ca czy nale¿y policzyæ odsetki
private: void DoZaplaty()
{
	CenaLaczna = (double)Cena_rejestracja;// +(double)Odsetki;
	//labelLacznaCena->Text = Convert::ToString(CenaLaczna) + " z³";
}
//Funkcja pomocnicza sprawdzaj¹ca czy podana data rezerwacji jest prawid³owa
private: bool CzyDataPrawid³owa(int dataA, int dataB)
{
	bool final = true;

	if ((dataA > dataB) || (dataA == dataB))
	{
		final = false;
	}

	return final;
}
//Funkcja pomocnicza zamieniaj¹ca przecinek na kropkê
private: void CenaDecimal()
{
	Cena = Convert::ToDecimal(CenaS);
}
//Pobieramy cenê za godzinê danego auta z bazy
private: void PobierzCeneAutaH()
{
	MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ Question = gcnew MySqlCommand("select Cena from Samochod where ID_Samochod = '" + ID_Samochodu + "';", Connect);
	MySqlDataReader^ Data;

	try {
		Connect->Open();
		Data = Question->ExecuteReader();
		if (Data->Read())
		{
			CenaS = Data->GetString(0);
		}
		Connect->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}
//Funkcja pomocnicza zamieniaj¹ca czas MM na int
private: void ZamienCzas(String^ Czas, bool X)
{
	if (X) {
		Czas1 = Convert::ToInt32(Czas->Substring(0, 2));
	}
	else {
		Czas2 = Convert::ToInt32(Czas->Substring(0, 2));
	}
}
//Funkcja pomocnicza zamieniaj¹ca datê w formacie DD.MM.RRRR na int, int, int
private: void ZamienDate(String^ Data, bool X)
{
	if (X) {
		Dzien1 = Convert::ToInt32(Data->Substring(0, 2));
		Miesiac1 = Convert::ToInt32(Data->Substring(3, 2));
		Rok1 = Convert::ToInt32(Data->Substring(6, 4));
	}
	else {
		Dzien2 = Convert::ToInt32(Data->Substring(0, 2));
		Miesiac2 = Convert::ToInt32(Data->Substring(3, 2));
		Rok2 = Convert::ToInt32(Data->Substring(6, 4));
	}
}
//Funkcja pomocnicza sprawdzaj¹ca czy w polach znajduj¹ siê znaki od a do z i specjalne
private: bool SprawdzToPole(KeyPressEventArgs^ e, bool Przecinek)
{
	bool CzyToJestZnak = true;

	if (e->KeyChar >= '0' && e->KeyChar <= '9' || e->KeyChar == 8)// Sprawdzamy czy wciœniêty jest liczb¹ albo klawiszem backspace
	{
		//e.Handled = false;   // Nie blokujemy znaku
		CzyToJestZnak = false;
	}

	if (Przecinek)
	{
		if (e->KeyChar == ',')
		{
			CzyToJestZnak = false;
		}
	}

	return CzyToJestZnak;
}
//Funkcja pobierajaca z bazdy danych szczegolowe informacje kryjace siê pod ID
private: void PobiezInfoZBazy(String^ CommandA, short int DataNumber)
{
	MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ Command = gcnew MySqlCommand(CommandA, Connect);
	MySqlDataReader^ DataRead;
	//
	try {
		Connect->Open();
		DataRead = Command->ExecuteReader();
		if (DataRead->Read())
		{
			if (DataNumber == 1)
			{
				txtImie->Text = DataRead->GetString(0);
				txtNazwisko->Text = DataRead->GetString(1);
				txtPesel->Text = DataRead->GetString(2);
			}
			else if (DataNumber == 2)
			{
				txtImieK->Text = DataRead->GetString(0);
				txtNazwiskoK->Text = DataRead->GetString(1);
				txtPeselK->Text = DataRead->GetString(2);
			}
			else if (DataNumber == 3)
			{
				txtMarka->Text = DataRead->GetString(0);
				txtModel->Text = DataRead->GetString(1);
			}
			else if (DataNumber == 4)
			{
				txtNrRejestracyjny->Text = DataRead->GetString(0);
			}
			else
			{
				MessageBox::Show("Wyst¹pi³ b³¹d krytyczny!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		Connect->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}
//Funkcja pomocnicza wyœwietlaj¹ca szczegó³y nt wyporzyczenia auta
private: void PokazSzczegoly()
{
	//Imiê i Nazwisko pracownika, który wprowadzi³ rejestracjê
	PobiezInfoZBazy("select Imie, Nazwisko, Pesel from Informacja where ID_informacja = '" + ID_Pracownik + "';", 1);
	//Imiê i Nazwisko oraz Pesel klienta
	PobiezInfoZBazy("select Imie, Nazwisko, Pesel from Klient where ID_Klient = '" + ID_Klienta + "';", 2);
	//Marka i model samochodu
	PobiezInfoZBazy("select Marka, Model from Specyfikacja where ID_Specyfikacja = '" + ID_Samochodu + "';", 3);
	//Numer rejestracyjny samochodu
	PobiezInfoZBazy("select Numer_rejestracyjny from samochod where ID_Samochod = '" + ID_Samochodu + "';", 4);

	//Pobieramy nastêpne informacje
	labelDataStart->Text = data_rejestracji;
	labelCzasStart->Text = czas_rejestacji;
	labelDataStop->Text = data_zwrotu;
	labelCzasStop->Text = czas_zwrotu;

}
//Funkcja wyœwietlaj¹ca samochody aktualnie wyporzyczone
private: void PokazWyporzyczoneSamochody()
{
	MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ Question = gcnew MySqlCommand("select ID_Rezerwacja AS 'ID rezerwacji', ID_Klient AS 'ID klienta', ID_Pracownik AS 'ID pracownika', ID_Samochod AS 'ID samochodu', Data_rezerwacji AS 'Data rezerwacji', Godzina_rezerwacji AS 'Godzina rezerwacji', Data_zwrotu AS 'Data zwrotu', Godzina_zwrotu AS 'Godzina zwrotu', Cena from Rezerwacja WHERE CzyOddany = 0;", Connect);

	try {
		Connect->Open();
		MySqlDataAdapter^ Data = gcnew MySqlDataAdapter();
		Data->SelectCommand = Question;
		DataTable^ Table = gcnew DataTable();
		Data->Fill(Table);
		BindingSource^ Source = gcnew BindingSource();
		Source->DataSource = Table;
		dataGridViewSamochody->DataSource = Source;
		Connect->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}
//Funkcja liczy cenê za wyporzyczenie
private: void PoliczCene()
{
	System::Int32 DataI;
	System::Int32 DataII;
	System::Int32 Godziny;

	DataI = Dzien1 + Miesiac1 * 100 + Rok1 * 10000;
	DataII = Dzien2 + Miesiac2 * 100 + Rok2 * 10000;

	if (CzyDataPrawid³owa(DataI, DataII))
	{
		//Godziny = ((((DataII - DataI) * 24) - Czas1) + Czas2);
		Godziny = ((((IleDniMiedzyDatami(Dzien1, Miesiac1, Rok1, Dzien2, Miesiac2, Rok2)) * 24) - Czas1) + Czas2);
		PobierzCeneAutaH();
		CenaDecimal();
		Cena_rejestracja = Cena* (Decimal)Godziny;

		//labelCena->Text = Convert::ToString(Cena_rejestracja) + " z³";
	}
	else {
		MessageBox::Show("Wyst¹pi³ b³¹d krytyczny", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
//Funkcja liczy odsetki karne za godziny spóŸnienia
private: void PoliczOdsetki()
{
	System::DateTime^ DataAktualna;
	System::Int32 DataObecna;
	
	System::Int32 DzienObecny;
	System::Int32 MiesiacObecny;
	System::Int32 RokObecny;
	System::Int32 CzasObecny;

	System::String^ DzienObecny2;
	System::String^ MiesiacObecny2;
	System::String^ RokObecny2;
	System::String^ CzasObecny2;

	System::Int32 DataZwrotu;

	System::Int32 GodzinyZwloki;

	System::Decimal OdsetkiZaZwloke;

	DataAktualna = System::DateTime::Now;

	DzienObecny = Convert::ToInt32(DataAktualna->Day);
	MiesiacObecny = Convert::ToInt32(DataAktualna->Month);
	RokObecny = Convert::ToInt32(DataAktualna->Year);
	CzasObecny = Convert::ToInt32(DataAktualna->Hour);

	DataObecna = DzienObecny + MiesiacObecny * 100 + RokObecny * 10000;
	DataZwrotu = Dzien2 + Miesiac2 * 100 + Rok2 * 10000;
	//DniZwloki = DataObecna - DataZwrotu; //POPRAWKA = To s¹ godziny, a nie dni.
	//GodzinyZwloki = ((((DataObecna - DataZwrotu)*24) - Czas2) + CzasObecny);
	GodzinyZwloki = ((((IleDniMiedzyDatami(Dzien2, Miesiac2, Rok2, DzienObecny, MiesiacObecny, RokObecny)) * 24) - Czas2) + CzasObecny);
	if (GodzinyZwloki > 0) {
		OdsetkiZaZwloke = (Decimal)GodzinyZwloki * Cena;
		//checkBoxPoTerminie->Checked = true;
		//textBox4->Enabled = true;
		textBox4->Text = Convert::ToString(OdsetkiZaZwloke);
		labelGodzinySp->Text = Convert::ToString(GodzinyZwloki) + " h";
	}
	else {
		OdsetkiZaZwloke = 0;
		//checkBoxPoTerminie->Checked = false;
		//textBox4->Enabled = false;
		textBox4->Text = "0,00";
		labelGodzinySp->Text = "0 z³";//Convert::ToString(GodzinyZwloki) + " h";
	}
}
//Funkcja wyszukaj¹ca z bazy wyporzyczone auto na podstwie ID Klienta
private: void SzukajAutoKlienta()
{
	MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ Command = gcnew MySqlCommand("select ID_Rezerwacja AS 'ID rezerwacji', ID_Klient AS 'ID klienta', ID_Pracownik AS 'ID pracownika', ID_Samochod AS 'ID samochodu', Data_rezerwacji AS 'Data rezerwacji', Godzina_rezerwacji AS 'Godzina rezerwacji', Data_zwrotu AS 'Data zwrotu', Godzina_zwrotu AS 'Godzina zwrotu', Cena from Rezerwacja WHERE ID_Klient = '"+textBox1->Text+"' AND CzyOddany = 0;", Connect);

	try {
		Connect->Open();
		MySqlDataAdapter^ Data = gcnew MySqlDataAdapter();
		Data->SelectCommand = Command;
		DataTable^ Table = gcnew DataTable();
		Data->Fill(Table);
		BindingSource^ Source = gcnew BindingSource();
		Source->DataSource = Table;
		dataGridViewSamochody->DataSource = Source;
		Connect->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}

//Zamknij okno
private: System::Void Wyjdz_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
//Funkcja uruchamia siê automatycznie po otwarciu okna
private: System::Void Zwrot_Load(System::Object^  sender, System::EventArgs^  e) {
	PokazWyporzyczoneSamochody();
}
//Klikniêcie w wybrany rekord przypisze dane w odpowiednie pola
private: System::Void dataGridViewSamochody_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex >= 0) {
		ID_Rejestracja = Convert::ToInt32(dataGridViewSamochody->Rows[e->RowIndex]->Cells["ID rezerwacji"]->Value->ToString());
		ID_Klienta = Convert::ToInt32(dataGridViewSamochody->Rows[e->RowIndex]->Cells["ID klienta"]->Value->ToString());
		ID_Samochodu = Convert::ToInt32(dataGridViewSamochody->Rows[e->RowIndex]->Cells["ID samochodu"]->Value->ToString());
		ID_Pracownik = Convert::ToInt32(dataGridViewSamochody->Rows[e->RowIndex]->Cells["ID pracownika"]->Value->ToString());
		data_rejestracji = dataGridViewSamochody->Rows[e->RowIndex]->Cells["Data rezerwacji"]->Value->ToString();
		data_zwrotu = dataGridViewSamochody->Rows[e->RowIndex]->Cells["Data zwrotu"]->Value->ToString();
		czas_rejestacji = dataGridViewSamochody->Rows[e->RowIndex]->Cells["Godzina rezerwacji"]->Value->ToString();
		czas_zwrotu = dataGridViewSamochody->Rows[e->RowIndex]->Cells["Godzina zwrotu"]->Value->ToString();
	}
	//Pokazujemy szczegó³owe dane nt wyporzyczenia
	PokazSzczegoly();
	//Pobieramy datê rezerwacji
	ZamienDate(data_rejestracji, 1);
	//Pobieramy datê zwrotu
	ZamienDate(data_zwrotu, 0);
	//Pobieramy czas rezerwacji
	ZamienCzas(czas_rejestacji, 1);
	//Pobieramy czas zwrotu
	ZamienCzas(czas_zwrotu, 0);
	//Obliczamy cenê
	PoliczCene();
	//Obliczamy odsetki
	PoliczOdsetki();
	//Suma = Cena wynajmu + Odsetki za zw³okê
	DoZaplaty();
	//Cena za rejestracje
	labelOstatecznaCena->Text = Convert::ToString(Cena_rejestracja);

	//Cena ostateczna
	//PoliczCeneOsteteczna();
}
//ChecBox Udziel rabatu
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox1->Checked) {
		textBox7->Enabled = true;

		if (textBox7->Text->Length)
			Rabat = Convert::ToDecimal(textBox7->Text);
		else
			Rabat = 0;

		PoliczCeneOsteteczna();
	}
	else
	{
		textBox7->Enabled = false;
		Rabat = 0;
		PoliczCeneOsteteczna();
	}
}
//ChecBox Wymaga naprawy
private: System::Void checkBoxWymagaNaprawy_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBoxWymagaNaprawy->Checked) {
		textBox3->Enabled = true;

		if (textBox3->Text->Length)
			Wymaga_naprawy = Convert::ToDecimal(textBox3->Text);
		else
			Wymaga_naprawy = 0;

		PoliczCeneOsteteczna();
	}
	else {
		textBox3->Enabled = false;
		Wymaga_naprawy = 0;
		PoliczCeneOsteteczna();
	}
}
//ChecBox Po terminie
private: System::Void checkBoxPoTerminie_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBoxPoTerminie->Checked) {
		textBox4->Enabled = true;
			
		if (textBox4->Text->Length)
			Odsetki = Convert::ToDecimal(textBox4->Text);
		else
			Odsetki = 0;

		PoliczCeneOsteteczna();
	}
	else
	{
		textBox4->Enabled = false;
		Odsetki = 0;
		PoliczCeneOsteteczna();
	}
}
//ChecBox Inna kara
private: System::Void checkBoxInnaKara_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBoxInnaKara->Checked) {
		textBox5->Enabled = true;
		
		if (textBox5->Text->Length)
			Dodatkowe = Convert::ToDecimal(textBox5->Text);
		else
			Dodatkowe = 0;

		PoliczCeneOsteteczna();
	}
	else
	{
		textBox5->Enabled = false;
		Dodatkowe = 0;
		PoliczCeneOsteteczna();
	}
}
 //Blokujemy wpisywanie wszystkich znaków poza liczbami
private: System::Void textBox7_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (SprawdzToPole(e, true))
	{
		e->Handled = true;
	}
	else
	{
		e->Handled = false;
	}
	
	if (e->KeyChar == (char)13)
	{
		if (textBox7->Text->Length)
			Rabat = Convert::ToDecimal(textBox7->Text);
		else
			Rabat = 0;

		PoliczCeneOsteteczna();
	}
}
private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (SprawdzToPole(e, true))
	{
		e->Handled = true;
	}
	else
	{
		e->Handled = false;
	}
	if (e->KeyChar == (char)13)
	{
		if (textBox3->Text->Length)
			Wymaga_naprawy = Convert::ToDecimal(textBox3->Text);
		else
			Wymaga_naprawy = 0;

		PoliczCeneOsteteczna();
	}
}
private: System::Void textBox4_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (SprawdzToPole(e, true))
	{
		e->Handled = true;
	}
	else
	{
		e->Handled = false;
	}

	if (e->KeyChar == (char)13)
	{
		if (textBox4->Text->Length)
			Odsetki = Convert::ToDecimal(textBox4->Text);
		else
			Odsetki = 0;

		PoliczCeneOsteteczna();
	}
}
private: System::Void textBox5_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (SprawdzToPole(e, true))
	{
		e->Handled = true;
	}
	else
	{
		e->Handled = false;
	}

	if (e->KeyChar == (char)13)
	{
		if (textBox5->Text->Length)
			Dodatkowe = Convert::ToDecimal(textBox5->Text);
		else
			Dodatkowe = 0;

		PoliczCeneOsteteczna();
	}
}
//Wyszukanie auta wyporzyczonego przez klienta - ENTER
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (SprawdzToPole(e, false))
	{
		e->Handled = true;
	}
	else
	{
		e->Handled = false;
	}
	
	if (e->KeyChar == (char)13)
	{
		if (textBox1->Text->Length)
			SzukajAutoKlienta();
		else
			MessageBox::Show("Proszê podaæ ID klienta!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
//Wyszukanie auta wyporzyczonego przez klienta
private: System::Void btnSzukaj_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text->Length)
		SzukajAutoKlienta();
	else
		MessageBox::Show("Proszê podaæ ID klienta!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
//Rejestrowanie zwrotu samochodu
private: System::Void btnZatwierdz_Click(System::Object^  sender, System::EventArgs^  e) {
	
	bool CzyZapisano;

	if (SprawdzPola() && ID_Rejestracja) {
		if ((MessageBox::Show("Czy jesteœ pewien, ¿e chcesz dokonaæ zwrotu samochodu " + txtMarka->Text + " " + txtModel->Text + " o numerze rejestracyjnym " + txtNrRejestracyjny->Text + " ?", "Pytanie", MessageBoxButtons::YesNo, MessageBoxIcon::Question)) == System::Windows::Forms::DialogResult::Yes)
		{

			ZamienNaKropke();
			PobierzDzisiejszaDate();

			if (UaktualnijRezerwacje())
			{
				if (ZapiszZwrot())
					CzyZapisano = true;
				else
					CzyZapisano = false;
			}
			else
				CzyZapisano = false;

			if (CzyZapisano)
				MessageBox::Show("Poprawnie dokonano zwrot auta " + txtMarka->Text + " " + txtModel->Text + " o numerze rejestracyjnym " + txtNrRejestracyjny->Text + "!", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);
			else
				MessageBox::Show("Podczas zapisywania zwrotu wyst¹pi³ b³¹d krytyczny!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);

			this->Close();
		}
	}
	else
	{
		MessageBox::Show("Nie mo¿na dokonaæ zwrotu, poniewa¿ nie podano wymaganych danych!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
//Funkcja pomocnicza zapisuj¹ca zwrot do bazy
private: bool ZapiszZwrot()
{
	bool final = false;

	MySqlConnection^ SqlPolacz2 = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ polecenie2 = SqlPolacz2->CreateCommand();
	MySqlTransaction^ transakcja2;

	SqlPolacz2->Open();
	transakcja2 = SqlPolacz2->BeginTransaction(IsolationLevel::ReadCommitted);
	polecenie2->Connection = SqlPolacz2;
	polecenie2->Transaction = transakcja2;

	try {
		polecenie2->CommandText = "INSERT Zwrot SET ID_Klient = '"+ ID_Klienta +"', ID_Pracownik = '"+ ID_Pracownik +"', ID_Samochod = '"+ ID_Samochodu +"', Data_zwrotu = '"+ data_zwrotu_teraz +"', Godzina_zwrotu = '"+ czas_zwrotu_teraz +"', Kara_naprawa = '"+ Wymaga_naprawy_Kropka +"', Kara_termin = '"+ Odsetki_Kropka +"', Kara_dodatkowa = '"+ Dodatkowe_Kropka +"', Rabat = '"+ Rabat_Kropka +"', ID_Rezerwacja = '"+ID_Rejestracja+"';";
		polecenie2->ExecuteNonQuery();
		transakcja2->Commit(); //zatwierdzenie transakcji
		final = true;
	}
	catch (Exception^ komunikat) {
		MessageBox::Show(komunikat->Message);
		transakcja2->Rollback(); //wycofaj wszelkie zmiany, zapisy itp.
	}
	SqlPolacz2->Close();

	return final;
}
//Funkcja pomocnicza zapisuj¹ca zwrot do tabeli rezerwacja
private: bool UaktualnijRezerwacje()
{
	bool final = false;

	MySqlConnection^ SqlPolacz2 = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ polecenie2 = SqlPolacz2->CreateCommand();
	MySqlTransaction^ transakcja2;

	SqlPolacz2->Open();
	transakcja2 = SqlPolacz2->BeginTransaction(IsolationLevel::ReadCommitted);
	polecenie2->Connection = SqlPolacz2;
	polecenie2->Transaction = transakcja2;

	try {
		polecenie2->CommandText = "UPDATE Rezerwacja SET CzyOddany = 1 WHERE ID_Rezerwacja = '" + ID_Rejestracja + "';";
		polecenie2->ExecuteNonQuery();
		transakcja2->Commit(); //zatwierdzenie transakcji
		final = true;
	}
	catch (Exception^ komunikat) {
		MessageBox::Show(komunikat->Message);
		transakcja2->Rollback(); //wycofaj wszelkie zmiany, zapisy itp.
	}
	SqlPolacz2->Close();

	return final;
}
};
}
