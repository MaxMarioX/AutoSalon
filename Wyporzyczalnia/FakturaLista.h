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
	/// Summary for FakturaLista
	/// </summary>
	public ref class FakturaLista : public System::Windows::Forms::Form
	{
	public: int ID_U;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	public:



	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  labelDoZaplaty;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::Label^  labelRabat;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  labelCenaZVAT4;
	private: System::Windows::Forms::Label^  labelKwotaPodatku4;
	private: System::Windows::Forms::Label^  labelVAT4;
	private: System::Windows::Forms::Label^  labelCena4;
	private: System::Windows::Forms::Label^  labelCenaZVAT3;
	private: System::Windows::Forms::Label^  labelKwotaPodatku3;
	private: System::Windows::Forms::Label^  labelVAT3;
	private: System::Windows::Forms::Label^  labelCena3;
	private: System::Windows::Forms::Label^  labelCenaZVAT2;
	private: System::Windows::Forms::Label^  labelKwotaPodatku2;
	private: System::Windows::Forms::Label^  labelVAT2;
	private: System::Windows::Forms::Label^  labelCena2;
	private: System::Windows::Forms::Label^  labelCenaZVAT1;
	private: System::Windows::Forms::Label^  labelKwotaPodatku1;
	private: System::Windows::Forms::Label^  labelVAT1;
	private: System::Windows::Forms::Label^  LabelCena1;
	private: System::Windows::Forms::Label^  LabelDodatkowe;
	private: System::Windows::Forms::Label^  LabelNaprawa;
	private: System::Windows::Forms::Label^  LabelSpoznienie;
	private: System::Windows::Forms::Label^  LabelNazwaSamochodu;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::PictureBox^  pictureBox39;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::TextBox^  txtIDKlienta;

	private: System::Windows::Forms::Button^  btnSzukaj;
	private: System::Windows::Forms::DataGridView^  dataGridViewFaktury;


	private: System::Windows::Forms::Label^  labelKlient;
	public: System::Int32 KlientID = 0;
	public: String^ BazaDanychSQL;
	public: String^ Imie;
	public: String^ Nazwisko;
	public: System::Int64 Pesel;
	public: System::Int32 ID_Faktury;
	public: String^ DataZwrotu;
	public: String^ GodzinaZwrotu;

	public: int ID_Samochod = 0;
	public: int ID_RezerwacjaZwrot = 0;

	public: String^ KaraNaprawa;   public: Double KaraNaprawa1a;

	public: String^ KaraTermin;	   public: Double KaraTermin1a;

	public: String^ KaraDodatkowa; public: Double KaraDodatkowa1a;

	public: String^ Rabat;		   public: Double Rabat1a;

	public: String^ CenaRejestracja; public: Double CenaRejestracja1a;

	public: String^ VAT = "23";	   public: Double VATa = 0.23;

	public: String^ KwotaPodatku1; public: Double KwotaPodatku1a;
	public: String^ CenaZVAT1;	   public: Double CenaZVAT1a;

	public: String^ KwotaPodatku2; public: Double KwotaPodatku2a;
	public: String^ CenaZVAT2;	   public: Double CenaZVAT2a;

	public: String^ KwotaPodatku3; public: Double KwotaPodatku3a;
	public: String^ CenaZVAT3;	   public: Double CenaZVAT3a;

	public: String^ KwotaPodatku4; public: Double KwotaPodatku4a;
	public: String^ CenaZVAT4;	   public: Double CenaZVAT4a;

	public: String^ CenaDoZaplaty; //public: Double CenaDoZaplaty1a;

	public:
		FakturaLista(int id_uzytkownik, String^ konfiguracja)
		{
			InitializeComponent();

			BazaDanychSQL = konfiguracja;
			ID_U = id_uzytkownik;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FakturaLista()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->labelDoZaplaty = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->labelRabat = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->labelCenaZVAT4 = (gcnew System::Windows::Forms::Label());
			this->labelKwotaPodatku4 = (gcnew System::Windows::Forms::Label());
			this->labelVAT4 = (gcnew System::Windows::Forms::Label());
			this->labelCena4 = (gcnew System::Windows::Forms::Label());
			this->labelCenaZVAT3 = (gcnew System::Windows::Forms::Label());
			this->labelKwotaPodatku3 = (gcnew System::Windows::Forms::Label());
			this->labelVAT3 = (gcnew System::Windows::Forms::Label());
			this->labelCena3 = (gcnew System::Windows::Forms::Label());
			this->labelCenaZVAT2 = (gcnew System::Windows::Forms::Label());
			this->labelKwotaPodatku2 = (gcnew System::Windows::Forms::Label());
			this->labelVAT2 = (gcnew System::Windows::Forms::Label());
			this->labelCena2 = (gcnew System::Windows::Forms::Label());
			this->labelCenaZVAT1 = (gcnew System::Windows::Forms::Label());
			this->labelKwotaPodatku1 = (gcnew System::Windows::Forms::Label());
			this->labelVAT1 = (gcnew System::Windows::Forms::Label());
			this->LabelCena1 = (gcnew System::Windows::Forms::Label());
			this->LabelDodatkowe = (gcnew System::Windows::Forms::Label());
			this->LabelNaprawa = (gcnew System::Windows::Forms::Label());
			this->LabelSpoznienie = (gcnew System::Windows::Forms::Label());
			this->LabelNazwaSamochodu = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->txtIDKlienta = (gcnew System::Windows::Forms::TextBox());
			this->btnSzukaj = (gcnew System::Windows::Forms::Button());
			this->dataGridViewFaktury = (gcnew System::Windows::Forms::DataGridView());
			this->labelKlient = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewFaktury))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(21, 312);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"WyjdŸ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FakturaLista::button1_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Blue;
			this->pictureBox3->Location = System::Drawing::Point(21, 58);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(395, 10);
			this->pictureBox3->TabIndex = 25;
			this->pictureBox3->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(16, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(82, 25);
			this->label7->TabIndex = 21;
			this->label7->Text = L"KLIENT";
			// 
			// labelDoZaplaty
			// 
			this->labelDoZaplaty->AutoSize = true;
			this->labelDoZaplaty->BackColor = System::Drawing::Color::Blue;
			this->labelDoZaplaty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelDoZaplaty->ForeColor = System::Drawing::Color::White;
			this->labelDoZaplaty->Location = System::Drawing::Point(572, 309);
			this->labelDoZaplaty->Name = L"labelDoZaplaty";
			this->labelDoZaplaty->Size = System::Drawing::Size(0, 13);
			this->labelDoZaplaty->TabIndex = 152;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Blue;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(449, 307);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(79, 17);
			this->label22->TabIndex = 151;
			this->label22->Text = L"Do zap³aty:";
			// 
			// pictureBox34
			// 
			this->pictureBox34->BackColor = System::Drawing::Color::Blue;
			this->pictureBox34->Location = System::Drawing::Point(415, 300);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(286, 31);
			this->pictureBox34->TabIndex = 150;
			this->pictureBox34->TabStop = false;
			// 
			// labelRabat
			// 
			this->labelRabat->AutoSize = true;
			this->labelRabat->BackColor = System::Drawing::Color::Blue;
			this->labelRabat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelRabat->ForeColor = System::Drawing::Color::White;
			this->labelRabat->Location = System::Drawing::Point(572, 269);
			this->labelRabat->Name = L"labelRabat";
			this->labelRabat->Size = System::Drawing::Size(0, 13);
			this->labelRabat->TabIndex = 149;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Blue;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label23->ForeColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(350, 269);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(179, 17);
			this->label23->TabIndex = 148;
			this->label23->Text = L"Udzielono rabatu w kwocie:";
			// 
			// labelCenaZVAT4
			// 
			this->labelCenaZVAT4->AutoSize = true;
			this->labelCenaZVAT4->BackColor = System::Drawing::Color::Blue;
			this->labelCenaZVAT4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelCenaZVAT4->ForeColor = System::Drawing::Color::White;
			this->labelCenaZVAT4->Location = System::Drawing::Point(573, 234);
			this->labelCenaZVAT4->Name = L"labelCenaZVAT4";
			this->labelCenaZVAT4->Size = System::Drawing::Size(0, 13);
			this->labelCenaZVAT4->TabIndex = 147;
			// 
			// labelKwotaPodatku4
			// 
			this->labelKwotaPodatku4->AutoSize = true;
			this->labelKwotaPodatku4->BackColor = System::Drawing::Color::Blue;
			this->labelKwotaPodatku4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelKwotaPodatku4->ForeColor = System::Drawing::Color::White;
			this->labelKwotaPodatku4->Location = System::Drawing::Point(451, 235);
			this->labelKwotaPodatku4->Name = L"labelKwotaPodatku4";
			this->labelKwotaPodatku4->Size = System::Drawing::Size(0, 13);
			this->labelKwotaPodatku4->TabIndex = 146;
			// 
			// labelVAT4
			// 
			this->labelVAT4->AutoSize = true;
			this->labelVAT4->BackColor = System::Drawing::Color::Blue;
			this->labelVAT4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelVAT4->ForeColor = System::Drawing::Color::White;
			this->labelVAT4->Location = System::Drawing::Point(363, 234);
			this->labelVAT4->Name = L"labelVAT4";
			this->labelVAT4->Size = System::Drawing::Size(0, 13);
			this->labelVAT4->TabIndex = 145;
			// 
			// labelCena4
			// 
			this->labelCena4->AutoSize = true;
			this->labelCena4->BackColor = System::Drawing::Color::Blue;
			this->labelCena4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelCena4->ForeColor = System::Drawing::Color::White;
			this->labelCena4->Location = System::Drawing::Point(278, 234);
			this->labelCena4->Name = L"labelCena4";
			this->labelCena4->Size = System::Drawing::Size(0, 13);
			this->labelCena4->TabIndex = 144;
			// 
			// labelCenaZVAT3
			// 
			this->labelCenaZVAT3->AutoSize = true;
			this->labelCenaZVAT3->BackColor = System::Drawing::Color::Blue;
			this->labelCenaZVAT3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelCenaZVAT3->ForeColor = System::Drawing::Color::White;
			this->labelCenaZVAT3->Location = System::Drawing::Point(574, 197);
			this->labelCenaZVAT3->Name = L"labelCenaZVAT3";
			this->labelCenaZVAT3->Size = System::Drawing::Size(0, 13);
			this->labelCenaZVAT3->TabIndex = 143;
			// 
			// labelKwotaPodatku3
			// 
			this->labelKwotaPodatku3->AutoSize = true;
			this->labelKwotaPodatku3->BackColor = System::Drawing::Color::Blue;
			this->labelKwotaPodatku3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelKwotaPodatku3->ForeColor = System::Drawing::Color::White;
			this->labelKwotaPodatku3->Location = System::Drawing::Point(450, 197);
			this->labelKwotaPodatku3->Name = L"labelKwotaPodatku3";
			this->labelKwotaPodatku3->Size = System::Drawing::Size(0, 13);
			this->labelKwotaPodatku3->TabIndex = 142;
			// 
			// labelVAT3
			// 
			this->labelVAT3->AutoSize = true;
			this->labelVAT3->BackColor = System::Drawing::Color::Blue;
			this->labelVAT3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelVAT3->ForeColor = System::Drawing::Color::White;
			this->labelVAT3->Location = System::Drawing::Point(362, 196);
			this->labelVAT3->Name = L"labelVAT3";
			this->labelVAT3->Size = System::Drawing::Size(0, 13);
			this->labelVAT3->TabIndex = 141;
			// 
			// labelCena3
			// 
			this->labelCena3->AutoSize = true;
			this->labelCena3->BackColor = System::Drawing::Color::Blue;
			this->labelCena3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelCena3->ForeColor = System::Drawing::Color::White;
			this->labelCena3->Location = System::Drawing::Point(278, 197);
			this->labelCena3->Name = L"labelCena3";
			this->labelCena3->Size = System::Drawing::Size(0, 13);
			this->labelCena3->TabIndex = 140;
			// 
			// labelCenaZVAT2
			// 
			this->labelCenaZVAT2->AutoSize = true;
			this->labelCenaZVAT2->BackColor = System::Drawing::Color::Blue;
			this->labelCenaZVAT2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelCenaZVAT2->ForeColor = System::Drawing::Color::White;
			this->labelCenaZVAT2->Location = System::Drawing::Point(574, 160);
			this->labelCenaZVAT2->Name = L"labelCenaZVAT2";
			this->labelCenaZVAT2->Size = System::Drawing::Size(0, 13);
			this->labelCenaZVAT2->TabIndex = 139;
			// 
			// labelKwotaPodatku2
			// 
			this->labelKwotaPodatku2->AutoSize = true;
			this->labelKwotaPodatku2->BackColor = System::Drawing::Color::Blue;
			this->labelKwotaPodatku2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelKwotaPodatku2->ForeColor = System::Drawing::Color::White;
			this->labelKwotaPodatku2->Location = System::Drawing::Point(450, 160);
			this->labelKwotaPodatku2->Name = L"labelKwotaPodatku2";
			this->labelKwotaPodatku2->Size = System::Drawing::Size(0, 13);
			this->labelKwotaPodatku2->TabIndex = 138;
			// 
			// labelVAT2
			// 
			this->labelVAT2->AutoSize = true;
			this->labelVAT2->BackColor = System::Drawing::Color::Blue;
			this->labelVAT2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelVAT2->ForeColor = System::Drawing::Color::White;
			this->labelVAT2->Location = System::Drawing::Point(362, 160);
			this->labelVAT2->Name = L"labelVAT2";
			this->labelVAT2->Size = System::Drawing::Size(0, 13);
			this->labelVAT2->TabIndex = 137;
			// 
			// labelCena2
			// 
			this->labelCena2->AutoSize = true;
			this->labelCena2->BackColor = System::Drawing::Color::Blue;
			this->labelCena2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelCena2->ForeColor = System::Drawing::Color::White;
			this->labelCena2->Location = System::Drawing::Point(278, 160);
			this->labelCena2->Name = L"labelCena2";
			this->labelCena2->Size = System::Drawing::Size(0, 13);
			this->labelCena2->TabIndex = 136;
			// 
			// labelCenaZVAT1
			// 
			this->labelCenaZVAT1->AutoSize = true;
			this->labelCenaZVAT1->BackColor = System::Drawing::Color::Blue;
			this->labelCenaZVAT1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelCenaZVAT1->ForeColor = System::Drawing::Color::White;
			this->labelCenaZVAT1->Location = System::Drawing::Point(574, 123);
			this->labelCenaZVAT1->Name = L"labelCenaZVAT1";
			this->labelCenaZVAT1->Size = System::Drawing::Size(0, 13);
			this->labelCenaZVAT1->TabIndex = 135;
			// 
			// labelKwotaPodatku1
			// 
			this->labelKwotaPodatku1->AutoSize = true;
			this->labelKwotaPodatku1->BackColor = System::Drawing::Color::Blue;
			this->labelKwotaPodatku1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelKwotaPodatku1->ForeColor = System::Drawing::Color::White;
			this->labelKwotaPodatku1->Location = System::Drawing::Point(450, 122);
			this->labelKwotaPodatku1->Name = L"labelKwotaPodatku1";
			this->labelKwotaPodatku1->Size = System::Drawing::Size(0, 13);
			this->labelKwotaPodatku1->TabIndex = 134;
			// 
			// labelVAT1
			// 
			this->labelVAT1->AutoSize = true;
			this->labelVAT1->BackColor = System::Drawing::Color::Blue;
			this->labelVAT1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelVAT1->ForeColor = System::Drawing::Color::White;
			this->labelVAT1->Location = System::Drawing::Point(362, 122);
			this->labelVAT1->Name = L"labelVAT1";
			this->labelVAT1->Size = System::Drawing::Size(0, 13);
			this->labelVAT1->TabIndex = 133;
			// 
			// LabelCena1
			// 
			this->LabelCena1->AutoSize = true;
			this->LabelCena1->BackColor = System::Drawing::Color::Blue;
			this->LabelCena1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->LabelCena1->ForeColor = System::Drawing::Color::White;
			this->LabelCena1->Location = System::Drawing::Point(276, 124);
			this->LabelCena1->Name = L"LabelCena1";
			this->LabelCena1->Size = System::Drawing::Size(0, 13);
			this->LabelCena1->TabIndex = 132;
			// 
			// LabelDodatkowe
			// 
			this->LabelDodatkowe->AutoSize = true;
			this->LabelDodatkowe->BackColor = System::Drawing::Color::Blue;
			this->LabelDodatkowe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->LabelDodatkowe->ForeColor = System::Drawing::Color::White;
			this->LabelDodatkowe->Location = System::Drawing::Point(57, 231);
			this->LabelDodatkowe->Name = L"LabelDodatkowe";
			this->LabelDodatkowe->Size = System::Drawing::Size(0, 17);
			this->LabelDodatkowe->TabIndex = 131;
			// 
			// LabelNaprawa
			// 
			this->LabelNaprawa->AutoSize = true;
			this->LabelNaprawa->BackColor = System::Drawing::Color::Blue;
			this->LabelNaprawa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->LabelNaprawa->ForeColor = System::Drawing::Color::White;
			this->LabelNaprawa->Location = System::Drawing::Point(57, 195);
			this->LabelNaprawa->Name = L"LabelNaprawa";
			this->LabelNaprawa->Size = System::Drawing::Size(0, 17);
			this->LabelNaprawa->TabIndex = 130;
			// 
			// LabelSpoznienie
			// 
			this->LabelSpoznienie->AutoSize = true;
			this->LabelSpoznienie->BackColor = System::Drawing::Color::Blue;
			this->LabelSpoznienie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->LabelSpoznienie->ForeColor = System::Drawing::Color::White;
			this->LabelSpoznienie->Location = System::Drawing::Point(57, 158);
			this->LabelSpoznienie->Name = L"LabelSpoznienie";
			this->LabelSpoznienie->Size = System::Drawing::Size(0, 17);
			this->LabelSpoznienie->TabIndex = 129;
			// 
			// LabelNazwaSamochodu
			// 
			this->LabelNazwaSamochodu->AutoSize = true;
			this->LabelNazwaSamochodu->BackColor = System::Drawing::Color::Blue;
			this->LabelNazwaSamochodu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->LabelNazwaSamochodu->ForeColor = System::Drawing::Color::White;
			this->LabelNazwaSamochodu->Location = System::Drawing::Point(57, 120);
			this->LabelNazwaSamochodu->Name = L"LabelNazwaSamochodu";
			this->LabelNazwaSamochodu->Size = System::Drawing::Size(0, 17);
			this->LabelNazwaSamochodu->TabIndex = 128;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Blue;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(27, 231);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(16, 17);
			this->label21->TabIndex = 127;
			this->label21->Text = L"4";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Blue;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(27, 195);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(16, 17);
			this->label20->TabIndex = 126;
			this->label20->Text = L"3";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Blue;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(27, 158);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(16, 17);
			this->label19->TabIndex = 125;
			this->label19->Text = L"2";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Blue;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(27, 120);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(16, 17);
			this->label18->TabIndex = 124;
			this->label18->Text = L"1";
			// 
			// pictureBox39
			// 
			this->pictureBox39->BackColor = System::Drawing::Color::Blue;
			this->pictureBox39->Location = System::Drawing::Point(337, 262);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(364, 31);
			this->pictureBox39->TabIndex = 123;
			this->pictureBox39->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackColor = System::Drawing::Color::White;
			this->pictureBox28->Location = System::Drawing::Point(526, 225);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(3, 31);
			this->pictureBox28->TabIndex = 122;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackColor = System::Drawing::Color::White;
			this->pictureBox29->Location = System::Drawing::Point(415, 225);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(3, 31);
			this->pictureBox29->TabIndex = 121;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackColor = System::Drawing::Color::White;
			this->pictureBox30->Location = System::Drawing::Point(337, 225);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(3, 31);
			this->pictureBox30->TabIndex = 120;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackColor = System::Drawing::Color::White;
			this->pictureBox31->Location = System::Drawing::Point(267, 225);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(3, 31);
			this->pictureBox31->TabIndex = 119;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackColor = System::Drawing::Color::White;
			this->pictureBox32->Location = System::Drawing::Point(48, 225);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(3, 31);
			this->pictureBox32->TabIndex = 118;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackColor = System::Drawing::Color::Blue;
			this->pictureBox33->Location = System::Drawing::Point(21, 225);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(680, 31);
			this->pictureBox33->TabIndex = 117;
			this->pictureBox33->TabStop = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackColor = System::Drawing::Color::White;
			this->pictureBox22->Location = System::Drawing::Point(526, 188);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(3, 31);
			this->pictureBox22->TabIndex = 116;
			this->pictureBox22->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::Color::White;
			this->pictureBox23->Location = System::Drawing::Point(415, 188);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(3, 31);
			this->pictureBox23->TabIndex = 115;
			this->pictureBox23->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackColor = System::Drawing::Color::White;
			this->pictureBox24->Location = System::Drawing::Point(337, 188);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(3, 31);
			this->pictureBox24->TabIndex = 114;
			this->pictureBox24->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackColor = System::Drawing::Color::White;
			this->pictureBox25->Location = System::Drawing::Point(267, 188);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(3, 31);
			this->pictureBox25->TabIndex = 113;
			this->pictureBox25->TabStop = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackColor = System::Drawing::Color::White;
			this->pictureBox26->Location = System::Drawing::Point(48, 188);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(3, 31);
			this->pictureBox26->TabIndex = 112;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackColor = System::Drawing::Color::Blue;
			this->pictureBox27->Location = System::Drawing::Point(21, 188);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(680, 31);
			this->pictureBox27->TabIndex = 111;
			this->pictureBox27->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::White;
			this->pictureBox16->Location = System::Drawing::Point(526, 151);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(3, 31);
			this->pictureBox16->TabIndex = 110;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::White;
			this->pictureBox17->Location = System::Drawing::Point(415, 151);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(3, 31);
			this->pictureBox17->TabIndex = 109;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::White;
			this->pictureBox18->Location = System::Drawing::Point(337, 151);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(3, 31);
			this->pictureBox18->TabIndex = 108;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackColor = System::Drawing::Color::White;
			this->pictureBox19->Location = System::Drawing::Point(267, 151);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(3, 31);
			this->pictureBox19->TabIndex = 107;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::White;
			this->pictureBox20->Location = System::Drawing::Point(48, 151);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(3, 31);
			this->pictureBox20->TabIndex = 106;
			this->pictureBox20->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::Blue;
			this->pictureBox21->Location = System::Drawing::Point(21, 151);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(680, 31);
			this->pictureBox21->TabIndex = 105;
			this->pictureBox21->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::White;
			this->pictureBox10->Location = System::Drawing::Point(526, 114);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(3, 31);
			this->pictureBox10->TabIndex = 104;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::White;
			this->pictureBox11->Location = System::Drawing::Point(415, 114);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(3, 31);
			this->pictureBox11->TabIndex = 103;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::White;
			this->pictureBox12->Location = System::Drawing::Point(337, 114);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(3, 31);
			this->pictureBox12->TabIndex = 102;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::White;
			this->pictureBox13->Location = System::Drawing::Point(267, 114);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(3, 31);
			this->pictureBox13->TabIndex = 101;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::White;
			this->pictureBox14->Location = System::Drawing::Point(48, 114);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(3, 31);
			this->pictureBox14->TabIndex = 100;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Blue;
			this->pictureBox15->Location = System::Drawing::Point(21, 114);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(680, 31);
			this->pictureBox15->TabIndex = 99;
			this->pictureBox15->TabStop = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Blue;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(540, 82);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(154, 17);
			this->label17->TabIndex = 98;
			this->label17->Text = L"Cena wraz z podatkiem";
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::White;
			this->pictureBox9->Location = System::Drawing::Point(526, 77);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(3, 31);
			this->pictureBox9->TabIndex = 97;
			this->pictureBox9->TabStop = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Blue;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(424, 82);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(101, 17);
			this->label16->TabIndex = 96;
			this->label16->Text = L"Kwota podatku";
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::White;
			this->pictureBox8->Location = System::Drawing::Point(415, 77);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(3, 31);
			this->pictureBox8->TabIndex = 95;
			this->pictureBox8->TabStop = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Blue;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(348, 82);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(60, 17);
			this->label15->TabIndex = 94;
			this->label15->Text = L"Podatek";
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::White;
			this->pictureBox7->Location = System::Drawing::Point(337, 77);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(3, 31);
			this->pictureBox7->TabIndex = 93;
			this->pictureBox7->TabStop = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Blue;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(283, 82);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 17);
			this->label14->TabIndex = 92;
			this->label14->Text = L"Cena";
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::White;
			this->pictureBox6->Location = System::Drawing::Point(267, 77);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(3, 31);
			this->pictureBox6->TabIndex = 91;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::White;
			this->pictureBox5->Location = System::Drawing::Point(48, 77);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(3, 31);
			this->pictureBox5->TabIndex = 90;
			this->pictureBox5->TabStop = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Blue;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(94, 82);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(127, 17);
			this->label13->TabIndex = 89;
			this->label13->Text = L"Nazwa samochodu";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Blue;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(24, 82);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(28, 17);
			this->label12->TabIndex = 88;
			this->label12->Text = L"Lp.";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Blue;
			this->pictureBox4->Location = System::Drawing::Point(21, 77);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(680, 31);
			this->pictureBox4->TabIndex = 87;
			this->pictureBox4->TabStop = false;
			// 
			// txtIDKlienta
			// 
			this->txtIDKlienta->Location = System::Drawing::Point(707, 48);
			this->txtIDKlienta->Name = L"txtIDKlienta";
			this->txtIDKlienta->Size = System::Drawing::Size(187, 20);
			this->txtIDKlienta->TabIndex = 153;
			this->txtIDKlienta->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FakturaLista::txtIDKlienta_KeyPress);
			// 
			// btnSzukaj
			// 
			this->btnSzukaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnSzukaj->Location = System::Drawing::Point(900, 47);
			this->btnSzukaj->Name = L"btnSzukaj";
			this->btnSzukaj->Size = System::Drawing::Size(42, 23);
			this->btnSzukaj->TabIndex = 154;
			this->btnSzukaj->Text = L"ID";
			this->btnSzukaj->UseVisualStyleBackColor = true;
			this->btnSzukaj->Click += gcnew System::EventHandler(this, &FakturaLista::btnSzukaj_Click);
			// 
			// dataGridViewFaktury
			// 
			this->dataGridViewFaktury->AllowUserToAddRows = false;
			this->dataGridViewFaktury->AllowUserToDeleteRows = false;
			this->dataGridViewFaktury->AllowUserToOrderColumns = true;
			this->dataGridViewFaktury->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewFaktury->Location = System::Drawing::Point(707, 77);
			this->dataGridViewFaktury->Name = L"dataGridViewFaktury";
			this->dataGridViewFaktury->ReadOnly = true;
			this->dataGridViewFaktury->Size = System::Drawing::Size(235, 254);
			this->dataGridViewFaktury->TabIndex = 155;
			this->dataGridViewFaktury->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FakturaLista::dataGridViewFaktury_CellClick);
			// 
			// labelKlient
			// 
			this->labelKlient->AutoSize = true;
			this->labelKlient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelKlient->ForeColor = System::Drawing::Color::Red;
			this->labelKlient->Location = System::Drawing::Point(104, 32);
			this->labelKlient->Name = L"labelKlient";
			this->labelKlient->Size = System::Drawing::Size(0, 25);
			this->labelKlient->TabIndex = 156;
			// 
			// FakturaLista
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(952, 347);
			this->ControlBox = false;
			this->Controls->Add(this->labelKlient);
			this->Controls->Add(this->dataGridViewFaktury);
			this->Controls->Add(this->btnSzukaj);
			this->Controls->Add(this->txtIDKlienta);
			this->Controls->Add(this->labelDoZaplaty);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->labelRabat);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->labelCenaZVAT4);
			this->Controls->Add(this->labelKwotaPodatku4);
			this->Controls->Add(this->labelVAT4);
			this->Controls->Add(this->labelCena4);
			this->Controls->Add(this->labelCenaZVAT3);
			this->Controls->Add(this->labelKwotaPodatku3);
			this->Controls->Add(this->labelVAT3);
			this->Controls->Add(this->labelCena3);
			this->Controls->Add(this->labelCenaZVAT2);
			this->Controls->Add(this->labelKwotaPodatku2);
			this->Controls->Add(this->labelVAT2);
			this->Controls->Add(this->labelCena2);
			this->Controls->Add(this->labelCenaZVAT1);
			this->Controls->Add(this->labelKwotaPodatku1);
			this->Controls->Add(this->labelVAT1);
			this->Controls->Add(this->LabelCena1);
			this->Controls->Add(this->LabelDodatkowe);
			this->Controls->Add(this->LabelNaprawa);
			this->Controls->Add(this->LabelSpoznienie);
			this->Controls->Add(this->LabelNazwaSamochodu);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->pictureBox39);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"FakturaLista";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Spis faktur";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewFaktury))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//Zamknij formatkê
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
//Funkcja pomocnicza pobieraj¹ca dane o kliencie
private: bool PobierzDaneOKliencie()
{
	bool final = false;
	MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ Command = gcnew MySqlCommand("select ID_Klient, Imie, Nazwisko, Pesel from Klient where ID_Klient = '" + txtIDKlienta->Text + "';", Connect);
	MySqlDataReader^ DataRead;

	try {
		Connect->Open();
		DataRead = Command->ExecuteReader();
		if (DataRead->Read())
		{
			KlientID = DataRead->GetInt32(0);
			Imie = DataRead->GetString(1);
			Nazwisko = DataRead->GetString(2);
			Pesel = DataRead->GetInt64(3);
			final = true;
		}
		else
		{
			MessageBox::Show("Klient o podanym numerze ID nie istnieje!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		Connect->Close();
		
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message);
	}
	return final;
}
//Funkcja pomocnicza wyœwietlaj¹ca dane klienta
private: void PokazDaneKlienta()
{
	labelKlient->Text = Imie + " " + Nazwisko + " " + Convert::ToString(Pesel);
}
//Funkcja pomocnicza pobieraj¹ca dane o samochodzie
private: void PobierzDaneOSamochodzie()
{
	MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ Command = gcnew MySqlCommand("select Marka, Model from Specyfikacja where ID_Specyfikacja = '" + ID_Samochod + "';", Connect);
	MySqlDataReader^ DataRead;

	try {
		Connect->Open();
		DataRead = Command->ExecuteReader();
		if (DataRead->Read())
		{
			LabelNazwaSamochodu->Text = DataRead->GetString(0);
			LabelNazwaSamochodu->Text += " " + DataRead->GetString(1);
		}
		Connect->Close();

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
//Funkcja pobieraj¹ca cenê za wyporzyczenie
private: void PobierzCeneSamochodu()
{
	MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ Command = gcnew MySqlCommand("select Cena from Rezerwacja where ID_Rezerwacja = '" + ID_RezerwacjaZwrot + "';", Connect);
	MySqlDataReader^ DataRead;

	try {
		Connect->Open();
		DataRead = Command->ExecuteReader();
		if (DataRead->Read())
		{
			CenaRejestracja = DataRead->GetString(0);
			CenaRejestracja1a = (Convert::ToDouble(CenaRejestracja) - Convert::ToDouble(Rabat));
			CenaRejestracja = Convert::ToString(CenaRejestracja1a);
			LabelCena1->Text = CenaRejestracja->Replace(',', '.') + " z³";
		}
		Connect->Close();

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
//Funkcja obliczj¹ca podatek VAT dla wyporzyczonego samochodu
private: void ObliczVAT()
{
	labelVAT1->Text = VAT + "%";
	//Pierwszy wiersz
	KwotaPodatku1a = Convert::ToDouble(CenaRejestracja)*VATa;
	KwotaPodatku1 = Convert::ToString(Math::Round(Convert::ToDecimal(KwotaPodatku1a), 2));
	labelKwotaPodatku1->Text = KwotaPodatku1->Replace(',', '.') + " z³";
	CenaZVAT1a = Convert::ToDouble(CenaRejestracja) + KwotaPodatku1a;
	CenaZVAT1 = Convert::ToString(Math::Round(Convert::ToDecimal(CenaZVAT1a), 2));
	labelCenaZVAT1->Text = CenaZVAT1->Replace(',', '.') + " z³";
}
//Funkcja obliczaj¹ca karê
private: void ObliczKare()
{
	//Obliczanie kary za nieoddanie samochodu w terminie
	LabelSpoznienie->Text = "Kara za nieoddanie w terminie";
	KaraTermin1a = Convert::ToDouble(KaraTermin);
	labelCena2->Text = KaraTermin->Replace(',', '.') + " z³";
	labelVAT2->Text = VAT + "%";
	KwotaPodatku2a = KaraTermin1a*VATa;
	KwotaPodatku2 = Convert::ToString(Math::Round(Convert::ToDecimal(KwotaPodatku2a), 2));
	labelKwotaPodatku2->Text = KwotaPodatku2->Replace(',', '.') + " z³";
	CenaZVAT2a = KwotaPodatku2a + KaraTermin1a;
	CenaZVAT2 = Convert::ToString(Math::Round(Convert::ToDecimal(CenaZVAT2a), 2));
	labelCenaZVAT2->Text = CenaZVAT2->Replace(',', '.') + " z³";

	//Obliczanie kary za naprawê auta
	LabelNaprawa->Text = "Kara za zniszczenie";
	KaraNaprawa1a = Convert::ToDouble(KaraNaprawa);
	labelCena3->Text = KaraNaprawa->Replace(',', '.') + " z³";
	labelVAT3->Text = VAT + "%";
	KwotaPodatku3a = KaraNaprawa1a*VATa;
	KwotaPodatku3 = Convert::ToString(Math::Round(Convert::ToDecimal(KwotaPodatku3a), 2));
	labelKwotaPodatku3->Text = KwotaPodatku3->Replace(',', '.') + " z³";
	CenaZVAT3a = KwotaPodatku3a + KaraNaprawa1a;
	CenaZVAT3 = Convert::ToString(Math::Round(Convert::ToDecimal(CenaZVAT3a), 2));
	labelCenaZVAT3->Text = CenaZVAT3->Replace(',', '.') + " z³";

	//Obliczanie kary za dodatkowe
	LabelDodatkowe->Text = "Dodatkowe obci¹¿enia";
	KaraDodatkowa1a = Convert::ToDouble(KaraDodatkowa);
	labelCena4->Text = KaraDodatkowa->Replace(',', '.') + " z³";
	labelVAT4->Text = VAT + "%";
	KwotaPodatku4a = KaraDodatkowa1a*VATa;
	KwotaPodatku4 = Convert::ToString(Math::Round(Convert::ToDecimal(KwotaPodatku4a), 2));
	labelKwotaPodatku4->Text = KwotaPodatku4->Replace(',', '.') + " z³";
	CenaZVAT4a = KwotaPodatku4a + KaraDodatkowa1a;
	CenaZVAT4 = Convert::ToString(Math::Round(Convert::ToDecimal(CenaZVAT4a), 2));
	labelCenaZVAT4->Text = CenaZVAT4->Replace(',', '.') + " z³";
}
//Funkcja pokazuj¹ca rabat
private: void PokazRabat()
{
	labelRabat->Text = Rabat->Replace(',', '.') + " z³";
}
//Funkcja obliczj¹ca cenê ostateczn¹
private: void Cena()
{
	CenaDoZaplaty = Convert::ToString(Math::Round(Convert::ToDecimal(CenaZVAT1a + CenaZVAT2a + CenaZVAT3a + CenaZVAT4a), 2));
	labelDoZaplaty->Text = CenaDoZaplaty->Replace(',', '.') + " z³";
}
//Funkcja pomocnicza sprawdzaj¹ca jakie znaki wpisa³ u¿ytkownik
private: void SprawdzZnaki(KeyPressEventArgs^ e)
{
	if (e->KeyChar == (char)13) {
		//Pozyskujemy dane o kliencie
		if (PobierzDaneOKliencie())
		{
			//Wyœwietlamy dane o kliencie
			PokazDaneKlienta();
			//Pobieramy informacje o zwrotach, za które klient otrzyma³ fakturê
			if (PobierzZwroty())
			{
				//Na podstawie ID faktury krok po kroku szukamy szczegó³ów faktury
				//PobierzDaneFaktury();
			}
			else
			{
				MessageBox::Show("Nie mo¿na pozyskaæ informacji o zwrotach klienta!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}

		}
		else
		{
			MessageBox::Show("Nie mo¿na pozyskaæ informacji o kliencie!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	
	if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == 8))
	{
		e->Handled = false;
	}
	else {
		e->Handled = true;
	}
}


//Funkcja pomocnicza pobieraj¹ca informacje o wszystkich zwrotach klienta
private: bool PobierzZwroty()
{
	bool final = false;
	MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ Command = gcnew MySqlCommand("select ID_Faktura AS 'Numer faktury', Data_wystawienia AS 'Data wystawienia' from Faktura, Zwrot where zwrot.ID_Zwrot = faktura.ID_Zwrotu AND zwrot.ID_Klient = '"+KlientID+"';", Connect);
	
	try {
		Connect->Open();
		MySqlDataAdapter^ Data = gcnew MySqlDataAdapter();
		Data->SelectCommand = Command;
		DataTable^ Table = gcnew DataTable();
		Data->Fill(Table);
		BindingSource^ Source = gcnew BindingSource();
		Source->DataSource = Table;
		dataGridViewFaktury->DataSource = Source;
		Connect->Close();
		final = true;
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
	return final;
}
//Funkcja pomocnicza pobieraj¹ca szczegó³owe informacje o fakturze
private: bool PobierzDaneFaktury()
{
	bool final = false;
	MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ Command = gcnew MySqlCommand("select * from zwrot, faktura where faktura.ID_Faktura = '"+ID_Faktury+"' AND faktura.ID_Zwrotu = zwrot.ID_Zwrot;", Connect);

	try {
		Connect->Open();
		MySqlDataAdapter^ Data = gcnew MySqlDataAdapter();
		Data->SelectCommand = Command;
		DataTable^ Table = gcnew DataTable();
		Data->Fill(Table);
		DataRow^ R = Table->Rows[0];
		ID_Samochod = Convert::ToInt32(R["ID_Samochod"]);
		DataZwrotu = Convert::ToString(R["Data_zwrotu"]);
		GodzinaZwrotu = Convert::ToString(R["Godzina_zwrotu"]);
		KaraNaprawa = Convert::ToString(R["Kara_naprawa"]);
		KaraTermin = Convert::ToString(R["Kara_termin"]);
		KaraDodatkowa = Convert::ToString(R["Kara_dodatkowa"]);
		Rabat = Convert::ToString(R["Rabat"]);
		ID_RezerwacjaZwrot = Convert::ToInt32(R["ID_Rezerwacja"]);
		Connect->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}

	return final;
}
//Przycisk ID
private: System::Void btnSzukaj_Click(System::Object^  sender, System::EventArgs^  e) {
	//Pozyskujemy dane o kliencie
	if (PobierzDaneOKliencie())
	{
		//Wyœwietlamy dane o kliencie
		PokazDaneKlienta();
		//Pobieramy informacje o zwrotach, za które klient otrzyma³ fakturê
		if (PobierzZwroty())
		{
			//Na podstawie ID faktury krok po kroku szukamy szczegó³ów faktury
			//PobierzDaneFaktury();
		}
		else
		{
			MessageBox::Show("Nie mo¿na pozyskaæ informacji o zwrotach klienta!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

	}
	else
	{
		MessageBox::Show("Nie mo¿na pozyskaæ informacji o kliencie!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
//Klikniêcie w wybrany rekord przypisze odpowiednie dane
private: System::Void dataGridViewFaktury_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex >= 0)
	{
		ID_Faktury = Convert::ToInt32(dataGridViewFaktury->Rows[e->RowIndex]->Cells["Numer faktury"]->Value);
	}
	PobierzDaneFaktury();
	PobierzDaneOSamochodzie();
	PobierzCeneSamochodu();
	ObliczVAT();
	ObliczKare();
	PokazRabat();
	Cena();
}
//Funkcjonalnoœæ ta sama co dla przycisku ID
private: System::Void txtIDKlienta_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	SprawdzZnaki(e);
}
};
}
