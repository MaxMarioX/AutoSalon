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
	/// Summary for Klienci
	/// </summary>
	public ref class Klienci : public System::Windows::Forms::Form
	{
	public: String^ BazaDanychSQL;
	public: int ID_U;
	public: int id_rekordu = 0;

	private: System::Windows::Forms::GroupBox^  BoxNotatkaKlienta;
	private: System::Windows::Forms::RichTextBox^  txtNotatkaOKliencie;
	private: System::Windows::Forms::MaskedTextBox^  txtTelefonK;
	private: System::Windows::Forms::TextBox^  txtNrDowodu;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  txtPesel;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::GroupBox^  groupBoxWyjdz;
	private: System::Windows::Forms::MaskedTextBox^  txtKodPocztowyK;
	public:
		Klienci(int id_uzytkownik, String^ konfiguracja)
		{
			InitializeComponent();
			
			BazaDanychSQL = konfiguracja;
			ID_U = id_uzytkownik;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Klienci()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::GroupBox^  BoxDaneKlienta;


	private: System::Windows::Forms::TextBox^  txtMiastoK;



	private: System::Windows::Forms::TextBox^  txtNrDomuK;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txtUlicaK;

	private: System::Windows::Forms::TextBox^  txtNazwiskoK;

	private: System::Windows::Forms::TextBox^  txtImieK;
	private: System::Windows::Forms::TextBox^  txtIDK;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  BoxListaKlientow;
	private: System::Windows::Forms::DataGridView^  dataGridViewKlienci;

	private: System::Windows::Forms::Button^  btnWyjdz;
	private: System::Windows::Forms::GroupBox^  BoxKlienciWykonaj;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::RadioButton^  radioUsunKlienta;
	private: System::Windows::Forms::RadioButton^  radioModyfikujKlienta;
	private: System::Windows::Forms::RadioButton^  radioDodajKlienta;


	private: System::Windows::Forms::GroupBox^  BoxWyszukajKlienta;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  btnSzukaj;
	private: System::Windows::Forms::TextBox^  txtSzukajK;

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
			this->BoxDaneKlienta = (gcnew System::Windows::Forms::GroupBox());
			this->txtNrDowodu = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtPesel = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtTelefonK = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtKodPocztowyK = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtMiastoK = (gcnew System::Windows::Forms::TextBox());
			this->txtNrDomuK = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtUlicaK = (gcnew System::Windows::Forms::TextBox());
			this->txtNazwiskoK = (gcnew System::Windows::Forms::TextBox());
			this->txtImieK = (gcnew System::Windows::Forms::TextBox());
			this->txtIDK = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BoxListaKlientow = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridViewKlienci = (gcnew System::Windows::Forms::DataGridView());
			this->btnWyjdz = (gcnew System::Windows::Forms::Button());
			this->BoxKlienciWykonaj = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->radioUsunKlienta = (gcnew System::Windows::Forms::RadioButton());
			this->radioModyfikujKlienta = (gcnew System::Windows::Forms::RadioButton());
			this->radioDodajKlienta = (gcnew System::Windows::Forms::RadioButton());
			this->BoxWyszukajKlienta = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnSzukaj = (gcnew System::Windows::Forms::Button());
			this->txtSzukajK = (gcnew System::Windows::Forms::TextBox());
			this->BoxNotatkaKlienta = (gcnew System::Windows::Forms::GroupBox());
			this->txtNotatkaOKliencie = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBoxWyjdz = (gcnew System::Windows::Forms::GroupBox());
			this->BoxDaneKlienta->SuspendLayout();
			this->BoxListaKlientow->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewKlienci))->BeginInit();
			this->BoxKlienciWykonaj->SuspendLayout();
			this->BoxWyszukajKlienta->SuspendLayout();
			this->BoxNotatkaKlienta->SuspendLayout();
			this->groupBoxWyjdz->SuspendLayout();
			this->SuspendLayout();
			// 
			// BoxDaneKlienta
			// 
			this->BoxDaneKlienta->Controls->Add(this->txtNrDowodu);
			this->BoxDaneKlienta->Controls->Add(this->label10);
			this->BoxDaneKlienta->Controls->Add(this->txtPesel);
			this->BoxDaneKlienta->Controls->Add(this->label9);
			this->BoxDaneKlienta->Controls->Add(this->txtTelefonK);
			this->BoxDaneKlienta->Controls->Add(this->txtKodPocztowyK);
			this->BoxDaneKlienta->Controls->Add(this->txtMiastoK);
			this->BoxDaneKlienta->Controls->Add(this->txtNrDomuK);
			this->BoxDaneKlienta->Controls->Add(this->label8);
			this->BoxDaneKlienta->Controls->Add(this->label7);
			this->BoxDaneKlienta->Controls->Add(this->label6);
			this->BoxDaneKlienta->Controls->Add(this->label5);
			this->BoxDaneKlienta->Controls->Add(this->txtUlicaK);
			this->BoxDaneKlienta->Controls->Add(this->txtNazwiskoK);
			this->BoxDaneKlienta->Controls->Add(this->txtImieK);
			this->BoxDaneKlienta->Controls->Add(this->txtIDK);
			this->BoxDaneKlienta->Controls->Add(this->label4);
			this->BoxDaneKlienta->Controls->Add(this->label3);
			this->BoxDaneKlienta->Controls->Add(this->label2);
			this->BoxDaneKlienta->Controls->Add(this->label1);
			this->BoxDaneKlienta->Location = System::Drawing::Point(12, 419);
			this->BoxDaneKlienta->Name = L"BoxDaneKlienta";
			this->BoxDaneKlienta->Size = System::Drawing::Size(408, 175);
			this->BoxDaneKlienta->TabIndex = 3;
			this->BoxDaneKlienta->TabStop = false;
			this->BoxDaneKlienta->Text = L"Dane klienta";
			// 
			// txtNrDowodu
			// 
			this->txtNrDowodu->Location = System::Drawing::Point(73, 149);
			this->txtNrDowodu->Name = L"txtNrDowodu";
			this->txtNrDowodu->Size = System::Drawing::Size(107, 20);
			this->txtNrDowodu->TabIndex = 21;
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
			// txtPesel
			// 
			this->txtPesel->Location = System::Drawing::Point(73, 118);
			this->txtPesel->Name = L"txtPesel";
			this->txtPesel->Size = System::Drawing::Size(107, 20);
			this->txtPesel->TabIndex = 19;
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
			// txtTelefonK
			// 
			this->txtTelefonK->Location = System::Drawing::Point(295, 147);
			this->txtTelefonK->Mask = L"000-000-000";
			this->txtTelefonK->Name = L"txtTelefonK";
			this->txtTelefonK->Size = System::Drawing::Size(106, 20);
			this->txtTelefonK->TabIndex = 17;
			this->txtTelefonK->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			// 
			// txtKodPocztowyK
			// 
			this->txtKodPocztowyK->Location = System::Drawing::Point(295, 85);
			this->txtKodPocztowyK->Mask = L"00-000";
			this->txtKodPocztowyK->Name = L"txtKodPocztowyK";
			this->txtKodPocztowyK->Size = System::Drawing::Size(106, 20);
			this->txtKodPocztowyK->TabIndex = 16;
			this->txtKodPocztowyK->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			// 
			// txtMiastoK
			// 
			this->txtMiastoK->Location = System::Drawing::Point(295, 115);
			this->txtMiastoK->Name = L"txtMiastoK";
			this->txtMiastoK->Size = System::Drawing::Size(106, 20);
			this->txtMiastoK->TabIndex = 14;
			// 
			// txtNrDomuK
			// 
			this->txtNrDomuK->Location = System::Drawing::Point(295, 52);
			this->txtNrDomuK->Name = L"txtNrDomuK";
			this->txtNrDomuK->Size = System::Drawing::Size(106, 20);
			this->txtNrDomuK->TabIndex = 12;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->Location = System::Drawing::Point(203, 150);
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
			this->label7->Location = System::Drawing::Point(203, 118);
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
			this->label6->Location = System::Drawing::Point(203, 88);
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
			this->label5->Location = System::Drawing::Point(203, 55);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Numer domu";
			// 
			// txtUlicaK
			// 
			this->txtUlicaK->Location = System::Drawing::Point(294, 19);
			this->txtUlicaK->Name = L"txtUlicaK";
			this->txtUlicaK->Size = System::Drawing::Size(107, 20);
			this->txtUlicaK->TabIndex = 7;
			// 
			// txtNazwiskoK
			// 
			this->txtNazwiskoK->Location = System::Drawing::Point(73, 86);
			this->txtNazwiskoK->Name = L"txtNazwiskoK";
			this->txtNazwiskoK->Size = System::Drawing::Size(107, 20);
			this->txtNazwiskoK->TabIndex = 6;
			// 
			// txtImieK
			// 
			this->txtImieK->BackColor = System::Drawing::SystemColors::Window;
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
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(203, 22);
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
			// BoxListaKlientow
			// 
			this->BoxListaKlientow->Controls->Add(this->dataGridViewKlienci);
			this->BoxListaKlientow->Location = System::Drawing::Point(12, 56);
			this->BoxListaKlientow->Name = L"BoxListaKlientow";
			this->BoxListaKlientow->Size = System::Drawing::Size(691, 357);
			this->BoxListaKlientow->TabIndex = 5;
			this->BoxListaKlientow->TabStop = false;
			this->BoxListaKlientow->Text = L"Spis klientów";
			// 
			// dataGridViewKlienci
			// 
			this->dataGridViewKlienci->AllowUserToAddRows = false;
			this->dataGridViewKlienci->AllowUserToDeleteRows = false;
			this->dataGridViewKlienci->AllowUserToOrderColumns = true;
			this->dataGridViewKlienci->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewKlienci->Location = System::Drawing::Point(9, 15);
			this->dataGridViewKlienci->Name = L"dataGridViewKlienci";
			this->dataGridViewKlienci->ReadOnly = true;
			this->dataGridViewKlienci->Size = System::Drawing::Size(679, 336);
			this->dataGridViewKlienci->TabIndex = 3;
			this->dataGridViewKlienci->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Klienci::dataGridViewKlienci_CellClick);
			// 
			// btnWyjdz
			// 
			this->btnWyjdz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnWyjdz->ForeColor = System::Drawing::Color::Black;
			this->btnWyjdz->Location = System::Drawing::Point(54, 19);
			this->btnWyjdz->Name = L"btnWyjdz";
			this->btnWyjdz->Size = System::Drawing::Size(75, 23);
			this->btnWyjdz->TabIndex = 6;
			this->btnWyjdz->Text = L"WyjdŸ";
			this->btnWyjdz->UseVisualStyleBackColor = true;
			this->btnWyjdz->Click += gcnew System::EventHandler(this, &Klienci::btnWyjdz_Click);
			// 
			// BoxKlienciWykonaj
			// 
			this->BoxKlienciWykonaj->Controls->Add(this->button2);
			this->BoxKlienciWykonaj->Controls->Add(this->radioUsunKlienta);
			this->BoxKlienciWykonaj->Controls->Add(this->radioModyfikujKlienta);
			this->BoxKlienciWykonaj->Controls->Add(this->radioDodajKlienta);
			this->BoxKlienciWykonaj->Location = System::Drawing::Point(426, 547);
			this->BoxKlienciWykonaj->Name = L"BoxKlienciWykonaj";
			this->BoxKlienciWykonaj->Size = System::Drawing::Size(277, 47);
			this->BoxKlienciWykonaj->TabIndex = 8;
			this->BoxKlienciWykonaj->TabStop = false;
			this->BoxKlienciWykonaj->Text = L"Wykonaj";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(197, 16);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"ZatwierdŸ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Klienci::button2_Click);
			// 
			// radioUsunKlienta
			// 
			this->radioUsunKlienta->AutoSize = true;
			this->radioUsunKlienta->ForeColor = System::Drawing::Color::Red;
			this->radioUsunKlienta->Location = System::Drawing::Point(141, 19);
			this->radioUsunKlienta->Name = L"radioUsunKlienta";
			this->radioUsunKlienta->Size = System::Drawing::Size(50, 17);
			this->radioUsunKlienta->TabIndex = 2;
			this->radioUsunKlienta->Text = L"Usuñ";
			this->radioUsunKlienta->UseVisualStyleBackColor = true;
			this->radioUsunKlienta->Visible = false;
			this->radioUsunKlienta->Click += gcnew System::EventHandler(this, &Klienci::radioUsunKlienta_Click);
			// 
			// radioModyfikujKlienta
			// 
			this->radioModyfikujKlienta->AutoSize = true;
			this->radioModyfikujKlienta->Checked = true;
			this->radioModyfikujKlienta->ForeColor = System::Drawing::Color::Orange;
			this->radioModyfikujKlienta->Location = System::Drawing::Point(65, 19);
			this->radioModyfikujKlienta->Name = L"radioModyfikujKlienta";
			this->radioModyfikujKlienta->Size = System::Drawing::Size(70, 17);
			this->radioModyfikujKlienta->TabIndex = 1;
			this->radioModyfikujKlienta->TabStop = true;
			this->radioModyfikujKlienta->Text = L"Modyfikuj";
			this->radioModyfikujKlienta->UseVisualStyleBackColor = true;
			this->radioModyfikujKlienta->Click += gcnew System::EventHandler(this, &Klienci::radioModyfikujKlienta_Click);
			// 
			// radioDodajKlienta
			// 
			this->radioDodajKlienta->AutoSize = true;
			this->radioDodajKlienta->ForeColor = System::Drawing::Color::Green;
			this->radioDodajKlienta->Location = System::Drawing::Point(6, 19);
			this->radioDodajKlienta->Name = L"radioDodajKlienta";
			this->radioDodajKlienta->Size = System::Drawing::Size(53, 17);
			this->radioDodajKlienta->TabIndex = 0;
			this->radioDodajKlienta->Text = L"Dodaj";
			this->radioDodajKlienta->UseVisualStyleBackColor = true;
			this->radioDodajKlienta->Click += gcnew System::EventHandler(this, &Klienci::radioDodajKlienta_Click);
			// 
			// BoxWyszukajKlienta
			// 
			this->BoxWyszukajKlienta->Controls->Add(this->button1);
			this->BoxWyszukajKlienta->Controls->Add(this->btnSzukaj);
			this->BoxWyszukajKlienta->Controls->Add(this->txtSzukajK);
			this->BoxWyszukajKlienta->Location = System::Drawing::Point(12, 4);
			this->BoxWyszukajKlienta->Name = L"BoxWyszukajKlienta";
			this->BoxWyszukajKlienta->Size = System::Drawing::Size(495, 46);
			this->BoxWyszukajKlienta->TabIndex = 10;
			this->BoxWyszukajKlienta->TabStop = false;
			this->BoxWyszukajKlienta->Text = L"Wyszukaj klienta";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(407, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Odœwie¿";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Klienci::button1_Click);
			// 
			// btnSzukaj
			// 
			this->btnSzukaj->Location = System::Drawing::Point(326, 18);
			this->btnSzukaj->Name = L"btnSzukaj";
			this->btnSzukaj->Size = System::Drawing::Size(75, 23);
			this->btnSzukaj->TabIndex = 9;
			this->btnSzukaj->Text = L"ZnajdŸ";
			this->btnSzukaj->UseVisualStyleBackColor = true;
			this->btnSzukaj->Click += gcnew System::EventHandler(this, &Klienci::btnSzukaj_Click);
			// 
			// txtSzukajK
			// 
			this->txtSzukajK->Location = System::Drawing::Point(9, 19);
			this->txtSzukajK->Name = L"txtSzukajK";
			this->txtSzukajK->Size = System::Drawing::Size(311, 20);
			this->txtSzukajK->TabIndex = 8;
			this->txtSzukajK->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Klienci::txtSzukajK_KeyPress);
			// 
			// BoxNotatkaKlienta
			// 
			this->BoxNotatkaKlienta->Controls->Add(this->txtNotatkaOKliencie);
			this->BoxNotatkaKlienta->Location = System::Drawing::Point(426, 419);
			this->BoxNotatkaKlienta->Name = L"BoxNotatkaKlienta";
			this->BoxNotatkaKlienta->Size = System::Drawing::Size(277, 122);
			this->BoxNotatkaKlienta->TabIndex = 11;
			this->BoxNotatkaKlienta->TabStop = false;
			this->BoxNotatkaKlienta->Text = L"Notatka o kliencie";
			// 
			// txtNotatkaOKliencie
			// 
			this->txtNotatkaOKliencie->Location = System::Drawing::Point(6, 21);
			this->txtNotatkaOKliencie->Name = L"txtNotatkaOKliencie";
			this->txtNotatkaOKliencie->Size = System::Drawing::Size(265, 95);
			this->txtNotatkaOKliencie->TabIndex = 0;
			this->txtNotatkaOKliencie->Text = L"";
			// 
			// groupBoxWyjdz
			// 
			this->groupBoxWyjdz->Controls->Add(this->btnWyjdz);
			this->groupBoxWyjdz->Location = System::Drawing::Point(513, 4);
			this->groupBoxWyjdz->Name = L"groupBoxWyjdz";
			this->groupBoxWyjdz->Size = System::Drawing::Size(190, 46);
			this->groupBoxWyjdz->TabIndex = 12;
			this->groupBoxWyjdz->TabStop = false;
			this->groupBoxWyjdz->Text = L"Opuœæ to okno";
			// 
			// Klienci
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(715, 606);
			this->ControlBox = false;
			this->Controls->Add(this->groupBoxWyjdz);
			this->Controls->Add(this->BoxNotatkaKlienta);
			this->Controls->Add(this->BoxWyszukajKlienta);
			this->Controls->Add(this->BoxKlienciWykonaj);
			this->Controls->Add(this->BoxListaKlientow);
			this->Controls->Add(this->BoxDaneKlienta);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Klienci";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Klienci";
			this->BoxDaneKlienta->ResumeLayout(false);
			this->BoxDaneKlienta->PerformLayout();
			this->BoxListaKlientow->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewKlienci))->EndInit();
			this->BoxKlienciWykonaj->ResumeLayout(false);
			this->BoxKlienciWykonaj->PerformLayout();
			this->BoxWyszukajKlienta->ResumeLayout(false);
			this->BoxWyszukajKlienta->PerformLayout();
			this->BoxNotatkaKlienta->ResumeLayout(false);
			this->groupBoxWyjdz->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
