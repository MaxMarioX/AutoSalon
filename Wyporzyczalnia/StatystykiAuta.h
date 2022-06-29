#pragma once
#include <vector>

namespace Wyporzyczalnia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for StatystykiAuta
	/// </summary>
	public ref class StatystykiAuta : public System::Windows::Forms::Form
	{
	public: int ID_U;

	public:

	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::DataGridView^  dataGridViewNWN;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar2;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar4;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;

	public: String^ BazaDanychSQL;
	public:
		StatystykiAuta(int id_uzytkownik, String^ konfiguracja)
		{
			InitializeComponent();

			ID_U = id_uzytkownik;
			BazaDanychSQL = konfiguracja;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StatystykiAuta()
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->btnWyjdz = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridViewNWN = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar2 = (gcnew System::Windows::Forms::MonthCalendar());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar4 = (gcnew System::Windows::Forms::MonthCalendar());
			this->monthCalendar3 = (gcnew System::Windows::Forms::MonthCalendar());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewNWN))->BeginInit();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnWyjdz
			// 
			this->btnWyjdz->Location = System::Drawing::Point(343, 480);
			this->btnWyjdz->Name = L"btnWyjdz";
			this->btnWyjdz->Size = System::Drawing::Size(75, 23);
			this->btnWyjdz->TabIndex = 0;
			this->btnWyjdz->Text = L"WyjdŸ";
			this->btnWyjdz->UseVisualStyleBackColor = true;
			this->btnWyjdz->Click += gcnew System::EventHandler(this, &StatystykiAuta::btnWyjdz_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(762, 462);
			this->tabControl1->TabIndex = 6;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->chart1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(754, 436);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Usterkowoœæ";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(62, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Najbardziej usterkowe samochody";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(6, 34);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Samochody";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(742, 396);
			this->chart1->TabIndex = 6;
			this->chart1->Text = L"Najbardziej usterkowe auto";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label2);
			this->tabPage3->Controls->Add(this->chart2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(754, 436);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Najpopularniejsze";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(62, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(218, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Najczêœciej wypo¿yczane samochody";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(6, 34);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Samochody";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(745, 394);
			this->chart2->TabIndex = 0;
			this->chart2->Text = L"chart2";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->chart3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(754, 436);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Wypo¿yczone najd³u¿ej";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(62, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(207, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Najd³u¿ej wypo¿yczane samochody";
			// 
			// chart3
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(6, 34);
			this->chart3->Name = L"chart3";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Samochody";
			this->chart3->Series->Add(series3);
			this->chart3->Size = System::Drawing::Size(745, 394);
			this->chart3->TabIndex = 1;
			this->chart3->Text = L"chart3";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->dataGridViewNWN);
			this->tabPage4->Controls->Add(this->label4);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(754, 436);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Nie naprawiane";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// dataGridViewNWN
			// 
			this->dataGridViewNWN->AllowUserToAddRows = false;
			this->dataGridViewNWN->AllowUserToDeleteRows = false;
			this->dataGridViewNWN->AllowUserToOrderColumns = true;
			this->dataGridViewNWN->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewNWN->Location = System::Drawing::Point(3, 45);
			this->dataGridViewNWN->Name = L"dataGridViewNWN";
			this->dataGridViewNWN->ReadOnly = true;
			this->dataGridViewNWN->Size = System::Drawing::Size(748, 388);
			this->dataGridViewNWN->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(3, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(264, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Samochody, które nigdy nie by³y w naprawie ";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label10);
			this->tabPage5->Controls->Add(this->button2);
			this->tabPage5->Controls->Add(this->label9);
			this->tabPage5->Controls->Add(this->label7);
			this->tabPage5->Controls->Add(this->label6);
			this->tabPage5->Controls->Add(this->label5);
			this->tabPage5->Controls->Add(this->monthCalendar2);
			this->tabPage5->Controls->Add(this->monthCalendar1);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(754, 436);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Wp³ywy";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->Location = System::Drawing::Point(154, 307);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(468, 13);
			this->label10->TabIndex = 13;
			this->label10->Text = L"W powy¿szym przedziale czasu, klienci wypo¿yczyli samochody na ³¹czn¹ kwotê:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(334, 232);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Oblicz";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &StatystykiAuta::button2_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(335, 338);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 25);
			this->label9->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(144, 19);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(442, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Suma op³at, które klienci zap³acili za auta wypo¿yczone w przedziale czasu:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(544, 71);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 13);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Do";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(168, 71);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Od";
			// 
			// monthCalendar2
			// 
			this->monthCalendar2->Location = System::Drawing::Point(421, 93);
			this->monthCalendar2->Name = L"monthCalendar2";
			this->monthCalendar2->TabIndex = 1;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(53, 93);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->label15);
			this->tabPage6->Controls->Add(this->label14);
			this->tabPage6->Controls->Add(this->dataGridView1);
			this->tabPage6->Controls->Add(this->label13);
			this->tabPage6->Controls->Add(this->button1);
			this->tabPage6->Controls->Add(this->label12);
			this->tabPage6->Controls->Add(this->label11);
			this->tabPage6->Controls->Add(this->monthCalendar4);
			this->tabPage6->Controls->Add(this->monthCalendar3);
			this->tabPage6->Controls->Add(this->label8);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(754, 436);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Raport";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label15->ForeColor = System::Drawing::Color::Red;
			this->label15->Location = System::Drawing::Point(531, 403);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 13);
			this->label15->TabIndex = 19;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label14->Location = System::Drawing::Point(367, 403);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(158, 13);
			this->label14->TabIndex = 18;
			this->label14->Text = L"£¹czny koszt wypo¿yczeñ:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(370, 64);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(331, 315);
			this->dataGridView1->TabIndex = 17;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label13->Location = System::Drawing::Point(367, 42);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(248, 13);
			this->label13->TabIndex = 16;
			this->label13->Text = L"Zestawienie wypo¿yczonych samochodów:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(626, 398);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Wyœwietl";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StatystykiAuta::button1_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(147, 237);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(21, 13);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Do";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(139, 42);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(21, 13);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Od";
			// 
			// monthCalendar4
			// 
			this->monthCalendar4->Location = System::Drawing::Point(24, 259);
			this->monthCalendar4->Name = L"monthCalendar4";
			this->monthCalendar4->TabIndex = 12;
			// 
			// monthCalendar3
			// 
			this->monthCalendar3->Location = System::Drawing::Point(24, 64);
			this->monthCalendar3->Name = L"monthCalendar3";
			this->monthCalendar3->TabIndex = 11;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->Location = System::Drawing::Point(147, 11);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(344, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Zestawienie aut wypo¿yczonych w danym przedziale czasu:";
			// 
			// StatystykiAuta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(786, 515);
			this->ControlBox = false;
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->btnWyjdz);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"StatystykiAuta";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Statystyki";
			this->Load += gcnew System::EventHandler(this, &StatystykiAuta::StatystykiAuta_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewNWN))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
