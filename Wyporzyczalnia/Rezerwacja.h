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
	/// Summary for Rezerwacja
	/// </summary>
	public ref class Rezerwacja : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::TabPage^  PageDataCzas;
	private: System::Windows::Forms::GroupBox^  groupBoxPodsumowanie;
	private: System::Windows::Forms::TabPage^  PageKlienci;
	private: System::Windows::Forms::GroupBox^  groupBoxKlienci;
	private: System::Windows::Forms::Button^  btnSzukajKlientow;
	private: System::Windows::Forms::TextBox^  textBoxSzukajKlientow;
	private: System::Windows::Forms::DataGridView^  dataGridViewRegKlienci;

	private: System::Windows::Forms::GroupBox^  BoxDaneKlienta;
	private: System::Windows::Forms::TextBox^  txtNrDowodu;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  txtPesel;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::MaskedTextBox^  txtTelefonK;
	private: System::Windows::Forms::MaskedTextBox^  txtKodPocztowyK;
	private: System::Windows::Forms::TextBox^  txtMiastoK;
	private: System::Windows::Forms::TextBox^  txtNrDomuK;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  txtUlicaK;
	private: System::Windows::Forms::TextBox^  txtNazwiskoK;
	private: System::Windows::Forms::TextBox^  txtImieK;
	private: System::Windows::Forms::TextBox^  txtIDK;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::GroupBox^  BoxNotatkaKlienta;
	private: System::Windows::Forms::RichTextBox^  txtNotatkaOKliencie;
	private: System::Windows::Forms::GroupBox^  groupBoxDataCzasR;
	private: System::Windows::Forms::MonthCalendar^  monthCalendarStart;
	private: System::Windows::Forms::GroupBox^  groupBoxZarezerwujTeraz;
	private: System::Windows::Forms::Button^  btnZarezerwuj;
	private: System::Windows::Forms::TextBox^  txtRezestracjaStart;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::MonthCalendar^  monthCalendarStop;
	private: System::Windows::Forms::ListBox^  listBoxGodzinaStart;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::ListBox^  listBoxGodzinaStop;
	private: System::Windows::Forms::TextBox^  txtRezerwacjaGodzinaStart;
	private: System::Windows::Forms::TextBox^  txtRezerwacjaGodzinaStop;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::TextBox^  txtRejestracjaZwrot;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::GroupBox^  groupBoxPodSamochod;
	private: System::Windows::Forms::Label^  labelNrRejestracyjny;
	private: System::Windows::Forms::Label^  labelModel;
	private: System::Windows::Forms::Label^  labelMarka;
	private: System::Windows::Forms::GroupBox^  groupBoxPodKlient;
	private: System::Windows::Forms::Label^  labelPesel;
	private: System::Windows::Forms::Label^  labelNazwisko;
	private: System::Windows::Forms::Label^  labelImie;
	private: System::Windows::Forms::GroupBox^  groupBoxDataCzas;
	private: System::Windows::Forms::Label^  LabelDataStop;
	private: System::Windows::Forms::Label^  LabelCzasStart;
	private: System::Windows::Forms::Label^  LabelDataStart;
	private: System::Windows::Forms::Label^  LabelCzasStop;
	private: System::Windows::Forms::GroupBox^  groupBoxCena;
	private: System::Windows::Forms::Label^  labelCena;
	private: System::Windows::Forms::GroupBox^  groupBoxPacownik;
	private: System::Windows::Forms::Label^  labelPracownikImie;
	private: System::Windows::Forms::Label^  labelPracownikNazwisko;
	private: System::Windows::Forms::Button^  btnPokazSamochody;
	public: String^ BazaDanychSQL;
	public: String^ DataRezerwacji;
	public: String^ DataZwrotu;
	public: Decimal Cena_samochodu;
	public: String^ CenaDoBazy;
	public: int ID_U;
	public: int id_rekordu_klienta = 0;
	public: int id_rekordu_samochodu = 0;
	public: int time1, time2;
	public: int dataI, dataII;
	System::Int32 DataStartDzien;	System::Int32 DataStopDzien;
	System::Int32 DataStartMiesiac; System::Int32 DataStopMiesiac;
	System::Int32 DataStartRok;     System::Int32 DataStopRok;
	private: System::Windows::Forms::Timer^  OdswierzCene;
	public:
	private: System::Windows::Forms::TextBox^  txtCena;
	public:
		Rezerwacja(int id_uzytkownik, String^ konfiguracja)
		{
			InitializeComponent();

			BazaDanychSQL = konfiguracja;
			ID_U = id_uzytkownik;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Rezerwacja()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBoxSamochody;
	private: System::Windows::Forms::TabControl^  tabControlDaneRezerwacji;
	private: System::Windows::Forms::TabPage^  PageSamochody;
	private: System::Windows::Forms::GroupBox^  groupBoxListaAut;
	private: System::Windows::Forms::DataGridView^  dataGridViewSamochody;

	private: System::Windows::Forms::Button^  btnSzukaj;
	private: System::Windows::Forms::TextBox^  txtSzukajSamochod;
	private: System::Windows::Forms::GroupBox^  groupBoxDaneSamochodu;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
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
	private: System::Windows::Forms::GroupBox^  groupBoxWyjdz;
	private: System::Windows::Forms::Button^  button1;
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
			this->components = (gcnew System::ComponentModel::Container());
			this->groupBoxSamochody = (gcnew System::Windows::Forms::GroupBox());
			this->tabControlDaneRezerwacji = (gcnew System::Windows::Forms::TabControl());
			this->PageSamochody = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxListaAut = (gcnew System::Windows::Forms::GroupBox());
			this->btnPokazSamochody = (gcnew System::Windows::Forms::Button());
			this->groupBoxDaneSamochodu = (gcnew System::Windows::Forms::GroupBox());
			this->txtCena = (gcnew System::Windows::Forms::TextBox());
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
			this->btnSzukaj = (gcnew System::Windows::Forms::Button());
			this->txtSzukajSamochod = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewSamochody = (gcnew System::Windows::Forms::DataGridView());
			this->PageKlienci = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxKlienci = (gcnew System::Windows::Forms::GroupBox());
			this->BoxNotatkaKlienta = (gcnew System::Windows::Forms::GroupBox());
			this->txtNotatkaOKliencie = (gcnew System::Windows::Forms::RichTextBox());
			this->BoxDaneKlienta = (gcnew System::Windows::Forms::GroupBox());
			this->txtNrDowodu = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtPesel = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtTelefonK = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtKodPocztowyK = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtMiastoK = (gcnew System::Windows::Forms::TextBox());
			this->txtNrDomuK = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->txtUlicaK = (gcnew System::Windows::Forms::TextBox());
			this->txtNazwiskoK = (gcnew System::Windows::Forms::TextBox());
			this->txtImieK = (gcnew System::Windows::Forms::TextBox());
			this->txtIDK = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->btnSzukajKlientow = (gcnew System::Windows::Forms::Button());
			this->textBoxSzukajKlientow = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewRegKlienci = (gcnew System::Windows::Forms::DataGridView());
			this->PageDataCzas = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxDataCzasR = (gcnew System::Windows::Forms::GroupBox());
			this->txtRezerwacjaGodzinaStop = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->txtRejestracjaZwrot = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->txtRezerwacjaGodzinaStart = (gcnew System::Windows::Forms::TextBox());
			this->listBoxGodzinaStop = (gcnew System::Windows::Forms::ListBox());
			this->listBoxGodzinaStart = (gcnew System::Windows::Forms::ListBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->monthCalendarStop = (gcnew System::Windows::Forms::MonthCalendar());
			this->txtRezestracjaStart = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->monthCalendarStart = (gcnew System::Windows::Forms::MonthCalendar());
			this->groupBoxWyjdz = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBoxPodsumowanie = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxPacownik = (gcnew System::Windows::Forms::GroupBox());
			this->labelPracownikNazwisko = (gcnew System::Windows::Forms::Label());
			this->labelPracownikImie = (gcnew System::Windows::Forms::Label());
			this->groupBoxCena = (gcnew System::Windows::Forms::GroupBox());
			this->labelCena = (gcnew System::Windows::Forms::Label());
			this->groupBoxDataCzas = (gcnew System::Windows::Forms::GroupBox());
			this->LabelCzasStop = (gcnew System::Windows::Forms::Label());
			this->LabelDataStop = (gcnew System::Windows::Forms::Label());
			this->LabelCzasStart = (gcnew System::Windows::Forms::Label());
			this->LabelDataStart = (gcnew System::Windows::Forms::Label());
			this->groupBoxPodKlient = (gcnew System::Windows::Forms::GroupBox());
			this->labelPesel = (gcnew System::Windows::Forms::Label());
			this->labelNazwisko = (gcnew System::Windows::Forms::Label());
			this->labelImie = (gcnew System::Windows::Forms::Label());
			this->groupBoxPodSamochod = (gcnew System::Windows::Forms::GroupBox());
			this->labelNrRejestracyjny = (gcnew System::Windows::Forms::Label());
			this->labelModel = (gcnew System::Windows::Forms::Label());
			this->labelMarka = (gcnew System::Windows::Forms::Label());
			this->groupBoxZarezerwujTeraz = (gcnew System::Windows::Forms::GroupBox());
			this->btnZarezerwuj = (gcnew System::Windows::Forms::Button());
			this->OdswierzCene = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBoxSamochody->SuspendLayout();
			this->tabControlDaneRezerwacji->SuspendLayout();
			this->PageSamochody->SuspendLayout();
			this->groupBoxListaAut->SuspendLayout();
			this->groupBoxDaneSamochodu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSamochody))->BeginInit();
			this->PageKlienci->SuspendLayout();
			this->groupBoxKlienci->SuspendLayout();
			this->BoxNotatkaKlienta->SuspendLayout();
			this->BoxDaneKlienta->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewRegKlienci))->BeginInit();
			this->PageDataCzas->SuspendLayout();
			this->groupBoxDataCzasR->SuspendLayout();
			this->groupBoxWyjdz->SuspendLayout();
			this->groupBoxPodsumowanie->SuspendLayout();
			this->groupBoxPacownik->SuspendLayout();
			this->groupBoxCena->SuspendLayout();
			this->groupBoxDataCzas->SuspendLayout();
			this->groupBoxPodKlient->SuspendLayout();
			this->groupBoxPodSamochod->SuspendLayout();
			this->groupBoxZarezerwujTeraz->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxSamochody
			// 
			this->groupBoxSamochody->Controls->Add(this->tabControlDaneRezerwacji);
			this->groupBoxSamochody->Location = System::Drawing::Point(12, 2);
			this->groupBoxSamochody->Name = L"groupBoxSamochody";
			this->groupBoxSamochody->Size = System::Drawing::Size(665, 535);
			this->groupBoxSamochody->TabIndex = 0;
			this->groupBoxSamochody->TabStop = false;
			this->groupBoxSamochody->Text = L"Dane rezerwacji";
			// 
			// tabControlDaneRezerwacji
			// 
			this->tabControlDaneRezerwacji->Controls->Add(this->PageSamochody);
			this->tabControlDaneRezerwacji->Controls->Add(this->PageKlienci);
			this->tabControlDaneRezerwacji->Controls->Add(this->PageDataCzas);
			this->tabControlDaneRezerwacji->Location = System::Drawing::Point(6, 19);
			this->tabControlDaneRezerwacji->Name = L"tabControlDaneRezerwacji";
			this->tabControlDaneRezerwacji->SelectedIndex = 0;
			this->tabControlDaneRezerwacji->Size = System::Drawing::Size(653, 508);
			this->tabControlDaneRezerwacji->TabIndex = 0;
			// 
			// PageSamochody
			// 
			this->PageSamochody->Controls->Add(this->groupBoxListaAut);
			this->PageSamochody->Location = System::Drawing::Point(4, 22);
			this->PageSamochody->Name = L"PageSamochody";
			this->PageSamochody->Padding = System::Windows::Forms::Padding(3);
			this->PageSamochody->Size = System::Drawing::Size(645, 482);
			this->PageSamochody->TabIndex = 0;
			this->PageSamochody->Text = L"Samochody";
			this->PageSamochody->UseVisualStyleBackColor = true;
			// 
			// groupBoxListaAut
			// 
			this->groupBoxListaAut->Controls->Add(this->btnPokazSamochody);
			this->groupBoxListaAut->Controls->Add(this->groupBoxDaneSamochodu);
			this->groupBoxListaAut->Controls->Add(this->btnSzukaj);
			this->groupBoxListaAut->Controls->Add(this->txtSzukajSamochod);
			this->groupBoxListaAut->Controls->Add(this->dataGridViewSamochody);
			this->groupBoxListaAut->Location = System::Drawing::Point(6, 6);
			this->groupBoxListaAut->Name = L"groupBoxListaAut";
			this->groupBoxListaAut->Size = System::Drawing::Size(633, 470);
			this->groupBoxListaAut->TabIndex = 0;
			this->groupBoxListaAut->TabStop = false;
			this->groupBoxListaAut->Text = L"Lista dostêpnych samochodów";
			// 
			// btnPokazSamochody
			// 
			this->btnPokazSamochody->Location = System::Drawing::Point(552, 17);
			this->btnPokazSamochody->Name = L"btnPokazSamochody";
			this->btnPokazSamochody->Size = System::Drawing::Size(75, 23);
			this->btnPokazSamochody->TabIndex = 17;
			this->btnPokazSamochody->Text = L"Poka¿ ";
			this->btnPokazSamochody->UseVisualStyleBackColor = true;
			this->btnPokazSamochody->Click += gcnew System::EventHandler(this, &Rezerwacja::btnPokazSamochody_Click);
			// 
			// groupBoxDaneSamochodu
			// 
			this->groupBoxDaneSamochodu->Controls->Add(this->txtCena);
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
			this->groupBoxDaneSamochodu->Location = System::Drawing::Point(6, 290);
			this->groupBoxDaneSamochodu->Name = L"groupBoxDaneSamochodu";
			this->groupBoxDaneSamochodu->Size = System::Drawing::Size(621, 174);
			this->groupBoxDaneSamochodu->TabIndex = 16;
			this->groupBoxDaneSamochodu->TabStop = false;
			this->groupBoxDaneSamochodu->Text = L"Dane samochodu";
			// 
			// txtCena
			// 
			this->txtCena->Location = System::Drawing::Point(194, 33);
			this->txtCena->Name = L"txtCena";
			this->txtCena->Size = System::Drawing::Size(28, 20);
			this->txtCena->TabIndex = 28;
			this->txtCena->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(592, 36);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(19, 13);
			this->label20->TabIndex = 27;
			this->label20->Text = L"kg";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(381, 136);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(21, 13);
			this->label19->TabIndex = 26;
			this->label19->Text = L"km";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(381, 70);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(24, 13);
			this->label18->TabIndex = 25;
			this->label18->Text = L"kW";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(165, 136);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(27, 13);
			this->label17->TabIndex = 24;
			this->label17->Text = L"cm3";
			// 
			// txtKolor
			// 
			this->txtKolor->Enabled = false;
			this->txtKolor->Location = System::Drawing::Point(511, 133);
			this->txtKolor->Name = L"txtKolor";
			this->txtKolor->Size = System::Drawing::Size(100, 20);
			this->txtKolor->TabIndex = 23;
			// 
			// txtKlimatyzacja
			// 
			this->txtKlimatyzacja->Enabled = false;
			this->txtKlimatyzacja->Location = System::Drawing::Point(511, 100);
			this->txtKlimatyzacja->Name = L"txtKlimatyzacja";
			this->txtKlimatyzacja->Size = System::Drawing::Size(100, 20);
			this->txtKlimatyzacja->TabIndex = 22;
			// 
			// txtLiczbaDrzwi
			// 
			this->txtLiczbaDrzwi->Enabled = false;
			this->txtLiczbaDrzwi->Location = System::Drawing::Point(511, 67);
			this->txtLiczbaDrzwi->Name = L"txtLiczbaDrzwi";
			this->txtLiczbaDrzwi->Size = System::Drawing::Size(100, 20);
			this->txtLiczbaDrzwi->TabIndex = 21;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(436, 136);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 13);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Kolor";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(436, 103);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(65, 13);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Klimatyzacja";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(436, 70);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(65, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Liczba drzwi";
			// 
			// txtLadownosc
			// 
			this->txtLadownosc->Enabled = false;
			this->txtLadownosc->Location = System::Drawing::Point(511, 33);
			this->txtLadownosc->Name = L"txtLadownosc";
			this->txtLadownosc->Size = System::Drawing::Size(75, 20);
			this->txtLadownosc->TabIndex = 17;
			// 
			// txtPrzebieg
			// 
			this->txtPrzebieg->Enabled = false;
			this->txtPrzebieg->Location = System::Drawing::Point(305, 133);
			this->txtPrzebieg->Name = L"txtPrzebieg";
			this->txtPrzebieg->Size = System::Drawing::Size(70, 20);
			this->txtPrzebieg->TabIndex = 16;
			// 
			// txtRokProdukcji
			// 
			this->txtRokProdukcji->Enabled = false;
			this->txtRokProdukcji->Location = System::Drawing::Point(305, 100);
			this->txtRokProdukcji->Name = L"txtRokProdukcji";
			this->txtRokProdukcji->Size = System::Drawing::Size(100, 20);
			this->txtRokProdukcji->TabIndex = 15;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(436, 36);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(69, 13);
			this->label9->TabIndex = 14;
			this->label9->Text = L"£adowonoœæ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(227, 136);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Przebieg";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(227, 103);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Rok produkcji";
			// 
			// txtMoc
			// 
			this->txtMoc->Enabled = false;
			this->txtMoc->Location = System::Drawing::Point(305, 67);
			this->txtMoc->Name = L"txtMoc";
			this->txtMoc->Size = System::Drawing::Size(70, 20);
			this->txtMoc->TabIndex = 11;
			// 
			// txtRodzajSilnika
			// 
			this->txtRodzajSilnika->Enabled = false;
			this->txtRodzajSilnika->Location = System::Drawing::Point(305, 33);
			this->txtRodzajSilnika->Name = L"txtRodzajSilnika";
			this->txtRodzajSilnika->Size = System::Drawing::Size(100, 20);
			this->txtRodzajSilnika->TabIndex = 10;
			// 
			// txtPojSilnika
			// 
			this->txtPojSilnika->Enabled = false;
			this->txtPojSilnika->Location = System::Drawing::Point(88, 133);
			this->txtPojSilnika->Name = L"txtPojSilnika";
			this->txtPojSilnika->Size = System::Drawing::Size(71, 20);
			this->txtPojSilnika->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(227, 70);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Moc";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(227, 36);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Rodzaj silnika";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(10, 136);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Poj. silnika";
			// 
			// txtModel
			// 
			this->txtModel->Enabled = false;
			this->txtModel->Location = System::Drawing::Point(88, 100);
			this->txtModel->Name = L"txtModel";
			this->txtModel->Size = System::Drawing::Size(100, 20);
			this->txtModel->TabIndex = 5;
			// 
			// txtMarka
			// 
			this->txtMarka->Enabled = false;
			this->txtMarka->Location = System::Drawing::Point(88, 67);
			this->txtMarka->Name = L"txtMarka";
			this->txtMarka->Size = System::Drawing::Size(100, 20);
			this->txtMarka->TabIndex = 4;
			// 
			// txtNrRejestracyjny
			// 
			this->txtNrRejestracyjny->Enabled = false;
			this->txtNrRejestracyjny->Location = System::Drawing::Point(88, 33);
			this->txtNrRejestracyjny->Name = L"txtNrRejestracyjny";
			this->txtNrRejestracyjny->Size = System::Drawing::Size(100, 20);
			this->txtNrRejestracyjny->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Model";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Marka";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Numer rejestr.";
			// 
			// btnSzukaj
			// 
			this->btnSzukaj->Location = System::Drawing::Point(471, 16);
			this->btnSzukaj->Name = L"btnSzukaj";
			this->btnSzukaj->Size = System::Drawing::Size(75, 23);
			this->btnSzukaj->TabIndex = 2;
			this->btnSzukaj->Text = L"ZnajdŸ";
			this->btnSzukaj->UseVisualStyleBackColor = true;
			this->btnSzukaj->Click += gcnew System::EventHandler(this, &Rezerwacja::btnSzukaj_Click);
			// 
			// txtSzukajSamochod
			// 
			this->txtSzukajSamochod->Location = System::Drawing::Point(6, 19);
			this->txtSzukajSamochod->Name = L"txtSzukajSamochod";
			this->txtSzukajSamochod->Size = System::Drawing::Size(459, 20);
			this->txtSzukajSamochod->TabIndex = 1;
			this->txtSzukajSamochod->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Rezerwacja::txtSzukajSamochod_KeyPress);
			// 
			// dataGridViewSamochody
			// 
			this->dataGridViewSamochody->AllowUserToAddRows = false;
			this->dataGridViewSamochody->AllowUserToDeleteRows = false;
			this->dataGridViewSamochody->AllowUserToOrderColumns = true;
			this->dataGridViewSamochody->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSamochody->Location = System::Drawing::Point(6, 44);
			this->dataGridViewSamochody->Name = L"dataGridViewSamochody";
			this->dataGridViewSamochody->ReadOnly = true;
			this->dataGridViewSamochody->Size = System::Drawing::Size(621, 240);
			this->dataGridViewSamochody->TabIndex = 0;
			this->dataGridViewSamochody->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Rezerwacja::dataGridViewSamochody_CellClick);
			// 
			// PageKlienci
			// 
			this->PageKlienci->Controls->Add(this->groupBoxKlienci);
			this->PageKlienci->Location = System::Drawing::Point(4, 22);
			this->PageKlienci->Name = L"PageKlienci";
			this->PageKlienci->Size = System::Drawing::Size(645, 482);
			this->PageKlienci->TabIndex = 3;
			this->PageKlienci->Text = L"Klienci";
			this->PageKlienci->UseVisualStyleBackColor = true;
			// 
			// groupBoxKlienci
			// 
			this->groupBoxKlienci->Controls->Add(this->BoxNotatkaKlienta);
			this->groupBoxKlienci->Controls->Add(this->BoxDaneKlienta);
			this->groupBoxKlienci->Controls->Add(this->btnSzukajKlientow);
			this->groupBoxKlienci->Controls->Add(this->textBoxSzukajKlientow);
			this->groupBoxKlienci->Controls->Add(this->dataGridViewRegKlienci);
			this->groupBoxKlienci->Location = System::Drawing::Point(6, 6);
			this->groupBoxKlienci->Name = L"groupBoxKlienci";
			this->groupBoxKlienci->Size = System::Drawing::Size(633, 471);
			this->groupBoxKlienci->TabIndex = 1;
			this->groupBoxKlienci->TabStop = false;
			this->groupBoxKlienci->Text = L"Lista klientów";
			// 
			// BoxNotatkaKlienta
			// 
			this->BoxNotatkaKlienta->Controls->Add(this->txtNotatkaOKliencie);
			this->BoxNotatkaKlienta->Location = System::Drawing::Point(420, 290);
			this->BoxNotatkaKlienta->Name = L"BoxNotatkaKlienta";
			this->BoxNotatkaKlienta->Size = System::Drawing::Size(207, 175);
			this->BoxNotatkaKlienta->TabIndex = 12;
			this->BoxNotatkaKlienta->TabStop = false;
			this->BoxNotatkaKlienta->Text = L"Notatka o kliencie";
			// 
			// txtNotatkaOKliencie
			// 
			this->txtNotatkaOKliencie->Enabled = false;
			this->txtNotatkaOKliencie->Location = System::Drawing::Point(6, 21);
			this->txtNotatkaOKliencie->Name = L"txtNotatkaOKliencie";
			this->txtNotatkaOKliencie->Size = System::Drawing::Size(195, 148);
			this->txtNotatkaOKliencie->TabIndex = 0;
			this->txtNotatkaOKliencie->Text = L"";
			// 
			// BoxDaneKlienta
			// 
			this->BoxDaneKlienta->Controls->Add(this->txtNrDowodu);
			this->BoxDaneKlienta->Controls->Add(this->label13);
			this->BoxDaneKlienta->Controls->Add(this->txtPesel);
			this->BoxDaneKlienta->Controls->Add(this->label14);
			this->BoxDaneKlienta->Controls->Add(this->txtTelefonK);
			this->BoxDaneKlienta->Controls->Add(this->txtKodPocztowyK);
			this->BoxDaneKlienta->Controls->Add(this->txtMiastoK);
			this->BoxDaneKlienta->Controls->Add(this->txtNrDomuK);
			this->BoxDaneKlienta->Controls->Add(this->label15);
			this->BoxDaneKlienta->Controls->Add(this->label16);
			this->BoxDaneKlienta->Controls->Add(this->label21);
			this->BoxDaneKlienta->Controls->Add(this->label22);
			this->BoxDaneKlienta->Controls->Add(this->txtUlicaK);
			this->BoxDaneKlienta->Controls->Add(this->txtNazwiskoK);
			this->BoxDaneKlienta->Controls->Add(this->txtImieK);
			this->BoxDaneKlienta->Controls->Add(this->txtIDK);
			this->BoxDaneKlienta->Controls->Add(this->label23);
			this->BoxDaneKlienta->Controls->Add(this->label24);
			this->BoxDaneKlienta->Controls->Add(this->label25);
			this->BoxDaneKlienta->Controls->Add(this->label26);
			this->BoxDaneKlienta->Location = System::Drawing::Point(6, 290);
			this->BoxDaneKlienta->Name = L"BoxDaneKlienta";
			this->BoxDaneKlienta->Size = System::Drawing::Size(408, 175);
			this->BoxDaneKlienta->TabIndex = 4;
			this->BoxDaneKlienta->TabStop = false;
			this->BoxDaneKlienta->Text = L"Dane klienta";
			// 
			// txtNrDowodu
			// 
			this->txtNrDowodu->Enabled = false;
			this->txtNrDowodu->Location = System::Drawing::Point(73, 149);
			this->txtNrDowodu->Name = L"txtNrDowodu";
			this->txtNrDowodu->Size = System::Drawing::Size(107, 20);
			this->txtNrDowodu->TabIndex = 21;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(8, 152);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(59, 13);
			this->label13->TabIndex = 20;
			this->label13->Text = L"Nr dowodu";
			// 
			// txtPesel
			// 
			this->txtPesel->Enabled = false;
			this->txtPesel->Location = System::Drawing::Point(73, 118);
			this->txtPesel->Name = L"txtPesel";
			this->txtPesel->Size = System::Drawing::Size(107, 20);
			this->txtPesel->TabIndex = 19;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 121);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 13);
			this->label14->TabIndex = 18;
			this->label14->Text = L"PESEL";
			// 
			// txtTelefonK
			// 
			this->txtTelefonK->Enabled = false;
			this->txtTelefonK->Location = System::Drawing::Point(295, 147);
			this->txtTelefonK->Mask = L"000-000-000";
			this->txtTelefonK->Name = L"txtTelefonK";
			this->txtTelefonK->Size = System::Drawing::Size(106, 20);
			this->txtTelefonK->TabIndex = 17;
			this->txtTelefonK->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			// 
			// txtKodPocztowyK
			// 
			this->txtKodPocztowyK->Enabled = false;
			this->txtKodPocztowyK->Location = System::Drawing::Point(295, 85);
			this->txtKodPocztowyK->Mask = L"00-000";
			this->txtKodPocztowyK->Name = L"txtKodPocztowyK";
			this->txtKodPocztowyK->Size = System::Drawing::Size(106, 20);
			this->txtKodPocztowyK->TabIndex = 16;
			this->txtKodPocztowyK->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			// 
			// txtMiastoK
			// 
			this->txtMiastoK->Enabled = false;
			this->txtMiastoK->Location = System::Drawing::Point(295, 115);
			this->txtMiastoK->Name = L"txtMiastoK";
			this->txtMiastoK->Size = System::Drawing::Size(106, 20);
			this->txtMiastoK->TabIndex = 14;
			// 
			// txtNrDomuK
			// 
			this->txtNrDomuK->Enabled = false;
			this->txtNrDomuK->Location = System::Drawing::Point(295, 52);
			this->txtNrDomuK->Name = L"txtNrDomuK";
			this->txtNrDomuK->Size = System::Drawing::Size(106, 20);
			this->txtNrDomuK->TabIndex = 12;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label15->Location = System::Drawing::Point(203, 150);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(43, 13);
			this->label15->TabIndex = 11;
			this->label15->Text = L"Telefon";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label16->Location = System::Drawing::Point(203, 118);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(38, 13);
			this->label16->TabIndex = 10;
			this->label16->Text = L"Miasto";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label21->Location = System::Drawing::Point(203, 88);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(74, 13);
			this->label21->TabIndex = 9;
			this->label21->Text = L"Kod pocztowy";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label22->Location = System::Drawing::Point(203, 55);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(67, 13);
			this->label22->TabIndex = 8;
			this->label22->Text = L"Numer domu";
			// 
			// txtUlicaK
			// 
			this->txtUlicaK->Enabled = false;
			this->txtUlicaK->Location = System::Drawing::Point(294, 19);
			this->txtUlicaK->Name = L"txtUlicaK";
			this->txtUlicaK->Size = System::Drawing::Size(107, 20);
			this->txtUlicaK->TabIndex = 7;
			// 
			// txtNazwiskoK
			// 
			this->txtNazwiskoK->Enabled = false;
			this->txtNazwiskoK->Location = System::Drawing::Point(73, 86);
			this->txtNazwiskoK->Name = L"txtNazwiskoK";
			this->txtNazwiskoK->Size = System::Drawing::Size(107, 20);
			this->txtNazwiskoK->TabIndex = 6;
			// 
			// txtImieK
			// 
			this->txtImieK->BackColor = System::Drawing::SystemColors::Window;
			this->txtImieK->Enabled = false;
			this->txtImieK->Location = System::Drawing::Point(73, 56);
			this->txtImieK->Name = L"txtImieK";
			this->txtImieK->Size = System::Drawing::Size(107, 20);
			this->txtImieK->TabIndex = 5;
			// 
			// txtIDK
			// 
			this->txtIDK->Enabled = false;
			this->txtIDK->Location = System::Drawing::Point(73, 23);
			this->txtIDK->Name = L"txtIDK";
			this->txtIDK->Size = System::Drawing::Size(107, 20);
			this->txtIDK->TabIndex = 4;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label23->Location = System::Drawing::Point(203, 22);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(31, 13);
			this->label23->TabIndex = 3;
			this->label23->Text = L"Ulica";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label24->Location = System::Drawing::Point(6, 89);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(53, 13);
			this->label24->TabIndex = 2;
			this->label24->Text = L"Nazwisko";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label25->Location = System::Drawing::Point(6, 59);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(26, 13);
			this->label25->TabIndex = 1;
			this->label25->Text = L"Imiê";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label26->Location = System::Drawing::Point(6, 26);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(18, 13);
			this->label26->TabIndex = 0;
			this->label26->Text = L"ID";
			// 
			// btnSzukajKlientow
			// 
			this->btnSzukajKlientow->Location = System::Drawing::Point(552, 17);
			this->btnSzukajKlientow->Name = L"btnSzukajKlientow";
			this->btnSzukajKlientow->Size = System::Drawing::Size(75, 23);
			this->btnSzukajKlientow->TabIndex = 2;
			this->btnSzukajKlientow->Text = L"ZnajdŸ";
			this->btnSzukajKlientow->UseVisualStyleBackColor = true;
			this->btnSzukajKlientow->Click += gcnew System::EventHandler(this, &Rezerwacja::btnSzukajKlientow_Click);
			// 
			// textBoxSzukajKlientow
			// 
			this->textBoxSzukajKlientow->Location = System::Drawing::Point(6, 19);
			this->textBoxSzukajKlientow->Name = L"textBoxSzukajKlientow";
			this->textBoxSzukajKlientow->Size = System::Drawing::Size(540, 20);
			this->textBoxSzukajKlientow->TabIndex = 1;
			this->textBoxSzukajKlientow->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Rezerwacja::textBoxSzukajKlientow_KeyPress);
			// 
			// dataGridViewRegKlienci
			// 
			this->dataGridViewRegKlienci->AllowUserToAddRows = false;
			this->dataGridViewRegKlienci->AllowUserToDeleteRows = false;
			this->dataGridViewRegKlienci->AllowUserToOrderColumns = true;
			this->dataGridViewRegKlienci->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewRegKlienci->Location = System::Drawing::Point(6, 44);
			this->dataGridViewRegKlienci->Name = L"dataGridViewRegKlienci";
			this->dataGridViewRegKlienci->ReadOnly = true;
			this->dataGridViewRegKlienci->Size = System::Drawing::Size(621, 240);
			this->dataGridViewRegKlienci->TabIndex = 0;
			this->dataGridViewRegKlienci->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Rezerwacja::dataGridViewRegKlienci_CellClick);
			// 
			// PageDataCzas
			// 
			this->PageDataCzas->Controls->Add(this->groupBoxDataCzasR);
			this->PageDataCzas->Location = System::Drawing::Point(4, 22);
			this->PageDataCzas->Name = L"PageDataCzas";
			this->PageDataCzas->Size = System::Drawing::Size(645, 482);
			this->PageDataCzas->TabIndex = 2;
			this->PageDataCzas->Text = L"Data&Czas";
			this->PageDataCzas->UseVisualStyleBackColor = true;
			// 
			// groupBoxDataCzasR
			// 
			this->groupBoxDataCzasR->Controls->Add(this->txtRezerwacjaGodzinaStop);
			this->groupBoxDataCzasR->Controls->Add(this->label29);
			this->groupBoxDataCzasR->Controls->Add(this->txtRejestracjaZwrot);
			this->groupBoxDataCzasR->Controls->Add(this->label30);
			this->groupBoxDataCzasR->Controls->Add(this->txtRezerwacjaGodzinaStart);
			this->groupBoxDataCzasR->Controls->Add(this->listBoxGodzinaStop);
			this->groupBoxDataCzasR->Controls->Add(this->listBoxGodzinaStart);
			this->groupBoxDataCzasR->Controls->Add(this->label28);
			this->groupBoxDataCzasR->Controls->Add(this->monthCalendarStop);
			this->groupBoxDataCzasR->Controls->Add(this->txtRezestracjaStart);
			this->groupBoxDataCzasR->Controls->Add(this->label27);
			this->groupBoxDataCzasR->Controls->Add(this->monthCalendarStart);
			this->groupBoxDataCzasR->Location = System::Drawing::Point(3, 3);
			this->groupBoxDataCzasR->Name = L"groupBoxDataCzasR";
			this->groupBoxDataCzasR->Size = System::Drawing::Size(639, 476);
			this->groupBoxDataCzasR->TabIndex = 0;
			this->groupBoxDataCzasR->TabStop = false;
			this->groupBoxDataCzasR->Text = L"Data i czas rezerwacji";
			// 
			// txtRezerwacjaGodzinaStop
			// 
			this->txtRezerwacjaGodzinaStop->Enabled = false;
			this->txtRezerwacjaGodzinaStop->Location = System::Drawing::Point(443, 345);
			this->txtRezerwacjaGodzinaStop->Name = L"txtRezerwacjaGodzinaStop";
			this->txtRezerwacjaGodzinaStop->Size = System::Drawing::Size(151, 20);
			this->txtRezerwacjaGodzinaStop->TabIndex = 11;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(440, 319);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(80, 13);
			this->label29->TabIndex = 10;
			this->label29->Text = L"Godzina zwrotu";
			// 
			// txtRejestracjaZwrot
			// 
			this->txtRejestracjaZwrot->Enabled = false;
			this->txtRejestracjaZwrot->Location = System::Drawing::Point(443, 282);
			this->txtRejestracjaZwrot->Name = L"txtRejestracjaZwrot";
			this->txtRejestracjaZwrot->Size = System::Drawing::Size(151, 20);
			this->txtRejestracjaZwrot->TabIndex = 9;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(440, 255);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(64, 13);
			this->label30->TabIndex = 8;
			this->label30->Text = L"Data zwrotu";
			// 
			// txtRezerwacjaGodzinaStart
			// 
			this->txtRezerwacjaGodzinaStart->Enabled = false;
			this->txtRezerwacjaGodzinaStart->Location = System::Drawing::Point(443, 145);
			this->txtRezerwacjaGodzinaStart->Name = L"txtRezerwacjaGodzinaStart";
			this->txtRezerwacjaGodzinaStart->Size = System::Drawing::Size(151, 20);
			this->txtRezerwacjaGodzinaStart->TabIndex = 7;
			// 
			// listBoxGodzinaStop
			// 
			this->listBoxGodzinaStop->FormattingEnabled = true;
			this->listBoxGodzinaStop->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"01:00", L"02:00", L"03:00", L"04:00",
					L"05:00", L"06:00", L"07:00", L"08:00", L"09:00", L"10:00", L"11:00", L"12:00", L"13:00", L"14:00", L"15:00", L"16:00", L"17:00",
					L"18:00", L"19:00", L"20:00", L"21:00", L"22:00", L"23:00", L"24:00"
			});
			this->listBoxGodzinaStop->Location = System::Drawing::Point(353, 256);
			this->listBoxGodzinaStop->Name = L"listBoxGodzinaStop";
			this->listBoxGodzinaStop->Size = System::Drawing::Size(75, 160);
			this->listBoxGodzinaStop->TabIndex = 6;
			this->listBoxGodzinaStop->SelectedIndexChanged += gcnew System::EventHandler(this, &Rezerwacja::listBoxGodzinaStop_SelectedIndexChanged);
			// 
			// listBoxGodzinaStart
			// 
			this->listBoxGodzinaStart->FormattingEnabled = true;
			this->listBoxGodzinaStart->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"01:00", L"02:00", L"03:00", L"04:00",
					L"05:00", L"06:00", L"07:00", L"08:00", L"09:00", L"10:00", L"11:00", L"12:00", L"13:00", L"14:00", L"15:00", L"16:00", L"17:00",
					L"18:00", L"19:00", L"20:00", L"21:00", L"22:00", L"23:00", L"24:00"
			});
			this->listBoxGodzinaStart->Location = System::Drawing::Point(353, 55);
			this->listBoxGodzinaStart->Name = L"listBoxGodzinaStart";
			this->listBoxGodzinaStart->Size = System::Drawing::Size(75, 160);
			this->listBoxGodzinaStart->TabIndex = 5;
			this->listBoxGodzinaStart->SelectedIndexChanged += gcnew System::EventHandler(this, &Rezerwacja::listBoxGodzinaStart_SelectedIndexChanged);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(440, 119);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(96, 13);
			this->label28->TabIndex = 4;
			this->label28->Text = L"Godzina rezerwacji";
			// 
			// monthCalendarStop
			// 
			this->monthCalendarStop->Location = System::Drawing::Point(50, 256);
			this->monthCalendarStop->Name = L"monthCalendarStop";
			this->monthCalendarStop->ShowWeekNumbers = true;
			this->monthCalendarStop->TabIndex = 3;
			this->monthCalendarStop->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Rezerwacja::monthCalendarStop_DateSelected);
			// 
			// txtRezestracjaStart
			// 
			this->txtRezestracjaStart->Enabled = false;
			this->txtRezestracjaStart->Location = System::Drawing::Point(443, 82);
			this->txtRezestracjaStart->Name = L"txtRezestracjaStart";
			this->txtRezestracjaStart->Size = System::Drawing::Size(151, 20);
			this->txtRezestracjaStart->TabIndex = 2;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(440, 55);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(77, 13);
			this->label27->TabIndex = 1;
			this->label27->Text = L"Data rejestracji";
			// 
			// monthCalendarStart
			// 
			this->monthCalendarStart->Location = System::Drawing::Point(50, 55);
			this->monthCalendarStart->Name = L"monthCalendarStart";
			this->monthCalendarStart->ShowWeekNumbers = true;
			this->monthCalendarStart->TabIndex = 0;
			this->monthCalendarStart->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Rezerwacja::monthCalendarStart_DateSelected);
			// 
			// groupBoxWyjdz
			// 
			this->groupBoxWyjdz->Controls->Add(this->button1);
			this->groupBoxWyjdz->Location = System::Drawing::Point(688, 2);
			this->groupBoxWyjdz->Name = L"groupBoxWyjdz";
			this->groupBoxWyjdz->Size = System::Drawing::Size(182, 46);
			this->groupBoxWyjdz->TabIndex = 21;
			this->groupBoxWyjdz->TabStop = false;
			this->groupBoxWyjdz->Text = L"Opuœæ to okno";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(57, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 19;
			this->button1->Text = L"WyjdŸ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Rezerwacja::button1_Click);
			// 
			// groupBoxPodsumowanie
			// 
			this->groupBoxPodsumowanie->Controls->Add(this->groupBoxPacownik);
			this->groupBoxPodsumowanie->Controls->Add(this->groupBoxCena);
			this->groupBoxPodsumowanie->Controls->Add(this->groupBoxDataCzas);
			this->groupBoxPodsumowanie->Controls->Add(this->groupBoxPodKlient);
			this->groupBoxPodsumowanie->Controls->Add(this->groupBoxPodSamochod);
			this->groupBoxPodsumowanie->Location = System::Drawing::Point(688, 54);
			this->groupBoxPodsumowanie->Name = L"groupBoxPodsumowanie";
			this->groupBoxPodsumowanie->Size = System::Drawing::Size(182, 430);
			this->groupBoxPodsumowanie->TabIndex = 22;
			this->groupBoxPodsumowanie->TabStop = false;
			this->groupBoxPodsumowanie->Text = L"Podsumowanie";
			// 
			// groupBoxPacownik
			// 
			this->groupBoxPacownik->BackColor = System::Drawing::SystemColors::Control;
			this->groupBoxPacownik->Controls->Add(this->labelPracownikNazwisko);
			this->groupBoxPacownik->Controls->Add(this->labelPracownikImie);
			this->groupBoxPacownik->Location = System::Drawing::Point(6, 19);
			this->groupBoxPacownik->Name = L"groupBoxPacownik";
			this->groupBoxPacownik->Size = System::Drawing::Size(170, 66);
			this->groupBoxPacownik->TabIndex = 4;
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
			// groupBoxCena
			// 
			this->groupBoxCena->Controls->Add(this->labelCena);
			this->groupBoxCena->Location = System::Drawing::Point(6, 381);
			this->groupBoxCena->Name = L"groupBoxCena";
			this->groupBoxCena->Size = System::Drawing::Size(170, 43);
			this->groupBoxCena->TabIndex = 3;
			this->groupBoxCena->TabStop = false;
			this->groupBoxCena->Text = L"Koszt";
			// 
			// labelCena
			// 
			this->labelCena->AutoSize = true;
			this->labelCena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelCena->ForeColor = System::Drawing::Color::Red;
			this->labelCena->Location = System::Drawing::Point(44, 16);
			this->labelCena->Name = L"labelCena";
			this->labelCena->Size = System::Drawing::Size(0, 20);
			this->labelCena->TabIndex = 3;
			// 
			// groupBoxDataCzas
			// 
			this->groupBoxDataCzas->Controls->Add(this->LabelCzasStop);
			this->groupBoxDataCzas->Controls->Add(this->LabelDataStop);
			this->groupBoxDataCzas->Controls->Add(this->LabelCzasStart);
			this->groupBoxDataCzas->Controls->Add(this->LabelDataStart);
			this->groupBoxDataCzas->Location = System::Drawing::Point(6, 302);
			this->groupBoxDataCzas->Name = L"groupBoxDataCzas";
			this->groupBoxDataCzas->Size = System::Drawing::Size(170, 73);
			this->groupBoxDataCzas->TabIndex = 2;
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
			// groupBoxPodKlient
			// 
			this->groupBoxPodKlient->Controls->Add(this->labelPesel);
			this->groupBoxPodKlient->Controls->Add(this->labelNazwisko);
			this->groupBoxPodKlient->Controls->Add(this->labelImie);
			this->groupBoxPodKlient->Location = System::Drawing::Point(6, 194);
			this->groupBoxPodKlient->Name = L"groupBoxPodKlient";
			this->groupBoxPodKlient->Size = System::Drawing::Size(170, 100);
			this->groupBoxPodKlient->TabIndex = 1;
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
			// groupBoxPodSamochod
			// 
			this->groupBoxPodSamochod->BackColor = System::Drawing::SystemColors::Control;
			this->groupBoxPodSamochod->Controls->Add(this->labelNrRejestracyjny);
			this->groupBoxPodSamochod->Controls->Add(this->labelModel);
			this->groupBoxPodSamochod->Controls->Add(this->labelMarka);
			this->groupBoxPodSamochod->ForeColor = System::Drawing::Color::Black;
			this->groupBoxPodSamochod->Location = System::Drawing::Point(6, 91);
			this->groupBoxPodSamochod->Name = L"groupBoxPodSamochod";
			this->groupBoxPodSamochod->Size = System::Drawing::Size(170, 97);
			this->groupBoxPodSamochod->TabIndex = 0;
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
			// groupBoxZarezerwujTeraz
			// 
			this->groupBoxZarezerwujTeraz->Controls->Add(this->btnZarezerwuj);
			this->groupBoxZarezerwujTeraz->Location = System::Drawing::Point(688, 490);
			this->groupBoxZarezerwujTeraz->Name = L"groupBoxZarezerwujTeraz";
			this->groupBoxZarezerwujTeraz->Size = System::Drawing::Size(182, 47);
			this->groupBoxZarezerwujTeraz->TabIndex = 23;
			this->groupBoxZarezerwujTeraz->TabStop = false;
			this->groupBoxZarezerwujTeraz->Text = L"Zarezerwuj samochód";
			// 
			// btnZarezerwuj
			// 
			this->btnZarezerwuj->Location = System::Drawing::Point(57, 19);
			this->btnZarezerwuj->Name = L"btnZarezerwuj";
			this->btnZarezerwuj->Size = System::Drawing::Size(75, 23);
			this->btnZarezerwuj->TabIndex = 0;
			this->btnZarezerwuj->Text = L"Zarejestruj";
			this->btnZarezerwuj->UseVisualStyleBackColor = true;
			this->btnZarezerwuj->Click += gcnew System::EventHandler(this, &Rezerwacja::btnZarezerwuj_Click);
			// 
			// OdswierzCene
			// 
			this->OdswierzCene->Enabled = true;
			this->OdswierzCene->Tick += gcnew System::EventHandler(this, &Rezerwacja::OdswierzCene_Tick);
			// 
			// Rezerwacja
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(879, 551);
			this->ControlBox = false;
			this->Controls->Add(this->groupBoxZarezerwujTeraz);
			this->Controls->Add(this->groupBoxPodsumowanie);
			this->Controls->Add(this->groupBoxWyjdz);
			this->Controls->Add(this->groupBoxSamochody);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Rezerwacja";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Rezerwacja";
			this->Load += gcnew System::EventHandler(this, &Rezerwacja::Rezerwacja_Load);
			this->groupBoxSamochody->ResumeLayout(false);
			this->tabControlDaneRezerwacji->ResumeLayout(false);
			this->PageSamochody->ResumeLayout(false);
			this->groupBoxListaAut->ResumeLayout(false);
			this->groupBoxListaAut->PerformLayout();
			this->groupBoxDaneSamochodu->ResumeLayout(false);
			this->groupBoxDaneSamochodu->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSamochody))->EndInit();
			this->PageKlienci->ResumeLayout(false);
			this->groupBoxKlienci->ResumeLayout(false);
			this->groupBoxKlienci->PerformLayout();
			this->BoxNotatkaKlienta->ResumeLayout(false);
			this->BoxDaneKlienta->ResumeLayout(false);
			this->BoxDaneKlienta->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewRegKlienci))->EndInit();
			this->PageDataCzas->ResumeLayout(false);
			this->groupBoxDataCzasR->ResumeLayout(false);
			this->groupBoxDataCzasR->PerformLayout();
			this->groupBoxWyjdz->ResumeLayout(false);
			this->groupBoxPodsumowanie->ResumeLayout(false);
			this->groupBoxPacownik->ResumeLayout(false);
			this->groupBoxPacownik->PerformLayout();
			this->groupBoxCena->ResumeLayout(false);
			this->groupBoxCena->PerformLayout();
			this->groupBoxDataCzas->ResumeLayout(false);
			this->groupBoxDataCzas->PerformLayout();
			this->groupBoxPodKlient->ResumeLayout(false);
			this->groupBoxPodKlient->PerformLayout();
			this->groupBoxPodSamochod->ResumeLayout(false);
			this->groupBoxPodSamochod->PerformLayout();
			this->groupBoxZarezerwujTeraz->ResumeLayout(false);
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
private: int IleDniMiedzyDatami()
{
	const int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	long int n1 = DataStartRok * 365 + DataStartDzien;

	for (int i = 0; i < DataStartMiesiac - 1; i++)
		n1 += monthDays[i];
	n1 += CzyRokPrzestepny(DataStartMiesiac, DataStartRok);

	long int n2 = DataStopRok * 365 + DataStopDzien;
	for (int i = 0; i < DataStopMiesiac - 1; i++)
		n2 += monthDays[i];
	n2 += CzyRokPrzestepny(DataStopMiesiac, DataStopRok);

	return(n2 - n1);
}
//Funkja pomocnicza - Wyszukuje klientów
private: void SzukajKlientow()
{
	if (textBoxSzukajKlientow->Text->Length != 0) {
		MySqlConnection^ PolaczDoSQL = gcnew MySqlConnection(BazaDanychSQL);
		MySqlCommand^ Zapytanie = gcnew MySqlCommand("SELECT ID_Klient AS ID, Nazwisko, Imie AS Imiê, Ulica, Numer_domu AS 'Numer domu', Kod_pocztowy AS 'Kod pocztowy', Miasto, Telefon, Notatka, Pesel, NrDowodu AS 'Numer dowodu' FROM Klient where CONCAT(Imie,' ', Nazwisko) LIKE '%" + textBoxSzukajKlientow->Text + "%' ORDER BY Nazwisko;", PolaczDoSQL);

		try {
			MySqlDataAdapter^ Dane = gcnew MySqlDataAdapter();
			Dane->SelectCommand = Zapytanie;
			DataTable^ Tabela = gcnew DataTable();
			Dane->Fill(Tabela);

			BindingSource^ Zrodlo = gcnew BindingSource();
			Zrodlo->DataSource = Tabela;
			dataGridViewRegKlienci->DataSource = Zrodlo;
			PolaczDoSQL->Close();
		}
		catch (Exception^ Komunikat) {
			MessageBox::Show(Komunikat->Message);
		}
	}
	else
	{
		MessageBox::Show("Proszê wpisaæ imiê lub nazwisko klienta!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
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
		PozyskajISprawdz();
	}
	else
	{
		MessageBox::Show("Proszê wpisaæ markê lub model samochodu!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
//Funkcja pomocnicza wyliczaj¹ca cenê
private: void ObliczCene()
{
	int hours;
	System::Decimal cena;
	PobierzDate();

	if((CzyDataPrawid³owa(dataI, dataII)) && (txtCena->Text->Length))
	{
		//Liczymy godziny
		hours = ((((IleDniMiedzyDatami()) * 24) - time1) + time2);
		//Liczymy koszt wynajmu auta
		cena = Cena_samochodu*(Decimal)hours;
		
		//Zmienna globalna potrzebna do zapisu ceny do bazy
		CenaDoBazy = Convert::ToString(cena);
		CenaDoBazy = CenaDoBazy->Replace(",", ".");
		
		labelCena->Text = Convert::ToString(cena) + " z³";
	}
	else
	{
		labelCena->Text = "";
	}
}
//Funkcja pomocnicza wyœwietlaj¹ca kto jest zalogowany
private: void KtoJestZalogowany()
{
	String^ Imie;
	String^ Nazwisko;

	MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ Question = gcnew MySqlCommand("select Imie, Nazwisko from Informacja WHERE ID_Informacja = '"+ID_U+"' ;",Connect);
	MySqlDataReader^ ReadData;

	try {
		Connect->Open();
		ReadData = Question->ExecuteReader();
		if (ReadData->Read())
		{
			Imie = ReadData->GetString(0);
			Nazwisko = ReadData->GetString(1);
		}
		else {
			MessageBox::Show("Nie mo¿na pozystaæ informacji o zalogowanym pracowniku!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	Connect->Close();

	labelPracownikImie->Text = Imie;
	labelPracownikNazwisko->Text = Nazwisko;
}
//Funkcja pomocnicza sprawdzaj¹ca czy wymagane 
private: bool CzyPolaWypelnione(Control^ e)
{
	bool final = true;

	for each(Control^ element in e->Controls)
	{
		if (element->GetType() == Label::typeid)
		{
			if (element->Text == "")
				final = false;
		}
	}

	return final;
}
//Funkcja pobieraj¹ca datê jak¹ wybra³ u¿ytkownik
private: void PobierzDate()
{
	DataStartDzien = Convert::ToInt32(monthCalendarStart->SelectionStart.Day.ToString());
	DataStartMiesiac = Convert::ToInt32(monthCalendarStart->SelectionStart.Month.ToString());
	DataStartRok = Convert::ToInt32(monthCalendarStart->SelectionStart.Year.ToString());

	DataStopDzien = Convert::ToInt32(monthCalendarStop->SelectionStart.Day.ToString());
	DataStopMiesiac = Convert::ToInt32(monthCalendarStop->SelectionStart.Month.ToString());
	DataStopRok = Convert::ToInt32(monthCalendarStop->SelectionStart.Year.ToString());

	//Wynik uzyskamy w dniach
	dataI = DataStartDzien + DataStartMiesiac * 100 + DataStartRok * 10000;
	dataII = DataStopDzien + DataStopMiesiac * 100 + DataStopRok * 10000;
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
//Funkcja pomocnicza sprawdzaj¹ca czy samochód zosta³ wyporzyczony 
private: bool CzySamochodWyporzyczony(int IdAuta)
{
	bool final = false;

	MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ Question = gcnew MySqlCommand("select CzyOddany from Rezerwacja WHERE ID_Samochod = '"+IdAuta+"' AND CzyOddany = 0;",Connect);
	MySqlDataReader^ ReadData;

	try {
		Connect->Open();
		ReadData = Question->ExecuteReader();
		if (ReadData->Read())
			final = true;
		
		Connect->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	Connect->Clone();

	return final;
}
//Funkcja pomocnicza sprawdzaj¹ca czy samochód jest w serwisie
private: bool CzySamochodWSerwisie(int IdAuta)
{
	bool final = false;

	MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ Question = gcnew MySqlCommand("select CzyNaprawiony from Naprawa WHERE ID_Samochod = '" + IdAuta + "' AND CzyNaprawiony = 0;", Connect);
	MySqlDataReader^ ReadData;

	try {
		Connect->Open();
		ReadData = Question->ExecuteReader();
		if (ReadData->Read())
			final = true;
		Connect->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	Connect->Clone();

	return final;
}
//Funkcja pomocnicza pobieraj¹ca ID auta i sprawdzaj¹ca po ID czy auto jest zarezerwowane i czy jest w serwisie(wyœwietla na czerwono)
private: void PozyskajISprawdz()
{
	for each(DataGridViewRow^ Row in dataGridViewSamochody->Rows)
	{
		if ( (CzySamochodWyporzyczony(Convert::ToInt32(Row->Cells["ID"]->Value))) || (CzySamochodWSerwisie(Convert::ToInt32(Row->Cells["ID"]->Value))))
		{
			Row->DefaultCellStyle->BackColor = Color::Red;
		}
	}
}


//Zamknij okno
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->Close();
}
//Szukaj klienta
private: System::Void btnSzukajKlientow_Click(System::Object^  sender, System::EventArgs^  e)
{
	SzukajKlientow();
}
//Szukaj klienta - ENTER
private: System::Void textBoxSzukajKlientow_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
{
	if(e->KeyChar == (char)13)
		SzukajKlientow();
}
//Klikniêcie w wybrany rekord przypisze dane do odpowiednich pól - Klient
private: System::Void dataGridViewRegKlienci_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) 
{
	if (e->RowIndex >= 0) {
		id_rekordu_klienta = Convert::ToInt32(dataGridViewRegKlienci->Rows[e->RowIndex]->Cells["ID"]->Value);
		txtIDK->Text = Convert::ToString(id_rekordu_klienta);
		txtImieK->Text = dataGridViewRegKlienci->Rows[e->RowIndex]->Cells["Imiê"]->Value->ToString();
		txtNazwiskoK->Text = dataGridViewRegKlienci->Rows[e->RowIndex]->Cells["Nazwisko"]->Value->ToString();
		txtUlicaK->Text = dataGridViewRegKlienci->Rows[e->RowIndex]->Cells["Ulica"]->Value->ToString();
		txtNrDomuK->Text = dataGridViewRegKlienci->Rows[e->RowIndex]->Cells["Numer domu"]->Value->ToString();
		txtKodPocztowyK->Text = dataGridViewRegKlienci->Rows[e->RowIndex]->Cells["Kod pocztowy"]->Value->ToString();
		txtMiastoK->Text = dataGridViewRegKlienci->Rows[e->RowIndex]->Cells["Miasto"]->Value->ToString();
		txtTelefonK->Text = dataGridViewRegKlienci->Rows[e->RowIndex]->Cells["Telefon"]->Value->ToString();
		txtNotatkaOKliencie->Text = dataGridViewRegKlienci->Rows[e->RowIndex]->Cells["Notatka"]->Value->ToString();
		txtPesel->Text = dataGridViewRegKlienci->Rows[e->RowIndex]->Cells["Pesel"]->Value->ToString();
		txtNrDowodu->Text = dataGridViewRegKlienci->Rows[e->RowIndex]->Cells["Numer dowodu"]->Value->ToString();
	}

	labelImie->Text = txtImieK->Text;
	labelNazwisko->Text = txtNazwiskoK->Text;
	labelPesel->Text = txtPesel->Text;
}
//Wyszukanie samochodu wg ustalonego kryterium
private: System::Void btnSzukaj_Click(System::Object^  sender, System::EventArgs^  e) 
{
	WyszukajSamochod();
}
//Wyszukanie samochodu wg ustalonego kryterium - ENTER
private: System::Void txtSzukajSamochod_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
{
	if (e->KeyChar == (char)13)
		WyszukajSamochod();
}
//Klikniêcie w wybrany rekord przypisze dane do odpowiednich pól - Samochód
private: System::Void dataGridViewSamochody_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) 
{
	if (e->RowIndex >= 0) {
		id_rekordu_samochodu = Convert::ToInt32(dataGridViewSamochody->Rows[e->RowIndex]->Cells["ID"]->Value);
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

	labelMarka->Text = txtMarka->Text;
	labelModel->Text = txtModel->Text;
	labelNrRejestracyjny->Text = txtNrRejestracyjny->Text;
	groupBoxCena->Text = "Koszt: " + txtCena->Text + " z³/h";
	Cena_samochodu = Convert::ToDecimal(txtCena->Text);
}
//Pokazuje wszystkie samochody w bazie
private: System::Void btnPokazSamochody_Click(System::Object^  sender, System::EventArgs^  e) 
{
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

	PozyskajISprawdz();
}
//Kalendarz - rezerwacja start
private: System::Void monthCalendarStart_DateSelected(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) 
{
	DataRezerwacji = String::Format(e->Start.ToShortDateString());
	txtRezestracjaStart->Text = DataRezerwacji;

	LabelDataStart->Text = DataRezerwacji;
}
//Kalendarz - zwrot
private: System::Void monthCalendarStop_DateSelected(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e)
{
	DataZwrotu = String::Format(e->Start.ToShortDateString());
	txtRejestracjaZwrot->Text = DataZwrotu;

	LabelDataStop->Text = DataZwrotu;
}
//Lista godzin - rezerwacja
private: System::Void listBoxGodzinaStart_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
{
	String^ czas;
	txtRezerwacjaGodzinaStart->Text = listBoxGodzinaStart->SelectedItem->ToString();
	czas = txtRezerwacjaGodzinaStart->Text->ToString();

	LabelCzasStart->Text = listBoxGodzinaStart->SelectedItem->ToString();

	if (czas == "01:00")
	{
		time1 = 1;
	}
	if (czas == "02:00")
	{
		time1 = 2;
	}
	if (czas == "03:00")
	{
		time1 = 3;
	}
	if (czas == "04:00")
	{
		time1 = 4;
	}
	if (czas == "05:00")
	{
		time1 = 5;
	}
	if (czas == "06:00")
	{
		time1 = 6;
	}
	if (czas == "07:00")
	{
		time1 = 7;
	}
	if (czas == "08:00")
	{
		time1 = 8;
	}
	if (czas == "09:00")
	{
		time1 = 9;
	}
	if (czas == "10:00")
	{
		time1 = 10;
	}
	if (czas == "11:00")
	{
		time1 = 11;
	}
	if (czas == "12:00")
	{
		time1 = 12;
	}
	if (czas == "13:00")
	{
		time1 = 13;
	}
	if (czas == "14:00")
	{
		time1 = 14;
	}
	if (czas == "15:00")
	{
		time1 = 15;
	}
	if (czas == "16:00")
	{
		time1 = 16;
	}
	if (czas == "17:00")
	{
		time1 = 17;
	}
	if (czas == "18:00")
	{
		time1 = 18;
	}
	if (czas == "19:00")
	{
		time1 = 19;
	}
	if (czas == "20:00")
	{
		time1 = 20;
	}
	if (czas == "21:00")
	{
		time1 = 21;
	}
	if (czas == "22:00")
	{
		time1 = 2;
	}
	if (czas == "23:00")
	{
		time1 = 23;
	}
	if (czas == "24:00")
	{
		time1 = 24;
	}
}
//Lista godzin - zwrot
private: System::Void listBoxGodzinaStop_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
{
	String^ czas;
	txtRezerwacjaGodzinaStop->Text = listBoxGodzinaStop->SelectedItem->ToString();
	czas = txtRezerwacjaGodzinaStop->Text->ToString();

	LabelCzasStop->Text = listBoxGodzinaStop->SelectedItem->ToString();

	if (czas == "01:00")
	{
		time2 = 1;
	}
	if (czas == "02:00")
	{
		time2 = 2;
	}
	if (czas == "03:00")
	{
		time2 = 3;
	}
	if (czas == "04:00")
	{
		time2 = 4;
	}
	if (czas == "05:00")
	{
		time2 = 5;
	}
	if (czas == "06:00")
	{
		time2 = 6;
	}
	if (czas == "07:00")
	{
		time2 = 7;
	}
	if (czas == "08:00")
	{
		time2 = 8;
	}
	if (czas == "09:00")
	{
		time2 = 9;
	}
	if (czas == "10:00")
	{
		time2 = 10;
	}
	if (czas == "11:00")
	{
		time2 = 11;
	}
	if (czas == "12:00")
	{
		time2 = 12;
	}
	if (czas == "13:00")
	{
		time2 = 13;
	}
	if (czas == "14:00")
	{
		time2 = 14;
	}
	if (czas == "15:00")
	{
		time2 = 15;
	}
	if (czas == "16:00")
	{
		time2 = 16;
	}
	if (czas == "17:00")
	{
		time2 = 17;
	}
	if (czas == "18:00")
	{
		time2 = 18;
	}
	if (czas == "19:00")
	{
		time2 = 19;
	}
	if (czas == "20:00")
	{
		time2 = 20;
	}
	if (czas == "21:00")
	{
		time2 = 21;
	}
	if (czas == "22:00")
	{
		time2 = 2;
	}
	if (czas == "23:00")
	{
		time2 = 23;
	}
	if (czas == "24:00")
	{
		time2 = 24;
	}
}
//Rejestracja
private: System::Void btnZarezerwuj_Click(System::Object^  sender, System::EventArgs^  e) 
{
	bool final = true;

		if (CzyPolaWypelnione(groupBoxPodSamochod) == false)
		{
			groupBoxPodSamochod->ForeColor = ForeColor.Red;
			final = false;
		}
		if (CzyPolaWypelnione(groupBoxPodKlient) == false)
		{
			groupBoxPodKlient->ForeColor = ForeColor.Red;
			final = false;
		}
		if (CzyPolaWypelnione(groupBoxDataCzas) == false)
		{
			groupBoxDataCzas->ForeColor = ForeColor.Red;
			final = false;
		}

		PobierzDate();

		if (final && (CzyDataPrawid³owa(dataI, dataII)))
		{
			if ((CzySamochodWyporzyczony(id_rekordu_samochodu) == false) && (CzySamochodWSerwisie(id_rekordu_samochodu) == false)) {
				if (MessageBox::Show("Czy napewno chcesz zarezerwowaæ samochód " + labelMarka->Text + " " + labelModel->Text + " ?", "Rezerwacja samochodu!", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
					MySqlConnection^ SqlPolacz2 = gcnew MySqlConnection(BazaDanychSQL);
					MySqlCommand^ polecenie2 = SqlPolacz2->CreateCommand();
					MySqlTransaction^ transakcja2;
					SqlPolacz2->Open();
					transakcja2 = SqlPolacz2->BeginTransaction(IsolationLevel::ReadCommitted);
					polecenie2->Connection = SqlPolacz2;
					polecenie2->Transaction = transakcja2;

					try {
						polecenie2->CommandText = "INSERT INTO Rezerwacja SET ID_Klient ='" + id_rekordu_klienta + "', ID_Pracownik = '" + ID_U + "', ID_Samochod = '" + id_rekordu_samochodu + "', Data_rezerwacji = '" + LabelDataStart->Text + "', Godzina_rezerwacji = '" + LabelCzasStart->Text + "', Data_zwrotu = '" + LabelDataStop->Text + "', Godzina_zwrotu = '" + LabelCzasStop->Text + "', Cena = '" + CenaDoBazy + "', CzyOddany = 0;";
						polecenie2->ExecuteNonQuery();
						transakcja2->Commit(); //zatwierdzenie transakcji
						MessageBox::Show("Pomyœlnie zarezerwowano samochód " + labelMarka->Text + " " + labelModel->Text + " !", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);
						groupBoxPodSamochod->ForeColor = ForeColor.Black;
						groupBoxPodKlient->ForeColor = ForeColor.Black;
						groupBoxDataCzas->ForeColor = ForeColor.Black;
					}
					catch (Exception^ komunikat) {
						MessageBox::Show(komunikat->Message);
						transakcja2->Rollback(); //wycofaj wszelkie zmiany, zapisy itp.
					}
					SqlPolacz2->Close();
					this->Close();
				}
			}
			else
			{
				MessageBox::Show("Samochód " + labelMarka->Text + " " + labelModel->Text + " zosta³ ju¿ zarezerwowany lub znajduje siê w serwisie!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else
		{
			MessageBox::Show("Nie uda³o siê zarezerwowaæ samochodu, poniewa¿ nie ponano wszystkich wymaganych informacji lub s¹ one nieprawid³owe!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}

}
//Wczytywanie formatki
private: System::Void Rezerwacja_Load(System::Object^  sender, System::EventArgs^  e) 
{
	KtoJestZalogowany();
}
//Timer które na bie¿¹co oblicza cenê wynajmu samochodu
private: System::Void OdswierzCene_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	if (CzyPolaWypelnione(groupBoxDataCzas))
	{
		ObliczCene();
	}
}
};
}
