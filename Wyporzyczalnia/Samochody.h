#pragma once

namespace Wyporzyczalnia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Samochody
	/// </summary>
	public ref class Samochody : public System::Windows::Forms::Form
	{
	public: String^ BazaDanychSQL;
	public: int ID_U;
	public: int id_rekordu = 0;
	public: int id_naprawy = 0;

	private: System::Windows::Forms::Label^  label20;
	public:
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  txtDataStop;
	private: System::Windows::Forms::TextBox^  txtDataStart;
	private: System::Windows::Forms::RadioButton^  radioButtonUsunS;
	private: System::Windows::Forms::RadioButton^  radioButtonNaprawione;




	private: System::Windows::Forms::GroupBox^  groupBoxWyjdz;
	public:
		Samochody(int id_uzytkownik, String^ konfiguracja)
		{
			InitializeComponent();
			BazaDanychSQL = konfiguracja;
			ID_U = id_uzytkownik;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Samochody()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  BoxWyszukajSamochod;
	private: System::Windows::Forms::Button^  btnPokazWszystkie;
	protected:

	protected:

	private: System::Windows::Forms::Button^  btnSzukaj;
	private: System::Windows::Forms::TextBox^  txtSzukajSamochod;
	private: System::Windows::Forms::GroupBox^  BoxListaSamochodow;
	private: System::Windows::Forms::DataGridView^  dataGridViewSamochody;
	private: System::Windows::Forms::GroupBox^  groupBoxDaneSamochodu;
	private: System::Windows::Forms::TextBox^  txtKolor;

	private: System::Windows::Forms::TextBox^  txtKlimatyzacja;

	private: System::Windows::Forms::TextBox^  txtLiczbaDrzwi;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  txtLadownosc;

	private: System::Windows::Forms::TextBox^  txtPrzebieg;

	private: System::Windows::Forms::TextBox^  txtRokProdukcji;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  txtMoc;

	private: System::Windows::Forms::TextBox^  txtRodzajSilnika;

	private: System::Windows::Forms::TextBox^  txtPojSilnika;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtModel;

	private: System::Windows::Forms::TextBox^  txtMarka;

	private: System::Windows::Forms::TextBox^  txtNrRejestracyjny;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBoxCena;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  txtCena;

	private: System::Windows::Forms::GroupBox^  groupBoxOpcje;
	private: System::Windows::Forms::Button^  btnWykonaj;
	private: System::Windows::Forms::RadioButton^  radioButtonUsun;
	private: System::Windows::Forms::RadioButton^  radioButtonModyfikuj;
	private: System::Windows::Forms::RadioButton^  radioButtonDodaj;
	private: System::Windows::Forms::GroupBox^  groupBoxSerwis;
	private: System::Windows::Forms::DataGridView^  dataGridViewSerwis;
	private: System::Windows::Forms::RichTextBox^  richTextBoxOpisUsterki;

	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::DateTimePicker^  dateTimePickerStop;
	private: System::Windows::Forms::DateTimePicker^  dateTimePickerStart;
	private: System::Windows::Forms::RadioButton^  radioButtonNowa;

	private: System::Windows::Forms::RadioButton^  radioButtonUaktualnij;
	private: System::Windows::Forms::Button^  btnSerwis;
	private: System::Windows::Forms::Button^  button1;




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
			this->BoxWyszukajSamochod = (gcnew System::Windows::Forms::GroupBox());
			this->btnPokazWszystkie = (gcnew System::Windows::Forms::Button());
			this->btnSzukaj = (gcnew System::Windows::Forms::Button());
			this->txtSzukajSamochod = (gcnew System::Windows::Forms::TextBox());
			this->BoxListaSamochodow = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridViewSamochody = (gcnew System::Windows::Forms::DataGridView());
			this->groupBoxDaneSamochodu = (gcnew System::Windows::Forms::GroupBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txtKolor = (gcnew System::Windows::Forms::TextBox());
			this->txtKlimatyzacja = (gcnew System::Windows::Forms::TextBox());
			this->txtLiczbaDrzwi = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtLadownosc = (gcnew System::Windows::Forms::TextBox());
			this->txtPrzebieg = (gcnew System::Windows::Forms::TextBox());
			this->txtRokProdukcji = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtMoc = (gcnew System::Windows::Forms::TextBox());
			this->txtRodzajSilnika = (gcnew System::Windows::Forms::TextBox());
			this->txtPojSilnika = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtModel = (gcnew System::Windows::Forms::TextBox());
			this->txtMarka = (gcnew System::Windows::Forms::TextBox());
			this->txtNrRejestracyjny = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBoxCena = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtCena = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxOpcje = (gcnew System::Windows::Forms::GroupBox());
			this->btnWykonaj = (gcnew System::Windows::Forms::Button());
			this->radioButtonUsun = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonModyfikuj = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonDodaj = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxSerwis = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonNaprawione = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonUsunS = (gcnew System::Windows::Forms::RadioButton());
			this->txtDataStop = (gcnew System::Windows::Forms::TextBox());
			this->txtDataStart = (gcnew System::Windows::Forms::TextBox());
			this->btnSerwis = (gcnew System::Windows::Forms::Button());
			this->radioButtonNowa = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonUaktualnij = (gcnew System::Windows::Forms::RadioButton());
			this->richTextBoxOpisUsterki = (gcnew System::Windows::Forms::RichTextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerStop = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePickerStart = (gcnew System::Windows::Forms::DateTimePicker());
			this->dataGridViewSerwis = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBoxWyjdz = (gcnew System::Windows::Forms::GroupBox());
			this->BoxWyszukajSamochod->SuspendLayout();
			this->BoxListaSamochodow->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSamochody))->BeginInit();
			this->groupBoxDaneSamochodu->SuspendLayout();
			this->groupBoxCena->SuspendLayout();
			this->groupBoxOpcje->SuspendLayout();
			this->groupBoxSerwis->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSerwis))->BeginInit();
			this->groupBoxWyjdz->SuspendLayout();
			this->SuspendLayout();
			// 
			// BoxWyszukajSamochod
			// 
			this->BoxWyszukajSamochod->Controls->Add(this->btnPokazWszystkie);
			this->BoxWyszukajSamochod->Controls->Add(this->btnSzukaj);
			this->BoxWyszukajSamochod->Controls->Add(this->txtSzukajSamochod);
			this->BoxWyszukajSamochod->Location = System::Drawing::Point(12, 2);
			this->BoxWyszukajSamochod->Name = L"BoxWyszukajSamochod";
			this->BoxWyszukajSamochod->Size = System::Drawing::Size(500, 46);
			this->BoxWyszukajSamochod->TabIndex = 13;
			this->BoxWyszukajSamochod->TabStop = false;
			this->BoxWyszukajSamochod->Text = L"Wyszukaj samochód";
			// 
			// btnPokazWszystkie
			// 
			this->btnPokazWszystkie->Location = System::Drawing::Point(407, 19);
			this->btnPokazWszystkie->Name = L"btnPokazWszystkie";
			this->btnPokazWszystkie->Size = System::Drawing::Size(82, 23);
			this->btnPokazWszystkie->TabIndex = 10;
			this->btnPokazWszystkie->Text = L"Odœwie¿";
			this->btnPokazWszystkie->UseVisualStyleBackColor = true;
			this->btnPokazWszystkie->Click += gcnew System::EventHandler(this, &Samochody::btnPokazWszystkie_Click);
			// 
			// btnSzukaj
			// 
			this->btnSzukaj->Location = System::Drawing::Point(326, 18);
			this->btnSzukaj->Name = L"btnSzukaj";
			this->btnSzukaj->Size = System::Drawing::Size(75, 23);
			this->btnSzukaj->TabIndex = 9;
			this->btnSzukaj->Text = L"ZnajdŸ";
			this->btnSzukaj->UseVisualStyleBackColor = true;
			this->btnSzukaj->Click += gcnew System::EventHandler(this, &Samochody::btnSzukaj_Click);
			// 
			// txtSzukajSamochod
			// 
			this->txtSzukajSamochod->Location = System::Drawing::Point(9, 19);
			this->txtSzukajSamochod->Name = L"txtSzukajSamochod";
			this->txtSzukajSamochod->Size = System::Drawing::Size(311, 20);
			this->txtSzukajSamochod->TabIndex = 8;
			this->txtSzukajSamochod->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Samochody::txtSzukajSamochod_KeyPress);
			// 
			// BoxListaSamochodow
			// 
			this->BoxListaSamochodow->Controls->Add(this->dataGridViewSamochody);
			this->BoxListaSamochodow->Location = System::Drawing::Point(12, 54);
			this->BoxListaSamochodow->Name = L"BoxListaSamochodow";
			this->BoxListaSamochodow->Size = System::Drawing::Size(691, 187);
			this->BoxListaSamochodow->TabIndex = 14;
			this->BoxListaSamochodow->TabStop = false;
			this->BoxListaSamochodow->Text = L"Wykaz samochodów";
			// 
			// dataGridViewSamochody
			// 
			this->dataGridViewSamochody->AllowUserToAddRows = false;
			this->dataGridViewSamochody->AllowUserToDeleteRows = false;
			this->dataGridViewSamochody->AllowUserToOrderColumns = true;
			this->dataGridViewSamochody->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSamochody->Location = System::Drawing::Point(9, 15);
			this->dataGridViewSamochody->Name = L"dataGridViewSamochody";
			this->dataGridViewSamochody->ReadOnly = true;
			this->dataGridViewSamochody->Size = System::Drawing::Size(679, 166);
			this->dataGridViewSamochody->TabIndex = 3;
			this->dataGridViewSamochody->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Samochody::dataGridViewSamochody_CellClick);
			// 
			// groupBoxDaneSamochodu
			// 
			this->groupBoxDaneSamochodu->Controls->Add(this->label20);
			this->groupBoxDaneSamochodu->Controls->Add(this->label19);
			this->groupBoxDaneSamochodu->Controls->Add(this->label18);
			this->groupBoxDaneSamochodu->Controls->Add(this->label17);
			this->groupBoxDaneSamochodu->Controls->Add(this->txtKolor);
			this->groupBoxDaneSamochodu->Controls->Add(this->txtKlimatyzacja);
			this->groupBoxDaneSamochodu->Controls->Add(this->txtLiczbaDrzwi);
			this->groupBoxDaneSamochodu->Controls->Add(this->label12);
			this->groupBoxDaneSamochodu->Controls->Add(this->label11);
			this->groupBoxDaneSamochodu->Controls->Add(this->label10);
			this->groupBoxDaneSamochodu->Controls->Add(this->txtLadownosc);
			this->groupBoxDaneSamochodu->Controls->Add(this->txtPrzebieg);
			this->groupBoxDaneSamochodu->Controls->Add(this->txtRokProdukcji);
			this->groupBoxDaneSamochodu->Controls->Add(this->label9);
			this->groupBoxDaneSamochodu->Controls->Add(this->label8);
			this->groupBoxDaneSamochodu->Controls->Add(this->label7);
			this->groupBoxDaneSamochodu->Controls->Add(this->txtMoc);
			this->groupBoxDaneSamochodu->Controls->Add(this->txtRodzajSilnika);
			this->groupBoxDaneSamochodu->Controls->Add(this->txtPojSilnika);
			this->groupBoxDaneSamochodu->Controls->Add(this->label6);
			this->groupBoxDaneSamochodu->Controls->Add(this->label5);
			this->groupBoxDaneSamochodu->Controls->Add(this->label4);
			this->groupBoxDaneSamochodu->Controls->Add(this->txtModel);
			this->groupBoxDaneSamochodu->Controls->Add(this->txtMarka);
			this->groupBoxDaneSamochodu->Controls->Add(this->txtNrRejestracyjny);
			this->groupBoxDaneSamochodu->Controls->Add(this->label3);
			this->groupBoxDaneSamochodu->Controls->Add(this->label2);
			this->groupBoxDaneSamochodu->Controls->Add(this->label1);
			this->groupBoxDaneSamochodu->Location = System::Drawing::Point(12, 247);
			this->groupBoxDaneSamochodu->Name = L"groupBoxDaneSamochodu";
			this->groupBoxDaneSamochodu->Size = System::Drawing::Size(589, 181);
			this->groupBoxDaneSamochodu->TabIndex = 15;
			this->groupBoxDaneSamochodu->TabStop = false;
			this->groupBoxDaneSamochodu->Text = L"Dane samochodu";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(560, 29);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(19, 13);
			this->label20->TabIndex = 27;
			this->label20->Text = L"kg";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(359, 129);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(21, 13);
			this->label19->TabIndex = 26;
			this->label19->Text = L"km";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(359, 63);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(24, 13);
			this->label18->TabIndex = 25;
			this->label18->Text = L"kW";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(165, 129);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(27, 13);
			this->label17->TabIndex = 24;
			this->label17->Text = L"cm3";
			// 
			// txtKolor
			// 
			this->txtKolor->Location = System::Drawing::Point(479, 126);
			this->txtKolor->Name = L"txtKolor";
			this->txtKolor->Size = System::Drawing::Size(100, 20);
			this->txtKolor->TabIndex = 23;
			// 
			// txtKlimatyzacja
			// 
			this->txtKlimatyzacja->Location = System::Drawing::Point(479, 93);
			this->txtKlimatyzacja->Name = L"txtKlimatyzacja";
			this->txtKlimatyzacja->Size = System::Drawing::Size(100, 20);
			this->txtKlimatyzacja->TabIndex = 22;
			// 
			// txtLiczbaDrzwi
			// 
			this->txtLiczbaDrzwi->Location = System::Drawing::Point(479, 60);
			this->txtLiczbaDrzwi->Name = L"txtLiczbaDrzwi";
			this->txtLiczbaDrzwi->Size = System::Drawing::Size(100, 20);
			this->txtLiczbaDrzwi->TabIndex = 21;
			this->txtLiczbaDrzwi->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Samochody::txtLiczbaDrzwi_KeyPress);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(404, 129);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 13);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Kolor";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(404, 96);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(65, 13);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Klimatyzacja";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(404, 63);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(65, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Liczba drzwi";
			// 
			// txtLadownosc
			// 
			this->txtLadownosc->Location = System::Drawing::Point(479, 26);
			this->txtLadownosc->Name = L"txtLadownosc";
			this->txtLadownosc->Size = System::Drawing::Size(75, 20);
			this->txtLadownosc->TabIndex = 17;
			this->txtLadownosc->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Samochody::txtLadownosc_KeyPress);
			// 
			// txtPrzebieg
			// 
			this->txtPrzebieg->Location = System::Drawing::Point(283, 126);
			this->txtPrzebieg->Name = L"txtPrzebieg";
			this->txtPrzebieg->Size = System::Drawing::Size(70, 20);
			this->txtPrzebieg->TabIndex = 16;
			this->txtPrzebieg->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Samochody::txtPrzebieg_KeyPress);
			// 
			// txtRokProdukcji
			// 
			this->txtRokProdukcji->Location = System::Drawing::Point(283, 93);
			this->txtRokProdukcji->Name = L"txtRokProdukcji";
			this->txtRokProdukcji->Size = System::Drawing::Size(100, 20);
			this->txtRokProdukcji->TabIndex = 15;
			this->txtRokProdukcji->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Samochody::txtRokProdukcji_KeyPress);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(404, 29);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(69, 13);
			this->label9->TabIndex = 14;
			this->label9->Text = L"£adowonoœæ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(205, 129);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Przebieg";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(205, 96);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Rok produkcji";
			// 
			// txtMoc
			// 
			this->txtMoc->Location = System::Drawing::Point(283, 60);
			this->txtMoc->Name = L"txtMoc";
			this->txtMoc->Size = System::Drawing::Size(70, 20);
			this->txtMoc->TabIndex = 11;
			this->txtMoc->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Samochody::txtMoc_KeyPress);
			// 
			// txtRodzajSilnika
			// 
			this->txtRodzajSilnika->Location = System::Drawing::Point(283, 26);
			this->txtRodzajSilnika->Name = L"txtRodzajSilnika";
			this->txtRodzajSilnika->Size = System::Drawing::Size(100, 20);
			this->txtRodzajSilnika->TabIndex = 10;
			// 
			// txtPojSilnika
			// 
			this->txtPojSilnika->Location = System::Drawing::Point(88, 126);
			this->txtPojSilnika->Name = L"txtPojSilnika";
			this->txtPojSilnika->Size = System::Drawing::Size(71, 20);
			this->txtPojSilnika->TabIndex = 9;
			this->txtPojSilnika->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Samochody::txtPojSilnika_KeyPress);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(205, 63);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Moc";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(205, 29);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Rodzaj silnika";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(10, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Poj. silnika";
			// 
			// txtModel
			// 
			this->txtModel->Location = System::Drawing::Point(88, 93);
			this->txtModel->Name = L"txtModel";
			this->txtModel->Size = System::Drawing::Size(100, 20);
			this->txtModel->TabIndex = 5;
			// 
			// txtMarka
			// 
			this->txtMarka->Location = System::Drawing::Point(88, 60);
			this->txtMarka->Name = L"txtMarka";
			this->txtMarka->Size = System::Drawing::Size(100, 20);
			this->txtMarka->TabIndex = 4;
			// 
			// txtNrRejestracyjny
			// 
			this->txtNrRejestracyjny->Location = System::Drawing::Point(88, 26);
			this->txtNrRejestracyjny->Name = L"txtNrRejestracyjny";
			this->txtNrRejestracyjny->Size = System::Drawing::Size(100, 20);
			this->txtNrRejestracyjny->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Model";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Marka";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Numer rejestr.";
			// 
			// groupBoxCena
			// 
			this->groupBoxCena->Controls->Add(this->label13);
			this->groupBoxCena->Controls->Add(this->txtCena);
			this->groupBoxCena->Location = System::Drawing::Point(607, 247);
			this->groupBoxCena->Name = L"groupBoxCena";
			this->groupBoxCena->Size = System::Drawing::Size(96, 56);
			this->groupBoxCena->TabIndex = 16;
			this->groupBoxCena->TabStop = false;
			this->groupBoxCena->Text = L"Koszt wynajmu";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(60, 29);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(27, 13);
			this->label13->TabIndex = 1;
			this->label13->Text = L"z³/h";
			// 
			// txtCena
			// 
			this->txtCena->Location = System::Drawing::Point(8, 26);
			this->txtCena->Name = L"txtCena";
			this->txtCena->Size = System::Drawing::Size(46, 20);
			this->txtCena->TabIndex = 0;
			this->txtCena->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Samochody::txtCena_KeyPress);
			// 
			// groupBoxOpcje
			// 
			this->groupBoxOpcje->Controls->Add(this->btnWykonaj);
			this->groupBoxOpcje->Controls->Add(this->radioButtonUsun);
			this->groupBoxOpcje->Controls->Add(this->radioButtonModyfikuj);
			this->groupBoxOpcje->Controls->Add(this->radioButtonDodaj);
			this->groupBoxOpcje->Location = System::Drawing::Point(607, 307);
			this->groupBoxOpcje->Name = L"groupBoxOpcje";
			this->groupBoxOpcje->Size = System::Drawing::Size(96, 121);
			this->groupBoxOpcje->TabIndex = 17;
			this->groupBoxOpcje->TabStop = false;
			this->groupBoxOpcje->Text = L"Opcje";
			// 
			// btnWykonaj
			// 
			this->btnWykonaj->Location = System::Drawing::Point(12, 92);
			this->btnWykonaj->Name = L"btnWykonaj";
			this->btnWykonaj->Size = System::Drawing::Size(75, 23);
			this->btnWykonaj->TabIndex = 3;
			this->btnWykonaj->Text = L"Wykonaj";
			this->btnWykonaj->UseVisualStyleBackColor = true;
			this->btnWykonaj->Click += gcnew System::EventHandler(this, &Samochody::btnWykonaj_Click);
			// 
			// radioButtonUsun
			// 
			this->radioButtonUsun->AutoSize = true;
			this->radioButtonUsun->ForeColor = System::Drawing::Color::Red;
			this->radioButtonUsun->Location = System::Drawing::Point(12, 70);
			this->radioButtonUsun->Name = L"radioButtonUsun";
			this->radioButtonUsun->Size = System::Drawing::Size(50, 17);
			this->radioButtonUsun->TabIndex = 2;
			this->radioButtonUsun->Text = L"Usuñ";
			this->radioButtonUsun->UseVisualStyleBackColor = true;
			this->radioButtonUsun->Visible = false;
			this->radioButtonUsun->Click += gcnew System::EventHandler(this, &Samochody::radioButtonUsun_Click);
			// 
			// radioButtonModyfikuj
			// 
			this->radioButtonModyfikuj->AutoSize = true;
			this->radioButtonModyfikuj->Checked = true;
			this->radioButtonModyfikuj->ForeColor = System::Drawing::Color::Orange;
			this->radioButtonModyfikuj->Location = System::Drawing::Point(12, 47);
			this->radioButtonModyfikuj->Name = L"radioButtonModyfikuj";
			this->radioButtonModyfikuj->Size = System::Drawing::Size(70, 17);
			this->radioButtonModyfikuj->TabIndex = 1;
			this->radioButtonModyfikuj->TabStop = true;
			this->radioButtonModyfikuj->Text = L"Modyfikuj";
			this->radioButtonModyfikuj->UseVisualStyleBackColor = true;
			this->radioButtonModyfikuj->Click += gcnew System::EventHandler(this, &Samochody::radioButtonModyfikuj_Click);
			// 
			// radioButtonDodaj
			// 
			this->radioButtonDodaj->AutoSize = true;
			this->radioButtonDodaj->ForeColor = System::Drawing::Color::Green;
			this->radioButtonDodaj->Location = System::Drawing::Point(13, 24);
			this->radioButtonDodaj->Name = L"radioButtonDodaj";
			this->radioButtonDodaj->Size = System::Drawing::Size(53, 17);
			this->radioButtonDodaj->TabIndex = 0;
			this->radioButtonDodaj->Text = L"Dodaj";
			this->radioButtonDodaj->UseVisualStyleBackColor = true;
			this->radioButtonDodaj->Click += gcnew System::EventHandler(this, &Samochody::radioButtonDodaj_Click);
			// 
			// groupBoxSerwis
			// 
			this->groupBoxSerwis->Controls->Add(this->radioButtonNaprawione);
			this->groupBoxSerwis->Controls->Add(this->radioButtonUsunS);
			this->groupBoxSerwis->Controls->Add(this->txtDataStop);
			this->groupBoxSerwis->Controls->Add(this->txtDataStart);
			this->groupBoxSerwis->Controls->Add(this->btnSerwis);
			this->groupBoxSerwis->Controls->Add(this->radioButtonNowa);
			this->groupBoxSerwis->Controls->Add(this->radioButtonUaktualnij);
			this->groupBoxSerwis->Controls->Add(this->richTextBoxOpisUsterki);
			this->groupBoxSerwis->Controls->Add(this->label16);
			this->groupBoxSerwis->Controls->Add(this->label15);
			this->groupBoxSerwis->Controls->Add(this->label14);
			this->groupBoxSerwis->Controls->Add(this->dateTimePickerStop);
			this->groupBoxSerwis->Controls->Add(this->dateTimePickerStart);
			this->groupBoxSerwis->Controls->Add(this->dataGridViewSerwis);
			this->groupBoxSerwis->Location = System::Drawing::Point(12, 434);
			this->groupBoxSerwis->Name = L"groupBoxSerwis";
			this->groupBoxSerwis->Size = System::Drawing::Size(691, 228);
			this->groupBoxSerwis->TabIndex = 18;
			this->groupBoxSerwis->TabStop = false;
			this->groupBoxSerwis->Text = L"Historia serwisowania";
			// 
			// radioButtonNaprawione
			// 
			this->radioButtonNaprawione->AutoSize = true;
			this->radioButtonNaprawione->Location = System::Drawing::Point(406, 205);
			this->radioButtonNaprawione->Name = L"radioButtonNaprawione";
			this->radioButtonNaprawione->Size = System::Drawing::Size(82, 17);
			this->radioButtonNaprawione->TabIndex = 13;
			this->radioButtonNaprawione->TabStop = true;
			this->radioButtonNaprawione->Text = L"Naprawione";
			this->radioButtonNaprawione->UseVisualStyleBackColor = true;
			// 
			// radioButtonUsunS
			// 
			this->radioButtonUsunS->AutoSize = true;
			this->radioButtonUsunS->Location = System::Drawing::Point(504, 205);
			this->radioButtonUsunS->Name = L"radioButtonUsunS";
			this->radioButtonUsunS->Size = System::Drawing::Size(50, 17);
			this->radioButtonUsunS->TabIndex = 12;
			this->radioButtonUsunS->TabStop = true;
			this->radioButtonUsunS->Text = L"Usuñ";
			this->radioButtonUsunS->UseVisualStyleBackColor = true;
			// 
			// txtDataStop
			// 
			this->txtDataStop->Enabled = false;
			this->txtDataStop->Location = System::Drawing::Point(489, 54);
			this->txtDataStop->Name = L"txtDataStop";
			this->txtDataStop->Size = System::Drawing::Size(187, 20);
			this->txtDataStop->TabIndex = 11;
			// 
			// txtDataStart
			// 
			this->txtDataStart->Enabled = false;
			this->txtDataStart->Location = System::Drawing::Point(489, 19);
			this->txtDataStart->Name = L"txtDataStart";
			this->txtDataStart->Size = System::Drawing::Size(187, 20);
			this->txtDataStart->TabIndex = 10;
			// 
			// btnSerwis
			// 
			this->btnSerwis->Location = System::Drawing::Point(607, 199);
			this->btnSerwis->Name = L"btnSerwis";
			this->btnSerwis->Size = System::Drawing::Size(75, 23);
			this->btnSerwis->TabIndex = 9;
			this->btnSerwis->Text = L"ZatwierdŸ";
			this->btnSerwis->UseVisualStyleBackColor = true;
			this->btnSerwis->Click += gcnew System::EventHandler(this, &Samochody::btnSerwis_Click);
			// 
			// radioButtonNowa
			// 
			this->radioButtonNowa->AutoSize = true;
			this->radioButtonNowa->Checked = true;
			this->radioButtonNowa->Location = System::Drawing::Point(406, 179);
			this->radioButtonNowa->Name = L"radioButtonNowa";
			this->radioButtonNowa->Size = System::Drawing::Size(97, 17);
			this->radioButtonNowa->TabIndex = 8;
			this->radioButtonNowa->TabStop = true;
			this->radioButtonNowa->Text = L"Nowa naprawa";
			this->radioButtonNowa->UseVisualStyleBackColor = true;
			// 
			// radioButtonUaktualnij
			// 
			this->radioButtonUaktualnij->AutoSize = true;
			this->radioButtonUaktualnij->Location = System::Drawing::Point(504, 179);
			this->radioButtonUaktualnij->Name = L"radioButtonUaktualnij";
			this->radioButtonUaktualnij->Size = System::Drawing::Size(111, 17);
			this->radioButtonUaktualnij->TabIndex = 7;
			this->radioButtonUaktualnij->Text = L"WprowadŸ zmiany";
			this->radioButtonUaktualnij->UseVisualStyleBackColor = true;
			// 
			// richTextBoxOpisUsterki
			// 
			this->richTextBoxOpisUsterki->Location = System::Drawing::Point(471, 91);
			this->richTextBoxOpisUsterki->Name = L"richTextBoxOpisUsterki";
			this->richTextBoxOpisUsterki->Size = System::Drawing::Size(205, 85);
			this->richTextBoxOpisUsterki->TabIndex = 6;
			this->richTextBoxOpisUsterki->Text = L"";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(398, 91);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(62, 13);
			this->label16->TabIndex = 5;
			this->label16->Text = L"Opis usterki";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(398, 60);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(69, 13);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Zakoñczenie";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(398, 25);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(69, 13);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Rozpoczêcie";
			// 
			// dateTimePickerStop
			// 
			this->dateTimePickerStop->Location = System::Drawing::Point(471, 54);
			this->dateTimePickerStop->Name = L"dateTimePickerStop";
			this->dateTimePickerStop->Size = System::Drawing::Size(12, 20);
			this->dateTimePickerStop->TabIndex = 2;
			this->dateTimePickerStop->ValueChanged += gcnew System::EventHandler(this, &Samochody::dateTimePickerStop_ValueChanged);
			// 
			// dateTimePickerStart
			// 
			this->dateTimePickerStart->Location = System::Drawing::Point(471, 19);
			this->dateTimePickerStart->Name = L"dateTimePickerStart";
			this->dateTimePickerStart->Size = System::Drawing::Size(12, 20);
			this->dateTimePickerStart->TabIndex = 1;
			this->dateTimePickerStart->Value = System::DateTime(2017, 2, 8, 0, 0, 0, 0);
			this->dateTimePickerStart->ValueChanged += gcnew System::EventHandler(this, &Samochody::dateTimePickerStart_ValueChanged);
			// 
			// dataGridViewSerwis
			// 
			this->dataGridViewSerwis->AllowUserToAddRows = false;
			this->dataGridViewSerwis->AllowUserToDeleteRows = false;
			this->dataGridViewSerwis->AllowUserToOrderColumns = true;
			this->dataGridViewSerwis->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSerwis->Location = System::Drawing::Point(9, 19);
			this->dataGridViewSerwis->Name = L"dataGridViewSerwis";
			this->dataGridViewSerwis->ReadOnly = true;
			this->dataGridViewSerwis->Size = System::Drawing::Size(374, 203);
			this->dataGridViewSerwis->TabIndex = 0;
			this->dataGridViewSerwis->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Samochody::dataGridViewSerwis_CellClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(57, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 19;
			this->button1->Text = L"WyjdŸ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Samochody::button1_Click);
			// 
			// groupBoxWyjdz
			// 
			this->groupBoxWyjdz->Controls->Add(this->button1);
			this->groupBoxWyjdz->Location = System::Drawing::Point(518, 2);
			this->groupBoxWyjdz->Name = L"groupBoxWyjdz";
			this->groupBoxWyjdz->Size = System::Drawing::Size(182, 46);
			this->groupBoxWyjdz->TabIndex = 20;
			this->groupBoxWyjdz->TabStop = false;
			this->groupBoxWyjdz->Text = L"Opuœæ to okno";
			// 
			// Samochody
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->ClientSize = System::Drawing::Size(715, 664);
			this->ControlBox = false;
			this->Controls->Add(this->groupBoxWyjdz);
			this->Controls->Add(this->groupBoxSerwis);
			this->Controls->Add(this->groupBoxOpcje);
			this->Controls->Add(this->groupBoxCena);
			this->Controls->Add(this->groupBoxDaneSamochodu);
			this->Controls->Add(this->BoxListaSamochodow);
			this->Controls->Add(this->BoxWyszukajSamochod);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Samochody";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Samochody";
			this->BoxWyszukajSamochod->ResumeLayout(false);
			this->BoxWyszukajSamochod->PerformLayout();
			this->BoxListaSamochodow->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSamochody))->EndInit();
			this->groupBoxDaneSamochodu->ResumeLayout(false);
			this->groupBoxDaneSamochodu->PerformLayout();
			this->groupBoxCena->ResumeLayout(false);
			this->groupBoxCena->PerformLayout();
			this->groupBoxOpcje->ResumeLayout(false);
			this->groupBoxOpcje->PerformLayout();
			this->groupBoxSerwis->ResumeLayout(false);
			this->groupBoxSerwis->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSerwis))->EndInit();
			this->groupBoxWyjdz->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
