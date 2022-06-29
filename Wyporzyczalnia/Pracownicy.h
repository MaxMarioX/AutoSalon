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
	/// Summary for Pracownicy
	/// </summary>
	public ref class Pracownicy : public System::Windows::Forms::Form
	{
	public: String^ BazaDanychSQL;
	public: int ID_U;
	private: System::Windows::Forms::GroupBox^  BoxListaPracownikow;
	private: System::Windows::Forms::DataGridView^  dataGridViewPracownicy;
	private: System::Windows::Forms::GroupBox^  BoxDanePracownika;

	private: System::Windows::Forms::TextBox^  txtPesel;
	private: System::Windows::Forms::TextBox^  txtNazwisko;
	private: System::Windows::Forms::TextBox^  txtImie;
	private: System::Windows::Forms::TextBox^  txtID;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::MaskedTextBox^  txtTelefon;
	private: System::Windows::Forms::TextBox^  txtMiasto;
	private: System::Windows::Forms::MaskedTextBox^  txtKodPocztowy;
	private: System::Windows::Forms::TextBox^  txtNrDomu;
	private: System::Windows::Forms::TextBox^  txtUlica;
	private: System::Windows::Forms::TextBox^  txtNrDowodu;
	private: System::Windows::Forms::DateTimePicker^  dateTimePickerOd;
	private: System::Windows::Forms::DateTimePicker^  dateTimePickerDo;
	private: System::Windows::Forms::CheckBox^  checkBoxKoniecUmowy;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::RichTextBox^  txtNotatkaOPracowniku;
	private: System::Windows::Forms::Button^  btnZatwierdz;
	private: System::Windows::Forms::RadioButton^  radioUsunPracownika;
	private: System::Windows::Forms::RadioButton^  radioModyfikujPracownika;
	private: System::Windows::Forms::RadioButton^  radioDodajPracownika;
	private: System::Windows::Forms::TextBox^  txtDataStop;
	private: System::Windows::Forms::TextBox^  txtDataStart;
	private: System::Windows::Forms::TextBox^  txtHaslo;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  txtLogin;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::GroupBox^  groupBoxWyjdz;
	public: int id_rekordu = 0;
	public:
		Pracownicy(int id_uzytkownik, String^ konfiguracja)
		{
			InitializeComponent();

			BazaDanychSQL = konfiguracja;
			ID_U = id_uzytkownik;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Pracownicy()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  BoxWyszukajPracownika;
	private: System::Windows::Forms::Button^  btnPokazWszystkich;
	private: System::Windows::Forms::Button^  btnSzukaj;
	private: System::Windows::Forms::TextBox^  txtSzukajP;
	private: System::Windows::Forms::Button^  btnWyjdz;
	private: System::ComponentModel::IContainer^  components;
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
			this->BoxWyszukajPracownika = (gcnew System::Windows::Forms::GroupBox());
			this->btnPokazWszystkich = (gcnew System::Windows::Forms::Button());
			this->btnSzukaj = (gcnew System::Windows::Forms::Button());
			this->txtSzukajP = (gcnew System::Windows::Forms::TextBox());
			this->btnWyjdz = (gcnew System::Windows::Forms::Button());
			this->BoxListaPracownikow = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridViewPracownicy = (gcnew System::Windows::Forms::DataGridView());
			this->BoxDanePracownika = (gcnew System::Windows::Forms::GroupBox());
			this->txtHaslo = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txtLogin = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtDataStop = (gcnew System::Windows::Forms::TextBox());
			this->txtDataStart = (gcnew System::Windows::Forms::TextBox());
			this->btnZatwierdz = (gcnew System::Windows::Forms::Button());
			this->radioUsunPracownika = (gcnew System::Windows::Forms::RadioButton());
			this->radioModyfikujPracownika = (gcnew System::Windows::Forms::RadioButton());
			this->radioDodajPracownika = (gcnew System::Windows::Forms::RadioButton());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtNotatkaOPracowniku = (gcnew System::Windows::Forms::RichTextBox());
			this->checkBoxKoniecUmowy = (gcnew System::Windows::Forms::CheckBox());
			this->dateTimePickerOd = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePickerDo = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtTelefon = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtMiasto = (gcnew System::Windows::Forms::TextBox());
			this->txtKodPocztowy = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtNrDomu = (gcnew System::Windows::Forms::TextBox());
			this->txtUlica = (gcnew System::Windows::Forms::TextBox());
			this->txtNrDowodu = (gcnew System::Windows::Forms::TextBox());
			this->txtPesel = (gcnew System::Windows::Forms::TextBox());
			this->txtNazwisko = (gcnew System::Windows::Forms::TextBox());
			this->txtImie = (gcnew System::Windows::Forms::TextBox());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBoxWyjdz = (gcnew System::Windows::Forms::GroupBox());
			this->BoxWyszukajPracownika->SuspendLayout();
			this->BoxListaPracownikow->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPracownicy))->BeginInit();
			this->BoxDanePracownika->SuspendLayout();
			this->groupBoxWyjdz->SuspendLayout();
			this->SuspendLayout();
			// 
			// BoxWyszukajPracownika
			// 
			this->BoxWyszukajPracownika->Controls->Add(this->btnPokazWszystkich);
			this->BoxWyszukajPracownika->Controls->Add(this->btnSzukaj);
			this->BoxWyszukajPracownika->Controls->Add(this->txtSzukajP);
			this->BoxWyszukajPracownika->Location = System::Drawing::Point(12, 8);
			this->BoxWyszukajPracownika->Name = L"BoxWyszukajPracownika";
			this->BoxWyszukajPracownika->Size = System::Drawing::Size(497, 46);
			this->BoxWyszukajPracownika->TabIndex = 12;
			this->BoxWyszukajPracownika->TabStop = false;
			this->BoxWyszukajPracownika->Text = L"Wyszukaj pracownika";
			// 
			// btnPokazWszystkich
			// 
			this->btnPokazWszystkich->Location = System::Drawing::Point(407, 19);
			this->btnPokazWszystkich->Name = L"btnPokazWszystkich";
			this->btnPokazWszystkich->Size = System::Drawing::Size(75, 23);
			this->btnPokazWszystkich->TabIndex = 10;
			this->btnPokazWszystkich->Text = L"Odœwie¿";
			this->btnPokazWszystkich->UseVisualStyleBackColor = true;
			this->btnPokazWszystkich->Click += gcnew System::EventHandler(this, &Pracownicy::btnPokazWszystkich_Click);
			// 
			// btnSzukaj
			// 
			this->btnSzukaj->Location = System::Drawing::Point(326, 18);
			this->btnSzukaj->Name = L"btnSzukaj";
			this->btnSzukaj->Size = System::Drawing::Size(75, 23);
			this->btnSzukaj->TabIndex = 9;
			this->btnSzukaj->Text = L"ZnajdŸ";
			this->btnSzukaj->UseVisualStyleBackColor = true;
			this->btnSzukaj->Click += gcnew System::EventHandler(this, &Pracownicy::btnSzukaj_Click);
			// 
			// txtSzukajP
			// 
			this->txtSzukajP->Location = System::Drawing::Point(9, 19);
			this->txtSzukajP->Name = L"txtSzukajP";
			this->txtSzukajP->Size = System::Drawing::Size(311, 20);
			this->txtSzukajP->TabIndex = 8;
			this->txtSzukajP->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Pracownicy::txtSzukajP_KeyPress);
			// 
			// btnWyjdz
			// 
			this->btnWyjdz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnWyjdz->ForeColor = System::Drawing::Color::Black;
			this->btnWyjdz->Location = System::Drawing::Point(53, 18);
			this->btnWyjdz->Name = L"btnWyjdz";
			this->btnWyjdz->Size = System::Drawing::Size(75, 23);
			this->btnWyjdz->TabIndex = 11;
			this->btnWyjdz->Text = L"WyjdŸ";
			this->btnWyjdz->UseVisualStyleBackColor = true;
			this->btnWyjdz->Click += gcnew System::EventHandler(this, &Pracownicy::btnWyjdz_Click);
			// 
			// BoxListaPracownikow
			// 
			this->BoxListaPracownikow->Controls->Add(this->dataGridViewPracownicy);
			this->BoxListaPracownikow->Location = System::Drawing::Point(12, 56);
			this->BoxListaPracownikow->Name = L"BoxListaPracownikow";
			this->BoxListaPracownikow->Size = System::Drawing::Size(691, 187);
			this->BoxListaPracownikow->TabIndex = 13;
			this->BoxListaPracownikow->TabStop = false;
			this->BoxListaPracownikow->Text = L"Spis pracowników";
			// 
			// dataGridViewPracownicy
			// 
			this->dataGridViewPracownicy->AllowUserToAddRows = false;
			this->dataGridViewPracownicy->AllowUserToDeleteRows = false;
			this->dataGridViewPracownicy->AllowUserToOrderColumns = true;
			this->dataGridViewPracownicy->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewPracownicy->Location = System::Drawing::Point(9, 15);
			this->dataGridViewPracownicy->Name = L"dataGridViewPracownicy";
			this->dataGridViewPracownicy->ReadOnly = true;
			this->dataGridViewPracownicy->Size = System::Drawing::Size(679, 166);
			this->dataGridViewPracownicy->TabIndex = 3;
			this->dataGridViewPracownicy->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Pracownicy::dataGridViewPracownicy_CellClick);
			// 
			// BoxDanePracownika
			// 
			this->BoxDanePracownika->Controls->Add(this->txtHaslo);
			this->BoxDanePracownika->Controls->Add(this->label15);
			this->BoxDanePracownika->Controls->Add(this->txtLogin);
			this->BoxDanePracownika->Controls->Add(this->label14);
			this->BoxDanePracownika->Controls->Add(this->txtDataStop);
			this->BoxDanePracownika->Controls->Add(this->txtDataStart);
			this->BoxDanePracownika->Controls->Add(this->btnZatwierdz);
			this->BoxDanePracownika->Controls->Add(this->radioUsunPracownika);
			this->BoxDanePracownika->Controls->Add(this->radioModyfikujPracownika);
			this->BoxDanePracownika->Controls->Add(this->radioDodajPracownika);
			this->BoxDanePracownika->Controls->Add(this->label13);
			this->BoxDanePracownika->Controls->Add(this->txtNotatkaOPracowniku);
			this->BoxDanePracownika->Controls->Add(this->checkBoxKoniecUmowy);
			this->BoxDanePracownika->Controls->Add(this->dateTimePickerOd);
			this->BoxDanePracownika->Controls->Add(this->dateTimePickerDo);
			this->BoxDanePracownika->Controls->Add(this->txtTelefon);
			this->BoxDanePracownika->Controls->Add(this->txtMiasto);
			this->BoxDanePracownika->Controls->Add(this->txtKodPocztowy);
			this->BoxDanePracownika->Controls->Add(this->txtNrDomu);
			this->BoxDanePracownika->Controls->Add(this->txtUlica);
			this->BoxDanePracownika->Controls->Add(this->txtNrDowodu);
			this->BoxDanePracownika->Controls->Add(this->txtPesel);
			this->BoxDanePracownika->Controls->Add(this->txtNazwisko);
			this->BoxDanePracownika->Controls->Add(this->txtImie);
			this->BoxDanePracownika->Controls->Add(this->txtID);
			this->BoxDanePracownika->Controls->Add(this->label12);
			this->BoxDanePracownika->Controls->Add(this->label11);
			this->BoxDanePracownika->Controls->Add(this->label10);
			this->BoxDanePracownika->Controls->Add(this->label9);
			this->BoxDanePracownika->Controls->Add(this->label8);
			this->BoxDanePracownika->Controls->Add(this->label7);
			this->BoxDanePracownika->Controls->Add(this->label6);
			this->BoxDanePracownika->Controls->Add(this->label5);
			this->BoxDanePracownika->Controls->Add(this->label4);
			this->BoxDanePracownika->Controls->Add(this->label3);
			this->BoxDanePracownika->Controls->Add(this->label2);
			this->BoxDanePracownika->Controls->Add(this->label1);
			this->BoxDanePracownika->Location = System::Drawing::Point(12, 249);
			this->BoxDanePracownika->Name = L"BoxDanePracownika";
			this->BoxDanePracownika->Size = System::Drawing::Size(691, 216);
			this->BoxDanePracownika->TabIndex = 14;
			this->BoxDanePracownika->TabStop = false;
			this->BoxDanePracownika->Text = L"Informacje o pracowniku firmy";
			// 
			// txtHaslo
			// 
			this->txtHaslo->Location = System::Drawing::Point(483, 56);
			this->txtHaslo->Name = L"txtHaslo";
			this->txtHaslo->PasswordChar = '*';
			this->txtHaslo->Size = System::Drawing::Size(202, 20);
			this->txtHaslo->TabIndex = 47;
			this->txtHaslo->UseSystemPasswordChar = true;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label15->Location = System::Drawing::Point(432, 59);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(44, 13);
			this->label15->TabIndex = 46;
			this->label15->Text = L"HAS£O";
			// 
			// txtLogin
			// 
			this->txtLogin->Location = System::Drawing::Point(483, 23);
			this->txtLogin->Name = L"txtLogin";
			this->txtLogin->Size = System::Drawing::Size(202, 20);
			this->txtLogin->TabIndex = 45;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label14->Location = System::Drawing::Point(432, 26);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(40, 13);
			this->label14->TabIndex = 44;
			this->label14->Text = L"LOGIN";
			// 
			// txtDataStop
			// 
			this->txtDataStop->Enabled = false;
			this->txtDataStop->Location = System::Drawing::Point(331, 181);
			this->txtDataStop->Name = L"txtDataStop";
			this->txtDataStop->ReadOnly = true;
			this->txtDataStop->Size = System::Drawing::Size(70, 20);
			this->txtDataStop->TabIndex = 43;
			// 
			// txtDataStart
			// 
			this->txtDataStart->Location = System::Drawing::Point(331, 152);
			this->txtDataStart->Name = L"txtDataStart";
			this->txtDataStart->ReadOnly = true;
			this->txtDataStart->Size = System::Drawing::Size(95, 20);
			this->txtDataStart->TabIndex = 42;
			// 
			// btnZatwierdz
			// 
			this->btnZatwierdz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnZatwierdz->Location = System::Drawing::Point(614, 190);
			this->btnZatwierdz->Name = L"btnZatwierdz";
			this->btnZatwierdz->Size = System::Drawing::Size(75, 23);
			this->btnZatwierdz->TabIndex = 41;
			this->btnZatwierdz->Text = L"ZatwierdŸ";
			this->btnZatwierdz->UseVisualStyleBackColor = true;
			this->btnZatwierdz->Click += gcnew System::EventHandler(this, &Pracownicy::btnZatwierdz_Click);
			// 
			// radioUsunPracownika
			// 
			this->radioUsunPracownika->AutoSize = true;
			this->radioUsunPracownika->ForeColor = System::Drawing::Color::Red;
			this->radioUsunPracownika->Location = System::Drawing::Point(568, 193);
			this->radioUsunPracownika->Name = L"radioUsunPracownika";
			this->radioUsunPracownika->Size = System::Drawing::Size(50, 17);
			this->radioUsunPracownika->TabIndex = 40;
			this->radioUsunPracownika->Text = L"Usuñ";
			this->radioUsunPracownika->UseVisualStyleBackColor = true;
			this->radioUsunPracownika->Visible = false;
			this->radioUsunPracownika->Click += gcnew System::EventHandler(this, &Pracownicy::radioUsunPracownika_Click);
			// 
			// radioModyfikujPracownika
			// 
			this->radioModyfikujPracownika->AutoSize = true;
			this->radioModyfikujPracownika->Checked = true;
			this->radioModyfikujPracownika->ForeColor = System::Drawing::Color::Orange;
			this->radioModyfikujPracownika->Location = System::Drawing::Point(492, 193);
			this->radioModyfikujPracownika->Name = L"radioModyfikujPracownika";
			this->radioModyfikujPracownika->Size = System::Drawing::Size(70, 17);
			this->radioModyfikujPracownika->TabIndex = 39;
			this->radioModyfikujPracownika->TabStop = true;
			this->radioModyfikujPracownika->Text = L"Modyfikuj";
			this->radioModyfikujPracownika->UseVisualStyleBackColor = true;
			this->radioModyfikujPracownika->Click += gcnew System::EventHandler(this, &Pracownicy::radioModyfikujPracownika_Click);
			// 
			// radioDodajPracownika
			// 
			this->radioDodajPracownika->AutoSize = true;
			this->radioDodajPracownika->ForeColor = System::Drawing::Color::Green;
			this->radioDodajPracownika->Location = System::Drawing::Point(433, 193);
			this->radioDodajPracownika->Name = L"radioDodajPracownika";
			this->radioDodajPracownika->Size = System::Drawing::Size(53, 17);
			this->radioDodajPracownika->TabIndex = 38;
			this->radioDodajPracownika->Text = L"Dodaj";
			this->radioDodajPracownika->UseVisualStyleBackColor = true;
			this->radioDodajPracownika->Click += gcnew System::EventHandler(this, &Pracownicy::radioDodajPracownika_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(430, 85);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(115, 13);
			this->label13->TabIndex = 37;
			this->label13->Text = L"Notatka o pracowniku:";
			// 
			// txtNotatkaOPracowniku
			// 
			this->txtNotatkaOPracowniku->Location = System::Drawing::Point(433, 101);
			this->txtNotatkaOPracowniku->Name = L"txtNotatkaOPracowniku";
			this->txtNotatkaOPracowniku->Size = System::Drawing::Size(252, 83);
			this->txtNotatkaOPracowniku->TabIndex = 36;
			this->txtNotatkaOPracowniku->Text = L"";
			// 
			// checkBoxKoniecUmowy
			// 
			this->checkBoxKoniecUmowy->AutoSize = true;
			this->checkBoxKoniecUmowy->Location = System::Drawing::Point(407, 184);
			this->checkBoxKoniecUmowy->Name = L"checkBoxKoniecUmowy";
			this->checkBoxKoniecUmowy->Size = System::Drawing::Size(15, 14);
			this->checkBoxKoniecUmowy->TabIndex = 35;
			this->checkBoxKoniecUmowy->UseVisualStyleBackColor = true;
			this->checkBoxKoniecUmowy->CheckedChanged += gcnew System::EventHandler(this, &Pracownicy::checkBoxKoniecUmowy_CheckedChanged);
			// 
			// dateTimePickerOd
			// 
			this->dateTimePickerOd->Location = System::Drawing::Point(312, 152);
			this->dateTimePickerOd->Name = L"dateTimePickerOd";
			this->dateTimePickerOd->Size = System::Drawing::Size(13, 20);
			this->dateTimePickerOd->TabIndex = 34;
			this->dateTimePickerOd->ValueChanged += gcnew System::EventHandler(this, &Pracownicy::dateTimePicker2_ValueChanged);
			// 
			// dateTimePickerDo
			// 
			this->dateTimePickerDo->Enabled = false;
			this->dateTimePickerDo->Location = System::Drawing::Point(312, 181);
			this->dateTimePickerDo->Name = L"dateTimePickerDo";
			this->dateTimePickerDo->Size = System::Drawing::Size(13, 20);
			this->dateTimePickerDo->TabIndex = 33;
			this->dateTimePickerDo->ValueChanged += gcnew System::EventHandler(this, &Pracownicy::dateTimePickerDo_ValueChanged);
			// 
			// txtTelefon
			// 
			this->txtTelefon->Location = System::Drawing::Point(312, 121);
			this->txtTelefon->Mask = L"000-000-000";
			this->txtTelefon->Name = L"txtTelefon";
			this->txtTelefon->Size = System::Drawing::Size(114, 20);
			this->txtTelefon->TabIndex = 32;
			this->txtTelefon->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			// 
			// txtMiasto
			// 
			this->txtMiasto->Location = System::Drawing::Point(312, 89);
			this->txtMiasto->Name = L"txtMiasto";
			this->txtMiasto->Size = System::Drawing::Size(114, 20);
			this->txtMiasto->TabIndex = 31;
			// 
			// txtKodPocztowy
			// 
			this->txtKodPocztowy->Location = System::Drawing::Point(312, 56);
			this->txtKodPocztowy->Mask = L"00-000";
			this->txtKodPocztowy->Name = L"txtKodPocztowy";
			this->txtKodPocztowy->Size = System::Drawing::Size(114, 20);
			this->txtKodPocztowy->TabIndex = 30;
			this->txtKodPocztowy->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			// 
			// txtNrDomu
			// 
			this->txtNrDomu->Location = System::Drawing::Point(312, 23);
			this->txtNrDomu->Name = L"txtNrDomu";
			this->txtNrDomu->Size = System::Drawing::Size(114, 20);
			this->txtNrDomu->TabIndex = 29;
			// 
			// txtUlica
			// 
			this->txtUlica->Location = System::Drawing::Point(81, 181);
			this->txtUlica->Name = L"txtUlica";
			this->txtUlica->Size = System::Drawing::Size(116, 20);
			this->txtUlica->TabIndex = 28;
			// 
			// txtNrDowodu
			// 
			this->txtNrDowodu->Location = System::Drawing::Point(81, 152);
			this->txtNrDowodu->Name = L"txtNrDowodu";
			this->txtNrDowodu->Size = System::Drawing::Size(116, 20);
			this->txtNrDowodu->TabIndex = 27;
			// 
			// txtPesel
			// 
			this->txtPesel->Location = System::Drawing::Point(81, 121);
			this->txtPesel->Name = L"txtPesel";
			this->txtPesel->Size = System::Drawing::Size(116, 20);
			this->txtPesel->TabIndex = 26;
			// 
			// txtNazwisko
			// 
			this->txtNazwisko->Location = System::Drawing::Point(81, 89);
			this->txtNazwisko->Name = L"txtNazwisko";
			this->txtNazwisko->Size = System::Drawing::Size(116, 20);
			this->txtNazwisko->TabIndex = 25;
			// 
			// txtImie
			// 
			this->txtImie->Location = System::Drawing::Point(81, 59);
			this->txtImie->Name = L"txtImie";
			this->txtImie->Size = System::Drawing::Size(116, 20);
			this->txtImie->TabIndex = 24;
			// 
			// txtID
			// 
			this->txtID->Enabled = false;
			this->txtID->Location = System::Drawing::Point(81, 26);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(116, 20);
			this->txtID->TabIndex = 23;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(220, 184);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(50, 13);
			this->label12->TabIndex = 22;
			this->label12->Text = L"Praca do";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(220, 152);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(50, 13);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Praca od";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(8, 152);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 13);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Nr dowodu";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 121);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(41, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"PESEL";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->Location = System::Drawing::Point(220, 121);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 13);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Telefon";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(220, 89);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Miasto";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(220, 59);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Kod pocztowy";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(220, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Numer domu";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(8, 184);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Ulica";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(6, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nazwisko";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(6, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Imiê";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(6, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID";
			// 
			// groupBoxWyjdz
			// 
			this->groupBoxWyjdz->Controls->Add(this->btnWyjdz);
			this->groupBoxWyjdz->Location = System::Drawing::Point(515, 8);
			this->groupBoxWyjdz->Name = L"groupBoxWyjdz";
			this->groupBoxWyjdz->Size = System::Drawing::Size(188, 46);
			this->groupBoxWyjdz->TabIndex = 15;
			this->groupBoxWyjdz->TabStop = false;
			this->groupBoxWyjdz->Text = L"Opuœæ to okno";
			// 
			// Pracownicy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(715, 475);
			this->ControlBox = false;
			this->Controls->Add(this->groupBoxWyjdz);
			this->Controls->Add(this->BoxDanePracownika);
			this->Controls->Add(this->BoxListaPracownikow);
			this->Controls->Add(this->BoxWyszukajPracownika);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Pracownicy";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pracownicy";
			this->BoxWyszukajPracownika->ResumeLayout(false);
			this->BoxWyszukajPracownika->PerformLayout();
			this->BoxListaPracownikow->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPracownicy))->EndInit();
			this->BoxDanePracownika->ResumeLayout(false);
			this->BoxDanePracownika->PerformLayout();
			this->groupBoxWyjdz->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
