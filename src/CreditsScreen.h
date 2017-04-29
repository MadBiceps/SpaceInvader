#pragma once

#define Speed 1

namespace My151123_SpaceInvader {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für CreditsScreen
	/// </summary>
	public ref class CreditsScreen : public System::Windows::Forms::Form
	{
	public:
		CreditsScreen(void)
		{
			InitializeComponent();
			//
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~CreditsScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pB_Logo;
	protected:

	protected:
	private: System::Windows::Forms::Timer^  T_Zaehler;
	private: System::Windows::Forms::Label^  l_Prog;
	private: System::Windows::Forms::Label^  l_PresProg;
	private: System::Windows::Forms::Label^  l_Desing;
	private: System::Windows::Forms::Label^  l_Producer;
	private: System::Windows::Forms::Label^  l_Dankan;
	private: System::Windows::Forms::Label^  l_Schwarz;
	private: System::Windows::Forms::Label^  l_SFischer;
	private: System::Windows::Forms::Label^  l_RFischer;
	private: System::Windows::Forms::Label^  l_GJan;
	private: System::Windows::Forms::Label^  l_Mita;
	private: System::Windows::Forms::Label^  l_Gaben;
	private: System::Windows::Forms::Label^  l_Idee;
	private: System::Windows::Forms::Label^  l_CodeO;
	private: System::Windows::Forms::Label^  l_InterE;
	private: System::Windows::Forms::Label^  l_InterP;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CreditsScreen::typeid));
			this->pB_Logo = (gcnew System::Windows::Forms::PictureBox());
			this->T_Zaehler = (gcnew System::Windows::Forms::Timer(this->components));
			this->l_Prog = (gcnew System::Windows::Forms::Label());
			this->l_PresProg = (gcnew System::Windows::Forms::Label());
			this->l_Desing = (gcnew System::Windows::Forms::Label());
			this->l_Producer = (gcnew System::Windows::Forms::Label());
			this->l_Dankan = (gcnew System::Windows::Forms::Label());
			this->l_Schwarz = (gcnew System::Windows::Forms::Label());
			this->l_SFischer = (gcnew System::Windows::Forms::Label());
			this->l_RFischer = (gcnew System::Windows::Forms::Label());
			this->l_GJan = (gcnew System::Windows::Forms::Label());
			this->l_Mita = (gcnew System::Windows::Forms::Label());
			this->l_Gaben = (gcnew System::Windows::Forms::Label());
			this->l_Idee = (gcnew System::Windows::Forms::Label());
			this->l_CodeO = (gcnew System::Windows::Forms::Label());
			this->l_InterE = (gcnew System::Windows::Forms::Label());
			this->l_InterP = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB_Logo))->BeginInit();
			this->SuspendLayout();
			// 
			// pB_Logo
			// 
			this->pB_Logo->BackColor = System::Drawing::Color::Transparent;
			this->pB_Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pB_Logo.Image")));
			this->pB_Logo->Location = System::Drawing::Point(164, 539);
			this->pB_Logo->Name = L"pB_Logo";
			this->pB_Logo->Size = System::Drawing::Size(487, 297);
			this->pB_Logo->TabIndex = 0;
			this->pB_Logo->TabStop = false;
			// 
			// T_Zaehler
			// 
			this->T_Zaehler->Interval = 1;
			this->T_Zaehler->Tick += gcnew System::EventHandler(this, &CreditsScreen::T_Zaehler_Tick);
			// 
			// l_Prog
			// 
			this->l_Prog->AutoSize = true;
			this->l_Prog->BackColor = System::Drawing::Color::Transparent;
			this->l_Prog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_Prog->ForeColor = System::Drawing::Color::Blue;
			this->l_Prog->Location = System::Drawing::Point(-6, 511);
			this->l_Prog->Name = L"l_Prog";
			this->l_Prog->Size = System::Drawing::Size(792, 39);
			this->l_Prog->TabIndex = 1;
			this->l_Prog->Text = L"In-Game Programmierer: Fabian Niklas Fischer";
			this->l_Prog->Visible = false;
			// 
			// l_PresProg
			// 
			this->l_PresProg->AutoSize = true;
			this->l_PresProg->BackColor = System::Drawing::Color::Transparent;
			this->l_PresProg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_PresProg->ForeColor = System::Drawing::Color::Blue;
			this->l_PresProg->Location = System::Drawing::Point(8, 514);
			this->l_PresProg->Name = L"l_PresProg";
			this->l_PresProg->Size = System::Drawing::Size(764, 39);
			this->l_PresProg->TabIndex = 2;
			this->l_PresProg->Text = L"Presentations Programmierer: Fabian Fischer";
			this->l_PresProg->Visible = false;
			// 
			// l_Desing
			// 
			this->l_Desing->AutoSize = true;
			this->l_Desing->BackColor = System::Drawing::Color::Transparent;
			this->l_Desing->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_Desing->ForeColor = System::Drawing::Color::Blue;
			this->l_Desing->Location = System::Drawing::Point(178, 514);
			this->l_Desing->Name = L"l_Desing";
			this->l_Desing->Size = System::Drawing::Size(447, 39);
			this->l_Desing->TabIndex = 3;
			this->l_Desing->Text = L"Desinger: Ricardo Moreira";
			this->l_Desing->Visible = false;
			// 
			// l_Producer
			// 
			this->l_Producer->AutoSize = true;
			this->l_Producer->BackColor = System::Drawing::Color::Transparent;
			this->l_Producer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_Producer->ForeColor = System::Drawing::Color::Blue;
			this->l_Producer->Location = System::Drawing::Point(158, 514);
			this->l_Producer->Name = L"l_Producer";
			this->l_Producer->Size = System::Drawing::Size(467, 39);
			this->l_Producer->TabIndex = 4;
			this->l_Producer->Text = L"Produzent: Ricardo Moreira";
			this->l_Producer->Visible = false;
			// 
			// l_Dankan
			// 
			this->l_Dankan->AutoSize = true;
			this->l_Dankan->BackColor = System::Drawing::Color::Transparent;
			this->l_Dankan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_Dankan->ForeColor = System::Drawing::Color::Blue;
			this->l_Dankan->Location = System::Drawing::Point(318, 514);
			this->l_Dankan->Name = L"l_Dankan";
			this->l_Dankan->Size = System::Drawing::Size(163, 39);
			this->l_Dankan->TabIndex = 5;
			this->l_Dankan->Text = L"Dank an:";
			this->l_Dankan->Visible = false;
			// 
			// l_Schwarz
			// 
			this->l_Schwarz->AutoSize = true;
			this->l_Schwarz->BackColor = System::Drawing::Color::Transparent;
			this->l_Schwarz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_Schwarz->ForeColor = System::Drawing::Color::Blue;
			this->l_Schwarz->Location = System::Drawing::Point(142, 511);
			this->l_Schwarz->Name = L"l_Schwarz";
			this->l_Schwarz->Size = System::Drawing::Size(534, 39);
			this->l_Schwarz->TabIndex = 6;
			this->l_Schwarz->Text = L"Herr Schwarz (Projektbegleiter)";
			this->l_Schwarz->Visible = false;
			// 
			// l_SFischer
			// 
			this->l_SFischer->AutoSize = true;
			this->l_SFischer->BackColor = System::Drawing::Color::Transparent;
			this->l_SFischer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_SFischer->ForeColor = System::Drawing::Color::Blue;
			this->l_SFischer->Location = System::Drawing::Point(266, 514);
			this->l_SFischer->Name = L"l_SFischer";
			this->l_SFischer->Size = System::Drawing::Size(262, 39);
			this->l_SFischer->TabIndex = 7;
			this->l_SFischer->Text = L"Sabine Fischer";
			this->l_SFischer->Visible = false;
			// 
			// l_RFischer
			// 
			this->l_RFischer->AutoSize = true;
			this->l_RFischer->BackColor = System::Drawing::Color::Transparent;
			this->l_RFischer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_RFischer->ForeColor = System::Drawing::Color::Blue;
			this->l_RFischer->Location = System::Drawing::Point(297, 511);
			this->l_RFischer->Name = L"l_RFischer";
			this->l_RFischer->Size = System::Drawing::Size(215, 39);
			this->l_RFischer->TabIndex = 8;
			this->l_RFischer->Text = L"Rolf Fischer";
			this->l_RFischer->Visible = false;
			// 
			// l_GJan
			// 
			this->l_GJan->AutoSize = true;
			this->l_GJan->BackColor = System::Drawing::Color::Transparent;
			this->l_GJan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_GJan->ForeColor = System::Drawing::Color::Blue;
			this->l_GJan->Location = System::Drawing::Point(266, 514);
			this->l_GJan->Name = L"l_GJan";
			this->l_GJan->Size = System::Drawing::Size(279, 39);
			this->l_GJan->TabIndex = 9;
			this->l_GJan->Text = L"Gerd Jankowski";
			this->l_GJan->Visible = false;
			// 
			// l_Mita
			// 
			this->l_Mita->AutoSize = true;
			this->l_Mita->BackColor = System::Drawing::Color::Transparent;
			this->l_Mita->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_Mita->ForeColor = System::Drawing::Color::Blue;
			this->l_Mita->Location = System::Drawing::Point(254, 514);
			this->l_Mita->Name = L"l_Mita";
			this->l_Mita->Size = System::Drawing::Size(274, 39);
			this->l_Mita->TabIndex = 10;
			this->l_Mita->Text = L"Sulamita Franzi";
			this->l_Mita->Visible = false;
			// 
			// l_Gaben
			// 
			this->l_Gaben->AutoSize = true;
			this->l_Gaben->BackColor = System::Drawing::Color::Transparent;
			this->l_Gaben->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_Gaben->ForeColor = System::Drawing::Color::Blue;
			this->l_Gaben->Location = System::Drawing::Point(296, 511);
			this->l_Gaben->Name = L"l_Gaben";
			this->l_Gaben->Size = System::Drawing::Size(216, 39);
			this->l_Gaben->TabIndex = 11;
			this->l_Gaben->Text = L"Gabe Newel";
			this->l_Gaben->Visible = false;
			// 
			// l_Idee
			// 
			this->l_Idee->AutoSize = true;
			this->l_Idee->BackColor = System::Drawing::Color::Transparent;
			this->l_Idee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_Idee->ForeColor = System::Drawing::Color::Blue;
			this->l_Idee->Location = System::Drawing::Point(212, 511);
			this->l_Idee->Name = L"l_Idee";
			this->l_Idee->Size = System::Drawing::Size(370, 39);
			this->l_Idee->TabIndex = 12;
			this->l_Idee->Text = L"Idee: Ricardo Moreira";
			this->l_Idee->Visible = false;
			// 
			// l_CodeO
			// 
			this->l_CodeO->AutoSize = true;
			this->l_CodeO->BackColor = System::Drawing::Color::Transparent;
			this->l_CodeO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_CodeO->ForeColor = System::Drawing::Color::Blue;
			this->l_CodeO->Location = System::Drawing::Point(109, 514);
			this->l_CodeO->Name = L"l_CodeO";
			this->l_CodeO->Size = System::Drawing::Size(579, 39);
			this->l_CodeO->TabIndex = 13;
			this->l_CodeO->Text = L"Codeoptimierung: Ricardo Moreira";
			this->l_CodeO->Visible = false;
			// 
			// l_InterE
			// 
			this->l_InterE->AutoSize = true;
			this->l_InterE->BackColor = System::Drawing::Color::Transparent;
			this->l_InterE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_InterE->ForeColor = System::Drawing::Color::Blue;
			this->l_InterE->Location = System::Drawing::Point(59, 511);
			this->l_InterE->Name = L"l_InterE";
			this->l_InterE->Size = System::Drawing::Size(651, 39);
			this->l_InterE->TabIndex = 14;
			this->l_InterE->Text = L"Interface Entwicklung: Ricardo Moreira";
			this->l_InterE->Visible = false;
			// 
			// l_InterP
			// 
			this->l_InterP->AutoSize = true;
			this->l_InterP->BackColor = System::Drawing::Color::Transparent;
			this->l_InterP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_InterP->ForeColor = System::Drawing::Color::Blue;
			this->l_InterP->Location = System::Drawing::Point(46, 511);
			this->l_InterP->Name = L"l_InterP";
			this->l_InterP->Size = System::Drawing::Size(709, 39);
			this->l_InterP->TabIndex = 15;
			this->l_InterP->Text = L"Interface Programmierung: Fabian Fischer";
			this->l_InterP->Visible = false;
			// 
			// CreditsScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(784, 562);
			this->Controls->Add(this->l_InterP);
			this->Controls->Add(this->l_InterE);
			this->Controls->Add(this->l_CodeO);
			this->Controls->Add(this->l_Idee);
			this->Controls->Add(this->l_Gaben);
			this->Controls->Add(this->l_Mita);
			this->Controls->Add(this->l_GJan);
			this->Controls->Add(this->l_RFischer);
			this->Controls->Add(this->l_SFischer);
			this->Controls->Add(this->l_Schwarz);
			this->Controls->Add(this->l_Dankan);
			this->Controls->Add(this->l_Producer);
			this->Controls->Add(this->l_Desing);
			this->Controls->Add(this->l_PresProg);
			this->Controls->Add(this->l_Prog);
			this->Controls->Add(this->pB_Logo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CreditsScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CreditsScreen";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &CreditsScreen::CreditsScreen_FormClosing);
			this->Shown += gcnew System::EventHandler(this, &CreditsScreen::CreditsScreen_Shown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CreditsScreen::CreditsScreen_KeyPress);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB_Logo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CreditsScreen_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		e->Cancel = true;
		this->Hide();
	}
	private: System::Void T_Zaehler_Tick(System::Object^  sender, System::EventArgs^  e) {
		pB_Logo->Top -= Speed;
		if (pB_Logo -> Top <= 150)
		{
			l_Prog->Visible = true;
			l_Prog->Top -= Speed;
		}
		if (l_Prog->Top <= 402)
		{
			l_PresProg->Visible = true;
			l_PresProg->Top -= Speed;
		}
		if (l_PresProg->Top <= 402)
		{
			l_Desing->Visible = true;
			l_Desing->Top -= Speed;
		}
		if (l_Desing->Top <= 402)
		{
			l_Idee->Visible = true;
			l_Idee->Top -= Speed;
		}
		if (l_Idee->Top <= 402)
		{
			l_CodeO->Visible = true;
			l_CodeO->Top -= Speed;
		}
		if (l_CodeO->Top <= 402)
		{
			l_InterE->Visible = true;
			l_InterE->Top -= Speed;
		}
		if (l_InterE->Top <= 402)
		{
			l_InterP->Visible = true;
			l_InterP -> Top -= Speed;
		}
		if (l_InterP->Top <= 402)		//-> Muss noch dem entsprechend geändert werden
		{
			l_Dankan -> Visible = true;
			l_Dankan->Top -= Speed;
		}
		if (l_Dankan->Top <= 402)
		{
			l_Schwarz->Visible = true;
			l_Schwarz->Top -= Speed;
		}
		if (l_Schwarz->Top <= 402)
		{
			l_SFischer->Visible = true;
			l_SFischer->Top -= Speed;
		}
		if (l_SFischer->Top <= 402)
		{
			l_RFischer->Visible = true;
			l_RFischer->Top -= Speed;
		}
		if (l_RFischer->Top <= 402)
		{
			l_GJan->Visible = true;
			l_GJan->Top -= Speed;
		}
		if (l_GJan->Top <= 402)
		{
			l_Mita->Visible = true;
			l_Mita->Top -= Speed;
		}
		if (l_Mita->Top <= 402)
		{
			l_Gaben->Visible = true;
			l_Gaben->Top -= Speed;
		}
		if (l_Gaben->Top <= 0)
		{
			Application::Exit();
		}
	}
	private: System::Void CreditsScreen_Shown(System::Object^  sender, System::EventArgs^  e) {
		T_Zaehler->Enabled = Enabled;
		KeyPreview::set(true);
		pB_Logo->Visible = false;
		pB_Logo->Top = 562;

		l_CodeO->Visible = false;
		l_CodeO->Top = 562;

		l_Prog->Visible = false;
		l_Prog->Top = 562;

		l_Dankan->Visible = false;
		l_Dankan->Top = 562;

		l_Desing->Visible = false;
		l_Desing->Top = 562;

		l_Gaben->Visible = false;
		l_Gaben->Top = 562;

		l_GJan->Visible = false;
		l_GJan->Top = 562;

		l_Idee->Visible = false;
		l_Idee->Top = 562;

		l_InterE->Visible = false;
		l_InterE->Top = 562;

		l_InterP->Visible = false;
		l_InterP->Top = 562;

		l_Mita->Visible = false;
		l_Mita->Top = 562;

		l_PresProg->Visible = false;
		l_PresProg->Top = 562;

		l_Producer->Visible = false;
		l_Producer->Top = 562;

		l_RFischer->Visible = false;
		l_RFischer->Top = 562;

		l_Schwarz->Visible = false;
		l_Schwarz->Top = 562;

		l_SFischer->Visible = false;
		l_SFischer->Top = 562;

		//Fertig machen
	}
	private: System::Void CreditsScreen_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (e->KeyChar == 27)
		{
			Application::Exit();
		}
	}
	};
}