//Zamyka okno
private: System::Void btnWyjdz_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
//Pokazywanie wszystkich klientów firmy
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	MySqlConnection^ PolaczDoSQL = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ Zapytanie = gcnew MySqlCommand("SELECT ID_Klient AS ID, Nazwisko, Imie AS Imiê, Ulica, Numer_domu AS 'Numer domu', Kod_pocztowy AS 'Kod pocztowy', Miasto, Telefon, Notatka, Pesel, NrDowodu AS 'Numer dowodu' FROM Klient ORDER BY Nazwisko;", PolaczDoSQL);

	try {
		MySqlDataAdapter^ Dane = gcnew MySqlDataAdapter();
		Dane->SelectCommand = Zapytanie;
		DataTable^ Tabela = gcnew DataTable();
		Dane->Fill(Tabela);

		BindingSource^ Zrodlo = gcnew BindingSource();
		Zrodlo->DataSource = Tabela;
		dataGridViewKlienci->DataSource = Zrodlo;
		PolaczDoSQL->Close();
	}
	catch(Exception^ Komunikat){
		MessageBox::Show(Komunikat->Message);
	}
}
//Szukanie klientów wg okreœlonego kryterium
private: System::Void btnSzukaj_Click(System::Object^  sender, System::EventArgs^  e) {
	SzukajKlienta();
}
//Klikniêcie w wybrany rekord przypisze dane do odpowiednich pól
private: System::Void dataGridViewKlienci_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex >= 0) {
		id_rekordu = Convert::ToInt32(dataGridViewKlienci->Rows[e->RowIndex]->Cells["ID"]->Value);
		txtIDK->Text = Convert::ToString(id_rekordu);
		txtImieK->Text = dataGridViewKlienci->Rows[e->RowIndex]->Cells["Imiê"]->Value->ToString();
		txtNazwiskoK->Text = dataGridViewKlienci->Rows[e->RowIndex]->Cells["Nazwisko"]->Value->ToString();
		txtUlicaK->Text = dataGridViewKlienci->Rows[e->RowIndex]->Cells["Ulica"]->Value->ToString();
		txtNrDomuK->Text = dataGridViewKlienci->Rows[e->RowIndex]->Cells["Numer domu"]->Value->ToString();
		txtKodPocztowyK->Text = dataGridViewKlienci->Rows[e->RowIndex]->Cells["Kod pocztowy"]->Value->ToString();
		txtMiastoK->Text = dataGridViewKlienci->Rows[e->RowIndex]->Cells["Miasto"]->Value->ToString();
		txtTelefonK->Text = dataGridViewKlienci->Rows[e->RowIndex]->Cells["Telefon"]->Value->ToString();
		txtNotatkaOKliencie->Text = dataGridViewKlienci->Rows[e->RowIndex]->Cells["Notatka"]->Value->ToString();
		txtPesel->Text = dataGridViewKlienci->Rows[e->RowIndex]->Cells["Pesel"]->Value->ToString();
		txtNrDowodu->Text = dataGridViewKlienci->Rows[e->RowIndex]->Cells["Numer dowodu"]->Value->ToString();
	}
}
//Wykonywanie operacji na klientach
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	if (radioDodajKlienta->Checked == true)
	{
		if (SprawdzDaneKlienta())
		{
			MySqlConnection^ SqlPolacz = gcnew MySqlConnection(BazaDanychSQL);
			MySqlCommand^ Polecenie = SqlPolacz->CreateCommand();
			MySqlTransaction^ Transakcja;
			SqlPolacz->Open();
			Transakcja = SqlPolacz->BeginTransaction(IsolationLevel::ReadCommitted);
			Polecenie->Connection = SqlPolacz;
			Polecenie->Transaction = Transakcja;

			try{
				Polecenie->CommandText = "INSERT INTO Klient SET Imie ='" + txtImieK->Text + "', Nazwisko = '" + txtNazwiskoK->Text + "', Ulica = '" + txtUlicaK->Text + "', Numer_domu = '" + txtNrDomuK->Text + "', Kod_pocztowy = '" + txtKodPocztowyK->Text + "', Miasto = '" + txtMiastoK->Text + "', Telefon = '" + txtTelefonK->Text + "', Notatka = '"+txtNotatkaOKliencie->Text+"', Pesel = '"+txtPesel->Text+"', NrDowodu = '"+txtNrDowodu->Text+"';";
				Polecenie->ExecuteNonQuery();
				Transakcja->Commit();
				MessageBox::Show("Pomyœlnie dodano nowego klienta!", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception^ Komunikat) {
				MessageBox::Show(Komunikat->Message);
				Transakcja->Rollback();
			}
			SqlPolacz->Close();
			WyczyscPola(BoxDaneKlienta);
		}
		else
		{
			MessageBox::Show("Proszê sprawdziæ czy wymagane pola zosta³y wype³nione prawid³owo!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		id_rekordu = 0;//reset
	}

	if (radioModyfikujKlienta->Checked == true)
	{
		if (id_rekordu) {
			if (SprawdzDaneKlienta())
			{
				MySqlConnection^ SqlPolacz = gcnew MySqlConnection(BazaDanychSQL);
				MySqlCommand^ Polecenie = SqlPolacz->CreateCommand();
				MySqlTransaction^ Transakcja;
				SqlPolacz->Open();
				Transakcja = SqlPolacz->BeginTransaction(IsolationLevel::ReadCommitted);
				Polecenie->Connection = SqlPolacz;
				Polecenie->Transaction = Transakcja;

				try {
					Polecenie->CommandText = "UPDATE Klient SET Imie ='" + txtImieK->Text + "', Nazwisko = '" + txtNazwiskoK->Text + "', Ulica = '" + txtUlicaK->Text + "', Numer_domu = '" + txtNrDomuK->Text + "', Kod_pocztowy = '" + txtKodPocztowyK->Text + "', Miasto = '" + txtMiastoK->Text + "', Telefon = '" + txtTelefonK->Text + "', Notatka = '" + txtNotatkaOKliencie->Text + "', Pesel = '" + txtPesel->Text + "', NrDowodu = '" + txtNrDowodu->Text + "' WHERE ID_Klient = '" + id_rekordu + "';";
					Polecenie->ExecuteNonQuery();
					Transakcja->Commit();
					MessageBox::Show("Pomyœlnie zaktualizowano dane klienta!", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				catch (Exception^ Komunikat) {
					MessageBox::Show(Komunikat->Message);
					Transakcja->Rollback();
				}
				SqlPolacz->Close();
				WyczyscPola(BoxDaneKlienta);
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
		id_rekordu = 0;//reset
	}

	if (radioUsunKlienta->Checked == true)
	{
		if (ID_U == 1) {
			if (id_rekordu) {
				if (MessageBox::Show("UWAGA! Próbujesz wykonaæ czynnoœæ niebezpieczn¹! Usuniêcie klienta z bazy danych mo¿e spowodowaæ nieprawid³ow¹ pracê programu! CZY JESTEŒ PEWIEN, ¯E CHESZ TRWALE USUN¥Æ KLIENTA " + txtImieK->Text + " " + txtNazwiskoK->Text + " o numerze ID " + id_rekordu + "? ", "Usuwanie klienta z bazy!", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
				{
					MySqlConnection^ SqlPolacz = gcnew MySqlConnection(BazaDanychSQL);
					MySqlCommand^ Polecenie = SqlPolacz->CreateCommand();
					MySqlTransaction^ Transakcja;
					SqlPolacz->Open();
					Transakcja = SqlPolacz->BeginTransaction(IsolationLevel::ReadCommitted);
					Polecenie->Connection = SqlPolacz;
					Polecenie->Transaction = Transakcja;

					try {

						Polecenie->CommandText = "DELETE FROM Klient WHERE ID_Klient = '" + id_rekordu + "';";
						Polecenie->ExecuteNonQuery();
						Transakcja->Commit();
						MessageBox::Show("Pomyœlnie usuniêto dane klienta z bazy!", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);
						WyczyscPola(BoxDaneKlienta);
					}
					catch (Exception^ komunikat) {
						MessageBox::Show(komunikat->Message);
						Transakcja->Rollback(); //wycofaj wszelkie zmiany, zapisy itp.
					}
					SqlPolacz->Close();
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
		id_rekordu = 0;
	}
}

//Funkcja pomocnicza, sprawdzaj¹ca poprawnoœæ wpisanych danych
private: bool SprawdzDaneKlienta(void)
{
	bool imie = false, nazwisko = false, ulica = false, nrdomu = false, kodpocztowy = false, miasto = false, telefon = false, notka = false, pesel = false, dowod = false;
	bool final = false;

	//Sprawdzamy czy d³ugoœæ pól jest odpowiednia
	if (((txtImieK->Text->Length < 3) || (txtImieK->Text->Length == 0)) || (txtImieK->Text->Length > 45))
	{
		txtImieK->BackColor = BackColor.Red;
	}
	else
	{
		imie = true;
	}
	if (((txtNazwiskoK->Text->Length < 3) || (txtNazwiskoK->Text->Length == 0)) || (txtNazwiskoK->Text->Length > 45))
	{
		txtNazwiskoK->BackColor = BackColor.Red;
	}
	else
	{
		nazwisko = true;
	}
	if ((txtUlicaK->Text->Length > 45) || (txtUlicaK->Text->Length == 0))
	{
		txtUlicaK->BackColor = BackColor.Red;
	}
	else
	{
		ulica = true;
	}
	if ((txtNrDomuK->Text->Length > 10) || (txtNrDomuK->Text->Length == 0))
	{
		txtNrDomuK->BackColor = BackColor.Red;
	}
	else
	{
		nrdomu = true;
	}
	if ((txtKodPocztowyK->Text->Length > 6) || (txtKodPocztowyK->Text->Length == 0))
	{
		txtKodPocztowyK->BackColor = BackColor.Red;
	}
	else
	{
		kodpocztowy = true;
	}
	if ((txtMiastoK->Text->Length > 45) || (txtMiastoK->Text->Length == 0))
	{
		txtMiastoK->BackColor = BackColor.Red;
	}
	else
	{
		miasto = true;
	}
	if ((txtTelefonK->Text->Length > 12) || (txtTelefonK->Text->Length == 0))
	{
		txtTelefonK->BackColor = BackColor.Red;
	}
	else
	{
		telefon = true;
	}
	if (txtNotatkaOKliencie->Text->Length > 100)
	{
		txtNotatkaOKliencie->BackColor = BackColor.Red;
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
	if (imie == true && nazwisko == true && ulica == true && nrdomu == true && kodpocztowy == true && miasto == true && telefon == true && notka == true && pesel == true && dowod == true) {
		final = true;
	}
	return final;
}
//Funkcja pomocnicza, czyszcz¹ca pola
private: void WyczyscPola(Control^ zbior)
{
	txtImieK->BackColor = BackColor.White;
	txtNazwiskoK->BackColor = BackColor.White;
	txtUlicaK->BackColor = BackColor.White;
	txtNrDomuK->BackColor = BackColor.White;
	txtKodPocztowyK->BackColor = BackColor.White;
	txtMiastoK->BackColor = BackColor.White;
	txtTelefonK->BackColor = BackColor.White;
	txtNotatkaOKliencie->BackColor = BackColor.White;
	txtPesel->BackColor = BackColor.White;
	txtNrDowodu->BackColor = BackColor.White;

	for each(Control^ element in zbior->Controls)
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
			txtNotatkaOKliencie->Enabled = true;
			/*Mo¿e nie zawieraæ siê w groupboxie
			if (element->GetType() == RichTextBox::typeid)
			{
				element->Enabled = true;
			}
			*/
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
			txtNotatkaOKliencie->Enabled = false;
			/*Mo¿e nie zawieraæ sie w groupboxie
			if (element->GetType() == RichTextBox::typeid)
			{
				element->Enabled = false;
			}
			*/
		}
	}
	txtIDK->Enabled = false;
}
//Funkcja pomocnicza szukaj¹ca klienta wg okreœlonego kryterium
private: void SzukajKlienta()
{
	if (txtSzukajK->Text->Length != 0) {
		MySqlConnection^ PolaczDoSQL = gcnew MySqlConnection(BazaDanychSQL);
		MySqlCommand^ Zapytanie = gcnew MySqlCommand("SELECT ID_Klient AS ID, Nazwisko, Imie AS Imiê, Ulica, Numer_domu AS 'Numer domu', Kod_pocztowy AS 'Kod pocztowy', Miasto, Telefon, Notatka, Pesel, NrDowodu AS 'Numer dowodu' FROM Klient where CONCAT(Imie,' ', Nazwisko) LIKE '%" + txtSzukajK->Text + "%' ORDER BY Nazwisko;", PolaczDoSQL);

		try {
			MySqlDataAdapter^ Dane = gcnew MySqlDataAdapter();
			Dane->SelectCommand = Zapytanie;
			DataTable^ Tabela = gcnew DataTable();
			Dane->Fill(Tabela);

			BindingSource^ Zrodlo = gcnew BindingSource();
			Zrodlo->DataSource = Tabela;
			dataGridViewKlienci->DataSource = Zrodlo;
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

//Zaznaczenie opcji dodaj klienta zablokuje formatkê z list¹ klientow
private: System::Void radioDodajKlienta_Click(System::Object^  sender, System::EventArgs^  e) {
dataGridViewKlienci->Enabled = false;
BlokujOdblokuj(BoxDaneKlienta, true);
WyczyscPola(BoxDaneKlienta);
}
//Zaznaczenie opcji modyfikuj klienta odblokuje formatkê z list¹ klientow
private: System::Void radioModyfikujKlienta_Click(System::Object^  sender, System::EventArgs^  e) {
dataGridViewKlienci->Enabled = true;
BlokujOdblokuj(BoxDaneKlienta, true);
}
//Zaznaczenie opcji usuñ klienta odblokuje formatkê z list¹ klientów
private: System::Void radioUsunKlienta_Click(System::Object^  sender, System::EventArgs^  e) {
dataGridViewKlienci->Enabled = true;
BlokujOdblokuj(BoxDaneKlienta, false);
}
//Szukanie klientów wg okreœlonego kryterium - ENTER
private: System::Void txtSzukajK_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == (char)13)
	{
		SzukajKlienta();
	}
}
};
}