//Funkcja pomocnicza wyszukuj¹ca samochody wg ustalonego kryterium
private: void WyszukajSamochod()
{
	if (txtSzukajSamochod->Text->Length) {
		MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
		MySqlCommand^ Question = gcnew MySqlCommand("SELECT ID_Samochod AS ID, Numer_rejestracyjny AS 'Numer rejestracyjny', Cena, Marka, Model, Pojemnosc_silnika AS 'Pojemnoœæ silnika', Rodzaj_silnika AS 'Rodzaj silnika', Moc, Rok_produkcji AS 'Rok produkcji', Przebieg, Ladownosc AS '£adownoœæ', Liczba_drzwi AS 'Liczba drzwi', Klimatyzacja, Kolor FROM Samochod, Specyfikacja where Specyfikacja.ID_Specyfikacja = Samochod.ID_Samochod AND CONCAT(Marka,' ',Model) LIKE '%" + txtSzukajSamochod->Text + "%' ORDER BY Marka;", Connect);

		try {
			Connect->Open();
			MySqlDataAdapter^ Data = gcnew MySqlDataAdapter();
			Data->SelectCommand = Question;
			DataTable^ Table = gcnew DataTable();
			Data->Fill(Table);

			BindingSource^ Source = gcnew BindingSource();
			Source->DataSource = Table;
			dataGridViewSamochody->DataSource = Table;
			Connect->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	else
	{
		MessageBox::Show("Proszê wpisaæ markê lub model samochodu!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
//Funkcja pomocnicza sprawdzaj¹ca czy pola zosta³y poprawnie wype³nione
private: bool SprawdzDane()
{
	bool Nr_rejestracyjny = false, marka = false, model = false, poj_silnika = false, rodz_silnika = false, moc = false,
		rok_produkcji = false, przebieg = false, ladownosc = false, licz_drzwi = false, klima = false, kolor = false, cena = false;
	
	bool final = false;
	
	if ((txtNrRejestracyjny->Text->Length == 0) || (txtNrRejestracyjny->Text->Length > 45))
	{
		txtNrRejestracyjny->BackColor = BackColor.Red;
	}
	else
	{
		Nr_rejestracyjny = true;
	}
	if ((txtMarka->Text->Length == 0) || (txtMarka->Text->Length > 45))
	{
		txtMarka->BackColor = BackColor.Red;
	}
	else
	{
		marka = true;
	}
	if ((txtModel->Text->Length > 45) || (txtModel->Text->Length == 0))
	{
		txtModel->BackColor = BackColor.Red;
	}
	else
	{
		model = true;
	}
	if (txtPojSilnika->Text->Length == 0)
	{
		txtPojSilnika->BackColor = BackColor.Red;
	}
	else
	{
		poj_silnika = true;
	}
	if ((txtRodzajSilnika->Text->Length > 45) || (txtRodzajSilnika->Text->Length == 0))
	{
		txtRodzajSilnika->BackColor = BackColor.Red;
	}
	else
	{
		rodz_silnika = true;
	}
	if (txtMoc->Text->Length == 0)
	{
		txtMoc->BackColor = BackColor.Red;
	}
	else
	{
		moc = true;
	}
	if (txtRokProdukcji->Text->Length == 0)
	{
		txtRokProdukcji->BackColor = BackColor.Red;
	}
	else
	{
		rok_produkcji = true;
	}
	if (txtPrzebieg->Text->Length == 0)
	{
		txtPrzebieg->BackColor = BackColor.Red;
	}
	else
	{
		przebieg = true;
	}
	if (txtLadownosc->Text->Length == 0)
	{
		txtLadownosc->BackColor = BackColor.Red;
	}
	else
	{
		ladownosc = true;
	}
	if (txtLiczbaDrzwi->Text->Length == 0)
	{
		txtLiczbaDrzwi->BackColor = BackColor.Red;
	}
	else
	{
		licz_drzwi = true;
	}
	if (txtKlimatyzacja->Text->Length == 0)
	{
		txtKlimatyzacja->BackColor = BackColor.Red;
	}
	else
	{
		klima = true;
	}
	if (txtKolor->Text->Length == 0)
	{
		txtKolor->BackColor = BackColor.Red;
	}
	else
	{
		kolor = true;
	}
	if (txtCena->Text->Length == 0)
	{
		txtCena->BackColor = BackColor.Red;
	}
	else
	{
		cena = true;
	}
	if (Nr_rejestracyjny == true && marka == true && model == true && poj_silnika == true && rodz_silnika == true && moc == true,
		rok_produkcji == true && przebieg == true && ladownosc == true && licz_drzwi == true && klima == true && kolor == true && cena == true) {
		final = true;
	}

	return final;
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
		if (e->KeyChar == '.')
		{
			CzyToJestZnak = false;
		}
	}

	return CzyToJestZnak;
}
//Funkcja pomocnicza zamieniaj¹ca przecinek na kropkê w txtCena
private: void ZamienNaKropke(Control^ e)
{
	System::String^ Przecinek = Convert::ToString(e->Text);
	System::String^ Kropka = Przecinek->Replace(",",".");
	e->Text = Kropka;
}
//Funkcja pomocnicza wyczyszczaj¹ca pola
private: void WyczyscPola(Control^ e)
{
	txtNrRejestracyjny->BackColor = BackColor.White;
	txtMarka->BackColor = BackColor.White;
	txtModel->BackColor = BackColor.White;
	txtPojSilnika->BackColor = BackColor.White;
	txtRodzajSilnika->BackColor = BackColor.White;
	txtMoc->BackColor = BackColor.White;
	txtRokProdukcji->BackColor = BackColor.White;
	txtPrzebieg->BackColor = BackColor.White;
	txtLadownosc->BackColor = BackColor.White;
	txtLiczbaDrzwi->BackColor = BackColor.White;
	txtKlimatyzacja->BackColor = BackColor.White;
	txtKolor->BackColor = BackColor.White;
	txtCena->BackColor = BackColor.White;

	for each(Control^ element in e->Controls)
	{
		if (element->GetType() == TextBox::typeid)
		{
			element->Text = "";
		}
		if (element->GetType() == MaskedTextBox::typeid)
		{
			element->Text = "";
		}
		if (element->GetType() == RichTextBox::typeid)
		{
			element->Text = "";
		}
	}
}
//Funkcja pomocnicza blokuj¹ca/odblokowuj¹ca pola
private: void BlokujOdblokuj(Control^ e, bool a)
{
	for each(Control^ element in e->Controls)
	{
		if (a)
		{
			if (element->GetType() == TextBox::typeid)
			{
				element->Enabled = true;
			}
			if (element->GetType() == MaskedTextBox::typeid)
			{
				element->Enabled = true;
			}
			if (element->GetType() == RichTextBox::typeid)
			{
				element->Enabled = true;
			}
		}
		else
		{
			if (element->GetType() == TextBox::typeid)
			{
				element->Enabled = false;
			}
			if (element->GetType() == MaskedTextBox::typeid)
			{
				element->Enabled = false;
			}
			if (element->GetType() == RichTextBox::typeid)
			{
				element->Enabled = false;
			}

		}
	}
}
//Funkcja pomocnicza sprawdzaj¹ca czy dane do serwisu s¹ prawid³owe
private: bool SprawdzDaneDoSerwisu(int DaneA, int DaneB)
{
	bool final = true;
	
	if (DaneA > DaneB)
	{
		final = false;
	}

	if (richTextBoxOpisUsterki->Text->Length == 0)
	{
		final = false;
	}

	return final;
}

//Funkcja pokazuj¹ca historiê serwisu danego samochodu
private: void PokazSerwis()
{
	MySqlConnection^ SQLpolacz = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT ID_Naprawa AS 'Numer naprawy', ID_Samochod AS 'ID Samochodu', Data_rozpoczecia AS 'Data rozpoczêcia', Data_zakonczenia AS 'Data zakoñczenia', Opis, CzyNaprawiony AS 'Naprawiono' FROM Naprawa where ID_Samochod = '" + id_rekordu + "' ORDER BY ID_Naprawa;", SQLpolacz);

	try {
		MySqlDataAdapter^ dane = gcnew MySqlDataAdapter();
		dane->SelectCommand = zapytanie;
		DataTable^ tabela = gcnew DataTable();
		dane->Fill(tabela);

		BindingSource^ zrodlo = gcnew BindingSource();
		zrodlo->DataSource = tabela;
		dataGridViewSerwis->DataSource = zrodlo;
		SQLpolacz->Close();
	}
	catch (Exception^ komunikat) {
		MessageBox::Show(komunikat->Message);
	}
}

//Wyszukanie samochodu wg ustalonego kryterium - ENTER
private: System::Void txtSzukajSamochod_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == (char)13)
	{
		WyszukajSamochod();
	}
}
//Wyszukanie samochodu wg ustalonego kryterium
private: System::Void btnSzukaj_Click(System::Object^  sender, System::EventArgs^  e) {
	WyszukajSamochod();
}
//Pokazuje wszystkie samochody w bazie
private: System::Void btnPokazWszystkie_Click(System::Object^  sender, System::EventArgs^  e) {
	MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ Question = gcnew MySqlCommand("SELECT ID_Samochod AS ID, Numer_rejestracyjny AS 'Numer rejestracyjny', Cena, Marka, Model, Pojemnosc_silnika AS 'Pojemnoœæ silnika', Rodzaj_silnika AS 'Rodzaj silnika', Moc, Rok_produkcji AS 'Rok produkcji', Przebieg, Ladownosc AS '£adownoœæ', Liczba_drzwi AS 'Liczba drzwi', Klimatyzacja, Kolor FROM Samochod, Specyfikacja where Specyfikacja.ID_Specyfikacja = Samochod.ID_Samochod ORDER BY Marka;", Connect);

	try {
		Connect->Open();
		MySqlDataAdapter^ Data = gcnew MySqlDataAdapter();
		Data->SelectCommand = Question;
		DataTable^ Table = gcnew DataTable();
		Data->Fill(Table);

		BindingSource^ Source = gcnew BindingSource();
		Source->DataSource = Table;
		dataGridViewSamochody->DataSource = Table;
		Connect->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
//Zamyka okno
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
//Wybranie odpowiedniego rekordu przypisze dane do odpowiednich pól
private: System::Void dataGridViewSamochody_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex >= 0) {
		id_rekordu = Convert::ToInt32(dataGridViewSamochody->Rows[e->RowIndex]->Cells["ID"]->Value);
		txtNrRejestracyjny->Text = dataGridViewSamochody->Rows[e->RowIndex]->Cells["Numer rejestracyjny"]->Value->ToString();
		txtCena->Text = dataGridViewSamochody->Rows[e->RowIndex]->Cells["Cena"]->Value->ToString();
		txtMarka->Text = dataGridViewSamochody->Rows[e->RowIndex]->Cells["Marka"]->Value->ToString();
		txtModel->Text = dataGridViewSamochody->Rows[e->RowIndex]->Cells["Model"]->Value->ToString();
		txtPojSilnika->Text = dataGridViewSamochody->Rows[e->RowIndex]->Cells["Pojemnoœæ silnika"]->Value->ToString();
		txtRodzajSilnika->Text = dataGridViewSamochody->Rows[e->RowIndex]->Cells["Rodzaj silnika"]->Value->ToString();
		txtMoc->Text = dataGridViewSamochody->Rows[e->RowIndex]->Cells["Moc"]->Value->ToString();
		txtRokProdukcji->Text = dataGridViewSamochody->Rows[e->RowIndex]->Cells["Rok produkcji"]->Value->ToString();
		txtPrzebieg->Text = dataGridViewSamochody->Rows[e->RowIndex]->Cells["Przebieg"]->Value->ToString();
		txtLadownosc->Text = dataGridViewSamochody->Rows[e->RowIndex]->Cells["£adownoœæ"]->Value->ToString();
		txtLiczbaDrzwi->Text = dataGridViewSamochody->Rows[e->RowIndex]->Cells["Liczba drzwi"]->Value->ToString();
		txtKlimatyzacja->Text = dataGridViewSamochody->Rows[e->RowIndex]->Cells["Klimatyzacja"]->Value->ToString();
		txtKolor->Text = dataGridViewSamochody->Rows[e->RowIndex]->Cells["Kolor"]->Value->ToString();
	}
	ZamienNaKropke(txtCena);
	ZamienNaKropke(txtPojSilnika);
	ZamienNaKropke(txtMoc);
	PokazSerwis();
}
//Wykonanie operacji na samochodach
private: System::Void btnWykonaj_Click(System::Object^  sender, System::EventArgs^  e) {
	bool next_a = true, next_b = false, next_c = false;

	CultureInfo^ kultura = CultureInfo::CreateSpecificCulture("en-US");

	if (radioButtonDodaj->Checked)
	{
		if (SprawdzDane())
		{
			if (next_a)
			{
				MySqlConnection^ SqlPolacz = gcnew MySqlConnection(BazaDanychSQL);
				MySqlCommand^ polecenie = SqlPolacz->CreateCommand();
				MySqlTransaction^ transakcja;
				SqlPolacz->Open();
				transakcja = SqlPolacz->BeginTransaction(IsolationLevel::ReadCommitted);
				polecenie->Connection = SqlPolacz;
				polecenie->Transaction = transakcja;

				try {
					polecenie->CommandText = "INSERT INTO Samochod SET Numer_rejestracyjny ='" + txtNrRejestracyjny->Text + "', Cena = '" + txtCena->Text + "'; ";
					polecenie->ExecuteNonQuery();
					transakcja->Commit(); //zatwierdzenie transakcji
					next_b = true; //Ustawiamy flagê na true co oznacza, ¿e zapis do bazy siê powiód³
				}
				catch (Exception^ komunikat) {
					MessageBox::Show(komunikat->Message);
					transakcja->Rollback(); //wycofaj wszelkie zmiany, zapisy itp.
				}
				SqlPolacz->Close();
			}
			if (next_b)
			{
				//Pozyskujemy informacje o utworzonym ID auta abyœmy mogli go przypisaæ do rekordu ze specyfikacj¹ 
				MySqlConnection^ SqlPolaczID = gcnew MySqlConnection(BazaDanychSQL);
				MySqlCommand^ zapytanieID = gcnew MySqlCommand("select ID_Samochod from Samochod where Numer_rejestracyjny = '" + txtNrRejestracyjny->Text + "';", SqlPolaczID);
				MySqlDataReader^ odczytajID;
				try {
					SqlPolaczID->Open();
					odczytajID = zapytanieID->ExecuteReader();
					if (odczytajID->Read())
					{
						id_rekordu = odczytajID->GetInt32(0);
						next_c = true;
					}
					else
					{
						MessageBox::Show("Wyst¹pi³ b³¹d krytyczny!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				catch (Exception^ komunikat) {
					MessageBox::Show(komunikat->Message);
				}
				SqlPolaczID->Close();
			}
			if (next_c)
			{
				//Po uzyskanym ID tworzymy rekord
				MySqlConnection^ SqlPolacz2 = gcnew MySqlConnection(BazaDanychSQL);
				MySqlCommand^ polecenie2 = SqlPolacz2->CreateCommand();
				MySqlTransaction^ transakcja2;
				SqlPolacz2->Open();
				transakcja2 = SqlPolacz2->BeginTransaction(IsolationLevel::ReadCommitted);
				polecenie2->Connection = SqlPolacz2;
				polecenie2->Transaction = transakcja2;

				try {
					polecenie2->CommandText = "INSERT INTO Specyfikacja SET ID_Specyfikacja = '" + id_rekordu + "', Marka ='" + txtMarka->Text + "', Model = '" + txtModel->Text + "', Pojemnosc_silnika = '" + txtPojSilnika->Text + "', Rodzaj_silnika = '" + txtRodzajSilnika->Text + "', Moc = '" + txtMoc->Text + "', Rok_produkcji = '" + Convert::ToInt32(txtRokProdukcji->Text) + "', Przebieg = '" + Convert::ToInt32(txtPrzebieg->Text) + "', Ladownosc = '" + Convert::ToInt32(txtLadownosc->Text) + "', Liczba_drzwi = '" + Convert::ToInt32(txtLiczbaDrzwi->Text) + "', Klimatyzacja = '" + txtKlimatyzacja->Text + "', Kolor = '" + txtKolor->Text + "' ;";
					polecenie2->ExecuteNonQuery();
					transakcja2->Commit(); //zatwierdzenie transakcji
					MessageBox::Show("Pomyœlnie dodano nowy samochód!","Sukces",MessageBoxButtons::OK,MessageBoxIcon::Information);
				}
				catch (Exception^ komunikat) {
					MessageBox::Show(komunikat->Message);
					transakcja2->Rollback(); //wycofaj wszelkie zmiany, zapisy itp.
				}
				SqlPolacz2->Close();
			}
			WyczyscPola(groupBoxDaneSamochodu);
			WyczyscPola(groupBoxCena);
		}
		else
		{
			MessageBox::Show("Proszê sprawdziæ czy wymagane pola zosta³y wype³nione prawid³owo!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		id_rekordu = 0; //reset
	}

	if (radioButtonModyfikuj->Checked)
	{
		if (id_rekordu) {
			if (SprawdzDane())
			{
				if (next_a)
				{
					MySqlConnection^ SqlPolacz = gcnew MySqlConnection(BazaDanychSQL);
					MySqlCommand^ polecenie = SqlPolacz->CreateCommand();
					MySqlTransaction^ transakcja;
					SqlPolacz->Open();
					transakcja = SqlPolacz->BeginTransaction(IsolationLevel::ReadCommitted);
					polecenie->Connection = SqlPolacz;
					polecenie->Transaction = transakcja;

					try {
						polecenie->CommandText = "UPDATE Samochod SET Numer_rejestracyjny ='" + txtNrRejestracyjny->Text + "', Cena = '" + txtCena->Text + "' WHERE ID_Samochod = '" + id_rekordu + "'; ";
						polecenie->ExecuteNonQuery();
						transakcja->Commit(); //zatwierdzenie transakcji
						next_b = true; //Ustawiamy flagê na true co oznacza, ¿e zapis do bazy siê powiód³
					}
					catch (Exception^ komunikat) {
						MessageBox::Show(komunikat->Message);
						transakcja->Rollback(); //wycofaj wszelkie zmiany, zapisy itp.
					}
					SqlPolacz->Close();
				}
				if (next_b)
				{
					MySqlConnection^ SqlPolacz2 = gcnew MySqlConnection(BazaDanychSQL);
					MySqlCommand^ polecenie2 = SqlPolacz2->CreateCommand();
					MySqlTransaction^ transakcja2;
					SqlPolacz2->Open();
					transakcja2 = SqlPolacz2->BeginTransaction(IsolationLevel::ReadCommitted);
					polecenie2->Connection = SqlPolacz2;
					polecenie2->Transaction = transakcja2;

					try {
						polecenie2->CommandText = "UPDATE Specyfikacja SET Marka = '" + txtMarka->Text + "', Model = '" + txtModel->Text + "', Pojemnosc_silnika = '" + txtPojSilnika->Text + "', Rodzaj_silnika = '" + txtRodzajSilnika->Text + "', Moc = '" + txtMoc->Text + "', Rok_produkcji = '" + Convert::ToInt32(txtRokProdukcji->Text) + "', Przebieg = '" + Convert::ToInt32(txtPrzebieg->Text) + "', Ladownosc = '" + Convert::ToInt32(txtLadownosc->Text) + "', Liczba_drzwi = '" + Convert::ToInt32(txtLiczbaDrzwi->Text) + "', Klimatyzacja = '" + txtKlimatyzacja->Text + "', Kolor = '" + txtKolor->Text + "' WHERE ID_Specyfikacja = '" + id_rekordu + "' ;";
						polecenie2->ExecuteNonQuery();
						transakcja2->Commit(); //zatwierdzenie transakcji
						MessageBox::Show("Pomyœlnie uaktualniono dane samochodu!", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
					catch (Exception^ komunikat) {
						MessageBox::Show(komunikat->Message);
						transakcja2->Rollback(); //wycofaj wszelkie zmiany, zapisy itp.
					}
					SqlPolacz2->Close();
				}
				WyczyscPola(groupBoxDaneSamochodu);
				WyczyscPola(groupBoxCena);
			}
			else
			{
				MessageBox::Show("Proszê sprawdziæ czy wymagane pola zosta³y wype³nione prawid³owo!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
		}
		else
		{
			MessageBox::Show("Proszê zaznaczyæ rekord do zmodyfikowania!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		id_rekordu = 0; //reset
	}

	if (radioButtonUsun->Checked)
	{
		if (ID_U == 1) {
			if (id_rekordu) {
				if (MessageBox::Show("UWAGA! Próbujesz wykonaæ czynnoœæ niebezpieczn¹! Usuniêcie samochodu z bazy danych mo¿e spowodowaæ nieprawid³ow¹ pracê programu! CZY JESTEŒ PEWIEN, ¯E CHESZ TRWALE USUN¥Æ SAMOCHÓD "+txtMarka->Text+" "+txtModel->Text+" o numerze ID "+id_rekordu+"? ", "Usuwanie samochodu z bazy!", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
				{
					MySqlConnection^ SqlPolacz2 = gcnew MySqlConnection(BazaDanychSQL);
					MySqlCommand^ polecenie2 = SqlPolacz2->CreateCommand();
					MySqlTransaction^ transakcja2;

					if (next_a)
					{
						//Usuwamy dane z tabeli samochód
						SqlPolacz2->Open();
						transakcja2 = SqlPolacz2->BeginTransaction(IsolationLevel::ReadCommitted);
						polecenie2->Connection = SqlPolacz2;
						polecenie2->Transaction = transakcja2;

						try {
							polecenie2->CommandText = "DELETE FROM Samochod WHERE ID_Samochod = '" + id_rekordu + "';";
							polecenie2->ExecuteNonQuery();
							transakcja2->Commit(); //zatwierdzenie transakcji
							next_b = true;

						}
						catch (Exception^ komunikat) {
							MessageBox::Show(komunikat->Message);
							transakcja2->Rollback(); //wycofaj wszelkie zmiany, zapisy itp.
						}
						SqlPolacz2->Close();
					}
					if (next_b) {
						//Usuwamy dane z tabeli specyfikacja
						SqlPolacz2->Open();
						transakcja2 = SqlPolacz2->BeginTransaction(IsolationLevel::ReadCommitted);
						polecenie2->Connection = SqlPolacz2;
						polecenie2->Transaction = transakcja2;

						try {
							polecenie2->CommandText = "DELETE FROM Specyfikacja WHERE ID_Specyfikacja = '" + id_rekordu + "';";
							polecenie2->ExecuteNonQuery();
							transakcja2->Commit(); //zatwierdzenie transakcji
							MessageBox::Show("Pomyœlnie usuniêto samochód z bazy!", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);
						}
						catch (Exception^ komunikat) {
							MessageBox::Show(komunikat->Message);
							transakcja2->Rollback(); //wycofaj wszelkie zmiany, zapisy itp.
						}
						SqlPolacz2->Close();
					}
				}
			}
			else
			{
				MessageBox::Show("Proszê zaznaczyæ rekord do usuniêcia!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else
		{
			MessageBox::Show("T¹ operacjê mo¿e wykonaæ jedynie administrator aplikacji!", "Odmowa", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		id_rekordu = 0; //reset
	}

}

//Blokujemy wpisywanie wszystkich znaków poza liczbami
private: System::Void txtPojSilnika_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
{
	if (SprawdzToPole(e,true))
	{
		e->Handled = true;
	}
	else
	{
		e->Handled = false;
	}
}
private: System::Void txtMoc_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if (SprawdzToPole(e,true))
	{
		e->Handled = true;
	}
	else
	{
		e->Handled = false;
	}
}
private: System::Void txtRokProdukcji_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
{
	if (SprawdzToPole(e,false))
	{
		e->Handled = true;
	}
	else
	{
		e->Handled = false;
	}
}
private: System::Void txtPrzebieg_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
{
	if (SprawdzToPole(e,false))
	{
		e->Handled = true;
	}
	else
	{
		e->Handled = false;
	}
}
private: System::Void txtLadownosc_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
{
	if (SprawdzToPole(e, false))
	{
		e->Handled = true;
	}
	else
	{
		e->Handled = false;
	}
}
private: System::Void txtLiczbaDrzwi_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (SprawdzToPole(e, false))
	{
		e->Handled = true;
	}
	else
	{
		e->Handled = false;
	}
}
private: System::Void txtCena_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (SprawdzToPole(e, true))
	{
		e->Handled = true;
	}
	else
	{
		e->Handled = false;
	}
}

//Wprowadzanie danych do serwisu
private: System::Void btnSerwis_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Int32 day1;	  System::Int32 day2;
	System::Int32 month1; System::Int32 month2;
	System::Int32 year1;  System::Int32 year2;

	day1 = Convert::ToInt32(dateTimePickerStart->Value.Day.ToString());
	month1 = Convert::ToInt32(dateTimePickerStart->Value.Month.ToString());
	year1 = Convert::ToInt32(dateTimePickerStart->Value.Year.ToString());

	day2 = Convert::ToInt32(dateTimePickerStop->Value.Day.ToString());
	month2 = Convert::ToInt32(dateTimePickerStop->Value.Month.ToString());
	year2 = Convert::ToInt32(dateTimePickerStop->Value.Year.ToString());

	int data_1, data_2, hours;

	//Wynik uzyskamy w dniach
	data_1 = day1 + month1 * 100 + year1 * 10000;
	data_2 = day2 + month2 * 100 + year2 * 10000;

	//UWAGA - powinien pobraæ datê z pól texbox
	
	//Pobieramy datê rozpoczêcia naprawy
	txtDataStart->Text = dateTimePickerStart->Value.ToShortDateString();

	//Pobieramy datê zakoñczenia naprawy
	txtDataStop->Text = dateTimePickerStop->Value.ToShortDateString();

	if (id_rekordu)
	{
		if (radioButtonNowa->Checked)
		{
			if (SprawdzDaneDoSerwisu(data_1, data_2))
			{
				//Po uzyskanym ID tworzymy rekord
				MySqlConnection^ SqlPolacz2 = gcnew MySqlConnection(BazaDanychSQL);
				MySqlCommand^ polecenie2 = SqlPolacz2->CreateCommand();
				MySqlTransaction^ transakcja2;

				//Uaktualniamy informacje o u¿ytkowniku
				SqlPolacz2->Open();
				transakcja2 = SqlPolacz2->BeginTransaction(IsolationLevel::ReadCommitted);
				polecenie2->Connection = SqlPolacz2;
				polecenie2->Transaction = transakcja2;

				try {
					polecenie2->CommandText = "INSERT INTO Naprawa SET ID_Samochod ='" + id_rekordu + "', Data_rozpoczecia = '" + txtDataStart->Text + "', Data_zakonczenia = '" + txtDataStop->Text + "', Opis = '" + richTextBoxOpisUsterki->Text + "', CzyNaprawiony = '"+0+"';";
					polecenie2->ExecuteNonQuery();
					transakcja2->Commit(); //zatwierdzenie transakcji
					MessageBox::Show("Pomyœlnie wprowadzono usterkê dla samochodu "+txtMarka->Text+" "+txtModel->Text+" o numerze ID "+id_rekordu+" !","Sukces",MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				catch (Exception^ komunikat) {
					MessageBox::Show(komunikat->Message);
					transakcja2->Rollback(); //wycofaj wszelkie zmiany, zapisy itp.
				}
				SqlPolacz2->Close();
			}
			else
			{
				MessageBox::Show("Proszê sprawdziæ dane do serwisu!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		if (radioButtonUaktualnij->Checked)
		{
			if (id_naprawy) {
				if (SprawdzDaneDoSerwisu(data_1, data_2))
				{
					//Po uzyskanym ID tworzymy rekord
					MySqlConnection^ SqlPolacz2 = gcnew MySqlConnection(BazaDanychSQL);
					MySqlCommand^ polecenie2 = SqlPolacz2->CreateCommand();
					MySqlTransaction^ transakcja2;

					//Uaktualniamy informacje o u¿ytkowniku
					SqlPolacz2->Open();
					transakcja2 = SqlPolacz2->BeginTransaction(IsolationLevel::ReadCommitted);
					polecenie2->Connection = SqlPolacz2;
					polecenie2->Transaction = transakcja2;

					try {
						polecenie2->CommandText = "UPDATE Naprawa SET Data_rozpoczecia = '" + txtDataStart->Text + "', Data_zakonczenia = '" + txtDataStop->Text + "', Opis = '" + richTextBoxOpisUsterki->Text + "' WHERE ID_Naprawa = '" + id_naprawy + "';";
						polecenie2->ExecuteNonQuery();
						transakcja2->Commit(); //zatwierdzenie transakcji
						MessageBox::Show("Pomyœlnie zaktualizowano usterkê dla samochodu " + txtMarka->Text + " " + txtModel->Text + " o numerze ID " + id_rekordu + " !", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
					catch (Exception^ komunikat) {
						MessageBox::Show(komunikat->Message);
						transakcja2->Rollback(); //wycofaj wszelkie zmiany, zapisy itp.
					}
					SqlPolacz2->Close();
				}
				else
				{
					MessageBox::Show("Proszê sprawdziæ dane do serwisu!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else
			{
				MessageBox::Show("Proszê wybraæ rekord serwisu, którego dane maj¹ zostaæ zaktualizowane!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
			id_naprawy = 0;//reset
		}

		if (radioButtonUsunS->Checked)
		{
			if (ID_U == 1) {
				if (id_naprawy)
				{
					if (MessageBox::Show("Czy jesteœ pewnien, ¿e chcesz usun¹æ usterkê z bazy?", "Usuwanie usterki z bazy!", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
					{
						MySqlConnection^ SqlPolacz = gcnew MySqlConnection(BazaDanychSQL);
						MySqlCommand^ polecenie = SqlPolacz->CreateCommand();
						MySqlTransaction^ transakcja;

						SqlPolacz->Open();
						transakcja = SqlPolacz->BeginTransaction(IsolationLevel::ReadCommitted);
						polecenie->Connection = SqlPolacz;
						polecenie->Transaction = transakcja;

						try {
							polecenie->CommandText = "DELETE FROM Naprawa WHERE ID_Naprawa = '" + id_naprawy + "';";
							polecenie->ExecuteNonQuery();
							transakcja->Commit(); //zatwierdzenie transakcji
							MessageBox::Show("Pomyœlnie usuniêto usterkê z bazy!", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);
						}
						catch (Exception^ komunikat) {
							MessageBox::Show(komunikat->Message);
							transakcja->Rollback(); //wycofaj wszelkie zmiany, zapisy itp.
						}
						SqlPolacz->Close();
					}
				}
				else
				{
					MessageBox::Show("Proszê wybraæ usterkê, która ma zostaæ usuniêta z serwisu!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);

				}
			}
			else
			{
				MessageBox::Show("T¹ operacjê mo¿e wykonaæ jedynie administrator aplikacji!", "Odmowa", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
			id_naprawy = 0;//reset
		}
		if (radioButtonNaprawione->Checked)
		{
			MySqlConnection^ SqlPolacz2 = gcnew MySqlConnection(BazaDanychSQL);
			MySqlCommand^ polecenie2 = SqlPolacz2->CreateCommand();
			MySqlTransaction^ transakcja2;

			SqlPolacz2->Open();
			transakcja2 = SqlPolacz2->BeginTransaction(IsolationLevel::ReadCommitted);
			polecenie2->Connection = SqlPolacz2;
			polecenie2->Transaction = transakcja2;

			try {
				polecenie2->CommandText = "UPDATE Naprawa SET CzyNaprawiony = '"+1+"' WHERE ID_Naprawa = '" + id_naprawy + "';";
				polecenie2->ExecuteNonQuery();
				transakcja2->Commit(); //zatwierdzenie transakcji
				MessageBox::Show("Naprawiono usterkê dla samochodu " + txtMarka->Text + " " + txtModel->Text + " o numerze ID " + id_rekordu + " !", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception^ komunikat) {
				MessageBox::Show(komunikat->Message);
				transakcja2->Rollback(); //wycofaj wszelkie zmiany, zapisy itp.
			}
			SqlPolacz2->Close();
		}
	}
	else {
		MessageBox::Show("Proszê wybraæ samochód!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

//Zaznaczenie opcji dodaj samochod zablokuje formatkê z list¹ samochodow
private: System::Void radioButtonDodaj_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridViewSamochody->Enabled = false;
	
	BlokujOdblokuj(groupBoxDaneSamochodu, true);
	BlokujOdblokuj(groupBoxCena, true);
	
	WyczyscPola(groupBoxDaneSamochodu);
	WyczyscPola(groupBoxCena);
}
//Zaznaczenie opcji modyfikuj samochod odblokuje formatkê z list¹ samochodow
private: System::Void radioButtonModyfikuj_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridViewSamochody->Enabled = true;
	BlokujOdblokuj(groupBoxDaneSamochodu, true);
	BlokujOdblokuj(groupBoxCena, true);

	WyczyscPola(groupBoxDaneSamochodu);
	WyczyscPola(groupBoxCena);
}
//Zaznaczenie opcji usuñ samochod odblokuje formatkê z list¹ samochodow
private: System::Void radioButtonUsun_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridViewSamochody->Enabled = true;
	
	BlokujOdblokuj(groupBoxDaneSamochodu, false);
	BlokujOdblokuj(groupBoxCena, false);
}
//Zapisujemy datê pocz¹tku naprawy
private: System::Void dateTimePickerStart_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	txtDataStart->Text = dateTimePickerStart->Value.ToShortDateString();
}
//Zapisujemy datê koñca naprawy
private: System::Void dateTimePickerStop_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
{
	txtDataStop->Text = dateTimePickerStop->Value.ToShortDateString();
}
//Klikniêcie w dany rekord przypisze dane do odpowiednich pól serwisu
private: System::Void dataGridViewSerwis_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex >= 0) {
		id_naprawy = Convert::ToInt32(dataGridViewSerwis->Rows[e->RowIndex]->Cells["Numer naprawy"]->Value);
		txtDataStart->Text = dataGridViewSerwis->Rows[e->RowIndex]->Cells["Data rozpoczêcia"]->Value->ToString();
		txtDataStop->Text = dataGridViewSerwis->Rows[e->RowIndex]->Cells["Data zakoñczenia"]->Value->ToString();
		richTextBoxOpisUsterki->Text = dataGridViewSerwis->Rows[e->RowIndex]->Cells["Opis"]->Value->ToString();
	}
}
};

}