//Opóœæ okno
private: System::Void btnWyjdz_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
//Operacje na pracownikach firmy
private: System::Void btnZatwierdz_Click(System::Object^  sender, System::EventArgs^  e) {
	bool PracownikKontynuuj;
	bool UsunDaneDoLogowania = false;
	bool CzyPoprawnieUsunieto = true;
	
	if (radioDodajPracownika->Checked)
	{
		if (SprawdzDanePracownika())
		{
			MySqlConnection^ SqlPolacz = gcnew MySqlConnection(BazaDanychSQL);
			MySqlCommand^ Polecenie = SqlPolacz->CreateCommand();
			MySqlTransaction^ Transakcja;
			SqlPolacz->Open();
			Transakcja = SqlPolacz->BeginTransaction(IsolationLevel::ReadCommitted);
			Polecenie->Connection = SqlPolacz;
			Polecenie->Transaction = Transakcja;

			try {
				Polecenie->CommandText = "INSERT INTO PRACOWNIK SET Login ='" + txtLogin->Text + "', Haslo = '" + txtHaslo->Text + "';";
				Polecenie->ExecuteNonQuery();
				Transakcja->Commit();
				PracownikKontynuuj = true; //Ustawiamy flagê na true co oznacza, ¿e zapis do bazy siê powiód³
			}
			catch (Exception^ Komunikat) {
				MessageBox::Show(Komunikat->Message);
				Transakcja->Rollback();
				PracownikKontynuuj = false;
			}
			SqlPolacz->Close();
			if (PracownikKontynuuj)
			{
				//Pozyskujemy informacje o utworzonym ID pracownika abyœmy mogli go przypisaæ do rekordu z informacjami 
				MySqlConnection^ SqlPolaczID = gcnew MySqlConnection(BazaDanychSQL);
				MySqlCommand^ zapytanieID = gcnew MySqlCommand("select ID_Pracownik from PRACOWNIK where Login = '" + txtLogin->Text + "';", SqlPolaczID);
				MySqlDataReader^ odczytajID;
				try {
					SqlPolaczID->Open();
					odczytajID = zapytanieID->ExecuteReader();
					if (odczytajID->Read())
					{
						id_rekordu = odczytajID->GetInt32(0);
					}
					else
					{
						MessageBox::Show("Wyst¹pi³ b³¹d krytyczny!","B³¹d",MessageBoxButtons::OK,MessageBoxIcon::Error);
					}
				}
				catch (Exception^ komunikat) {
					MessageBox::Show(komunikat->Message);
				}
				SqlPolaczID->Close();

				//Po uzyskanym ID tworzymy rekord
				MySqlConnection^ SqlPolacz2 = gcnew MySqlConnection(BazaDanychSQL);
				MySqlCommand^ polecenie2 = SqlPolacz2->CreateCommand();
				MySqlTransaction^ transakcja2;
				SqlPolacz2->Open();
				transakcja2 = SqlPolacz2->BeginTransaction(IsolationLevel::ReadCommitted);
				polecenie2->Connection = SqlPolacz2;
				polecenie2->Transaction = transakcja2;

				try {

					polecenie2->CommandText = "INSERT INTO Informacja SET ID_Informacja = '"+id_rekordu+"', Imie ='" + txtImie->Text + "', Nazwisko = '" + txtNazwisko->Text + "', Ulica = '" + txtUlica->Text + "', Numer_domu = '" + txtNrDomu->Text + "', Kod_pocztowy = '" + txtKodPocztowy->Text + "', Miasto = '" + txtMiasto->Text + "', Rozpoczecie_umowy = '" + txtDataStart->Text + "', Zakonczenie_umowy = '" + txtDataStop->Text + "', Telefon = '" + txtTelefon->Text + "', Pesel = '" + txtPesel->Text + "', NrDowodu = '" + txtNrDowodu->Text + "', Notatka = '" + txtNotatkaOPracowniku->Text + "';";
					polecenie2->ExecuteNonQuery();
					transakcja2->Commit(); //zatwierdzenie transakcji
					MessageBox::Show("Pomyœlnie dodano nowego pracownika!", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				catch (Exception^ komunikat) {
					UsunDaneDoLogowania = true;
					MessageBox::Show(komunikat->Message);
					transakcja2->Rollback(); //wycofaj wszelkie zmiany, zapisy itp.
				}
				SqlPolacz2->Close();
			}
			//Jeœli nie uda siê zapisaæ informacji trzeba usun¹æ dane o logowaniu
			if(UsunDaneDoLogowania)
			{
				MySqlConnection^ SqlPolacz2 = gcnew MySqlConnection(BazaDanychSQL);
				MySqlCommand^ polecenie2 = SqlPolacz2->CreateCommand();
				MySqlTransaction^ transakcja2;

				//Usuwamy dane do logowania
				SqlPolacz2->Open();
				transakcja2 = SqlPolacz2->BeginTransaction(IsolationLevel::ReadCommitted);
				polecenie2->Connection = SqlPolacz2;
				polecenie2->Transaction = transakcja2;

				try {

					polecenie2->CommandText = "DELETE FROM PRACOWNIK WHERE ID_Pracownik = '" + id_rekordu + "';";
					polecenie2->ExecuteNonQuery();
					transakcja2->Commit(); //zatwierdzenie transakcji
				}
				catch (Exception^ komunikat) {
					MessageBox::Show(komunikat->Message);
					transakcja2->Rollback(); //wycofaj wszelkie zmiany, zapisy itp.
				}
				SqlPolacz2->Close();
			}
			WyczyscPola(BoxDanePracownika);
		}
		else
		{
			MessageBox::Show("Proszê sprawdziæ czy wymagane pola zosta³y wype³nione prawid³owo!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		id_rekordu = 0;
	}
	if (radioModyfikujPracownika->Checked)
	{
		if (id_rekordu) {
			if (SprawdzDanePracownika())
			{
				MySqlConnection^ SqlPolacz = gcnew MySqlConnection(BazaDanychSQL);
				MySqlCommand^ Polecenie = SqlPolacz->CreateCommand();
				MySqlTransaction^ Transakcja;
				SqlPolacz->Open();
				Transakcja = SqlPolacz->BeginTransaction(IsolationLevel::ReadCommitted);
				Polecenie->Connection = SqlPolacz;
				Polecenie->Transaction = Transakcja;

				try {
					Polecenie->CommandText = "UPDATE PRACOWNIK SET Login ='" + txtLogin->Text + "', Haslo = '" + txtHaslo->Text + "' WHERE ID_Pracownik = '" + id_rekordu + "';";
					Polecenie->ExecuteNonQuery();
					Transakcja->Commit();
					PracownikKontynuuj = true; //Ustawiamy flagê na true co oznacza, ¿e zapis do bazy siê powiód³
				}
				catch (Exception^ Komunikat) {
					MessageBox::Show(Komunikat->Message);
					Transakcja->Rollback();
					PracownikKontynuuj = false;
				}
				SqlPolacz->Close();
				if (PracownikKontynuuj)
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

						polecenie2->CommandText = "UPDATE Informacja SET Imie ='" + txtImie->Text + "', Nazwisko = '" + txtNazwisko->Text + "', Ulica = '" + txtUlica->Text + "', Numer_domu = '" + txtNrDomu->Text + "', Kod_pocztowy = '" + txtKodPocztowy->Text + "', Miasto = '" + txtMiasto->Text + "', Rozpoczecie_umowy = '" + txtDataStart->Text + "', Zakonczenie_umowy = '" + txtDataStop->Text + "', Telefon = '" + txtTelefon->Text + "', Pesel = '" + txtPesel->Text + "', NrDowodu = '" + txtNrDowodu->Text + "', Notatka = '" + txtNotatkaOPracowniku->Text + "' WHERE ID_Informacja = '" + id_rekordu + "';";
						polecenie2->ExecuteNonQuery();
						transakcja2->Commit(); //zatwierdzenie transakcji
						MessageBox::Show("Pomyœlnie zaktualizowano dane pracownika!", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
					catch (Exception^ komunikat) {
						MessageBox::Show(komunikat->Message);
						transakcja2->Rollback(); //wycofaj wszelkie zmiany, zapisy itp.
					}
					SqlPolacz2->Close();
				}
				WyczyscPola(BoxDanePracownika);
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
		id_rekordu = 0;
	}
	if (radioUsunPracownika->Checked)
	{
		if (id_rekordu) {
			if (MessageBox::Show("UWAGA! Próbujesz wykonaæ czynnoœæ niebezpieczn¹! Usuniêcie pracownika z bazy danych mo¿e spowodowaæ nieprawid³ow¹ pracê programu! CZY JESTEŒ PEWIEN, ¯E CHESZ TRWALE USUN¥Æ PRACOWNIKA " + txtImie->Text + " " + txtNazwisko->Text + " o numerze ID " + id_rekordu + " ?", "Usuwanie pracownika z bazy!", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
			{
				MySqlConnection^ SqlPolacz2 = gcnew MySqlConnection(BazaDanychSQL);
				MySqlCommand^ polecenie2 = SqlPolacz2->CreateCommand();
				MySqlTransaction^ transakcja2;

				//Usuwamy dane do logowania
				SqlPolacz2->Open();
				transakcja2 = SqlPolacz2->BeginTransaction(IsolationLevel::ReadCommitted);
				polecenie2->Connection = SqlPolacz2;
				polecenie2->Transaction = transakcja2;

				try {

					polecenie2->CommandText = "DELETE FROM PRACOWNIK WHERE ID_Pracownik = '" + id_rekordu + "';";
					polecenie2->ExecuteNonQuery();
					transakcja2->Commit(); //zatwierdzenie transakcji

				}
				catch (Exception^ komunikat) {
					CzyPoprawnieUsunieto = false;
					MessageBox::Show(komunikat->Message);
					transakcja2->Rollback(); //wycofaj wszelkie zmiany, zapisy itp.
				}
				SqlPolacz2->Close();

				//Usuwamy informacje o u¿ytkowniku
				SqlPolacz2->Open();
				transakcja2 = SqlPolacz2->BeginTransaction(IsolationLevel::ReadCommitted);
				polecenie2->Connection = SqlPolacz2;
				polecenie2->Transaction = transakcja2;

				try {
					polecenie2->CommandText = "DELETE FROM INFORMACJA WHERE ID_Informacja = '" + id_rekordu + "';";
					polecenie2->ExecuteNonQuery();
					transakcja2->Commit(); //zatwierdzenie transakcji
				}
				catch (Exception^ komunikat) {
					CzyPoprawnieUsunieto = false;
					MessageBox::Show(komunikat->Message);
					transakcja2->Rollback(); //wycofaj wszelkie zmiany, zapisy itp.
				}
				SqlPolacz2->Close();
				if (CzyPoprawnieUsunieto)
				{
					MessageBox::Show("Pomyœlnie usuniêto pracownika z bazy!", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);
					WyczyscPola(BoxDanePracownika);
				}
			}
		}
		else
		{
			MessageBox::Show("Proszê zaznaczyæ rekord do usuniêcia!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		id_rekordu = 0;
	}
}
//Funkcja pomocnicza odœwie¿aj¹ca dane
private: void Odswiez()
{

}
//Funkcja pomocnicza sprawdza poprawnoœæ wype³nionych pól
private : bool SprawdzDanePracownika(void)
{
	bool imie = false, nazwisko = false, ulica = false, nrdomu = false, kodpocztowy = false, miasto = false, telefon = false, notka = false, pesel = false, dowod = false, umowastart = false, umowastop = false, login = false, haslo = false;
	bool final = false;

	//Sprawdzamy czy d³ugoœæ pól jest odpowiednia
	if (((txtImie->Text->Length < 3) || (txtImie->Text->Length == 0)) || (txtImie->Text->Length > 45))
	{
		txtImie->BackColor = BackColor.Red;
	}
	else
	{
		imie = true;
	}
	if (((txtNazwisko->Text->Length < 3) || (txtNazwisko->Text->Length == 0)) || (txtNazwisko->Text->Length > 45))
	{
		txtNazwisko->BackColor = BackColor.Red;
	}
	else
	{
		nazwisko = true;
	}
	if ((txtUlica->Text->Length > 45) || (txtUlica->Text->Length == 0))
	{
		txtUlica->BackColor = BackColor.Red;
	}
	else
	{
		ulica = true;
	}
	if ((txtNrDomu->Text->Length > 10) || (txtNrDomu->Text->Length == 0))
	{
		txtNrDomu->BackColor = BackColor.Red;
	}
	else
	{
		nrdomu = true;
	}
	if ((txtKodPocztowy->Text->Length > 6) || (txtKodPocztowy->Text->Length == 0))
	{
		txtKodPocztowy->BackColor = BackColor.Red;
	}
	else
	{
		kodpocztowy = true;
	}
	if ((txtMiasto->Text->Length > 45) || (txtMiasto->Text->Length == 0))
	{
		txtMiasto->BackColor = BackColor.Red;
	}
	else
	{
		miasto = true;
	}
	if ((txtTelefon->Text->Length > 12) || (txtTelefon->Text->Length == 0))
	{
		txtTelefon->BackColor = BackColor.Red;
	}
	else
	{
		telefon = true;
	}
	if (txtNotatkaOPracowniku->Text->Length > 100)
	{
		txtNotatkaOPracowniku->BackColor = BackColor.Red;
	}
	else
	{
		notka = true;
	}
	if ((txtPesel->Text->Length > 12) || (txtPesel->Text->Length == 0))
	{
		txtPesel->BackColor = BackColor.Red;
	}
	else
	{
		pesel = true;
	}
	if ((txtNrDowodu->Text->Length > 10) || (txtNrDowodu->Text->Length == 0))
	{
		txtNrDowodu->BackColor = BackColor.Red;
	}
	else
	{
		dowod = true;
	}
	if (txtDataStart->Text->Length == 0)
	{
		txtDataStart->BackColor = BackColor.Red;
	}
	else
	{
		umowastart = true;
	}
	if (checkBoxKoniecUmowy->Checked) {
		if (txtDataStop->Text->Length == 0)
		{
			txtDataStop->BackColor = BackColor.Red;
		}
		else
		{
			umowastop = true;
		}
	}
	else
	{
		umowastop = true;
	}
	if ((txtLogin->Text->Length > 45) || (txtLogin->Text->Length < 3) || (txtLogin->Text->Length == 0))
	{
		txtLogin->BackColor = BackColor.Red;
	}
	else
	{
		login = true;
	}
	if ((txtHaslo->Text->Length > 45) || (txtHaslo->Text->Length < 3) || (txtHaslo->Text->Length == 0))
	{
		txtHaslo->BackColor = BackColor.Red;
	}
	else
	{
		haslo = true;
	}
	if (imie == true && nazwisko == true && ulica == true && nrdomu == true && kodpocztowy == true && miasto == true && telefon == true && notka == true && pesel == true && dowod == true && umowastart == true && umowastop == true && login == true && haslo == true) {
		final = true;
	}
	return final;
}
//Funkcja pomocnicza wyczyszcza pola
private: void WyczyscPola(Control^ e)
{
	txtImie->BackColor = BackColor.White;
	txtNazwisko->BackColor = BackColor.White;
	txtUlica->BackColor = BackColor.White;
	txtNrDomu->BackColor = BackColor.White;
	txtKodPocztowy->BackColor = BackColor.White;
	txtMiasto->BackColor = BackColor.White;
	txtTelefon->BackColor = BackColor.White;
	txtNotatkaOPracowniku->BackColor = BackColor.White;
	txtPesel->BackColor = BackColor.White;
	txtNrDowodu->BackColor = BackColor.White;
	txtDataStart->BackColor = BackColor.White;
	txtDataStop->BackColor = BackColor.White;
	txtLogin->BackColor = BackColor.White;
	txtHaslo->BackColor = BackColor.White;

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
			dateTimePickerOd->Enabled = true;
			dateTimePickerDo->Enabled = true;
			checkBoxKoniecUmowy->Enabled = true;
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
			dateTimePickerOd->Enabled = false;
			dateTimePickerDo->Enabled = false;
			checkBoxKoniecUmowy->Enabled = false;
		}
	}
	txtID->Enabled = false;
}
//Funkcja pomocnicza szukaj¹ca pracownika wg okreœlonego kryterium
private: void SzukajPracownika()
{
	if (txtSzukajP->Text->Length != 0)
	{
		MySqlConnection^ Connection = gcnew MySqlConnection(BazaDanychSQL);
		MySqlCommand^ Question = gcnew MySqlCommand("SELECT ID_Pracownik, ID_Informacja AS ID, Nazwisko, Imie AS Imiê, Pesel, NrDowodu AS 'Numer dowodu', Ulica, Numer_domu AS 'Numer domu', Kod_pocztowy AS 'Kod pocztowy', Miasto, Rozpoczecie_umowy AS 'Rozpoczêcie umowy', Zakonczenie_umowy AS 'Zakoñczenie umowy', Telefon, Login, Haslo AS 'Has³o', Notatka FROM pracownik, informacja where informacja.ID_Informacja = pracownik.ID_Pracownik AND CONCAT(Imie,' ', Nazwisko) LIKE '%" + txtSzukajP->Text + "%' ORDER BY Nazwisko;", Connection);

		try {
			Connection->Open();
			MySqlDataAdapter^ Data = gcnew MySqlDataAdapter();
			Data->SelectCommand = Question;
			DataTable^ Table = gcnew DataTable();
			Data->Fill(Table);

			BindingSource^ Source = gcnew BindingSource();
			Source->DataSource = Table;
			dataGridViewPracownicy->DataSource = Source;
			Connection->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		dataGridViewPracownicy->Columns[0]->Visible = false;
	}
	else
	{
		MessageBox::Show("Proszê wpisaæ imiê lub nazwisko pracownika!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

//Przypisanie daty UMOWA START do pola textbox
private: System::Void dateTimePicker2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ data_start;
	data_start = dateTimePickerOd->Value.ToShortDateString();
	txtDataStart->Text = data_start;
}
//Przypisanie daty UMOWA STOP do pola textbox
private: System::Void dateTimePickerDo_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ data_stop;
	data_stop = dateTimePickerDo->Value.ToShortDateString();
	txtDataStop->Text = data_stop;
}
//Aktywacja/dezaktywacja pola koniec umowy
private: System::Void checkBoxKoniecUmowy_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBoxKoniecUmowy->Checked) {
		dateTimePickerDo->Enabled = true;
		txtDataStop->Enabled = true;
	}
	else
	{
		dateTimePickerDo->Enabled = false;
		txtDataStop->Enabled = false;
	}
}
//Pokazuje wszystkich pracowników firmy
private: System::Void btnPokazWszystkich_Click(System::Object^  sender, System::EventArgs^  e) {
	MySqlConnection^ Connection = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ Question = gcnew MySqlCommand("SELECT ID_Pracownik, ID_Informacja AS ID, Nazwisko, Imie AS Imiê, Pesel, NrDowodu AS 'Numer dowodu', Ulica, Numer_domu AS 'Numer domu', Kod_pocztowy AS 'Kod pocztowy', Miasto, Rozpoczecie_umowy AS 'Rozpoczêcie umowy', Zakonczenie_umowy AS 'Zakoñczenie umowy', Telefon, Login, Haslo AS 'Has³o', Notatka FROM pracownik, informacja where informacja.ID_Informacja = pracownik.ID_Pracownik ORDER BY Nazwisko;", Connection);

	try {
		Connection->Open();
		MySqlDataAdapter^ Data = gcnew MySqlDataAdapter();
		Data->SelectCommand = Question;
		DataTable^ Table = gcnew DataTable();
		Data->Fill(Table);
		
		BindingSource^ Source = gcnew BindingSource();
		Source->DataSource = Table;
		dataGridViewPracownicy->DataSource = Source;
		Connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	dataGridViewPracownicy->Columns[0]->Visible = false;
}
//Przypisanie danych pracownika do odpowiednich pól
private: System::Void dataGridViewPracownicy_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex >= 0) {
		id_rekordu = Convert::ToInt32(dataGridViewPracownicy->Rows[e->RowIndex]->Cells["ID_Pracownik"]->Value);
		txtID->Text = Convert::ToString(id_rekordu);
		txtImie->Text = dataGridViewPracownicy->Rows[e->RowIndex]->Cells["Imiê"]->Value->ToString();
		txtNazwisko->Text = dataGridViewPracownicy->Rows[e->RowIndex]->Cells["Nazwisko"]->Value->ToString();
		txtUlica->Text = dataGridViewPracownicy->Rows[e->RowIndex]->Cells["Ulica"]->Value->ToString();
		txtNrDomu->Text = dataGridViewPracownicy->Rows[e->RowIndex]->Cells["Numer domu"]->Value->ToString();
		txtKodPocztowy->Text = dataGridViewPracownicy->Rows[e->RowIndex]->Cells["Kod pocztowy"]->Value->ToString();
		txtMiasto->Text = dataGridViewPracownicy->Rows[e->RowIndex]->Cells["Miasto"]->Value->ToString();
		txtDataStart->Text = dataGridViewPracownicy->Rows[e->RowIndex]->Cells["Rozpoczêcie umowy"]->Value->ToString();
		txtDataStop->Text = dataGridViewPracownicy->Rows[e->RowIndex]->Cells["Zakoñczenie umowy"]->Value->ToString();
		txtTelefon->Text = dataGridViewPracownicy->Rows[e->RowIndex]->Cells["Telefon"]->Value->ToString();
		txtPesel->Text = dataGridViewPracownicy->Rows[e->RowIndex]->Cells["Pesel"]->Value->ToString();
		txtNrDowodu->Text = dataGridViewPracownicy->Rows[e->RowIndex]->Cells["Numer dowodu"]->Value->ToString();
		txtNotatkaOPracowniku->Text = dataGridViewPracownicy->Rows[e->RowIndex]->Cells["Notatka"]->Value->ToString();
		txtLogin->Text = dataGridViewPracownicy->Rows[e->RowIndex]->Cells["Login"]->Value->ToString();
		txtHaslo->Text = dataGridViewPracownicy->Rows[e->RowIndex]->Cells["Has³o"]->Value->ToString();
	}

	if (txtDataStop->Text->Length != 0)
	{
		checkBoxKoniecUmowy->Checked = true;
	}
	else
	{
		checkBoxKoniecUmowy->Checked = false;
	}

	if (radioUsunPracownika->Checked)
	{
		checkBoxKoniecUmowy->Enabled = false;
	}
	else
	{
		checkBoxKoniecUmowy->Enabled = true;
	}
}
//Zaznaczenie opcji dodaj pracownika zablokuje formatkê z list¹ pracowników
private: System::Void radioDodajPracownika_Click(System::Object^  sender, System::EventArgs^  e) {
dataGridViewPracownicy->Enabled = false;
BlokujOdblokuj(BoxDanePracownika, true);
WyczyscPola(BoxDanePracownika);
}
//Zaznaczenie opcji modyfikuj pracownika odblokuje formatkê z list¹ pracowników
private: System::Void radioModyfikujPracownika_Click(System::Object^  sender, System::EventArgs^  e) {
dataGridViewPracownicy->Enabled = true;
BlokujOdblokuj(BoxDanePracownika, true);
}
//Zaznaczenie opcji usuñ pracownika odblokuje formatkê z list¹ pracowników
private: System::Void radioUsunPracownika_Click(System::Object^  sender, System::EventArgs^  e) {
dataGridViewPracownicy->Enabled = true;
BlokujOdblokuj(BoxDanePracownika, false);
}
//Przycisk znajdŸ pracownika wg ustalonego kryterium
private: System::Void btnSzukaj_Click(System::Object^  sender, System::EventArgs^  e) {
	SzukajPracownika();
}
//Przycisk znajdŸ pracownika wg ustalonego kryterium - po naciœniêciu ENTER
private: System::Void txtSzukajP_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == (char)13)
	{
		SzukajPracownika();
	}
}
};
}