//Przycisk wyjdŸ
private: System::Void btnWyjdz_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
//Statystyka - funkcja pomocnicza sprawdzaj¹ca po ID auta ile razy auto by³o w serwisie
private: int IleRazyWSerwisie(int ID_Auta)
{
	MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ Command = gcnew MySqlCommand("select ID_Samochod from Naprawa where ID_Samochod = '" + ID_Auta + "';", Connect);
	int HowMany = 0;

	try {
		Connect->Open();
		MySqlDataAdapter^ Data = gcnew MySqlDataAdapter();
		Data->SelectCommand = Command;
		DataTable^ Table = gcnew DataTable();
		Data->Fill(Table);
		Connect->Close();

		for each(DataRow^ Row in Table->Rows)
		{
			if (Row[0])
				HowMany++;
		}

	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}

	return HowMany;
}
//Statystyka - najczêœciej psuj¹ce siê auto
private: void NajPsujaceSieAuto()
{
	/*
	System::Windows::Forms::DataVisualization::Charting::Series^ bpSeries =
		gcnew System::Windows::Forms::DataVisualization::Charting::Series();
	bpSeries->Name = "bpSeries";

	std::vector<int> yValues{ 10,5,7,4,8,6 };

	for (int i = 0; i < yValues.size(); i++)
	this->NajPsujaceSieAuto->Series->AddY(yValues[i]);
	*/
	//Pobieramy informacjê o autach w wyporzyczalni: ile aut i nazwy tych aut
	MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ CommandCar = gcnew MySqlCommand("select ID_Specyfikacja, Marka, Model from Specyfikacja", Connect);

	DataTable^ TableCar = gcnew DataTable();
	
	String^ Samochod;
	int Naprawiany;

	try {
		Connect->Open();
		MySqlDataAdapter^ Data = gcnew MySqlDataAdapter();
		Data->SelectCommand = CommandCar;
		Data->Fill(TableCar);
		Connect->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
	
	for each(DataRow^ Row in TableCar->Rows)
	{
		Samochod = Row[1] + " " + Row[2];
		Naprawiany = IleRazyWSerwisie(Convert::ToInt32(Row[0]));
		this->chart1->Series["Samochody"]->Points->AddXY(Samochod, Naprawiany);
	}
}
//Statystyka - funkcja pomocnicza sprawdza czy samochód o danym ID by³o naprawiane
private: bool SprawdzCzyNaprawiane(int ID_Auta)
{
	bool Naprawiany = false;

	MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ CommandCar = gcnew MySqlCommand("select ID_Samochod from naprawa where ID_Samochod = '"+ID_Auta+"';", Connect);
	MySqlDataReader^ DataRead;

	try {
		Connect->Open();
		DataRead = CommandCar->ExecuteReader();
		if (DataRead->Read())
		{
			Naprawiany = true;
		}
		Connect->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}

	return Naprawiany;
}
//Statystyka - najbardziej niezawodne auta
private: void NajNiezawodniejszeAuto()
{
	MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ CommandCar = gcnew MySqlCommand("select ID_Specyfikacja AS 'ID Samochodu', Marka, Model, Pojemnosc_silnika AS 'Pojemnoœæ silnika', Rodzaj_silnika AS 'Rodzaj silnika', Moc, Rok_produkcji AS 'Rok produkcji', Przebieg, Ladownosc AS '£adownoœæ', Liczba_drzwi AS 'Liczba drzwi', Klimatyzacja, Kolor from specyfikacja;", Connect);
	DataTable^ ListaSamochodow = gcnew DataTable();

	bool CzyWSerwisie;

	try {
		Connect->Open();
		MySqlDataAdapter^ Data = gcnew MySqlDataAdapter();
		Data->SelectCommand = CommandCar;
		Data->Fill(ListaSamochodow);
		Connect->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}

	for each(DataRow^ Row in ListaSamochodow->Rows)
	{
		if (SprawdzCzyNaprawiane(Convert::ToInt32(Row[0])))
		{
			Row->Delete();
		}
	}
	BindingSource^ Source = gcnew BindingSource();
	Source->DataSource = ListaSamochodow;
	dataGridViewNWN->DataSource = Source;
}
//Statystyka - najbardziej popularne auta
private: void NajPopularniejszeAuto()
{
	MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ CommandA = gcnew MySqlCommand("select ID_Samochod from rezerwacja;",Connect);
	MySqlCommand^ CommandB = gcnew MySqlCommand("select ID_Specyfikacja, Marka, Model from Specyfikacja;", Connect);
	//MySqlCommand^ CommandC = gcnew MySqlCommand("select COUNT(*) FROM rezerwacja;", Connect);

	DataTable^ TableCar = gcnew DataTable();
	DataTable^ TableRent = gcnew DataTable();

	String^ Samochod;

	int HowManyRows = 0;
	/*
	try {
		Connect->Open();
		HowManyRows = Convert::ToInt32(CommandC->ExecuteScalar());
		Connect->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
	*/
	//Pobieramy tabelê z ID samochodów, które zosta³y wyporzyczone
	try {
		Connect->Open();
		MySqlDataAdapter^ Data = gcnew MySqlDataAdapter();
		Data->SelectCommand = CommandA;
		Data->Fill(TableRent);
		Connect->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
	//Pobieramy tabelê z ID wszystkich samochodów
	try {
		Connect->Open();
		MySqlDataAdapter^ Data = gcnew MySqlDataAdapter();
		Data->SelectCommand = CommandB;
		Data->Fill(TableCar);
		Connect->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
	
	//Algorytm dobry tylko dla niewielkiej iloœci danych
	for each(DataRow^ R1 in TableCar->Rows)
	{
		for each(DataRow^ R2 in TableRent->Rows)
		{
			if (Convert::ToInt32(R1[0]) == Convert::ToInt32(R2[0]))
				HowManyRows++;
		}
		Samochod = R1[1] + " " + R1[2];
		this->chart2->Series["Samochody"]->Points->AddXY(Samochod, HowManyRows);
		HowManyRows = 0;
	}
}
//Statystyka - funkcja pomocnicza konwertuj¹ca string na int (potrzebe przy obliczaniu ³¹cznej iloœci godzin) i zwracaj¹ca liczbê, która jest sum¹ godzin ============ POPRAWIC
private: int ZamienStringNaInt(String^ DataA, String^ CzasA, String^ DataB, String^ CzasB)
{
	System::Int32 DataZwrotu;
	System::Int32 DataRezerwacji;

	String^ DzienRezerwacji;
	String^ MiesiacRezerwacji;
	String^ RokRezerwacji;
	String^ CzasRezerwacji;

	String^ DzienZwrotu;
	String^ MiesiacZwrotu;
	String^ RokZwrotu;
	String^ CzasZwrotu;

	System::Int32 Godziny;

	DzienRezerwacji = DataA->Substring(0, 2);
	MiesiacRezerwacji = DataA->Substring(3, 2);
	RokRezerwacji = DataA->Substring(6, 4);
	CzasRezerwacji = CzasA->Substring(0, 2);

	DzienZwrotu = DataB->Substring(0, 2);
	MiesiacZwrotu = DataB->Substring(3, 2);
	RokZwrotu = DataB->Substring(6, 4);
	CzasZwrotu = CzasB->Substring(0, 2);

	DataRezerwacji = Convert::ToInt32(DzienRezerwacji) + (Convert::ToInt32(MiesiacRezerwacji) * 100) + (Convert::ToInt32(RokRezerwacji) * 10000);
	DataZwrotu = Convert::ToInt32(DzienZwrotu) + (Convert::ToInt32(MiesiacZwrotu) * 100) + (Convert::ToInt32(RokZwrotu) * 10000);


	Godziny = ((((DataZwrotu - DataRezerwacji) * 24) - Convert::ToInt32(CzasRezerwacji)) + Convert::ToInt32(CzasZwrotu));

	return Godziny;
}
//Statystyka - funkcja pomocnicza obliczj¹ca ³¹czn¹ iloœæ godzin wyporzyczania danego auta i zwracaj¹ca najwiêksz¹ liczbê godzin
private: int IleGodzinWyporzyczone(int ID_Auta)
{
	MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ DateTimeR = gcnew MySqlCommand("select Data_rezerwacji, Godzina_rezerwacji from rezerwacja where ID_Samochod = '" + ID_Auta + "';",Connect);
	MySqlCommand^ DateTimeZ = gcnew MySqlCommand("select Data_zwrotu, Godzina_zwrotu from zwrot where ID_Samochod = '"+ID_Auta+"';", Connect);

	DataTable^ SumDateTimeR = gcnew DataTable();
	DataTable^ SumDateTImeZ = gcnew DataTable();

	try {
		Connect->Open();
		
		MySqlDataAdapter^ Data = gcnew MySqlDataAdapter();
		
		Data->SelectCommand = DateTimeR;
		Data->Fill(SumDateTimeR);

		Data->SelectCommand = DateTimeZ;
		Data->Fill(SumDateTImeZ);
		
		Connect->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}

	int NowaSumaGodzin = 0;
	int TymczasowaSumaGodzin;

	for each(DataRow^ A in SumDateTimeR->Rows)
	{
		for each(DataRow^ B in SumDateTImeZ->Rows)
		{
			TymczasowaSumaGodzin = ZamienStringNaInt(Convert::ToString(A[0]), Convert::ToString(A[1]), Convert::ToString(B[0]), Convert::ToString(B[1]));
			
			if (TymczasowaSumaGodzin > NowaSumaGodzin)
				NowaSumaGodzin = TymczasowaSumaGodzin;
			
			break;
		}
	}
	
	return NowaSumaGodzin;
}
//Statystyka - najd³u¿ej wyporzyczone auto
private: void NajDluzejWyporzyczone()
{
	MySqlConnection^ Connect = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ Command = gcnew MySqlCommand("select ID_Specyfikacja, Marka, Model from Specyfikacja;", Connect);
	DataTable^ CarTable = gcnew DataTable();

	String^ Car;
	int SumDateTimeCar;

	try {
		Connect->Open();
		MySqlDataAdapter^ Data = gcnew MySqlDataAdapter();
		Data->SelectCommand = Command;
		Data->Fill(CarTable);
		Connect->Close();
	}
	catch (Exception^ w)
	{
		MessageBox::Show(w->Message);
	}

	for each(DataRow^ R in CarTable->Rows)
	{
		SumDateTimeCar = IleGodzinWyporzyczone(Convert::ToInt32(R[0]));
		Car = R[1] + " " + R[2];
		this->chart3->Series["Samochody"]->Points->AddXY(Car, SumDateTimeCar);
	}
}
//Formatka
private: System::Void StatystykiAuta_Load(System::Object^  sender, System::EventArgs^  e) {
	NajPsujaceSieAuto();
	NajPopularniejszeAuto();
	NajDluzejWyporzyczone();
	NajNiezawodniejszeAuto();
}
//Funkcja pomocnicza sprawdzaj¹ca czy dana data mieœci siê w danym zakresie
private: bool SprawdzCzyDataWZakresie(String^ DataSprawdz, int DataOD, int DataDO)
{
	bool final = false;

	int DzienSprawdz = Convert::ToInt32(DataSprawdz->Substring(0, 2));
	int MiesiacSprawdz = Convert::ToInt32(DataSprawdz->Substring(3, 2));
	int RokSprawdz = Convert::ToInt32(DataSprawdz->Substring(6, 4));
	int DataSpr = DzienSprawdz + MiesiacSprawdz * 100 + RokSprawdz * 10000;
	
	if ((DataSpr >= DataOD) && (DataSpr <= DataDO))
		final = true;

	return final;
}
//Funkcja pomocnicza wyszukuj¹ca p³atnoœci i obliczj¹ca sumê w okresie od - do
private: Double ObliczSumeOplat(int DataStart, int DataStop)
{
	MySqlConnection^ PolaczDoBazy = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ Komenda = gcnew MySqlCommand("select faktura.Data_wystawienia, zwrot.Kara_naprawa, zwrot.Kara_termin, zwrot.Kara_dodatkowa, zwrot.Rabat, rezerwacja.Cena  from faktura, zwrot, rezerwacja where faktura.ID_Zwrotu = zwrot.ID_Zwrot and zwrot.ID_Rezerwacja = rezerwacja.ID_Rezerwacja;", PolaczDoBazy);
	Double SumaLaczna;
	DataTable^ Zestawienie = gcnew DataTable();

	try {
		PolaczDoBazy->Open();
		MySqlDataAdapter^ Dane = gcnew MySqlDataAdapter();
		Dane->SelectCommand = Komenda;
		Dane->Fill(Zestawienie);
		PolaczDoBazy->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
	/*
	for each(DataRow^ Row in Zestawienie->Rows)
	{
		if (SprawdzCzyDataWZakresie(Convert::ToString(Row[0]), DataStart, DataStop))
		{
			Row->Delete();
		}
	}
	*/
	try {
		for each(DataRow^ Row in Zestawienie->Rows)
		{
			if (SprawdzCzyDataWZakresie(Convert::ToString(Row[0]), DataStart, DataStop))
			{
				SumaLaczna += (((Convert::ToDouble(Row[1]) + Convert::ToDouble(Row[2]) + Convert::ToDouble(Row[3])) - Convert::ToDouble(Row[4])) + Convert::ToDouble(Row[5]));
			}
		}
	}
	catch (Exception^ r)
	{
		MessageBox::Show("W podanym przedziale czasowym, klienci nie wyporzyczali samochodów.", "Brak danych", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		SumaLaczna = 0;
	}

	return SumaLaczna;

}
//Funkcja pomocnicza sprawdzaj¹ca czy zaznaczono prawid³owo daty
private: bool SprawdzPoprawnoscDat(int DataA, int DataB)
{
	bool final = false;

	if (DataA < DataB)
		final = true;

	return final;
}
//Przycisk obliczaj¹cy ³¹czn¹ kwotê za wyporzyczone samochody
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Int32 DzienOd;		System::Int32 DzienDo;
	System::Int32 MiesiacOd;	System::Int32 MiesiacDo;
	System::Int32 RokOd;		System::Int32 RokDo;

	System::Int32 CalOd;
	System::Int32 CalDo;

	Double SumaOplat;

	DzienOd = monthCalendar1->SelectionStart.Day;
	MiesiacOd = monthCalendar1->SelectionStart.Month;
	RokOd = monthCalendar1->SelectionStart.Year;

	DzienDo = monthCalendar2->SelectionStart.Day;
	MiesiacDo = monthCalendar2->SelectionStart.Month;
	RokDo = monthCalendar2->SelectionStart.Year;

	CalOd = DzienOd + MiesiacOd * 100 + RokOd * 10000;
	CalDo = DzienDo + MiesiacDo * 100 + RokDo * 10000;

	if (SprawdzPoprawnoscDat(CalOd, CalDo)) {
		SumaOplat = ObliczSumeOplat(CalOd, CalDo);
	}
	else {
		MessageBox::Show("Proszê poprawnie zaznaczyæ daty!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	label9->Text = Convert::ToString(Math::Round(Convert::ToDecimal(SumaOplat), 2)) + " z³";
}
//Funkcja pomocnicza wyœwietlaj¹ca wyporzyczone samochody w przedziale od do
private: void PokazSamochodyWyporzyczoneOdDo(int DataStart, int DataStop)
{
	MySqlConnection^ PolaczDoBazy = gcnew MySqlConnection(BazaDanychSQL);
	MySqlCommand^ Komenda = gcnew MySqlCommand("select zwrot.ID_Samochod, zwrot.Data_zwrotu, zwrot.Kara_naprawa, zwrot.Kara_termin, zwrot.Kara_dodatkowa, zwrot.Rabat, rezerwacja.Cena ,specyfikacja.Marka, specyfikacja.Model from zwrot, specyfikacja, rezerwacja where zwrot.ID_Samochod = specyfikacja.ID_Specyfikacja and zwrot.ID_Rezerwacja = rezerwacja.ID_Rezerwacja;",PolaczDoBazy);
	DataTable^ Zestawienie = gcnew DataTable();
	Double SumaKosztow;

	try {
		PolaczDoBazy->Open();
		MySqlDataAdapter^ Dane = gcnew MySqlDataAdapter();
		Dane->SelectCommand = Komenda;
		Dane->Fill(Zestawienie);
		PolaczDoBazy->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}

	try {
		for each(DataRow^ Row in Zestawienie->Rows)
		{
			if (SprawdzCzyDataWZakresie(Convert::ToString(Row[1]), DataStart, DataStop))
			{
				SumaKosztow += ((Convert::ToDouble(Row[2]) + Convert::ToDouble(Row[3]) + Convert::ToDouble(Row[4])) - Convert::ToDouble(Row[5])) + Convert::ToDouble(Row[6]);
			}
			else {
				Row->Delete();
			}
		}
	}
	catch (Exception^ r)
	{
		MessageBox::Show("W podanym przedziale czasowym, klienci nie wyporzyczali samochodów.", "Brak danych", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		SumaKosztow = 0;
	}

	BindingSource^ Zrodlo = gcnew BindingSource();
	Zrodlo->DataSource = Zestawienie;
	dataGridView1->DataSource = Zrodlo;
	
	dataGridView1->Columns[1]->Visible = false;
	dataGridView1->Columns[2]->Visible = false;
	dataGridView1->Columns[3]->Visible = false;
	dataGridView1->Columns[4]->Visible = false;
	dataGridView1->Columns[5]->Visible = false;
	dataGridView1->Columns[6]->Visible = false;

	label15->Text = Convert::ToString(Math::Round(Convert::ToDecimal(SumaKosztow), 2)) + " z³";
}
//Przycisk wyœwietlaj¹cy wyporzyczone samochody w danym przedziale czasowym
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Int32 DzienOd;		System::Int32 DzienDo;
	System::Int32 MiesiacOd;	System::Int32 MiesiacDo;
	System::Int32 RokOd;		System::Int32 RokDo;

	System::Int32 CalOd;
	System::Int32 CalDo;

	DzienOd = monthCalendar3->SelectionStart.Day;
	MiesiacOd = monthCalendar3->SelectionStart.Month;
	RokOd = monthCalendar3->SelectionStart.Year;

	DzienDo = monthCalendar4->SelectionStart.Day;
	MiesiacDo = monthCalendar4->SelectionStart.Month;
	RokDo = monthCalendar4->SelectionStart.Year;

	CalOd = DzienOd + MiesiacOd * 100 + RokOd * 10000;
	CalDo = DzienDo + MiesiacDo * 100 + RokDo * 10000;

	if (SprawdzPoprawnoscDat(CalOd, CalDo)) {
		PokazSamochodyWyporzyczoneOdDo(CalOd, CalDo);
	}
	else {
		MessageBox::Show("Proszê poprawnie zaznaczyæ daty!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
