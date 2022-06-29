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
	/// Summary for Trwajace
	/// </summary>
	public ref class Trwajace : public System::Windows::Forms::Form
	{
	public: String^ BazaDanychSQL;
	private: System::Windows::Forms::GroupBox^  groupBoxAutaWyp;
	private: System::Windows::Forms::DataGridView^  dataGridViewAuta;
	private: System::Windows::Forms::GroupBox^  groupBoxPacownik;
	private: System::Windows::Forms::Label^  labelPracownikNazwisko;
	private: System::Windows::Forms::Label^  labelPracownikImie;
	private: System::Windows::Forms::GroupBox^  groupBoxPodSamochod;
	private: System::Windows::Forms::Label^  labelNrRejestracyjny;
	private: System::Windows::Forms::Label^  labelModel;
	private: System::Windows::Forms::Label^  labelMarka;
	private: System::Windows::Forms::GroupBox^  groupBoxPodKlient;
	private: System::Windows::Forms::Label^  labelPesel;
	private: System::Windows::Forms::Label^  labelNazwisko;
	private: System::Windows::Forms::Label^  labelImie;
	private: System::Windows::Forms::GroupBox^  groupBoxDataCzas;
	private: System::Windows::Forms::Label^  LabelCzasStop;
	private: System::Windows::Forms::Label^  LabelDataStop;
	private: System::Windows::Forms::Label^  LabelCzasStart;
	private: System::Windows::Forms::Label^  LabelDataStart;
	private: System::Windows::Forms::GroupBox^  groupBoxCena;
	private: System::Windows::Forms::Label^  labelCena;

	public: int ID_U;

	private: int ID_Rejestracja = 0;
	public: int ID_Klienta = 0;
	public: int ID_Pracownik = 0;
	public: int ID_Samochodu = 0;
	public: String^ data_rejestracji;
	public: String^ data_zwrotu;
	public: String^ czas_rejestacji;
	public: String^ czas_zwrotu;
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
	Double CenaLaczna;
	Decimal Odsetki;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  LabelCenaSuma;




	public:
	private: System::Windows::Forms::Label^  labelOdsetki;
	public:
		Trwajace(int id_uzytkownik, String^ konfiguracja)
		{
			InitializeComponent();

			BazaDanychSQL = konfiguracja;
			ID_U = id_uzytkownik;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Trwajace()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnWyjdz;
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
			this->groupBoxAutaWyp = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridViewAuta = (gcnew System::Windows::Forms::DataGridView());
			this->groupBoxPacownik = (gcnew System::Windows::Forms::GroupBox());
			this->labelPracownikNazwisko = (gcnew System::Windows::Forms::Label());
			this->labelPracownikImie = (gcnew System::Windows::Forms::Label());
			this->groupBoxPodSamochod = (gcnew System::Windows::Forms::GroupBox());
			this->labelNrRejestracyjny = (gcnew System::Windows::Forms::Label());
			this->labelModel = (gcnew System::Windows::Forms::Label());
			this->labelMarka = (gcnew System::Windows::Forms::Label());
			this->groupBoxPodKlient = (gcnew System::Windows::Forms::GroupBox());
			this->labelPesel = (gcnew System::Windows::Forms::Label());
			this->labelNazwisko = (gcnew System::Windows::Forms::Label());
			this->labelImie = (gcnew System::Windows::Forms::Label());
			this->groupBoxDataCzas = (gcnew System::Windows::Forms::GroupBox());
			this->LabelCzasStop = (gcnew System::Windows::Forms::Label());
			this->LabelDataStop = (gcnew System::Windows::Forms::Label());
			this->LabelCzasStart = (gcnew System::Windows::Forms::Label());
			this->LabelDataStart = (gcnew System::Windows::Forms::Label());
			this->groupBoxCena = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelOdsetki = (gcnew System::Windows::Forms::Label());
			this->labelCena = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->LabelCenaSuma = (gcnew System::Windows::Forms::Label());
			this->groupBoxAutaWyp->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAuta))->BeginInit();
			this->groupBoxPacownik->SuspendLayout();
			this->groupBoxPodSamochod->SuspendLayout();
			this->groupBoxPodKlient->SuspendLayout();
			this->groupBoxDataCzas->SuspendLayout();
			this->groupBoxCena->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnWyjdz
			// 
			this->btnWyjdz->Location = System::Drawing::Point(13, 414);
			this->btnWyjdz->Name = L"btnWyjdz";
			this->btnWyjdz->Size = System::Drawing::Size(75, 23);
			this->btnWyjdz->TabIndex = 0;
			this->btnWyjdz->Text = L"WyjdŸ";
			this->btnWyjdz->UseVisualStyleBackColor = true;
			this->btnWyjdz->Click += gcnew System::EventHandler(this, &Trwajace::btnWyjdz_Click);
			// 
			// groupBoxAutaWyp
			// 
			this->groupBoxAutaWyp->Controls->Add(this->dataGridViewAuta);
			this->groupBoxAutaWyp->Location = System::Drawing::Point(7, 1);
			this->groupBoxAutaWyp->Name = L"groupBoxAutaWyp";
			this->groupBoxAutaWyp->Size = System::Drawing::Size(844, 407);
			this->groupBoxAutaWyp->TabIndex = 1;
			this->groupBoxAutaWyp->TabStop = false;
			this->groupBoxAutaWyp->Text = L"Samochody aktualnie wypo¿yczone";
			// 
			// dataGridViewAuta
			// 
			this->dataGridViewAuta->AllowUserToAddRows = false;
			this->dataGridViewAuta->AllowUserToDeleteRows = false;
			this->dataGridViewAuta->AllowUserToOrderColumns = true;
			this->dataGridViewAuta->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewAuta->Location = System::Drawing::Point(6, 19);
			this->dataGridViewAuta->Name = L"dataGridViewAuta";
			this->dataGridViewAuta->ReadOnly = true;
			this->dataGridViewAuta->Size = System::Drawing::Size(833, 377);
			this->dataGridViewAuta->TabIndex = 0;
			this->dataGridViewAuta->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Trwajace::dataGridViewAuta_CellClick);
			// 
			// groupBoxPacownik
			// 
			this->groupBoxPacownik->BackColor = System::Drawing::SystemColors::Control;
			this->groupBoxPacownik->Controls->Add(this->labelPracownikNazwisko);
			this->groupBoxPacownik->Controls->Add(this->labelPracownikImie);
			this->groupBoxPacownik->Location = System::Drawing::Point(857, 1);
			this->groupBoxPacownik->Name = L"groupBoxPacownik";
			this->groupBoxPacownik->Size = System::Drawing::Size(170, 66);
			this->groupBoxPacownik->TabIndex = 5;
			this->groupBoxPacownik->TabStop = false;
			this->groupBoxPacownik->Text = L"Pracownik";
			// 
			// labelPracownikNazwisko
			// 
			this->labelPracownikNazwisko->AutoSize = true;
			this->labelPracownikNazwisko->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelPracownikNazwisko->ForeColor = System::Drawing::Color::Red;
			this->labelPracownikNazwisko->Location = System::Drawing::Point(6, 43);
			this->labelPracownikNazwisko->Name = L"labelPracownikNazwisko";
			this->labelPracownikNazwisko->Size = System::Drawing::Size(0, 20);
			this->labelPracownikNazwisko->TabIndex = 4;
			// 
			// labelPracownikImie
			// 
			this->labelPracownikImie->AutoSize = true;
			this->labelPracownikImie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelPracownikImie->ForeColor = System::Drawing::Color::Red;
			this->labelPracownikImie->Location = System::Drawing::Point(6, 12);
			this->labelPracownikImie->Name = L"labelPracownikImie";
			this->labelPracownikImie->Size = System::Drawing::Size(0, 20);
			this->labelPracownikImie->TabIndex = 3;
			// 
			// groupBoxPodSamochod
			// 
			this->groupBoxPodSamochod->BackColor = System::Drawing::SystemColors::Control;
			this->groupBoxPodSamochod->Controls->Add(this->labelNrRejestracyjny);
			this->groupBoxPodSamochod->Controls->Add(this->labelModel);
			this->groupBoxPodSamochod->Controls->Add(this->labelMarka);
			this->groupBoxPodSamochod->ForeColor = System::Drawing::Color::Black;
			this->groupBoxPodSamochod->Location = System::Drawing::Point(857, 179);
			this->groupBoxPodSamochod->Name = L"groupBoxPodSamochod";
			this->groupBoxPodSamochod->Size = System::Drawing::Size(170, 97);
			this->groupBoxPodSamochod->TabIndex = 6;
			this->groupBoxPodSamochod->TabStop = false;
			this->groupBoxPodSamochod->Text = L"Samochód";
			// 
			// labelNrRejestracyjny
			// 
			this->labelNrRejestracyjny->AutoSize = true;
			this->labelNrRejestracyjny->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelNrRejestracyjny->ForeColor = System::Drawing::Color::Red;
			this->labelNrRejestracyjny->Location = System::Drawing::Point(5, 73);
			this->labelNrRejestracyjny->Name = L"labelNrRejestracyjny";
			this->labelNrRejestracyjny->Size = System::Drawing::Size(0, 20);
			this->labelNrRejestracyjny->TabIndex = 2;
			// 
			// labelModel
			// 
			this->labelModel->AutoSize = true;
			this->labelModel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelModel->ForeColor = System::Drawing::Color::Red;
			this->labelModel->Location = System::Drawing::Point(6, 43);
			this->labelModel->Name = L"labelModel";
			this->labelModel->Size = System::Drawing::Size(0, 20);
			this->labelModel->TabIndex = 1;
			// 
			// labelMarka
			// 
			this->labelMarka->AutoSize = true;
			this->labelMarka->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelMarka->ForeColor = System::Drawing::Color::Red;
			this->labelMarka->Location = System::Drawing::Point(5, 16);
			this->labelMarka->Name = L"labelMarka";
			this->labelMarka->Size = System::Drawing::Size(0, 20);
			this->labelMarka->TabIndex = 0;
			// 
			// groupBoxPodKlient
			// 
			this->groupBoxPodKlient->Controls->Add(this->labelPesel);
			this->groupBoxPodKlient->Controls->Add(this->labelNazwisko);
			this->groupBoxPodKlient->Controls->Add(this->labelImie);
			this->groupBoxPodKlient->Location = System::Drawing::Point(857, 73);
			this->groupBoxPodKlient->Name = L"groupBoxPodKlient";
			this->groupBoxPodKlient->Size = System::Drawing::Size(170, 100);
			this->groupBoxPodKlient->TabIndex = 7;
			this->groupBoxPodKlient->TabStop = false;
			this->groupBoxPodKlient->Text = L"Klient";
			// 
			// labelPesel
			// 
			this->labelPesel->AutoSize = true;
			this->labelPesel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelPesel->ForeColor = System::Drawing::Color::Red;
			this->labelPesel->Location = System::Drawing::Point(6, 77);
			this->labelPesel->Name = L"labelPesel";
			this->labelPesel->Size = System::Drawing::Size(0, 20);
			this->labelPesel->TabIndex = 2;
			// 
			// labelNazwisko
			// 
			this->labelNazwisko->AutoSize = true;
			this->labelNazwisko->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelNazwisko->ForeColor = System::Drawing::Color::Red;
			this->labelNazwisko->Location = System::Drawing::Point(6, 47);
			this->labelNazwisko->Name = L"labelNazwisko";
			this->labelNazwisko->Size = System::Drawing::Size(0, 20);
			this->labelNazwisko->TabIndex = 1;
			// 
			// labelImie
			// 
			this->labelImie->AutoSize = true;
			this->labelImie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelImie->ForeColor = System::Drawing::Color::Red;
			this->labelImie->Location = System::Drawing::Point(6, 16);
			this->labelImie->Name = L"labelImie";
			this->labelImie->Size = System::Drawing::Size(0, 20);
			this->labelImie->TabIndex = 0;
			// 
			// groupBoxDataCzas
			// 
			this->groupBoxDataCzas->Controls->Add(this->LabelCzasStop);
			this->groupBoxDataCzas->Controls->Add(this->LabelDataStop);
			this->groupBoxDataCzas->Controls->Add(this->LabelCzasStart);
			this->groupBoxDataCzas->Controls->Add(this->LabelDataStart);
			this->groupBoxDataCzas->Location = System::Drawing::Point(857, 282);
			this->groupBoxDataCzas->Name = L"groupBoxDataCzas";
			this->groupBoxDataCzas->Size = System::Drawing::Size(170, 73);
			this->groupBoxDataCzas->TabIndex = 8;
			this->groupBoxDataCzas->TabStop = false;
			this->groupBoxDataCzas->Text = L"Data i czas";
			// 
			// LabelCzasStop
			// 
			this->LabelCzasStop->AutoSize = true;
			this->LabelCzasStop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->LabelCzasStop->ForeColor = System::Drawing::Color::Red;
			this->LabelCzasStop->Location = System::Drawing::Point(110, 45);
			this->LabelCzasStop->Name = L"LabelCzasStop";
			this->LabelCzasStop->Size = System::Drawing::Size(0, 20);
			this->LabelCzasStop->TabIndex = 3;
			// 
			// LabelDataStop
			// 
			this->LabelDataStop->AutoSize = true;
			this->LabelDataStop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->LabelDataStop->ForeColor = System::Drawing::Color::Red;
			this->LabelDataStop->Location = System::Drawing::Point(6, 45);
			this->LabelDataStop->Name = L"LabelDataStop";
			this->LabelDataStop->Size = System::Drawing::Size(0, 20);
			this->LabelDataStop->TabIndex = 2;
			// 
			// LabelCzasStart
			// 
			this->LabelCzasStart->AutoSize = true;
			this->LabelCzasStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->LabelCzasStart->ForeColor = System::Drawing::Color::Red;
			this->LabelCzasStart->Location = System::Drawing::Point(110, 22);
			this->LabelCzasStart->Name = L"LabelCzasStart";
			this->LabelCzasStart->Size = System::Drawing::Size(0, 20);
			this->LabelCzasStart->TabIndex = 1;
			// 
			// LabelDataStart
			// 
			this->LabelDataStart->AutoSize = true;
			this->LabelDataStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->LabelDataStart->ForeColor = System::Drawing::Color::Red;
			this->LabelDataStart->Location = System::Drawing::Point(6, 22);
			this->LabelDataStart->Name = L"LabelDataStart";
			this->LabelDataStart->Size = System::Drawing::Size(0, 20);
			this->LabelDataStart->TabIndex = 0;
			// 
			// groupBoxCena
			// 
			this->groupBoxCena->Controls->Add(this->label1);
			this->groupBoxCena->Controls->Add(this->labelOdsetki);
			this->groupBoxCena->Controls->Add(this->labelCena);
			this->groupBoxCena->Location = System::Drawing::Point(857, 361);
			this->groupBoxCena->Name = L"groupBoxCena";
			this->groupBoxCena->Size = System::Drawing::Size(170, 83);
			this->groupBoxCena->TabIndex = 9;
			this->groupBoxCena->TabStop = false;
			this->groupBoxCena->Text = L"Koszt";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(5, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"+";
			// 
			// labelOdsetki
			// 
			this->labelOdsetki->AutoSize = true;
			this->labelOdsetki->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelOdsetki->ForeColor = System::Drawing::Color::Red;
			this->labelOdsetki->Location = System::Drawing::Point(32, 50);
			this->labelOdsetki->Name = L"labelOdsetki";
			this->labelOdsetki->Size = System::Drawing::Size(0, 20);
			this->labelOdsetki->TabIndex = 4;
			// 
			// labelCena
			// 
			this->labelCena->AutoSize = true;
			this->labelCena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelCena->ForeColor = System::Drawing::Color::Red;
			this->labelCena->Location = System::Drawing::Point(32, 16);
			this->labelCena->Name = L"labelCena";
			this->labelCena->Size = System::Drawing::Size(0, 20);
			this->labelCena->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(511, 417);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"DO ZAP£ATY:";
			// 
			// LabelCenaSuma
			// 
			this->LabelCenaSuma->AutoSize = true;
			this->LabelCenaSuma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->LabelCenaSuma->ForeColor = System::Drawing::Color::Red;
			this->LabelCenaSuma->Location = System::Drawing::Point(640, 417);
			this->LabelCenaSuma->Name = L"LabelCenaSuma";
			this->LabelCenaSuma->Size = System::Drawing::Size(0, 20);
			this->LabelCenaSuma->TabIndex = 11;
			// 
			// Trwajace
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1031, 446);
			this->ControlBox = false;
			this->Controls->Add(this->LabelCenaSuma);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBoxCena);
			this->Controls->Add(this->groupBoxDataCzas);
			this->Controls->Add(this->groupBoxPacownik);
			this->Controls->Add(this->groupBoxPodKlient);
			this->Controls->Add(this->groupBoxPodSamochod);
			this->Controls->Add(this->groupBoxAutaWyp);
			this->Controls->Add(this->btnWyjdz);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Trwajace";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Trwajace";
			this->Load += gcnew System::EventHandler(this, &Trwajace::Trwajace_Load);
			this->groupBoxAutaWyp->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAuta))->EndInit();
			this->groupBoxPacownik->ResumeLayout(false);
			this->groupBoxPacownik->PerformLayout();
			this->groupBoxPodSamochod->ResumeLayout(false);
			this->groupBoxPodSamochod->PerformLayout();
			this->groupBoxPodKlient->ResumeLayout(false);
			this->groupBoxPodKlient->PerformLayout();
			this->groupBoxDataCzas->ResumeLayout(false);
			this->groupBoxDataCzas->PerformLayout();
			this->groupBoxCena->ResumeLayout(false);
			this->groupBoxCena->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

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
//Funkcja pomocnicza sprawdzaj¹ca czy nale¿y policzyæ odsetki
private: void DoZaplaty()
{
	CenaLaczna = (double)Cena_rejestracja + (double)Odsetki;
	LabelCenaSuma->Text = Convert::ToString(CenaLaczna) + " z³";
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
	MySqlCommand^ Question = gcnew MySqlCommand("select Cena from Samochod where ID_Samochod = '"+ID_Samochodu+"';",Connect);
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
		Godziny = ((((IleDniMiedzyDatami(Dzien1, Miesiac1, Rok1, Dzien2, Miesiac2, Rok2)) * 24) - Czas1) + Czas2);
		PobierzCeneAutaH();
		CenaDecimal();
		Cena_rejestracja = Cena* (Decimal)Godziny;

		labelCena->Text = Convert::ToString(Cena_rejestracja) + " z³";
	}
	else {
		MessageBox::Show("Wyst¹pi³ b³¹d krytyczny", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
//Funkcja liczy odsetki karne
private: void PoliczOdsetki()
{
	System::DateTime^ DataAktualna;
	System::Int32 DzienObecny;
	System::Int32 MiesiacObecny;
	System::Int32 RokObecny;;
	System::Int32 DataObecna;
	System::Int32 CzasObecny;

	System::Int32 DataZwrotu;
	
	//System::Int32 DniZwloki;
	System::Int32 GodzinyZwloki;

	DataAktualna = System::DateTime::Now;
	
	DzienObecny = Convert::ToInt32(DataAktualna->Day);
	MiesiacObecny = Convert::ToInt32(DataAktualna->Month);
	RokObecny = Convert::ToInt32(DataAktualna->Year);
	CzasObecny = Convert::ToInt32(DataAktualna->Hour);

	DataObecna = DzienObecny + MiesiacObecny * 100 + RokObecny * 10000;
	DataZwrotu = Dzien2 + Miesiac2 * 100 + Rok2 * 10000;
	//DniZwloki = DataObecna - DataZwrotu;
	GodzinyZwloki = ((((IleDniMiedzyDatami(Dzien2, Miesiac2, Rok2, DzienObecny, MiesiacObecny, RokObecny)) * 24) - Czas2) + CzasObecny);

	if (GodzinyZwloki > 0) {
		Odsetki = (Decimal)GodzinyZwloki * Cena;
		labelOdsetki->Text = Convert::ToString(Odsetki) + " z³ kary";
	}
	else {
		Odsetki = 0;
		labelOdsetki->Text = Convert::ToString(Odsetki) + " z³ kary";
	}
}

//Funkcja pomocnicza wyœwietlaj¹ca samochody wyporzyczone
private: void PokazSamochody()
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
		dataGridViewAuta->DataSource = Source;
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
	PobiezInfoZBazy("select Imie, Nazwisko from Informacja where ID_informacja = '" + ID_Pracownik + "';", 1);
	//Imiê i Nazwisko oraz Pesel klienta
	PobiezInfoZBazy("select Imie, Nazwisko, Pesel from Klient where ID_Klient = '" + ID_Klienta + "';", 2);
	//Marka i model samochodu
	PobiezInfoZBazy("select Marka, Model from Specyfikacja where ID_Specyfikacja = '" + ID_Samochodu + "';", 3);
	//Numer rejestracyjny samochodu
	PobiezInfoZBazy("select Numer_rejestracyjny from samochod where ID_Samochod = '" + ID_Samochodu + "';", 4);

	//Pobieramy nastêpne informacje
	LabelDataStart->Text = data_rejestracji;
	LabelCzasStart->Text = czas_rejestacji;
	LabelDataStop->Text = data_zwrotu;
	LabelCzasStop->Text = czas_zwrotu;

}
//Funkcja pobierajaca z bazdy danych szczegolowe informacje kryjace siê pod ID
private: void PobiezInfoZBazy(String^ CommandA, short int DataNumber)
{
	MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ Command = gcnew MySqlCommand(CommandA,Connect);
	MySqlDataReader^ DataRead;
	//
	try {
		Connect->Open();
		DataRead = Command->ExecuteReader();
		if (DataRead->Read())
		{
			if (DataNumber == 1)
			{
				labelPracownikImie->Text = DataRead->GetString(0);
				labelPracownikNazwisko->Text = DataRead->GetString(1);
			}
			else if (DataNumber == 2)
			{
				labelImie->Text = DataRead->GetString(0);
				labelNazwisko->Text = DataRead->GetString(1);
				labelPesel->Text = DataRead->GetString(2);
			}
			else if (DataNumber == 3)
			{
				labelMarka->Text = DataRead->GetString(0);
				labelModel->Text = DataRead->GetString(1);
			}
			else if (DataNumber == 4)
			{
				labelNrRejestracyjny->Text = DataRead->GetString(0);
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

//Funkcja oznaczaj¹ca rekordy odpowiednim kolorem (czerwony - po terminie; zó³ty - blisko koñca terminu)
private: void OznaczRekordy()
{
	System::DateTime^ DataAktualna;
	System::Int32 DzienObecny, MiesiacObecny, RokObecny, DataObecna, CzasObecny;
	System::Int32 DataZwrotu;
	System::Int32 GodzinyPoTerminie, GodzinyPrzedTerminem;

	DataAktualna = System::DateTime::Now;

	DzienObecny = Convert::ToInt32(DataAktualna->Day);
	MiesiacObecny = Convert::ToInt32(DataAktualna->Month);
	RokObecny = Convert::ToInt32(DataAktualna->Year);
	CzasObecny = Convert::ToInt32(DataAktualna->Hour);

	DataObecna = DzienObecny + MiesiacObecny * 100 + RokObecny * 10000;

	for each(DataGridViewRow^ Row in dataGridViewAuta->Rows)
	{	
		ZamienDate(Row->Cells["Data zwrotu"]->Value->ToString(), 0);		
		ZamienCzas(Row->Cells["Godzina zwrotu"]->Value->ToString(), 0);
		
		DataZwrotu = Dzien2 + Miesiac2 * 100 + Rok2 * 10000;
		
		//GodzinyPoTerminie = ((((DataObecna - DataZwrotu) * 24) - Czas2) + CzasObecny);	
		//GodzinyPrzedTerminem = (((DataZwrotu - DataObecna) * 24) - CzasObecny) + Czas2;
		GodzinyPoTerminie = ((((IleDniMiedzyDatami(Dzien2, Miesiac2, Rok2, DzienObecny, MiesiacObecny, RokObecny)) * 24) - Czas2) + CzasObecny);
		GodzinyPrzedTerminem = (((IleDniMiedzyDatami(DzienObecny, MiesiacObecny, RokObecny, Dzien2, Miesiac2, Rok2)) * 24) - CzasObecny) + Czas2;
		
		if (GodzinyPoTerminie > 0)
			Row->DefaultCellStyle->BackColor = Color::Red;
		
		else if (GodzinyPrzedTerminem < 72)
			Row->DefaultCellStyle->BackColor = Color::Yellow;
	}
}

//Opuœæ okno
private: System::Void btnWyjdz_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->Close();
}
//Czynnoœci wykonywane po otwarciu formatki
private: System::Void Trwajace_Load(System::Object^  sender, System::EventArgs^  e) 
{
	PokazSamochody();
	OznaczRekordy();
}
//Klikniêcie w wybrany rekord przypisze dane do odpowiednich pól - Klient
private: System::Void dataGridViewAuta_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex >= 0) {
		ID_Rejestracja = Convert::ToInt32(dataGridViewAuta->Rows[e->RowIndex]->Cells["ID rezerwacji"]->Value);
		ID_Klienta = Convert::ToInt32(dataGridViewAuta->Rows[e->RowIndex]->Cells["ID klienta"]->Value);
		ID_Pracownik = Convert::ToInt32(dataGridViewAuta->Rows[e->RowIndex]->Cells["ID pracownika"]->Value);
		ID_Samochodu = Convert::ToInt32(dataGridViewAuta->Rows[e->RowIndex]->Cells["ID samochodu"]->Value);
		data_rejestracji = dataGridViewAuta->Rows[e->RowIndex]->Cells["Data rezerwacji"]->Value->ToString();
		data_zwrotu = dataGridViewAuta->Rows[e->RowIndex]->Cells["Data zwrotu"]->Value->ToString();
		czas_rejestacji = dataGridViewAuta->Rows[e->RowIndex]->Cells["Godzina rezerwacji"]->Value->ToString();
		czas_zwrotu = dataGridViewAuta->Rows[e->RowIndex]->Cells["Godzina zwrotu"]->Value->ToString();
	}
	//Pokazujemy szczegó³owe dane nt wyporzyczenia
	PokazSzczegoly();
	//Pobieramy datê rezerwacji
	ZamienDate(data_rejestracji,1);
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
	//Obliczamy sumê ³¹czn¹
	DoZaplaty();
}
//Pokazujemy rezerwacje - po terminie
private: System::Void buttonPoTerminie_Click(System::Object^  sender, System::EventArgs^  e) {

}
};
}
