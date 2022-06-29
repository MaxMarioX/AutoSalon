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
	/// Summary for Faktura
	/// </summary>
	public ref class Faktura : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label7;


	private: System::Windows::Forms::Label^  LabelMiasto;
	private: System::Windows::Forms::Label^  LabelUlica;
	private: System::Windows::Forms::Label^  LabelImieNazwisko;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  LabelMiejscowosc;
	private: System::Windows::Forms::Label^  LabelDataF;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::DataGridView^  dataGridViewZwrot;

	private: System::Windows::Forms::Button^  btnZnajdz;
	private: System::Windows::Forms::TextBox^  txtKlient;


	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;





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

	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  LabelDodatkowe;
	private: System::Windows::Forms::Label^  LabelNaprawa;
	private: System::Windows::Forms::Label^  LabelSpoznienie;

	private: System::Windows::Forms::Label^  LabelNazwaSamochodu;
	private: System::Windows::Forms::Button^  btnZatwierdz;


	public: int ID_zwrot = 0;
	public: int ID_Klient = 0;
	public: int ID_Pracownik = 0;
	public: int ID_Samochod = 0;
	public: int ID_RezerwacjaZwrot = 0;
	public: String^ DataZwrotu;
	public: String^ GodzinaZwrotu;
	
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

	public: String^ BazaDanychSQL;
	private: System::Windows::Forms::Label^  LabelCena1;
	private: System::Windows::Forms::Label^  labelVAT1;
	private: System::Windows::Forms::Label^  labelCenaZVAT1;
	private: System::Windows::Forms::Label^  labelKwotaPodatku1;

	private: System::Windows::Forms::Label^  labelCena2;
	private: System::Windows::Forms::Label^  labelCenaZVAT2;
	private: System::Windows::Forms::Label^  labelKwotaPodatku2;
	private: System::Windows::Forms::Label^  labelVAT2;
	private: System::Windows::Forms::Label^  labelCena3;
	private: System::Windows::Forms::Label^  labelCenaZVAT3;
	private: System::Windows::Forms::Label^  labelKwotaPodatku3;
	private: System::Windows::Forms::Label^  labelVAT3;
	private: System::Windows::Forms::Label^  labelVAT4;

	private: System::Windows::Forms::Label^  labelCena4;
	private: System::Windows::Forms::Label^  labelCenaZVAT4;
	private: System::Windows::Forms::Label^  labelKwotaPodatku4;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  labelRabat;
	private: System::Windows::Forms::Label^  labelDoZaplaty;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::PictureBox^  pictureBox34;

	public: int ID_U;
	public:
		Faktura(int id_uzytkownik, String^ konfiguracja)
		{
			InitializeComponent();

			BazaDanychSQL = konfiguracja;
			ID_U = id_uzytkownik;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Faktura()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->LabelMiasto = (gcnew System::Windows::Forms::Label());
			this->LabelUlica = (gcnew System::Windows::Forms::Label());
			this->LabelImieNazwisko = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->LabelMiejscowosc = (gcnew System::Windows::Forms::Label());
			this->LabelDataF = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->btnZnajdz = (gcnew System::Windows::Forms::Button());
			this->txtKlient = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewZwrot = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
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
			this->btnZatwierdz = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewZwrot))->BeginInit();
			this->tabPage2->SuspendLayout();
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
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(657, 496);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"WyjdŸ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Faktura::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Blue;
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(19, 507);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(39, 146);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"NIP: 85421564";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(39, 123);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"REGON: 00112233";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(39, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"96-100 Skierniewice";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(39, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"ul. Mszczonowska 46";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(39, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"AutoSalon Piotr Œmia³y";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(37, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(154, 25);
			this->label6->TabIndex = 10;
			this->label6->Text = L"SPRZEDAWCA";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Blue;
			this->pictureBox2->Location = System::Drawing::Point(42, 36);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(168, 5);
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(569, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(82, 25);
			this->label7->TabIndex = 12;
			this->label7->Text = L"KLIENT";
			// 
			// LabelMiasto
			// 
			this->LabelMiasto->AutoSize = true;
			this->LabelMiasto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->LabelMiasto->Location = System::Drawing::Point(571, 101);
			this->LabelMiasto->Name = L"LabelMiasto";
			this->LabelMiasto->Size = System::Drawing::Size(0, 13);
			this->LabelMiasto->TabIndex = 16;
			// 
			// LabelUlica
			// 
			this->LabelUlica->AutoSize = true;
			this->LabelUlica->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->LabelUlica->Location = System::Drawing::Point(571, 76);
			this->LabelUlica->Name = L"LabelUlica";
			this->LabelUlica->Size = System::Drawing::Size(0, 13);
			this->LabelUlica->TabIndex = 15;
			// 
			// LabelImieNazwisko
			// 
			this->LabelImieNazwisko->AutoSize = true;
			this->LabelImieNazwisko->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->LabelImieNazwisko->Location = System::Drawing::Point(571, 53);
			this->LabelImieNazwisko->Name = L"LabelImieNazwisko";
			this->LabelImieNazwisko->Size = System::Drawing::Size(0, 13);
			this->LabelImieNazwisko->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->Location = System::Drawing::Point(261, 12);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(249, 54);
			this->label8->TabIndex = 17;
			this->label8->Text = L"FAKTURA";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->Location = System::Drawing::Point(267, 72);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(153, 13);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Data wystawienia faktury:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->Location = System::Drawing::Point(267, 97);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(83, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Miejscowoœæ:";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Blue;
			this->pictureBox3->Location = System::Drawing::Point(574, 40);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(168, 5);
			this->pictureBox3->TabIndex = 20;
			this->pictureBox3->TabStop = false;
			// 
			// LabelMiejscowosc
			// 
			this->LabelMiejscowosc->AutoSize = true;
			this->LabelMiejscowosc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->LabelMiejscowosc->Location = System::Drawing::Point(356, 97);
			this->LabelMiejscowosc->Name = L"LabelMiejscowosc";
			this->LabelMiejscowosc->Size = System::Drawing::Size(79, 13);
			this->LabelMiejscowosc->TabIndex = 21;
			this->LabelMiejscowosc->Text = L"Skierniewice";
			// 
			// LabelDataF
			// 
			this->LabelDataF->AutoSize = true;
			this->LabelDataF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->LabelDataF->Location = System::Drawing::Point(426, 72);
			this->LabelDataF->Name = L"LabelDataF";
			this->LabelDataF->Size = System::Drawing::Size(71, 13);
			this->LabelDataF->TabIndex = 22;
			this->LabelDataF->Text = L"12.10.2017";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(42, 179);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(700, 289);
			this->tabControl1->TabIndex = 23;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage1->Controls->Add(this->btnZnajdz);
			this->tabPage1->Controls->Add(this->txtKlient);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->dataGridViewZwrot);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(692, 263);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Dotyczy zwrotu";
			// 
			// btnZnajdz
			// 
			this->btnZnajdz->Location = System::Drawing::Point(611, 16);
			this->btnZnajdz->Name = L"btnZnajdz";
			this->btnZnajdz->Size = System::Drawing::Size(75, 23);
			this->btnZnajdz->TabIndex = 3;
			this->btnZnajdz->Text = L"ZnajdŸ";
			this->btnZnajdz->UseVisualStyleBackColor = true;
			this->btnZnajdz->Click += gcnew System::EventHandler(this, &Faktura::btnZnajdz_Click);
			// 
			// txtKlient
			// 
			this->txtKlient->Location = System::Drawing::Point(45, 18);
			this->txtKlient->Name = L"txtKlient";
			this->txtKlient->Size = System::Drawing::Size(560, 20);
			this->txtKlient->TabIndex = 2;
			this->txtKlient->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Faktura::txtKlient_KeyPress);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 21);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(36, 13);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Klient:";
			// 
			// dataGridViewZwrot
			// 
			this->dataGridViewZwrot->AllowUserToAddRows = false;
			this->dataGridViewZwrot->AllowUserToDeleteRows = false;
			this->dataGridViewZwrot->AllowUserToOrderColumns = true;
			this->dataGridViewZwrot->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewZwrot->Location = System::Drawing::Point(6, 52);
			this->dataGridViewZwrot->Name = L"dataGridViewZwrot";
			this->dataGridViewZwrot->ReadOnly = true;
			this->dataGridViewZwrot->Size = System::Drawing::Size(680, 205);
			this->dataGridViewZwrot->TabIndex = 0;
			this->dataGridViewZwrot->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Faktura::dataGridViewZwrot_CellClick);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage2->Controls->Add(this->labelDoZaplaty);
			this->tabPage2->Controls->Add(this->label22);
			this->tabPage2->Controls->Add(this->pictureBox34);
			this->tabPage2->Controls->Add(this->labelRabat);
			this->tabPage2->Controls->Add(this->label23);
			this->tabPage2->Controls->Add(this->labelCenaZVAT4);
			this->tabPage2->Controls->Add(this->labelKwotaPodatku4);
			this->tabPage2->Controls->Add(this->labelVAT4);
			this->tabPage2->Controls->Add(this->labelCena4);
			this->tabPage2->Controls->Add(this->labelCenaZVAT3);
			this->tabPage2->Controls->Add(this->labelKwotaPodatku3);
			this->tabPage2->Controls->Add(this->labelVAT3);
			this->tabPage2->Controls->Add(this->labelCena3);
			this->tabPage2->Controls->Add(this->labelCenaZVAT2);
			this->tabPage2->Controls->Add(this->labelKwotaPodatku2);
			this->tabPage2->Controls->Add(this->labelVAT2);
			this->tabPage2->Controls->Add(this->labelCena2);
			this->tabPage2->Controls->Add(this->labelCenaZVAT1);
			this->tabPage2->Controls->Add(this->labelKwotaPodatku1);
			this->tabPage2->Controls->Add(this->labelVAT1);
			this->tabPage2->Controls->Add(this->LabelCena1);
			this->tabPage2->Controls->Add(this->LabelDodatkowe);
			this->tabPage2->Controls->Add(this->LabelNaprawa);
			this->tabPage2->Controls->Add(this->LabelSpoznienie);
			this->tabPage2->Controls->Add(this->LabelNazwaSamochodu);
			this->tabPage2->Controls->Add(this->label21);
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->pictureBox39);
			this->tabPage2->Controls->Add(this->pictureBox28);
			this->tabPage2->Controls->Add(this->pictureBox29);
			this->tabPage2->Controls->Add(this->pictureBox30);
			this->tabPage2->Controls->Add(this->pictureBox31);
			this->tabPage2->Controls->Add(this->pictureBox32);
			this->tabPage2->Controls->Add(this->pictureBox33);
			this->tabPage2->Controls->Add(this->pictureBox22);
			this->tabPage2->Controls->Add(this->pictureBox23);
			this->tabPage2->Controls->Add(this->pictureBox24);
			this->tabPage2->Controls->Add(this->pictureBox25);
			this->tabPage2->Controls->Add(this->pictureBox26);
			this->tabPage2->Controls->Add(this->pictureBox27);
			this->tabPage2->Controls->Add(this->pictureBox16);
			this->tabPage2->Controls->Add(this->pictureBox17);
			this->tabPage2->Controls->Add(this->pictureBox18);
			this->tabPage2->Controls->Add(this->pictureBox19);
			this->tabPage2->Controls->Add(this->pictureBox20);
			this->tabPage2->Controls->Add(this->pictureBox21);
			this->tabPage2->Controls->Add(this->pictureBox10);
			this->tabPage2->Controls->Add(this->pictureBox11);
			this->tabPage2->Controls->Add(this->pictureBox12);
			this->tabPage2->Controls->Add(this->pictureBox13);
			this->tabPage2->Controls->Add(this->pictureBox14);
			this->tabPage2->Controls->Add(this->pictureBox15);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->pictureBox9);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->pictureBox8);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->pictureBox7);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->pictureBox6);
			this->tabPage2->Controls->Add(this->pictureBox5);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->pictureBox4);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(692, 263);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Faktura";
			// 
			// labelDoZaplaty
			// 
			this->labelDoZaplaty->AutoSize = true;
			this->labelDoZaplaty->BackColor = System::Drawing::Color::Blue;
			this->labelDoZaplaty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelDoZaplaty->ForeColor = System::Drawing::Color::White;
			this->labelDoZaplaty->Location = System::Drawing::Point(557, 238);
			this->labelDoZaplaty->Name = L"labelDoZaplaty";
			this->labelDoZaplaty->Size = System::Drawing::Size(0, 13);
			this->labelDoZaplaty->TabIndex = 86;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Blue;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(434, 236);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(79, 17);
			this->label22->TabIndex = 85;
			this->label22->Text = L"Do zap³aty:";
			// 
			// pictureBox34
			// 
			this->pictureBox34->BackColor = System::Drawing::Color::Blue;
			this->pictureBox34->Location = System::Drawing::Point(400, 229);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(286, 31);
			this->pictureBox34->TabIndex = 84;
			this->pictureBox34->TabStop = false;
			// 
			// labelRabat
			// 
			this->labelRabat->AutoSize = true;
			this->labelRabat->BackColor = System::Drawing::Color::Blue;
			this->labelRabat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelRabat->ForeColor = System::Drawing::Color::White;
			this->labelRabat->Location = System::Drawing::Point(557, 198);
			this->labelRabat->Name = L"labelRabat";
			this->labelRabat->Size = System::Drawing::Size(0, 13);
			this->labelRabat->TabIndex = 82;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Blue;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label23->ForeColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(335, 198);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(179, 17);
			this->label23->TabIndex = 81;
			this->label23->Text = L"Udzielono rabatu w kwocie:";
			// 
			// labelCenaZVAT4
			// 
			this->labelCenaZVAT4->AutoSize = true;
			this->labelCenaZVAT4->BackColor = System::Drawing::Color::Blue;
			this->labelCenaZVAT4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelCenaZVAT4->ForeColor = System::Drawing::Color::White;
			this->labelCenaZVAT4->Location = System::Drawing::Point(558, 163);
			this->labelCenaZVAT4->Name = L"labelCenaZVAT4";
			this->labelCenaZVAT4->Size = System::Drawing::Size(0, 13);
			this->labelCenaZVAT4->TabIndex = 80;
			// 
			// labelKwotaPodatku4
			// 
			this->labelKwotaPodatku4->AutoSize = true;
			this->labelKwotaPodatku4->BackColor = System::Drawing::Color::Blue;
			this->labelKwotaPodatku4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelKwotaPodatku4->ForeColor = System::Drawing::Color::White;
			this->labelKwotaPodatku4->Location = System::Drawing::Point(436, 164);
			this->labelKwotaPodatku4->Name = L"labelKwotaPodatku4";
			this->labelKwotaPodatku4->Size = System::Drawing::Size(0, 13);
			this->labelKwotaPodatku4->TabIndex = 79;
			// 
			// labelVAT4
			// 
			this->labelVAT4->AutoSize = true;
			this->labelVAT4->BackColor = System::Drawing::Color::Blue;
			this->labelVAT4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelVAT4->ForeColor = System::Drawing::Color::White;
			this->labelVAT4->Location = System::Drawing::Point(348, 163);
			this->labelVAT4->Name = L"labelVAT4";
			this->labelVAT4->Size = System::Drawing::Size(0, 13);
			this->labelVAT4->TabIndex = 78;
			// 
			// labelCena4
			// 
			this->labelCena4->AutoSize = true;
			this->labelCena4->BackColor = System::Drawing::Color::Blue;
			this->labelCena4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelCena4->ForeColor = System::Drawing::Color::White;
			this->labelCena4->Location = System::Drawing::Point(263, 163);
			this->labelCena4->Name = L"labelCena4";
			this->labelCena4->Size = System::Drawing::Size(0, 13);
			this->labelCena4->TabIndex = 77;
			// 
			// labelCenaZVAT3
			// 
			this->labelCenaZVAT3->AutoSize = true;
			this->labelCenaZVAT3->BackColor = System::Drawing::Color::Blue;
			this->labelCenaZVAT3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelCenaZVAT3->ForeColor = System::Drawing::Color::White;
			this->labelCenaZVAT3->Location = System::Drawing::Point(559, 126);
			this->labelCenaZVAT3->Name = L"labelCenaZVAT3";
			this->labelCenaZVAT3->Size = System::Drawing::Size(0, 13);
			this->labelCenaZVAT3->TabIndex = 76;
			// 
			// labelKwotaPodatku3
			// 
			this->labelKwotaPodatku3->AutoSize = true;
			this->labelKwotaPodatku3->BackColor = System::Drawing::Color::Blue;
			this->labelKwotaPodatku3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelKwotaPodatku3->ForeColor = System::Drawing::Color::White;
			this->labelKwotaPodatku3->Location = System::Drawing::Point(435, 126);
			this->labelKwotaPodatku3->Name = L"labelKwotaPodatku3";
			this->labelKwotaPodatku3->Size = System::Drawing::Size(0, 13);
			this->labelKwotaPodatku3->TabIndex = 75;
			// 
			// labelVAT3
			// 
			this->labelVAT3->AutoSize = true;
			this->labelVAT3->BackColor = System::Drawing::Color::Blue;
			this->labelVAT3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelVAT3->ForeColor = System::Drawing::Color::White;
			this->labelVAT3->Location = System::Drawing::Point(347, 125);
			this->labelVAT3->Name = L"labelVAT3";
			this->labelVAT3->Size = System::Drawing::Size(0, 13);
			this->labelVAT3->TabIndex = 74;
			// 
			// labelCena3
			// 
			this->labelCena3->AutoSize = true;
			this->labelCena3->BackColor = System::Drawing::Color::Blue;
			this->labelCena3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelCena3->ForeColor = System::Drawing::Color::White;
			this->labelCena3->Location = System::Drawing::Point(263, 126);
			this->labelCena3->Name = L"labelCena3";
			this->labelCena3->Size = System::Drawing::Size(0, 13);
			this->labelCena3->TabIndex = 73;
			// 
			// labelCenaZVAT2
			// 
			this->labelCenaZVAT2->AutoSize = true;
			this->labelCenaZVAT2->BackColor = System::Drawing::Color::Blue;
			this->labelCenaZVAT2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelCenaZVAT2->ForeColor = System::Drawing::Color::White;
			this->labelCenaZVAT2->Location = System::Drawing::Point(559, 89);
			this->labelCenaZVAT2->Name = L"labelCenaZVAT2";
			this->labelCenaZVAT2->Size = System::Drawing::Size(0, 13);
			this->labelCenaZVAT2->TabIndex = 72;
			// 
			// labelKwotaPodatku2
			// 
			this->labelKwotaPodatku2->AutoSize = true;
			this->labelKwotaPodatku2->BackColor = System::Drawing::Color::Blue;
			this->labelKwotaPodatku2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelKwotaPodatku2->ForeColor = System::Drawing::Color::White;
			this->labelKwotaPodatku2->Location = System::Drawing::Point(435, 89);
			this->labelKwotaPodatku2->Name = L"labelKwotaPodatku2";
			this->labelKwotaPodatku2->Size = System::Drawing::Size(0, 13);
			this->labelKwotaPodatku2->TabIndex = 71;
			// 
			// labelVAT2
			// 
			this->labelVAT2->AutoSize = true;
			this->labelVAT2->BackColor = System::Drawing::Color::Blue;
			this->labelVAT2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelVAT2->ForeColor = System::Drawing::Color::White;
			this->labelVAT2->Location = System::Drawing::Point(347, 89);
			this->labelVAT2->Name = L"labelVAT2";
			this->labelVAT2->Size = System::Drawing::Size(0, 13);
			this->labelVAT2->TabIndex = 70;
			// 
			// labelCena2
			// 
			this->labelCena2->AutoSize = true;
			this->labelCena2->BackColor = System::Drawing::Color::Blue;
			this->labelCena2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelCena2->ForeColor = System::Drawing::Color::White;
			this->labelCena2->Location = System::Drawing::Point(263, 89);
			this->labelCena2->Name = L"labelCena2";
			this->labelCena2->Size = System::Drawing::Size(0, 13);
			this->labelCena2->TabIndex = 69;
			// 
			// labelCenaZVAT1
			// 
			this->labelCenaZVAT1->AutoSize = true;
			this->labelCenaZVAT1->BackColor = System::Drawing::Color::Blue;
			this->labelCenaZVAT1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelCenaZVAT1->ForeColor = System::Drawing::Color::White;
			this->labelCenaZVAT1->Location = System::Drawing::Point(559, 52);
			this->labelCenaZVAT1->Name = L"labelCenaZVAT1";
			this->labelCenaZVAT1->Size = System::Drawing::Size(0, 13);
			this->labelCenaZVAT1->TabIndex = 67;
			// 
			// labelKwotaPodatku1
			// 
			this->labelKwotaPodatku1->AutoSize = true;
			this->labelKwotaPodatku1->BackColor = System::Drawing::Color::Blue;
			this->labelKwotaPodatku1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelKwotaPodatku1->ForeColor = System::Drawing::Color::White;
			this->labelKwotaPodatku1->Location = System::Drawing::Point(435, 51);
			this->labelKwotaPodatku1->Name = L"labelKwotaPodatku1";
			this->labelKwotaPodatku1->Size = System::Drawing::Size(0, 13);
			this->labelKwotaPodatku1->TabIndex = 66;
			// 
			// labelVAT1
			// 
			this->labelVAT1->AutoSize = true;
			this->labelVAT1->BackColor = System::Drawing::Color::Blue;
			this->labelVAT1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelVAT1->ForeColor = System::Drawing::Color::White;
			this->labelVAT1->Location = System::Drawing::Point(347, 51);
			this->labelVAT1->Name = L"labelVAT1";
			this->labelVAT1->Size = System::Drawing::Size(0, 13);
			this->labelVAT1->TabIndex = 65;
			// 
			// LabelCena1
			// 
			this->LabelCena1->AutoSize = true;
			this->LabelCena1->BackColor = System::Drawing::Color::Blue;
			this->LabelCena1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->LabelCena1->ForeColor = System::Drawing::Color::White;
			this->LabelCena1->Location = System::Drawing::Point(261, 53);
			this->LabelCena1->Name = L"LabelCena1";
			this->LabelCena1->Size = System::Drawing::Size(0, 13);
			this->LabelCena1->TabIndex = 64;
			// 
			// LabelDodatkowe
			// 
			this->LabelDodatkowe->AutoSize = true;
			this->LabelDodatkowe->BackColor = System::Drawing::Color::Blue;
			this->LabelDodatkowe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->LabelDodatkowe->ForeColor = System::Drawing::Color::White;
			this->LabelDodatkowe->Location = System::Drawing::Point(42, 160);
			this->LabelDodatkowe->Name = L"LabelDodatkowe";
			this->LabelDodatkowe->Size = System::Drawing::Size(0, 17);
			this->LabelDodatkowe->TabIndex = 63;
			// 
			// LabelNaprawa
			// 
			this->LabelNaprawa->AutoSize = true;
			this->LabelNaprawa->BackColor = System::Drawing::Color::Blue;
			this->LabelNaprawa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->LabelNaprawa->ForeColor = System::Drawing::Color::White;
			this->LabelNaprawa->Location = System::Drawing::Point(42, 124);
			this->LabelNaprawa->Name = L"LabelNaprawa";
			this->LabelNaprawa->Size = System::Drawing::Size(0, 17);
			this->LabelNaprawa->TabIndex = 62;
			// 
			// LabelSpoznienie
			// 
			this->LabelSpoznienie->AutoSize = true;
			this->LabelSpoznienie->BackColor = System::Drawing::Color::Blue;
			this->LabelSpoznienie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->LabelSpoznienie->ForeColor = System::Drawing::Color::White;
			this->LabelSpoznienie->Location = System::Drawing::Point(42, 87);
			this->LabelSpoznienie->Name = L"LabelSpoznienie";
			this->LabelSpoznienie->Size = System::Drawing::Size(0, 17);
			this->LabelSpoznienie->TabIndex = 61;
			// 
			// LabelNazwaSamochodu
			// 
			this->LabelNazwaSamochodu->AutoSize = true;
			this->LabelNazwaSamochodu->BackColor = System::Drawing::Color::Blue;
			this->LabelNazwaSamochodu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->LabelNazwaSamochodu->ForeColor = System::Drawing::Color::White;
			this->LabelNazwaSamochodu->Location = System::Drawing::Point(42, 49);
			this->LabelNazwaSamochodu->Name = L"LabelNazwaSamochodu";
			this->LabelNazwaSamochodu->Size = System::Drawing::Size(0, 17);
			this->LabelNazwaSamochodu->TabIndex = 59;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Blue;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(12, 160);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(16, 17);
			this->label21->TabIndex = 57;
			this->label21->Text = L"4";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Blue;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(12, 124);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(16, 17);
			this->label20->TabIndex = 56;
			this->label20->Text = L"3";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Blue;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(12, 87);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(16, 17);
			this->label19->TabIndex = 55;
			this->label19->Text = L"2";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Blue;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(12, 49);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(16, 17);
			this->label18->TabIndex = 54;
			this->label18->Text = L"1";
			// 
			// pictureBox39
			// 
			this->pictureBox39->BackColor = System::Drawing::Color::Blue;
			this->pictureBox39->Location = System::Drawing::Point(322, 191);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(364, 31);
			this->pictureBox39->TabIndex = 48;
			this->pictureBox39->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackColor = System::Drawing::Color::White;
			this->pictureBox28->Location = System::Drawing::Point(511, 154);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(3, 31);
			this->pictureBox28->TabIndex = 47;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackColor = System::Drawing::Color::White;
			this->pictureBox29->Location = System::Drawing::Point(400, 154);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(3, 31);
			this->pictureBox29->TabIndex = 46;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackColor = System::Drawing::Color::White;
			this->pictureBox30->Location = System::Drawing::Point(322, 154);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(3, 31);
			this->pictureBox30->TabIndex = 45;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackColor = System::Drawing::Color::White;
			this->pictureBox31->Location = System::Drawing::Point(252, 154);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(3, 31);
			this->pictureBox31->TabIndex = 44;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackColor = System::Drawing::Color::White;
			this->pictureBox32->Location = System::Drawing::Point(33, 154);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(3, 31);
			this->pictureBox32->TabIndex = 43;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackColor = System::Drawing::Color::Blue;
			this->pictureBox33->Location = System::Drawing::Point(6, 154);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(680, 31);
			this->pictureBox33->TabIndex = 42;
			this->pictureBox33->TabStop = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackColor = System::Drawing::Color::White;
			this->pictureBox22->Location = System::Drawing::Point(511, 117);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(3, 31);
			this->pictureBox22->TabIndex = 41;
			this->pictureBox22->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::Color::White;
			this->pictureBox23->Location = System::Drawing::Point(400, 117);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(3, 31);
			this->pictureBox23->TabIndex = 40;
			this->pictureBox23->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackColor = System::Drawing::Color::White;
			this->pictureBox24->Location = System::Drawing::Point(322, 117);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(3, 31);
			this->pictureBox24->TabIndex = 39;
			this->pictureBox24->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackColor = System::Drawing::Color::White;
			this->pictureBox25->Location = System::Drawing::Point(252, 117);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(3, 31);
			this->pictureBox25->TabIndex = 38;
			this->pictureBox25->TabStop = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackColor = System::Drawing::Color::White;
			this->pictureBox26->Location = System::Drawing::Point(33, 117);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(3, 31);
			this->pictureBox26->TabIndex = 37;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackColor = System::Drawing::Color::Blue;
			this->pictureBox27->Location = System::Drawing::Point(6, 117);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(680, 31);
			this->pictureBox27->TabIndex = 36;
			this->pictureBox27->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::White;
			this->pictureBox16->Location = System::Drawing::Point(511, 80);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(3, 31);
			this->pictureBox16->TabIndex = 35;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::White;
			this->pictureBox17->Location = System::Drawing::Point(400, 80);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(3, 31);
			this->pictureBox17->TabIndex = 34;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::White;
			this->pictureBox18->Location = System::Drawing::Point(322, 80);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(3, 31);
			this->pictureBox18->TabIndex = 33;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackColor = System::Drawing::Color::White;
			this->pictureBox19->Location = System::Drawing::Point(252, 80);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(3, 31);
			this->pictureBox19->TabIndex = 32;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::White;
			this->pictureBox20->Location = System::Drawing::Point(33, 80);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(3, 31);
			this->pictureBox20->TabIndex = 31;
			this->pictureBox20->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::Blue;
			this->pictureBox21->Location = System::Drawing::Point(6, 80);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(680, 31);
			this->pictureBox21->TabIndex = 30;
			this->pictureBox21->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::White;
			this->pictureBox10->Location = System::Drawing::Point(511, 43);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(3, 31);
			this->pictureBox10->TabIndex = 29;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::White;
			this->pictureBox11->Location = System::Drawing::Point(400, 43);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(3, 31);
			this->pictureBox11->TabIndex = 28;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::White;
			this->pictureBox12->Location = System::Drawing::Point(322, 43);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(3, 31);
			this->pictureBox12->TabIndex = 27;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::White;
			this->pictureBox13->Location = System::Drawing::Point(252, 43);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(3, 31);
			this->pictureBox13->TabIndex = 26;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::White;
			this->pictureBox14->Location = System::Drawing::Point(33, 43);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(3, 31);
			this->pictureBox14->TabIndex = 25;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Blue;
			this->pictureBox15->Location = System::Drawing::Point(6, 43);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(680, 31);
			this->pictureBox15->TabIndex = 24;
			this->pictureBox15->TabStop = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Blue;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(525, 11);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(154, 17);
			this->label17->TabIndex = 23;
			this->label17->Text = L"Cena wraz z podatkiem";
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::White;
			this->pictureBox9->Location = System::Drawing::Point(511, 6);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(3, 31);
			this->pictureBox9->TabIndex = 22;
			this->pictureBox9->TabStop = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Blue;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(409, 11);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(101, 17);
			this->label16->TabIndex = 21;
			this->label16->Text = L"Kwota podatku";
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::White;
			this->pictureBox8->Location = System::Drawing::Point(400, 6);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(3, 31);
			this->pictureBox8->TabIndex = 20;
			this->pictureBox8->TabStop = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Blue;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(333, 11);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(60, 17);
			this->label15->TabIndex = 19;
			this->label15->Text = L"Podatek";
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::White;
			this->pictureBox7->Location = System::Drawing::Point(322, 6);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(3, 31);
			this->pictureBox7->TabIndex = 18;
			this->pictureBox7->TabStop = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Blue;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(268, 11);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 17);
			this->label14->TabIndex = 17;
			this->label14->Text = L"Cena";
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::White;
			this->pictureBox6->Location = System::Drawing::Point(252, 6);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(3, 31);
			this->pictureBox6->TabIndex = 16;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::White;
			this->pictureBox5->Location = System::Drawing::Point(33, 6);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(3, 31);
			this->pictureBox5->TabIndex = 15;
			this->pictureBox5->TabStop = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Blue;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(79, 11);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(127, 17);
			this->label13->TabIndex = 14;
			this->label13->Text = L"Nazwa samochodu";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Blue;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(9, 11);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(28, 17);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Lp.";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Blue;
			this->pictureBox4->Location = System::Drawing::Point(6, 6);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(680, 31);
			this->pictureBox4->TabIndex = 12;
			this->pictureBox4->TabStop = false;
			// 
			// btnZatwierdz
			// 
			this->btnZatwierdz->Location = System::Drawing::Point(557, 496);
			this->btnZatwierdz->Name = L"btnZatwierdz";
			this->btnZatwierdz->Size = System::Drawing::Size(75, 23);
			this->btnZatwierdz->TabIndex = 24;
			this->btnZatwierdz->Text = L"ZatwierdŸ";
			this->btnZatwierdz->UseVisualStyleBackColor = true;
			this->btnZatwierdz->Click += gcnew System::EventHandler(this, &Faktura::btnZatwierdz_Click);
			// 
			// Faktura
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(751, 532);
			this->ControlBox = false;
			this->Controls->Add(this->btnZatwierdz);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->LabelDataF);
			this->Controls->Add(this->LabelMiejscowosc);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->LabelMiasto);
			this->Controls->Add(this->LabelUlica);
			this->Controls->Add(this->LabelImieNazwisko);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Faktura";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Faktura";
			this->Load += gcnew System::EventHandler(this, &Faktura::Faktura_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewZwrot))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//Zamknij okno
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
//Funkcja pobieraj¹ca z bazy dane o zwrocie
private: void PobierzDaneZwrotu()
	{
		MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
		MySqlCommand^ Question = gcnew MySqlCommand("select ID_Zwrot AS 'ID Zwrotu', ID_Klient AS 'ID Klienta', ID_Pracownik AS 'ID Pracownika', ID_Samochod AS 'ID Samochodu', Data_zwrotu AS 'Data zwrotu', Godzina_zwrotu AS 'Godzina zwrotu', Kara_naprawa AS 'Kara za naprawê', Kara_termin AS 'Kara za spóŸnienie', Kara_dodatkowa AS 'Dodatkowe op³aty', Rabat, ID_Rezerwacja AS 'Nr rezerwacji' from Zwrot where ID_Klient = '"+txtKlient->Text+"';", Connect);

		try {
			Connect->Open();
			MySqlDataAdapter^ Data = gcnew MySqlDataAdapter();
			Data->SelectCommand = Question;
			DataTable^ Table = gcnew DataTable();
			Data->Fill(Table);
			BindingSource^ Source = gcnew BindingSource();
			Source->DataSource = Table;
			dataGridViewZwrot->DataSource = Source;
			Connect->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
//Funkcja pomocnicza pobieraj¹ca dane o kliencie
private: void PobierzDaneOKliencie()
{
	MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ Command = gcnew MySqlCommand("select Imie, Nazwisko, Ulica, Numer_domu, Kod_pocztowy, Miasto from Klient where ID_Klient = '"+ID_Klient+"';",Connect);
	MySqlDataReader^ ReadData;

	try {
		Connect->Open();
		ReadData = Command->ExecuteReader();
		if (ReadData->Read())
		{
			LabelImieNazwisko->Text = ReadData->GetString(0);
			LabelImieNazwisko->Text += " " + ReadData->GetString(1);
			LabelUlica->Text = ReadData->GetString(2);
			LabelUlica->Text += " " + Convert::ToString(ReadData->GetInt32(3));
			LabelMiasto->Text = ReadData->GetString(4);
			LabelMiasto->Text += " " + ReadData->GetString(5);
		}
		Connect->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
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
			LabelCena1->Text = CenaRejestracja->Replace(',','.') + " z³";
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
	KwotaPodatku1 = Convert::ToString(Math::Round(Convert::ToDecimal(KwotaPodatku1a),2));
	labelKwotaPodatku1->Text = KwotaPodatku1->Replace(',','.') + " z³";
	CenaZVAT1a = Convert::ToDouble(CenaRejestracja) + KwotaPodatku1a;
	CenaZVAT1 = Convert::ToString(Math::Round(Convert::ToDecimal(CenaZVAT1a),2));
	labelCenaZVAT1->Text = CenaZVAT1->Replace(',','.') + " z³";
}
//Klikniêcie w wybrany rekord przypisze dane do odpowiednich pól
private: System::Void dataGridViewZwrot_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (e->RowIndex >= 0)
		{
			ID_zwrot = Convert::ToInt32(dataGridViewZwrot->Rows[e->RowIndex]->Cells["ID Zwrotu"]->Value);
			ID_Klient = Convert::ToInt32(dataGridViewZwrot->Rows[e->RowIndex]->Cells["ID Klienta"]->Value);
			ID_Pracownik = Convert::ToInt32(dataGridViewZwrot->Rows[e->RowIndex]->Cells["ID Pracownika"]->Value);
			ID_Samochod = Convert::ToInt32(dataGridViewZwrot->Rows[e->RowIndex]->Cells["ID Samochodu"]->Value);
			DataZwrotu = dataGridViewZwrot->Rows[e->RowIndex]->Cells["Data zwrotu"]->Value->ToString();
			GodzinaZwrotu = dataGridViewZwrot->Rows[e->RowIndex]->Cells["Godzina zwrotu"]->Value->ToString();
			KaraNaprawa = dataGridViewZwrot->Rows[e->RowIndex]->Cells["Kara za naprawê"]->Value->ToString();
			KaraTermin = dataGridViewZwrot->Rows[e->RowIndex]->Cells["Kara za spóŸnienie"]->Value->ToString();
			KaraDodatkowa = dataGridViewZwrot->Rows[e->RowIndex]->Cells["Dodatkowe op³aty"]->Value->ToString();
			Rabat = dataGridViewZwrot->Rows[e->RowIndex]->Cells["Rabat"]->Value->ToString();
			ID_RezerwacjaZwrot = Convert::ToInt32(dataGridViewZwrot->Rows[e->RowIndex]->Cells["Nr rezerwacji"]->Value);
		}
		PobierzDaneOKliencie();
		PobierzDaneOSamochodzie();
		PobierzCeneSamochodu();
		ObliczVAT();
		ObliczKare();
		PokazRabat();
		Cena();
	}
//Przycisk znajdŸ samochody wyporzyczone przez klienta
private: System::Void btnZnajdz_Click(System::Object^  sender, System::EventArgs^  e) {
	PobierzDaneZwrotu();
}
//Funkcja obliczaj¹ca karê
private: void ObliczKare()
{
	//Obliczanie kary za nieoddanie samochodu w terminie
	LabelSpoznienie->Text = "Kara za nieoddanie w terminie";
	KaraTermin1a = Convert::ToDouble(KaraTermin);
	labelCena2->Text = KaraTermin->Replace(',','.') + " z³";
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
	labelRabat->Text = Rabat->Replace(',','.') + " z³";
}
//Funkcja obliczj¹ca cenê ostateczn¹
private: void Cena()
{
	CenaDoZaplaty = Convert::ToString(Math::Round(Convert::ToDecimal(CenaZVAT1a + CenaZVAT2a + CenaZVAT3a - CenaZVAT4a),2));
	labelDoZaplaty->Text = CenaDoZaplaty->Replace(',','.') + " z³";
}
//Wprowadzenie faktury do systemu
private: System::Void btnZatwierdz_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ID_zwrot) {
		MySqlConnection^ SqlPolacz2 = gcnew MySqlConnection(BazaDanychSQL);
		MySqlCommand^ polecenie2 = SqlPolacz2->CreateCommand();
		MySqlTransaction^ transakcja2;

		SqlPolacz2->Open();
		transakcja2 = SqlPolacz2->BeginTransaction(IsolationLevel::ReadCommitted);
		polecenie2->Connection = SqlPolacz2;
		polecenie2->Transaction = transakcja2;

		try {
			polecenie2->CommandText = "INSERT INTO Faktura SET ID_Zwrotu ='" + ID_zwrot + "', Data_wystawienia = '" + LabelDataF->Text + "';";
			polecenie2->ExecuteNonQuery();
			transakcja2->Commit(); //zatwierdzenie transakcji
			MessageBox::Show("Pomyœlnie wprowadzono fakturê do bazy danych!", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja2->Rollback(); //wycofaj wszelkie zmiany, zapisy itp.
		}
		SqlPolacz2->Close();
	}
	else {
		MessageBox::Show("Nie mo¿na wprowadziæ faktury do bazy danych!","B³¹d",MessageBoxButtons::OK,MessageBoxIcon::Error);
	}
}
//Funkcja uruchamiaj¹ca siê automatycznie po otwarciu formatki
private: System::Void Faktura_Load(System::Object^  sender, System::EventArgs^  e) {
	System::DateTime^ DataAktualna = System::DateTime::Now;
	
	System::String^ Dzien;
	System::String^ Miesiac;
	System::String^ Rok;

	if (DataAktualna->Day < 10)
	{
		Dzien = "0" + DataAktualna->Day;
	}
	else {
		Dzien = "" + DataAktualna->Day;
	}

	if (DataAktualna->Month < 10)
	{
		Miesiac = "0" + DataAktualna->Month;
	}
	else {
		Miesiac = "" + DataAktualna->Month;
	}

	Rok = "" + DataAktualna->Year;

	LabelDataF->Text = Dzien + "." + Miesiac + "." + Rok;
}
//ZnajdŸ samochody wyporzyczone przez klienta
private: System::Void txtKlient_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == (char)13)
		PobierzDaneZwrotu();
}
};
}
