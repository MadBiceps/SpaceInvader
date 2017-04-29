#pragma once

#include <Windows.h>
//#include "Class_Enemy.h"
//#include "Class_Options.h"
//#include "Class_UpgradeSystem.h"
//#include "Class_Hindernis.h"
#include "Funktion.h"
#include "Startscreen.h"
#include "CreditsScreen.h"
#include <algorithm>

#using <System.Drawing.dll>
#using <System.Windows.Forms.dll>
#using <System.dll>

//----Store Preise--

int MedipackPreis = 25;
int H1Preis = 100;
int H2Preis = 100;
int H3Preis = 100;
int H4Preis = 100;

int SU1 = 500;
int SU2 = 1000;
int SU3 = 1500;
int SU4 = 2000;
int SU5 = 5000;

int help;

int schadenE;
bool EinS = false;
bool Gegner1Shoot = false;
bool Gegner2Shoot = false;
bool Gegner3Shoot = false;
bool Gegner4Shoot = false;
bool Gegner5Shoot = false;
bool Gegner6Shoot = false;
bool Gegner7Shoot = false;
bool Gegner8Shoot = false;
bool Gegner9Shoot = false;

bool Pause_Shoot = false;

int zzahl;
int zzahlS;
int zzahlG;
int zzahlG2;

//------------------
double score = 0;
//int hp=0;
bool Warning = true;

int x1E = 0;
int x2E = 0;
int yE = 0;
int x1P = 0;
int x2P = 0;

int x1 = 0, x2 = 0, y=0;


namespace My151123_SpaceInvader {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;
	using namespace System::Media;
	using namespace System::Threading;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	private:
		CreditsScreen ^creditsScreen;
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			Thread::Sleep(2000);
			creditsScreen = gcnew CreditsScreen();
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  M_Header;
	private: System::Windows::Forms::Button^  M_NewG;

	private: System::Windows::Forms::Button^  M_Higscr;
	private: System::Windows::Forms::Button^  M_Exit;
	private: System::Windows::Forms::Label^  M_Cred;
	private: System::Windows::Forms::Button^  H_Menue;
	private: System::Windows::Forms::Button^  H_Exit;
	private: System::Windows::Forms::Button^  M_Shop;





















	private: System::Windows::Forms::PictureBox^  PB_Player;
	private: System::Windows::Forms::Timer^  T_Shoot;




	private: System::Windows::Forms::PictureBox^  PB_Hindernis1;





	private: System::Windows::Forms::PictureBox^  PB_Hindernis2;
	private: System::Windows::Forms::PictureBox^  PB_Hindernis3;
	private: System::Windows::Forms::PictureBox^  PB_Shoot0;
	private: System::Windows::Forms::PictureBox^  PB_Layer1;
	private: System::Windows::Forms::PictureBox^  PB_EnemyN0;
	private: System::Windows::Forms::PictureBox^  PB_EnemyN1;
	private: System::Windows::Forms::PictureBox^  PB_EnemyN2;
	private: System::Windows::Forms::PictureBox^  PB_EnemyN3;
	private: System::Windows::Forms::PictureBox^  PB_EnemyN4;
	private: System::Windows::Forms::PictureBox^  PB_EnemyH0;
	private: System::Windows::Forms::PictureBox^  PB_EnemyH1;
	private: System::Windows::Forms::PictureBox^  PB_EnemyH2;
	private: System::Windows::Forms::PictureBox^  PB_EnemyH3;
	private: System::Windows::Forms::PictureBox^  PB_ShootEH0;
	private: System::Windows::Forms::PictureBox^  PB_ShootEH1;
	private: System::Windows::Forms::PictureBox^  PB_ShootEH2;
	private: System::Windows::Forms::PictureBox^  PB_ShootEH3;
	private: System::Windows::Forms::PictureBox^  PB_ShootEN0;
	private: System::Windows::Forms::PictureBox^  PB_ShootEN1;
	private: System::Windows::Forms::PictureBox^  PB_ShootEN2;
	private: System::Windows::Forms::PictureBox^  PB_ShootEN3;
	private: System::Windows::Forms::PictureBox^  PB_ShootEN4;
	private: System::Windows::Forms::Timer^  T_Game;
	private: System::Windows::Forms::Label^  L_ScoreText;
	private: System::Windows::Forms::Label^  L_Score;

	private: System::Windows::Forms::Label^  L_HPAnzeigeI;
	private: System::Windows::Forms::PictureBox^  L_Shop;
	private: System::Windows::Forms::TabControl^  tC_Shop;
	private: System::Windows::Forms::TabPage^  tabPage1;

	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::GroupBox^  gB_SchiffgeP;

	private: System::Windows::Forms::Label^  L_Geschwind;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TrackBar^  tB_Geschwind;
private: System::Windows::Forms::GroupBox^  gB_SchussgeP;


	private: System::Windows::Forms::Label^  L_Schussge;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::TrackBar^  tB_Schussge;
private: System::Windows::Forms::TabPage^  tabPage2;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  l_MedPreis;

private: System::Windows::Forms::Button^  B_MedipackKaufen;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::TextBox^  tB_Cheats;

private: System::Windows::Forms::Button^  b_CheatsSend;
private: System::Windows::Forms::Button^  b_HG01;
private: System::Windows::Forms::Button^  b_HG03;
private: System::Windows::Forms::Label^  l_H3Preis;

private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  l_H2Preis;

private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  l_H1Preis;

private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::Button^  b_HG02;

private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::PictureBox^  pictureBox4;
private: System::Windows::Forms::Button^  b_HG04;
private: System::Windows::Forms::Label^  l_H4Preis;

private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::PictureBox^  pictureBox5;



private: System::Windows::Forms::TabPage^  tabPage4;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;

private: System::Windows::Forms::Label^  l_InH4A;

private: System::Windows::Forms::Label^  label8;

private: System::Windows::Forms::Label^  l_InH3A;

private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  l_InH2A;

private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  l_InH1A;

private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::PictureBox^  pictureBox6;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  l_InMediA;



private: System::Windows::Forms::PictureBox^  pictureBox7;

private: System::Windows::Forms::PictureBox^  pictureBox8;
private: System::Windows::Forms::PictureBox^  pictureBox9;
private: System::Windows::Forms::PictureBox^  pictureBox10;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
private: System::Windows::Forms::Button^  b_SU5K;

private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Button^  b_SU4K;

private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::PictureBox^  pictureBox11;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Button^  b_SU1K;
private: System::Windows::Forms::Button^  b_SU2K;


private: System::Windows::Forms::PictureBox^  pictureBox12;
private: System::Windows::Forms::Button^  b_SU3K;

private: System::Windows::Forms::PictureBox^  pictureBox13;
private: System::Windows::Forms::PictureBox^  pictureBox14;
private: System::Windows::Forms::PictureBox^  pictureBox15;
private: System::Windows::Forms::Label^  l_Coints;
private: System::Windows::Forms::Label^  L_CoinsL;
private: System::Windows::Forms::ProgressBar^  pB_HPAnzeige;


private: System::Windows::Forms::Timer^  T_ShootE;
private: System::Windows::Forms::GroupBox^  gB_SchussGeG;

private: System::Windows::Forms::Label^  L_GeschwindE;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::TrackBar^  tB_GeschwindE;
private: System::Windows::Forms::ListBox^  listBox1;
private: System::Windows::Forms::TableLayoutPanel^  tlP_Highscore;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  l_HL05;

private: System::Windows::Forms::Label^  l_HL04;

private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  l_HL03;

private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Label^  l_HL02;



private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::TabPage^  tabPage5;
private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  l_Time;
private: System::Windows::Forms::Timer^  T_Stat;
private: System::Windows::Forms::PictureBox^  pB_DShoot01;
private: System::Windows::Forms::PictureBox^  pB_DShoot02;
private: System::Windows::Forms::GroupBox^  gB_SchadenP;


private: System::Windows::Forms::Label^  l_PlayerSchaden;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::TrackBar^  tB_PlayerSchaden;
private: System::Windows::Forms::GroupBox^  gB_HPP;
private: System::Windows::Forms::Label^  l_HPP;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::TrackBar^  tB_HPP;
private: System::Windows::Forms::GroupBox^  gB_SchadenG;
private: System::Windows::Forms::Label^  l_SchadenG;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::TrackBar^  tB_SchadenG;
private: System::Windows::Forms::GroupBox^  gB_SchadenGH;
private: System::Windows::Forms::Label^  l_SchadenGH;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::TrackBar^  tB_ScahdenGH;
private: System::Windows::Forms::Label^  l_HL01;
private: System::Windows::Forms::PictureBox^  pB_Medi;
private: System::Windows::Forms::Label^  l_MediX;
private: System::Windows::Forms::Label^  l_MediA;
private: System::Windows::Forms::TabPage^  tabPage6;
private: System::Windows::Forms::GroupBox^  gB_GQuali;
private: System::Windows::Forms::ComboBox^  cB_Quali;


private: System::Windows::Forms::GroupBox^  gB_HgL;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  b_HBreset;
private: System::Windows::Forms::GroupBox^  gB_Farben;
private: System::Windows::Forms::ComboBox^  cB_Farben;






































	private: System::ComponentModel::IContainer^  components;











	protected: 

	protected: 

	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->M_Header = (gcnew System::Windows::Forms::Label());
			this->M_NewG = (gcnew System::Windows::Forms::Button());
			this->M_Higscr = (gcnew System::Windows::Forms::Button());
			this->M_Exit = (gcnew System::Windows::Forms::Button());
			this->M_Cred = (gcnew System::Windows::Forms::Label());
			this->H_Menue = (gcnew System::Windows::Forms::Button());
			this->H_Exit = (gcnew System::Windows::Forms::Button());
			this->M_Shop = (gcnew System::Windows::Forms::Button());
			this->PB_Player = (gcnew System::Windows::Forms::PictureBox());
			this->T_Shoot = (gcnew System::Windows::Forms::Timer(this->components));
			this->PB_Hindernis1 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_Hindernis2 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_Hindernis3 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_Shoot0 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_Layer1 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_EnemyN0 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_EnemyN1 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_EnemyN2 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_EnemyN3 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_EnemyN4 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_EnemyH0 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_EnemyH1 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_EnemyH2 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_EnemyH3 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_ShootEH0 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_ShootEH1 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_ShootEH2 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_ShootEH3 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_ShootEN0 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_ShootEN1 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_ShootEN2 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_ShootEN3 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_ShootEN4 = (gcnew System::Windows::Forms::PictureBox());
			this->T_Game = (gcnew System::Windows::Forms::Timer(this->components));
			this->L_ScoreText = (gcnew System::Windows::Forms::Label());
			this->L_Score = (gcnew System::Windows::Forms::Label());
			this->L_HPAnzeigeI = (gcnew System::Windows::Forms::Label());
			this->L_Shop = (gcnew System::Windows::Forms::PictureBox());
			this->tC_Shop = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->b_SU5K = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->b_SU4K = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->b_SU1K = (gcnew System::Windows::Forms::Button());
			this->b_SU2K = (gcnew System::Windows::Forms::Button());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->b_SU3K = (gcnew System::Windows::Forms::Button());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->b_HG04 = (gcnew System::Windows::Forms::Button());
			this->l_H4Preis = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->b_HG03 = (gcnew System::Windows::Forms::Button());
			this->l_H3Preis = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->l_H2Preis = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->l_H1Preis = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->l_MedPreis = (gcnew System::Windows::Forms::Label());
			this->B_MedipackKaufen = (gcnew System::Windows::Forms::Button());
			this->b_HG01 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->b_HG02 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->l_InH4A = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->l_InH3A = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->l_InH2A = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->l_InH1A = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->l_InMediA = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->l_Time = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->gB_SchadenGH = (gcnew System::Windows::Forms::GroupBox());
			this->l_SchadenGH = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->tB_ScahdenGH = (gcnew System::Windows::Forms::TrackBar());
			this->gB_SchadenG = (gcnew System::Windows::Forms::GroupBox());
			this->l_SchadenG = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->tB_SchadenG = (gcnew System::Windows::Forms::TrackBar());
			this->gB_SchadenP = (gcnew System::Windows::Forms::GroupBox());
			this->l_PlayerSchaden = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->tB_PlayerSchaden = (gcnew System::Windows::Forms::TrackBar());
			this->gB_SchussGeG = (gcnew System::Windows::Forms::GroupBox());
			this->L_GeschwindE = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->tB_GeschwindE = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->tB_Cheats = (gcnew System::Windows::Forms::TextBox());
			this->b_CheatsSend = (gcnew System::Windows::Forms::Button());
			this->gB_SchussgeP = (gcnew System::Windows::Forms::GroupBox());
			this->L_Schussge = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tB_Schussge = (gcnew System::Windows::Forms::TrackBar());
			this->gB_SchiffgeP = (gcnew System::Windows::Forms::GroupBox());
			this->L_Geschwind = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tB_Geschwind = (gcnew System::Windows::Forms::TrackBar());
			this->gB_HPP = (gcnew System::Windows::Forms::GroupBox());
			this->l_HPP = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->tB_HPP = (gcnew System::Windows::Forms::TrackBar());
			this->gB_HgL = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->b_HBreset = (gcnew System::Windows::Forms::Button());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->gB_Farben = (gcnew System::Windows::Forms::GroupBox());
			this->cB_Farben = (gcnew System::Windows::Forms::ComboBox());
			this->gB_GQuali = (gcnew System::Windows::Forms::GroupBox());
			this->cB_Quali = (gcnew System::Windows::Forms::ComboBox());
			this->l_Coints = (gcnew System::Windows::Forms::Label());
			this->L_CoinsL = (gcnew System::Windows::Forms::Label());
			this->pB_HPAnzeige = (gcnew System::Windows::Forms::ProgressBar());
			this->T_ShootE = (gcnew System::Windows::Forms::Timer(this->components));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tlP_Highscore = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->l_HL05 = (gcnew System::Windows::Forms::Label());
			this->l_HL04 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->l_HL03 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->l_HL02 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->l_HL01 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->T_Stat = (gcnew System::Windows::Forms::Timer(this->components));
			this->pB_DShoot01 = (gcnew System::Windows::Forms::PictureBox());
			this->pB_DShoot02 = (gcnew System::Windows::Forms::PictureBox());
			this->pB_Medi = (gcnew System::Windows::Forms::PictureBox());
			this->l_MediX = (gcnew System::Windows::Forms::Label());
			this->l_MediA = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_Player))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_Hindernis1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_Hindernis2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_Hindernis3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_Shoot0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_Layer1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_EnemyN0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_EnemyN1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_EnemyN2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_EnemyN3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_EnemyN4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_EnemyH0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_EnemyH1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_EnemyH2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_EnemyH3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_ShootEH0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_ShootEH1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_ShootEH2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_ShootEH3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_ShootEN0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_ShootEN1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_ShootEN2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_ShootEN3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_ShootEN4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L_Shop))->BeginInit();
			this->tC_Shop->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->tabPage5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->gB_SchadenGH->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tB_ScahdenGH))->BeginInit();
			this->gB_SchadenG->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tB_SchadenG))->BeginInit();
			this->gB_SchadenP->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tB_PlayerSchaden))->BeginInit();
			this->gB_SchussGeG->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tB_GeschwindE))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->gB_SchussgeP->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tB_Schussge))->BeginInit();
			this->gB_SchiffgeP->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tB_Geschwind))->BeginInit();
			this->gB_HPP->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tB_HPP))->BeginInit();
			this->gB_HgL->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->gB_Farben->SuspendLayout();
			this->gB_GQuali->SuspendLayout();
			this->tlP_Highscore->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB_DShoot01))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB_DShoot02))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB_Medi))->BeginInit();
			this->SuspendLayout();
			// 
			// M_Header
			// 
			this->M_Header->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->M_Header->AutoSize = true;
			this->M_Header->BackColor = System::Drawing::Color::Transparent;
			this->M_Header->Enabled = false;
			this->M_Header->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->M_Header->ForeColor = System::Drawing::Color::Aqua;
			this->M_Header->Location = System::Drawing::Point(334, 9);
			this->M_Header->Name = L"M_Header";
			this->M_Header->Size = System::Drawing::Size(122, 39);
			this->M_Header->TabIndex = 0;
			this->M_Header->Text = L"Menue";
			this->M_Header->Click += gcnew System::EventHandler(this, &Form1::M_Header_Click);
			// 
			// M_NewG
			// 
			this->M_NewG->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->M_NewG->Location = System::Drawing::Point(341, 112);
			this->M_NewG->Name = L"M_NewG";
			this->M_NewG->Size = System::Drawing::Size(115, 63);
			this->M_NewG->TabIndex = 1;
			this->M_NewG->Text = L"Neues Spiel";
			this->M_NewG->UseVisualStyleBackColor = true;
			this->M_NewG->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// M_Higscr
			// 
			this->M_Higscr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->M_Higscr->Location = System::Drawing::Point(341, 293);
			this->M_Higscr->Name = L"M_Higscr";
			this->M_Higscr->Size = System::Drawing::Size(115, 63);
			this->M_Higscr->TabIndex = 2;
			this->M_Higscr->Text = L"Highscore";
			this->M_Higscr->UseVisualStyleBackColor = true;
			this->M_Higscr->Click += gcnew System::EventHandler(this, &Form1::M_Higscr_Click);
			// 
			// M_Exit
			// 
			this->M_Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->M_Exit->Location = System::Drawing::Point(341, 377);
			this->M_Exit->Name = L"M_Exit";
			this->M_Exit->Size = System::Drawing::Size(115, 63);
			this->M_Exit->TabIndex = 3;
			this->M_Exit->Text = L"Beenden";
			this->M_Exit->UseVisualStyleBackColor = true;
			this->M_Exit->Click += gcnew System::EventHandler(this, &Form1::M_Exit_Click);
			// 
			// M_Cred
			// 
			this->M_Cred->AutoSize = true;
			this->M_Cred->BackColor = System::Drawing::Color::Transparent;
			this->M_Cred->ForeColor = System::Drawing::Color::Aqua;
			this->M_Cred->Location = System::Drawing::Point(13, 537);
			this->M_Cred->Name = L"M_Cred";
			this->M_Cred->Size = System::Drawing::Size(39, 13);
			this->M_Cred->TabIndex = 4;
			this->M_Cred->Text = L"Credits";
			this->M_Cred->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// H_Menue
			// 
			this->H_Menue->BackColor = System::Drawing::Color::Transparent;
			this->H_Menue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->H_Menue->Location = System::Drawing::Point(657, 487);
			this->H_Menue->Name = L"H_Menue";
			this->H_Menue->Size = System::Drawing::Size(115, 63);
			this->H_Menue->TabIndex = 5;
			this->H_Menue->Text = L"Menue";
			this->H_Menue->UseVisualStyleBackColor = false;
			this->H_Menue->Visible = false;
			this->H_Menue->Click += gcnew System::EventHandler(this, &Form1::H_Menue_Click);
			// 
			// H_Exit
			// 
			this->H_Exit->BackColor = System::Drawing::Color::Transparent;
			this->H_Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->H_Exit->Location = System::Drawing::Point(12, 487);
			this->H_Exit->Name = L"H_Exit";
			this->H_Exit->Size = System::Drawing::Size(115, 63);
			this->H_Exit->TabIndex = 6;
			this->H_Exit->Text = L"Beenden";
			this->H_Exit->UseVisualStyleBackColor = false;
			this->H_Exit->Visible = false;
			this->H_Exit->Click += gcnew System::EventHandler(this, &Form1::H_Exit_Click);
			// 
			// M_Shop
			// 
			this->M_Shop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->M_Shop->Location = System::Drawing::Point(341, 201);
			this->M_Shop->Name = L"M_Shop";
			this->M_Shop->Size = System::Drawing::Size(115, 63);
			this->M_Shop->TabIndex = 7;
			this->M_Shop->Text = L"Shop";
			this->M_Shop->UseVisualStyleBackColor = true;
			this->M_Shop->Click += gcnew System::EventHandler(this, &Form1::M_Shop_Click);
			// 
			// PB_Player
			// 
			this->PB_Player->BackColor = System::Drawing::Color::Transparent;
			this->PB_Player->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_Player.Image")));
			this->PB_Player->Location = System::Drawing::Point(356, 487);
			this->PB_Player->Name = L"PB_Player";
			this->PB_Player->Size = System::Drawing::Size(60, 60);
			this->PB_Player->TabIndex = 12;
			this->PB_Player->TabStop = false;
			// 
			// T_Shoot
			// 
			this->T_Shoot->Interval = 10;
			this->T_Shoot->Tick += gcnew System::EventHandler(this, &Form1::T_Shoot_Tick);
			// 
			// PB_Hindernis1
			// 
			this->PB_Hindernis1->BackColor = System::Drawing::Color::Transparent;
			this->PB_Hindernis1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_Hindernis1.Image")));
			this->PB_Hindernis1->Location = System::Drawing::Point(125, 413);
			this->PB_Hindernis1->Name = L"PB_Hindernis1";
			this->PB_Hindernis1->Size = System::Drawing::Size(100, 20);
			this->PB_Hindernis1->TabIndex = 16;
			this->PB_Hindernis1->TabStop = false;
			// 
			// PB_Hindernis2
			// 
			this->PB_Hindernis2->BackColor = System::Drawing::Color::Transparent;
			this->PB_Hindernis2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_Hindernis2.Image")));
			this->PB_Hindernis2->Location = System::Drawing::Point(341, 413);
			this->PB_Hindernis2->Name = L"PB_Hindernis2";
			this->PB_Hindernis2->Size = System::Drawing::Size(100, 20);
			this->PB_Hindernis2->TabIndex = 17;
			this->PB_Hindernis2->TabStop = false;
			// 
			// PB_Hindernis3
			// 
			this->PB_Hindernis3->BackColor = System::Drawing::Color::Transparent;
			this->PB_Hindernis3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_Hindernis3.Image")));
			this->PB_Hindernis3->Location = System::Drawing::Point(551, 413);
			this->PB_Hindernis3->Name = L"PB_Hindernis3";
			this->PB_Hindernis3->Size = System::Drawing::Size(100, 20);
			this->PB_Hindernis3->TabIndex = 18;
			this->PB_Hindernis3->TabStop = false;
			// 
			// PB_Shoot0
			// 
			this->PB_Shoot0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_Shoot0.Image")));
			this->PB_Shoot0->Location = System::Drawing::Point(384, 479);
			this->PB_Shoot0->Name = L"PB_Shoot0";
			this->PB_Shoot0->Size = System::Drawing::Size(2, 4);
			this->PB_Shoot0->TabIndex = 15;
			this->PB_Shoot0->TabStop = false;
			// 
			// PB_Layer1
			// 
			this->PB_Layer1->BackColor = System::Drawing::Color::Transparent;
			this->PB_Layer1->Location = System::Drawing::Point(-2, -2);
			this->PB_Layer1->Name = L"PB_Layer1";
			this->PB_Layer1->Size = System::Drawing::Size(791, 563);
			this->PB_Layer1->TabIndex = 19;
			this->PB_Layer1->TabStop = false;
			this->PB_Layer1->Visible = false;
			// 
			// PB_EnemyN0
			// 
			this->PB_EnemyN0->BackColor = System::Drawing::Color::Transparent;
			this->PB_EnemyN0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_EnemyN0.Image")));
			this->PB_EnemyN0->Location = System::Drawing::Point(95, 49);
			this->PB_EnemyN0->Name = L"PB_EnemyN0";
			this->PB_EnemyN0->Size = System::Drawing::Size(61, 60);
			this->PB_EnemyN0->TabIndex = 20;
			this->PB_EnemyN0->TabStop = false;
			// 
			// PB_EnemyN1
			// 
			this->PB_EnemyN1->BackColor = System::Drawing::Color::Transparent;
			this->PB_EnemyN1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_EnemyN1.Image")));
			this->PB_EnemyN1->Location = System::Drawing::Point(221, 49);
			this->PB_EnemyN1->Name = L"PB_EnemyN1";
			this->PB_EnemyN1->Size = System::Drawing::Size(61, 60);
			this->PB_EnemyN1->TabIndex = 21;
			this->PB_EnemyN1->TabStop = false;
			// 
			// PB_EnemyN2
			// 
			this->PB_EnemyN2->BackColor = System::Drawing::Color::Transparent;
			this->PB_EnemyN2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_EnemyN2.Image")));
			this->PB_EnemyN2->Location = System::Drawing::Point(355, 49);
			this->PB_EnemyN2->Name = L"PB_EnemyN2";
			this->PB_EnemyN2->Size = System::Drawing::Size(61, 60);
			this->PB_EnemyN2->TabIndex = 22;
			this->PB_EnemyN2->TabStop = false;
			// 
			// PB_EnemyN3
			// 
			this->PB_EnemyN3->BackColor = System::Drawing::Color::Transparent;
			this->PB_EnemyN3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_EnemyN3.Image")));
			this->PB_EnemyN3->Location = System::Drawing::Point(494, 49);
			this->PB_EnemyN3->Name = L"PB_EnemyN3";
			this->PB_EnemyN3->Size = System::Drawing::Size(61, 60);
			this->PB_EnemyN3->TabIndex = 23;
			this->PB_EnemyN3->TabStop = false;
			// 
			// PB_EnemyN4
			// 
			this->PB_EnemyN4->BackColor = System::Drawing::Color::Transparent;
			this->PB_EnemyN4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_EnemyN4.Image")));
			this->PB_EnemyN4->Location = System::Drawing::Point(637, 49);
			this->PB_EnemyN4->Name = L"PB_EnemyN4";
			this->PB_EnemyN4->Size = System::Drawing::Size(61, 60);
			this->PB_EnemyN4->TabIndex = 24;
			this->PB_EnemyN4->TabStop = false;
			// 
			// PB_EnemyH0
			// 
			this->PB_EnemyH0->BackColor = System::Drawing::Color::Transparent;
			this->PB_EnemyH0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_EnemyH0.Image")));
			this->PB_EnemyH0->Location = System::Drawing::Point(154, 135);
			this->PB_EnemyH0->Name = L"PB_EnemyH0";
			this->PB_EnemyH0->Size = System::Drawing::Size(61, 60);
			this->PB_EnemyH0->TabIndex = 25;
			this->PB_EnemyH0->TabStop = false;
			// 
			// PB_EnemyH1
			// 
			this->PB_EnemyH1->BackColor = System::Drawing::Color::Transparent;
			this->PB_EnemyH1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_EnemyH1.Image")));
			this->PB_EnemyH1->Location = System::Drawing::Point(292, 135);
			this->PB_EnemyH1->Name = L"PB_EnemyH1";
			this->PB_EnemyH1->Size = System::Drawing::Size(61, 60);
			this->PB_EnemyH1->TabIndex = 26;
			this->PB_EnemyH1->TabStop = false;
			// 
			// PB_EnemyH2
			// 
			this->PB_EnemyH2->BackColor = System::Drawing::Color::Transparent;
			this->PB_EnemyH2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_EnemyH2.Image")));
			this->PB_EnemyH2->Location = System::Drawing::Point(429, 135);
			this->PB_EnemyH2->Name = L"PB_EnemyH2";
			this->PB_EnemyH2->Size = System::Drawing::Size(61, 60);
			this->PB_EnemyH2->TabIndex = 27;
			this->PB_EnemyH2->TabStop = false;
			// 
			// PB_EnemyH3
			// 
			this->PB_EnemyH3->BackColor = System::Drawing::Color::Transparent;
			this->PB_EnemyH3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_EnemyH3.Image")));
			this->PB_EnemyH3->Location = System::Drawing::Point(577, 135);
			this->PB_EnemyH3->Name = L"PB_EnemyH3";
			this->PB_EnemyH3->Size = System::Drawing::Size(61, 60);
			this->PB_EnemyH3->TabIndex = 28;
			this->PB_EnemyH3->TabStop = false;
			// 
			// PB_ShootEH0
			// 
			this->PB_ShootEH0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_ShootEH0.Image")));
			this->PB_ShootEH0->Location = System::Drawing::Point(185, 195);
			this->PB_ShootEH0->Name = L"PB_ShootEH0";
			this->PB_ShootEH0->Size = System::Drawing::Size(2, 4);
			this->PB_ShootEH0->TabIndex = 29;
			this->PB_ShootEH0->TabStop = false;
			// 
			// PB_ShootEH1
			// 
			this->PB_ShootEH1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_ShootEH1.Image")));
			this->PB_ShootEH1->Location = System::Drawing::Point(323, 195);
			this->PB_ShootEH1->Name = L"PB_ShootEH1";
			this->PB_ShootEH1->Size = System::Drawing::Size(2, 4);
			this->PB_ShootEH1->TabIndex = 30;
			this->PB_ShootEH1->TabStop = false;
			// 
			// PB_ShootEH2
			// 
			this->PB_ShootEH2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_ShootEH2.Image")));
			this->PB_ShootEH2->Location = System::Drawing::Point(460, 195);
			this->PB_ShootEH2->Name = L"PB_ShootEH2";
			this->PB_ShootEH2->Size = System::Drawing::Size(2, 4);
			this->PB_ShootEH2->TabIndex = 31;
			this->PB_ShootEH2->TabStop = false;
			// 
			// PB_ShootEH3
			// 
			this->PB_ShootEH3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_ShootEH3.Image")));
			this->PB_ShootEH3->Location = System::Drawing::Point(608, 195);
			this->PB_ShootEH3->Name = L"PB_ShootEH3";
			this->PB_ShootEH3->Size = System::Drawing::Size(2, 4);
			this->PB_ShootEH3->TabIndex = 32;
			this->PB_ShootEH3->TabStop = false;
			// 
			// PB_ShootEN0
			// 
			this->PB_ShootEN0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_ShootEN0.Image")));
			this->PB_ShootEN0->Location = System::Drawing::Point(126, 109);
			this->PB_ShootEN0->Name = L"PB_ShootEN0";
			this->PB_ShootEN0->Size = System::Drawing::Size(2, 4);
			this->PB_ShootEN0->TabIndex = 33;
			this->PB_ShootEN0->TabStop = false;
			// 
			// PB_ShootEN1
			// 
			this->PB_ShootEN1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_ShootEN1.Image")));
			this->PB_ShootEN1->Location = System::Drawing::Point(252, 109);
			this->PB_ShootEN1->Name = L"PB_ShootEN1";
			this->PB_ShootEN1->Size = System::Drawing::Size(2, 4);
			this->PB_ShootEN1->TabIndex = 34;
			this->PB_ShootEN1->TabStop = false;
			// 
			// PB_ShootEN2
			// 
			this->PB_ShootEN2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_ShootEN2.Image")));
			this->PB_ShootEN2->Location = System::Drawing::Point(386, 109);
			this->PB_ShootEN2->Name = L"PB_ShootEN2";
			this->PB_ShootEN2->Size = System::Drawing::Size(2, 4);
			this->PB_ShootEN2->TabIndex = 35;
			this->PB_ShootEN2->TabStop = false;
			// 
			// PB_ShootEN3
			// 
			this->PB_ShootEN3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_ShootEN3.Image")));
			this->PB_ShootEN3->Location = System::Drawing::Point(525, 109);
			this->PB_ShootEN3->Name = L"PB_ShootEN3";
			this->PB_ShootEN3->Size = System::Drawing::Size(2, 4);
			this->PB_ShootEN3->TabIndex = 36;
			this->PB_ShootEN3->TabStop = false;
			// 
			// PB_ShootEN4
			// 
			this->PB_ShootEN4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_ShootEN4.Image")));
			this->PB_ShootEN4->Location = System::Drawing::Point(668, 109);
			this->PB_ShootEN4->Name = L"PB_ShootEN4";
			this->PB_ShootEN4->Size = System::Drawing::Size(2, 4);
			this->PB_ShootEN4->TabIndex = 37;
			this->PB_ShootEN4->TabStop = false;
			// 
			// T_Game
			// 
			this->T_Game->Tick += gcnew System::EventHandler(this, &Form1::T_Game_Tick);
			// 
			// L_ScoreText
			// 
			this->L_ScoreText->AutoSize = true;
			this->L_ScoreText->BackColor = System::Drawing::Color::Transparent;
			this->L_ScoreText->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->L_ScoreText->Location = System::Drawing::Point(665, 9);
			this->L_ScoreText->Name = L"L_ScoreText";
			this->L_ScoreText->Size = System::Drawing::Size(41, 13);
			this->L_ScoreText->TabIndex = 38;
			this->L_ScoreText->Text = L"Score: ";
			// 
			// L_Score
			// 
			this->L_Score->AutoSize = true;
			this->L_Score->BackColor = System::Drawing::Color::Transparent;
			this->L_Score->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->L_Score->Location = System::Drawing::Point(702, 9);
			this->L_Score->Name = L"L_Score";
			this->L_Score->Size = System::Drawing::Size(0, 13);
			this->L_Score->TabIndex = 39;
			// 
			// L_HPAnzeigeI
			// 
			this->L_HPAnzeigeI->AutoSize = true;
			this->L_HPAnzeigeI->BackColor = System::Drawing::Color::Transparent;
			this->L_HPAnzeigeI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_HPAnzeigeI->ForeColor = System::Drawing::Color::Red;
			this->L_HPAnzeigeI->Location = System::Drawing::Point(118, 9);
			this->L_HPAnzeigeI->Name = L"L_HPAnzeigeI";
			this->L_HPAnzeigeI->Size = System::Drawing::Size(33, 20);
			this->L_HPAnzeigeI->TabIndex = 41;
			this->L_HPAnzeigeI->Text = L"HP";
			// 
			// L_Shop
			// 
			this->L_Shop->Location = System::Drawing::Point(-2, -2);
			this->L_Shop->Name = L"L_Shop";
			this->L_Shop->Size = System::Drawing::Size(791, 563);
			this->L_Shop->TabIndex = 42;
			this->L_Shop->TabStop = false;
			// 
			// tC_Shop
			// 
			this->tC_Shop->Controls->Add(this->tabPage1);
			this->tC_Shop->Controls->Add(this->tabPage2);
			this->tC_Shop->Controls->Add(this->tabPage4);
			this->tC_Shop->Controls->Add(this->tabPage5);
			this->tC_Shop->Controls->Add(this->tabPage3);
			this->tC_Shop->Controls->Add(this->tabPage6);
			this->tC_Shop->Location = System::Drawing::Point(12, 49);
			this->tC_Shop->Name = L"tC_Shop";
			this->tC_Shop->SelectedIndex = 0;
			this->tC_Shop->Size = System::Drawing::Size(760, 432);
			this->tC_Shop->TabIndex = 43;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tableLayoutPanel3);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(752, 406);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Schiffupgrades";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 4;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				18.59838F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				81.40162F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				99)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				214)));
			this->tableLayoutPanel3->Controls->Add(this->b_SU5K, 3, 4);
			this->tableLayoutPanel3->Controls->Add(this->label20, 2, 4);
			this->tableLayoutPanel3->Controls->Add(this->label21, 1, 4);
			this->tableLayoutPanel3->Controls->Add(this->b_SU4K, 3, 3);
			this->tableLayoutPanel3->Controls->Add(this->label22, 2, 3);
			this->tableLayoutPanel3->Controls->Add(this->label23, 1, 3);
			this->tableLayoutPanel3->Controls->Add(this->label24, 2, 2);
			this->tableLayoutPanel3->Controls->Add(this->label25, 1, 2);
			this->tableLayoutPanel3->Controls->Add(this->label26, 2, 1);
			this->tableLayoutPanel3->Controls->Add(this->label27, 1, 1);
			this->tableLayoutPanel3->Controls->Add(this->pictureBox11, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->label28, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->label29, 2, 0);
			this->tableLayoutPanel3->Controls->Add(this->b_SU1K, 3, 0);
			this->tableLayoutPanel3->Controls->Add(this->b_SU2K, 3, 1);
			this->tableLayoutPanel3->Controls->Add(this->pictureBox12, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->b_SU3K, 3, 2);
			this->tableLayoutPanel3->Controls->Add(this->pictureBox13, 0, 2);
			this->tableLayoutPanel3->Controls->Add(this->pictureBox14, 0, 3);
			this->tableLayoutPanel3->Controls->Add(this->pictureBox15, 0, 4);
			this->tableLayoutPanel3->Location = System::Drawing::Point(79, 41);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 5;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 47.44526F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 52.55474F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 65)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 66)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 66)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(585, 328);
			this->tableLayoutPanel3->TabIndex = 1;
			// 
			// b_SU5K
			// 
			this->b_SU5K->Dock = System::Windows::Forms::DockStyle::Fill;
			this->b_SU5K->Location = System::Drawing::Point(373, 264);
			this->b_SU5K->Name = L"b_SU5K";
			this->b_SU5K->Size = System::Drawing::Size(209, 61);
			this->b_SU5K->TabIndex = 19;
			this->b_SU5K->Text = L"Kaufen";
			this->b_SU5K->UseVisualStyleBackColor = true;
			this->b_SU5K->Click += gcnew System::EventHandler(this, &Form1::b_SU5K_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(274, 261);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(93, 67);
			this->label20->TabIndex = 18;
			this->label20->Text = L"5000 C";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(53, 261);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(215, 67);
			this->label21->TabIndex = 17;
			this->label21->Text = L"Gegner selber einstellen";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// b_SU4K
			// 
			this->b_SU4K->Dock = System::Windows::Forms::DockStyle::Fill;
			this->b_SU4K->Location = System::Drawing::Point(373, 198);
			this->b_SU4K->Name = L"b_SU4K";
			this->b_SU4K->Size = System::Drawing::Size(209, 60);
			this->b_SU4K->TabIndex = 15;
			this->b_SU4K->Text = L"Kaufen";
			this->b_SU4K->UseVisualStyleBackColor = true;
			this->b_SU4K->Click += gcnew System::EventHandler(this, &Form1::b_SU4K_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(274, 195);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(93, 66);
			this->label22->TabIndex = 14;
			this->label22->Text = L"2000 C";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(53, 195);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(215, 66);
			this->label23->TabIndex = 13;
			this->label23->Text = L"Doppel Schüsse";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(274, 130);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(93, 65);
			this->label24->TabIndex = 12;
			this->label24->Text = L"1500 C";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(53, 130);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(215, 65);
			this->label25->TabIndex = 10;
			this->label25->Text = L"Schiffsupgrade 3";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(274, 62);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(93, 68);
			this->label26->TabIndex = 7;
			this->label26->Text = L"1000 C";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(53, 62);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(215, 68);
			this->label27->TabIndex = 6;
			this->label27->Text = L"Schiffsupgrade 2";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(3, 3);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(44, 55);
			this->pictureBox11->TabIndex = 0;
			this->pictureBox11->TabStop = false;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(53, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(215, 62);
			this->label28->TabIndex = 1;
			this->label28->Text = L"Schiffsupgrade 1";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(274, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(93, 62);
			this->label29->TabIndex = 2;
			this->label29->Text = L"500 C";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// b_SU1K
			// 
			this->b_SU1K->Dock = System::Windows::Forms::DockStyle::Fill;
			this->b_SU1K->Location = System::Drawing::Point(373, 3);
			this->b_SU1K->Name = L"b_SU1K";
			this->b_SU1K->Size = System::Drawing::Size(209, 56);
			this->b_SU1K->TabIndex = 3;
			this->b_SU1K->Text = L"Kaufen";
			this->b_SU1K->UseVisualStyleBackColor = true;
			this->b_SU1K->Click += gcnew System::EventHandler(this, &Form1::b_SU1K_Click);
			// 
			// b_SU2K
			// 
			this->b_SU2K->Dock = System::Windows::Forms::DockStyle::Fill;
			this->b_SU2K->Location = System::Drawing::Point(373, 65);
			this->b_SU2K->Name = L"b_SU2K";
			this->b_SU2K->Size = System::Drawing::Size(209, 62);
			this->b_SU2K->TabIndex = 4;
			this->b_SU2K->Text = L"Kaufen";
			this->b_SU2K->UseVisualStyleBackColor = true;
			this->b_SU2K->Click += gcnew System::EventHandler(this, &Form1::b_SU2K_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(3, 65);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(44, 60);
			this->pictureBox12->TabIndex = 5;
			this->pictureBox12->TabStop = false;
			// 
			// b_SU3K
			// 
			this->b_SU3K->Dock = System::Windows::Forms::DockStyle::Fill;
			this->b_SU3K->Location = System::Drawing::Point(373, 133);
			this->b_SU3K->Name = L"b_SU3K";
			this->b_SU3K->Size = System::Drawing::Size(209, 59);
			this->b_SU3K->TabIndex = 8;
			this->b_SU3K->Text = L"Kaufen";
			this->b_SU3K->UseVisualStyleBackColor = true;
			this->b_SU3K->Click += gcnew System::EventHandler(this, &Form1::b_SU3K_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(3, 133);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(44, 58);
			this->pictureBox13->TabIndex = 9;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(3, 198);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(44, 59);
			this->pictureBox14->TabIndex = 11;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(3, 264);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(44, 60);
			this->pictureBox15->TabIndex = 16;
			this->pictureBox15->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tableLayoutPanel1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(752, 406);
			this->tabPage2->TabIndex = 3;
			this->tabPage2->Text = L"Sonstige Upgrades";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				18.59838F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				81.40162F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				90)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				214)));
			this->tableLayoutPanel1->Controls->Add(this->b_HG04, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->l_H4Preis, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->label13, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->b_HG03, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->l_H3Preis, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->label11, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->l_H2Preis, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->label9, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->l_H1Preis, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->label7, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label3, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->l_MedPreis, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->B_MedipackKaufen, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->b_HG01, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->b_HG02, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox4, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox5, 0, 4);
			this->tableLayoutPanel1->Location = System::Drawing::Point(79, 41);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 47.44526F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 52.55474F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 65)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 66)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 66)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(585, 328);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// b_HG04
			// 
			this->b_HG04->Dock = System::Windows::Forms::DockStyle::Fill;
			this->b_HG04->Location = System::Drawing::Point(373, 264);
			this->b_HG04->Name = L"b_HG04";
			this->b_HG04->Size = System::Drawing::Size(209, 61);
			this->b_HG04->TabIndex = 19;
			this->b_HG04->Text = L"Kaufen";
			this->b_HG04->UseVisualStyleBackColor = true;
			this->b_HG04->Click += gcnew System::EventHandler(this, &Form1::b_HG04_Click);
			// 
			// l_H4Preis
			// 
			this->l_H4Preis->AutoSize = true;
			this->l_H4Preis->Dock = System::Windows::Forms::DockStyle::Fill;
			this->l_H4Preis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_H4Preis->Location = System::Drawing::Point(283, 261);
			this->l_H4Preis->Name = L"l_H4Preis";
			this->l_H4Preis->Size = System::Drawing::Size(84, 67);
			this->l_H4Preis->TabIndex = 18;
			this->l_H4Preis->Text = L"100 C";
			this->l_H4Preis->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(55, 261);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(222, 67);
			this->label13->TabIndex = 17;
			this->label13->Text = L"Ein anderes Hintergrundbild";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// b_HG03
			// 
			this->b_HG03->Dock = System::Windows::Forms::DockStyle::Fill;
			this->b_HG03->Location = System::Drawing::Point(373, 198);
			this->b_HG03->Name = L"b_HG03";
			this->b_HG03->Size = System::Drawing::Size(209, 60);
			this->b_HG03->TabIndex = 15;
			this->b_HG03->Text = L"Kaufen";
			this->b_HG03->UseVisualStyleBackColor = true;
			this->b_HG03->Click += gcnew System::EventHandler(this, &Form1::b_HG03_Click);
			// 
			// l_H3Preis
			// 
			this->l_H3Preis->AutoSize = true;
			this->l_H3Preis->Dock = System::Windows::Forms::DockStyle::Fill;
			this->l_H3Preis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_H3Preis->Location = System::Drawing::Point(283, 195);
			this->l_H3Preis->Name = L"l_H3Preis";
			this->l_H3Preis->Size = System::Drawing::Size(84, 66);
			this->l_H3Preis->TabIndex = 14;
			this->l_H3Preis->Text = L"100 C";
			this->l_H3Preis->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(55, 195);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(222, 66);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Ein anderes Hintergrundbild";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l_H2Preis
			// 
			this->l_H2Preis->AutoSize = true;
			this->l_H2Preis->Dock = System::Windows::Forms::DockStyle::Fill;
			this->l_H2Preis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_H2Preis->Location = System::Drawing::Point(283, 130);
			this->l_H2Preis->Name = L"l_H2Preis";
			this->l_H2Preis->Size = System::Drawing::Size(84, 65);
			this->l_H2Preis->TabIndex = 12;
			this->l_H2Preis->Text = L"100 C";
			this->l_H2Preis->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(55, 130);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(222, 65);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Ein anderes Hintergrundbild";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l_H1Preis
			// 
			this->l_H1Preis->AutoSize = true;
			this->l_H1Preis->Dock = System::Windows::Forms::DockStyle::Fill;
			this->l_H1Preis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_H1Preis->Location = System::Drawing::Point(283, 62);
			this->l_H1Preis->Name = L"l_H1Preis";
			this->l_H1Preis->Size = System::Drawing::Size(84, 68);
			this->l_H1Preis->TabIndex = 7;
			this->l_H1Preis->Text = L"100 C";
			this->l_H1Preis->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(55, 62);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(222, 68);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Ein anderes Hintergrundbild";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(46, 55);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(55, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(222, 62);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Medipack stellt HP wieder her";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l_MedPreis
			// 
			this->l_MedPreis->AutoSize = true;
			this->l_MedPreis->Dock = System::Windows::Forms::DockStyle::Fill;
			this->l_MedPreis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_MedPreis->Location = System::Drawing::Point(283, 0);
			this->l_MedPreis->Name = L"l_MedPreis";
			this->l_MedPreis->Size = System::Drawing::Size(84, 62);
			this->l_MedPreis->TabIndex = 2;
			this->l_MedPreis->Text = L"25 C";
			this->l_MedPreis->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// B_MedipackKaufen
			// 
			this->B_MedipackKaufen->Dock = System::Windows::Forms::DockStyle::Fill;
			this->B_MedipackKaufen->Location = System::Drawing::Point(373, 3);
			this->B_MedipackKaufen->Name = L"B_MedipackKaufen";
			this->B_MedipackKaufen->Size = System::Drawing::Size(209, 56);
			this->B_MedipackKaufen->TabIndex = 3;
			this->B_MedipackKaufen->Text = L"Kaufen";
			this->B_MedipackKaufen->UseVisualStyleBackColor = true;
			this->B_MedipackKaufen->Click += gcnew System::EventHandler(this, &Form1::B_MedipackKaufen_Click);
			// 
			// b_HG01
			// 
			this->b_HG01->Dock = System::Windows::Forms::DockStyle::Fill;
			this->b_HG01->Location = System::Drawing::Point(373, 65);
			this->b_HG01->Name = L"b_HG01";
			this->b_HG01->Size = System::Drawing::Size(209, 62);
			this->b_HG01->TabIndex = 4;
			this->b_HG01->Text = L"Kaufen";
			this->b_HG01->UseVisualStyleBackColor = true;
			this->b_HG01->Click += gcnew System::EventHandler(this, &Form1::b_Test_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(3, 65);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(46, 60);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// b_HG02
			// 
			this->b_HG02->Dock = System::Windows::Forms::DockStyle::Fill;
			this->b_HG02->Location = System::Drawing::Point(373, 133);
			this->b_HG02->Name = L"b_HG02";
			this->b_HG02->Size = System::Drawing::Size(209, 59);
			this->b_HG02->TabIndex = 8;
			this->b_HG02->Text = L"Kaufen";
			this->b_HG02->UseVisualStyleBackColor = true;
			this->b_HG02->Click += gcnew System::EventHandler(this, &Form1::b_HG02_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(3, 133);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(46, 58);
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(3, 198);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(46, 59);
			this->pictureBox4->TabIndex = 11;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(3, 264);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(46, 60);
			this->pictureBox5->TabIndex = 16;
			this->pictureBox5->TabStop = false;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->tableLayoutPanel2);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(752, 406);
			this->tabPage4->TabIndex = 4;
			this->tabPage4->Text = L"Inventory";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 4;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				14.03509F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				85.96491F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				69)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				64)));
			this->tableLayoutPanel2->Controls->Add(this->label19, 3, 4);
			this->tableLayoutPanel2->Controls->Add(this->label16, 3, 3);
			this->tableLayoutPanel2->Controls->Add(this->label14, 3, 2);
			this->tableLayoutPanel2->Controls->Add(this->label10, 3, 1);
			this->tableLayoutPanel2->Controls->Add(this->l_InH4A, 2, 4);
			this->tableLayoutPanel2->Controls->Add(this->label8, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->l_InH3A, 2, 3);
			this->tableLayoutPanel2->Controls->Add(this->label12, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->l_InH2A, 2, 2);
			this->tableLayoutPanel2->Controls->Add(this->label15, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->l_InH1A, 2, 1);
			this->tableLayoutPanel2->Controls->Add(this->label17, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox6, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label18, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->l_InMediA, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox7, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox8, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox9, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox10, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->label6, 3, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(79, 41);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 5;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 47.44526F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 52.55474F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 65)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 66)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 66)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(575, 328);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(513, 261);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(59, 67);
			this->label19->TabIndex = 23;
			this->label19->Text = L"x";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(513, 195);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(59, 66);
			this->label16->TabIndex = 22;
			this->label16->Text = L"x";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(513, 130);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(59, 65);
			this->label14->TabIndex = 21;
			this->label14->Text = L"x";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(513, 62);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 68);
			this->label10->TabIndex = 20;
			this->label10->Text = L"x";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l_InH4A
			// 
			this->l_InH4A->AutoSize = true;
			this->l_InH4A->Dock = System::Windows::Forms::DockStyle::Fill;
			this->l_InH4A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_InH4A->Location = System::Drawing::Point(444, 261);
			this->l_InH4A->Name = L"l_InH4A";
			this->l_InH4A->Size = System::Drawing::Size(63, 67);
			this->l_InH4A->TabIndex = 18;
			this->l_InH4A->Text = L"0";
			this->l_InH4A->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(65, 261);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(373, 67);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Ein anderes Hintergrundbild";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l_InH3A
			// 
			this->l_InH3A->AutoSize = true;
			this->l_InH3A->Dock = System::Windows::Forms::DockStyle::Fill;
			this->l_InH3A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_InH3A->Location = System::Drawing::Point(444, 195);
			this->l_InH3A->Name = L"l_InH3A";
			this->l_InH3A->Size = System::Drawing::Size(63, 66);
			this->l_InH3A->TabIndex = 14;
			this->l_InH3A->Text = L"0";
			this->l_InH3A->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(65, 195);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(373, 66);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Ein anderes Hintergrundbild";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l_InH2A
			// 
			this->l_InH2A->AutoSize = true;
			this->l_InH2A->Dock = System::Windows::Forms::DockStyle::Fill;
			this->l_InH2A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_InH2A->Location = System::Drawing::Point(444, 130);
			this->l_InH2A->Name = L"l_InH2A";
			this->l_InH2A->Size = System::Drawing::Size(63, 65);
			this->l_InH2A->TabIndex = 12;
			this->l_InH2A->Text = L"0";
			this->l_InH2A->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(65, 130);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(373, 65);
			this->label15->TabIndex = 10;
			this->label15->Text = L"Ein anderes Hintergrundbild";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l_InH1A
			// 
			this->l_InH1A->AutoSize = true;
			this->l_InH1A->Dock = System::Windows::Forms::DockStyle::Fill;
			this->l_InH1A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_InH1A->Location = System::Drawing::Point(444, 62);
			this->l_InH1A->Name = L"l_InH1A";
			this->l_InH1A->Size = System::Drawing::Size(63, 68);
			this->l_InH1A->TabIndex = 7;
			this->l_InH1A->Text = L"0";
			this->l_InH1A->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(65, 62);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(373, 68);
			this->label17->TabIndex = 6;
			this->label17->Text = L"Ein anderes Hintergrundbild";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(3, 3);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(56, 55);
			this->pictureBox6->TabIndex = 0;
			this->pictureBox6->TabStop = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(65, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(373, 62);
			this->label18->TabIndex = 1;
			this->label18->Text = L"Medipack füllt ihre HP leiste wieder auf";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l_InMediA
			// 
			this->l_InMediA->AutoSize = true;
			this->l_InMediA->Dock = System::Windows::Forms::DockStyle::Fill;
			this->l_InMediA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_InMediA->Location = System::Drawing::Point(444, 0);
			this->l_InMediA->Name = L"l_InMediA";
			this->l_InMediA->Size = System::Drawing::Size(63, 62);
			this->l_InMediA->TabIndex = 2;
			this->l_InMediA->Text = L"1";
			this->l_InMediA->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(3, 65);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(56, 60);
			this->pictureBox7->TabIndex = 5;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(3, 133);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(56, 58);
			this->pictureBox8->TabIndex = 9;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(3, 198);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(56, 59);
			this->pictureBox9->TabIndex = 11;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(3, 264);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(56, 60);
			this->pictureBox10->TabIndex = 16;
			this->pictureBox10->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(513, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 62);
			this->label6->TabIndex = 19;
			this->label6->Text = L"x";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->groupBox6);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(752, 406);
			this->tabPage5->TabIndex = 5;
			this->tabPage5->Text = L"Statistik";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label33);
			this->groupBox6->Controls->Add(this->l_Time);
			this->groupBox6->Location = System::Drawing::Point(6, 24);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(200, 100);
			this->groupBox6->TabIndex = 0;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Gesamt Spielzeit";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(94, 44);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(45, 13);
			this->label33->TabIndex = 1;
			this->label33->Text = L"Minuten";
			// 
			// l_Time
			// 
			this->l_Time->AutoSize = true;
			this->l_Time->Location = System::Drawing::Point(7, 40);
			this->l_Time->Name = L"l_Time";
			this->l_Time->Size = System::Drawing::Size(13, 13);
			this->l_Time->TabIndex = 0;
			this->l_Time->Text = L"0";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->gB_SchadenGH);
			this->tabPage3->Controls->Add(this->gB_SchadenG);
			this->tabPage3->Controls->Add(this->gB_SchadenP);
			this->tabPage3->Controls->Add(this->gB_SchussGeG);
			this->tabPage3->Controls->Add(this->groupBox3);
			this->tabPage3->Controls->Add(this->gB_SchussgeP);
			this->tabPage3->Controls->Add(this->gB_SchiffgeP);
			this->tabPage3->Controls->Add(this->gB_HPP);
			this->tabPage3->Controls->Add(this->gB_HgL);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(752, 406);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Einstellungen";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::tabPage3_MouseMove);
			// 
			// gB_SchadenGH
			// 
			this->gB_SchadenGH->Controls->Add(this->l_SchadenGH);
			this->gB_SchadenGH->Controls->Add(this->label50);
			this->gB_SchadenGH->Controls->Add(this->label51);
			this->gB_SchadenGH->Controls->Add(this->tB_ScahdenGH);
			this->gB_SchadenGH->Location = System::Drawing::Point(493, 244);
			this->gB_SchadenGH->Name = L"gB_SchadenGH";
			this->gB_SchadenGH->Size = System::Drawing::Size(221, 110);
			this->gB_SchadenGH->TabIndex = 7;
			this->gB_SchadenGH->TabStop = false;
			this->gB_SchadenGH->Text = L"Schaden Gegner Hart";
			// 
			// l_SchadenGH
			// 
			this->l_SchadenGH->AutoSize = true;
			this->l_SchadenGH->Location = System::Drawing::Point(97, 23);
			this->l_SchadenGH->Name = L"l_SchadenGH";
			this->l_SchadenGH->Size = System::Drawing::Size(13, 13);
			this->l_SchadenGH->TabIndex = 3;
			this->l_SchadenGH->Text = L"0";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(168, 73);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(23, 13);
			this->label50->TabIndex = 2;
			this->label50->Text = L"viel";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(6, 73);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(35, 13);
			this->label51->TabIndex = 1;
			this->label51->Text = L"wenig";
			// 
			// tB_ScahdenGH
			// 
			this->tB_ScahdenGH->Location = System::Drawing::Point(58, 41);
			this->tB_ScahdenGH->Maximum = 1000;
			this->tB_ScahdenGH->Minimum = 1;
			this->tB_ScahdenGH->Name = L"tB_ScahdenGH";
			this->tB_ScahdenGH->Size = System::Drawing::Size(104, 45);
			this->tB_ScahdenGH->TabIndex = 0;
			this->tB_ScahdenGH->Value = 1;
			this->tB_ScahdenGH->Scroll += gcnew System::EventHandler(this, &Form1::tB_ScahdenGH_Scroll);
			// 
			// gB_SchadenG
			// 
			this->gB_SchadenG->Controls->Add(this->l_SchadenG);
			this->gB_SchadenG->Controls->Add(this->label48);
			this->gB_SchadenG->Controls->Add(this->label49);
			this->gB_SchadenG->Controls->Add(this->tB_SchadenG);
			this->gB_SchadenG->Location = System::Drawing::Point(253, 240);
			this->gB_SchadenG->Name = L"gB_SchadenG";
			this->gB_SchadenG->Size = System::Drawing::Size(221, 110);
			this->gB_SchadenG->TabIndex = 6;
			this->gB_SchadenG->TabStop = false;
			this->gB_SchadenG->Text = L"Schaden Gegner Leicht";
			// 
			// l_SchadenG
			// 
			this->l_SchadenG->AutoSize = true;
			this->l_SchadenG->Location = System::Drawing::Point(97, 23);
			this->l_SchadenG->Name = L"l_SchadenG";
			this->l_SchadenG->Size = System::Drawing::Size(13, 13);
			this->l_SchadenG->TabIndex = 3;
			this->l_SchadenG->Text = L"0";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(168, 73);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(23, 13);
			this->label48->TabIndex = 2;
			this->label48->Text = L"viel";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(6, 73);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(35, 13);
			this->label49->TabIndex = 1;
			this->label49->Text = L"wenig";
			// 
			// tB_SchadenG
			// 
			this->tB_SchadenG->Location = System::Drawing::Point(58, 41);
			this->tB_SchadenG->Maximum = 1000;
			this->tB_SchadenG->Minimum = 1;
			this->tB_SchadenG->Name = L"tB_SchadenG";
			this->tB_SchadenG->Size = System::Drawing::Size(104, 45);
			this->tB_SchadenG->TabIndex = 0;
			this->tB_SchadenG->Value = 1;
			this->tB_SchadenG->Scroll += gcnew System::EventHandler(this, &Form1::tB_SchadenG_Scroll);
			// 
			// gB_SchadenP
			// 
			this->gB_SchadenP->Controls->Add(this->l_PlayerSchaden);
			this->gB_SchadenP->Controls->Add(this->label37);
			this->gB_SchadenP->Controls->Add(this->label39);
			this->gB_SchadenP->Controls->Add(this->tB_PlayerSchaden);
			this->gB_SchadenP->Location = System::Drawing::Point(493, 14);
			this->gB_SchadenP->Name = L"gB_SchadenP";
			this->gB_SchadenP->Size = System::Drawing::Size(221, 110);
			this->gB_SchadenP->TabIndex = 5;
			this->gB_SchadenP->TabStop = false;
			this->gB_SchadenP->Text = L"Schaden";
			// 
			// l_PlayerSchaden
			// 
			this->l_PlayerSchaden->AutoSize = true;
			this->l_PlayerSchaden->Location = System::Drawing::Point(97, 23);
			this->l_PlayerSchaden->Name = L"l_PlayerSchaden";
			this->l_PlayerSchaden->Size = System::Drawing::Size(13, 13);
			this->l_PlayerSchaden->TabIndex = 3;
			this->l_PlayerSchaden->Text = L"0";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(168, 73);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(23, 13);
			this->label37->TabIndex = 2;
			this->label37->Text = L"viel";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(6, 73);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(35, 13);
			this->label39->TabIndex = 1;
			this->label39->Text = L"wenig";
			// 
			// tB_PlayerSchaden
			// 
			this->tB_PlayerSchaden->Location = System::Drawing::Point(58, 41);
			this->tB_PlayerSchaden->Maximum = 1000;
			this->tB_PlayerSchaden->Minimum = 1;
			this->tB_PlayerSchaden->Name = L"tB_PlayerSchaden";
			this->tB_PlayerSchaden->Size = System::Drawing::Size(104, 45);
			this->tB_PlayerSchaden->TabIndex = 0;
			this->tB_PlayerSchaden->Value = 1;
			this->tB_PlayerSchaden->Scroll += gcnew System::EventHandler(this, &Form1::tB_PlayerSchaden_Scroll);
			// 
			// gB_SchussGeG
			// 
			this->gB_SchussGeG->Controls->Add(this->L_GeschwindE);
			this->gB_SchussGeG->Controls->Add(this->label31);
			this->gB_SchussGeG->Controls->Add(this->label32);
			this->gB_SchussGeG->Controls->Add(this->tB_GeschwindE);
			this->gB_SchussGeG->Location = System::Drawing::Point(9, 244);
			this->gB_SchussGeG->Name = L"gB_SchussGeG";
			this->gB_SchussGeG->Size = System::Drawing::Size(221, 110);
			this->gB_SchussGeG->TabIndex = 5;
			this->gB_SchussGeG->TabStop = false;
			this->gB_SchussGeG->Text = L"Schussgeschwindigkeit Gegner";
			// 
			// L_GeschwindE
			// 
			this->L_GeschwindE->AutoSize = true;
			this->L_GeschwindE->Location = System::Drawing::Point(97, 23);
			this->L_GeschwindE->Name = L"L_GeschwindE";
			this->L_GeschwindE->Size = System::Drawing::Size(13, 13);
			this->L_GeschwindE->TabIndex = 3;
			this->L_GeschwindE->Text = L"0";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(168, 73);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(40, 13);
			this->label31->TabIndex = 2;
			this->label31->Text = L"schnell";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(6, 73);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(46, 13);
			this->label32->TabIndex = 1;
			this->label32->Text = L"langsam";
			// 
			// tB_GeschwindE
			// 
			this->tB_GeschwindE->Location = System::Drawing::Point(58, 41);
			this->tB_GeschwindE->Maximum = 100;
			this->tB_GeschwindE->Minimum = 1;
			this->tB_GeschwindE->Name = L"tB_GeschwindE";
			this->tB_GeschwindE->Size = System::Drawing::Size(104, 45);
			this->tB_GeschwindE->TabIndex = 0;
			this->tB_GeschwindE->Value = 1;
			this->tB_GeschwindE->Scroll += gcnew System::EventHandler(this, &Form1::tB_GeschwindE_Scroll);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->tB_Cheats);
			this->groupBox3->Controls->Add(this->b_CheatsSend);
			this->groupBox3->Location = System::Drawing::Point(253, 134);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(221, 106);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Cheats";
			// 
			// tB_Cheats
			// 
			this->tB_Cheats->Location = System::Drawing::Point(6, 41);
			this->tB_Cheats->MaxLength = 4;
			this->tB_Cheats->Name = L"tB_Cheats";
			this->tB_Cheats->Size = System::Drawing::Size(212, 20);
			this->tB_Cheats->TabIndex = 1;
			this->tB_Cheats->UseSystemPasswordChar = true;
			// 
			// b_CheatsSend
			// 
			this->b_CheatsSend->Location = System::Drawing::Point(140, 77);
			this->b_CheatsSend->Name = L"b_CheatsSend";
			this->b_CheatsSend->Size = System::Drawing::Size(75, 23);
			this->b_CheatsSend->TabIndex = 0;
			this->b_CheatsSend->Text = L"Absenden";
			this->b_CheatsSend->UseVisualStyleBackColor = true;
			this->b_CheatsSend->Click += gcnew System::EventHandler(this, &Form1::b_CheatsSend_Click);
			// 
			// gB_SchussgeP
			// 
			this->gB_SchussgeP->Controls->Add(this->L_Schussge);
			this->gB_SchussgeP->Controls->Add(this->label4);
			this->gB_SchussgeP->Controls->Add(this->label5);
			this->gB_SchussgeP->Controls->Add(this->tB_Schussge);
			this->gB_SchussgeP->Location = System::Drawing::Point(253, 16);
			this->gB_SchussgeP->Name = L"gB_SchussgeP";
			this->gB_SchussgeP->Size = System::Drawing::Size(221, 110);
			this->gB_SchussgeP->TabIndex = 4;
			this->gB_SchussgeP->TabStop = false;
			this->gB_SchussgeP->Text = L"Schussgeschwindigkeit";
			// 
			// L_Schussge
			// 
			this->L_Schussge->AutoSize = true;
			this->L_Schussge->Location = System::Drawing::Point(97, 23);
			this->L_Schussge->Name = L"L_Schussge";
			this->L_Schussge->Size = System::Drawing::Size(13, 13);
			this->L_Schussge->TabIndex = 3;
			this->L_Schussge->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(168, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"schnell";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 73);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"langsam";
			// 
			// tB_Schussge
			// 
			this->tB_Schussge->Location = System::Drawing::Point(58, 41);
			this->tB_Schussge->Maximum = 100;
			this->tB_Schussge->Minimum = 1;
			this->tB_Schussge->Name = L"tB_Schussge";
			this->tB_Schussge->Size = System::Drawing::Size(104, 45);
			this->tB_Schussge->TabIndex = 0;
			this->tB_Schussge->Value = 1;
			this->tB_Schussge->Scroll += gcnew System::EventHandler(this, &Form1::tB_Schussge_Scroll);
			// 
			// gB_SchiffgeP
			// 
			this->gB_SchiffgeP->Controls->Add(this->L_Geschwind);
			this->gB_SchiffgeP->Controls->Add(this->label2);
			this->gB_SchiffgeP->Controls->Add(this->label1);
			this->gB_SchiffgeP->Controls->Add(this->tB_Geschwind);
			this->gB_SchiffgeP->Location = System::Drawing::Point(9, 16);
			this->gB_SchiffgeP->Name = L"gB_SchiffgeP";
			this->gB_SchiffgeP->Size = System::Drawing::Size(221, 110);
			this->gB_SchiffgeP->TabIndex = 1;
			this->gB_SchiffgeP->TabStop = false;
			this->gB_SchiffgeP->Text = L"Schiffsgeschwindigkeit";
			// 
			// L_Geschwind
			// 
			this->L_Geschwind->AutoSize = true;
			this->L_Geschwind->Location = System::Drawing::Point(97, 23);
			this->L_Geschwind->Name = L"L_Geschwind";
			this->L_Geschwind->Size = System::Drawing::Size(13, 13);
			this->L_Geschwind->TabIndex = 3;
			this->L_Geschwind->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(168, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"schnell";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"langsam";
			// 
			// tB_Geschwind
			// 
			this->tB_Geschwind->Location = System::Drawing::Point(58, 41);
			this->tB_Geschwind->Maximum = 100;
			this->tB_Geschwind->Minimum = 1;
			this->tB_Geschwind->Name = L"tB_Geschwind";
			this->tB_Geschwind->Size = System::Drawing::Size(104, 45);
			this->tB_Geschwind->TabIndex = 0;
			this->tB_Geschwind->Value = 1;
			this->tB_Geschwind->Scroll += gcnew System::EventHandler(this, &Form1::tB_Geschwind_Scroll);
			// 
			// gB_HPP
			// 
			this->gB_HPP->Controls->Add(this->l_HPP);
			this->gB_HPP->Controls->Add(this->label40);
			this->gB_HPP->Controls->Add(this->label47);
			this->gB_HPP->Controls->Add(this->tB_HPP);
			this->gB_HPP->Location = System::Drawing::Point(493, 130);
			this->gB_HPP->Name = L"gB_HPP";
			this->gB_HPP->Size = System::Drawing::Size(221, 110);
			this->gB_HPP->TabIndex = 6;
			this->gB_HPP->TabStop = false;
			this->gB_HPP->Text = L"Leben";
			// 
			// l_HPP
			// 
			this->l_HPP->AutoSize = true;
			this->l_HPP->Location = System::Drawing::Point(97, 23);
			this->l_HPP->Name = L"l_HPP";
			this->l_HPP->Size = System::Drawing::Size(13, 13);
			this->l_HPP->TabIndex = 3;
			this->l_HPP->Text = L"0";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(168, 73);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(23, 13);
			this->label40->TabIndex = 2;
			this->label40->Text = L"viel";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(6, 73);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(35, 13);
			this->label47->TabIndex = 1;
			this->label47->Text = L"wenig";
			// 
			// tB_HPP
			// 
			this->tB_HPP->Location = System::Drawing::Point(58, 41);
			this->tB_HPP->Maximum = 1000;
			this->tB_HPP->Minimum = 1;
			this->tB_HPP->Name = L"tB_HPP";
			this->tB_HPP->Size = System::Drawing::Size(104, 45);
			this->tB_HPP->TabIndex = 0;
			this->tB_HPP->Value = 1;
			this->tB_HPP->Scroll += gcnew System::EventHandler(this, &Form1::tB_HPP_Scroll);
			// 
			// gB_HgL
			// 
			this->gB_HgL->Controls->Add(this->button1);
			this->gB_HgL->Controls->Add(this->b_HBreset);
			this->gB_HgL->Location = System::Drawing::Point(9, 132);
			this->gB_HgL->Name = L"gB_HgL";
			this->gB_HgL->Size = System::Drawing::Size(221, 106);
			this->gB_HgL->TabIndex = 6;
			this->gB_HgL->TabStop = false;
			this->gB_HgL->Text = L"Hintergrundbild";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(140, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Löschen";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_2);
			// 
			// b_HBreset
			// 
			this->b_HBreset->Location = System::Drawing::Point(140, 38);
			this->b_HBreset->Name = L"b_HBreset";
			this->b_HBreset->Size = System::Drawing::Size(75, 23);
			this->b_HBreset->TabIndex = 0;
			this->b_HBreset->Text = L"Standart";
			this->b_HBreset->UseVisualStyleBackColor = true;
			this->b_HBreset->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->gB_Farben);
			this->tabPage6->Controls->Add(this->gB_GQuali);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(752, 406);
			this->tabPage6->TabIndex = 6;
			this->tabPage6->Text = L"Grafikeinstellungen";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// gB_Farben
			// 
			this->gB_Farben->Controls->Add(this->cB_Farben);
			this->gB_Farben->Location = System::Drawing::Point(493, 148);
			this->gB_Farben->Name = L"gB_Farben";
			this->gB_Farben->Size = System::Drawing::Size(221, 110);
			this->gB_Farben->TabIndex = 9;
			this->gB_Farben->TabStop = false;
			this->gB_Farben->Text = L"Hintergrundfarbe";
			// 
			// cB_Farben
			// 
			this->cB_Farben->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cB_Farben->FormattingEnabled = true;
			this->cB_Farben->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Schwarz", L"Weiß", L"Blau", L"Rot", L"Grün",
					L"Gelb", L"Orange"
			});
			this->cB_Farben->Location = System::Drawing::Point(51, 45);
			this->cB_Farben->Name = L"cB_Farben";
			this->cB_Farben->Size = System::Drawing::Size(121, 21);
			this->cB_Farben->TabIndex = 0;
			this->cB_Farben->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::cB_Farben_SelectedIndexChanged);
			// 
			// gB_GQuali
			// 
			this->gB_GQuali->Controls->Add(this->cB_Quali);
			this->gB_GQuali->Location = System::Drawing::Point(266, 148);
			this->gB_GQuali->Name = L"gB_GQuali";
			this->gB_GQuali->Size = System::Drawing::Size(221, 110);
			this->gB_GQuali->TabIndex = 8;
			this->gB_GQuali->TabStop = false;
			this->gB_GQuali->Text = L"Grafikqualität";
			// 
			// cB_Quali
			// 
			this->cB_Quali->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cB_Quali->FormattingEnabled = true;
			this->cB_Quali->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"High", L"Medium", L"Low" });
			this->cB_Quali->Location = System::Drawing::Point(42, 45);
			this->cB_Quali->Name = L"cB_Quali";
			this->cB_Quali->Size = System::Drawing::Size(121, 21);
			this->cB_Quali->TabIndex = 0;
			this->cB_Quali->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// l_Coints
			// 
			this->l_Coints->AutoSize = true;
			this->l_Coints->BackColor = System::Drawing::Color::Transparent;
			this->l_Coints->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_Coints->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->l_Coints->Location = System::Drawing::Point(16, 8);
			this->l_Coints->Name = L"l_Coints";
			this->l_Coints->Size = System::Drawing::Size(25, 25);
			this->l_Coints->TabIndex = 44;
			this->l_Coints->Text = L"0";
			// 
			// L_CoinsL
			// 
			this->L_CoinsL->AutoSize = true;
			this->L_CoinsL->BackColor = System::Drawing::Color::Transparent;
			this->L_CoinsL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_CoinsL->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->L_CoinsL->Location = System::Drawing::Point(93, 8);
			this->L_CoinsL->Name = L"L_CoinsL";
			this->L_CoinsL->Size = System::Drawing::Size(72, 25);
			this->L_CoinsL->TabIndex = 45;
			this->L_CoinsL->Text = L"Coins";
			// 
			// pB_HPAnzeige
			// 
			this->pB_HPAnzeige->BackColor = System::Drawing::Color::DarkRed;
			this->pB_HPAnzeige->ForeColor = System::Drawing::Color::DarkRed;
			this->pB_HPAnzeige->Location = System::Drawing::Point(12, 8);
			this->pB_HPAnzeige->Name = L"pB_HPAnzeige";
			this->pB_HPAnzeige->Size = System::Drawing::Size(100, 23);
			this->pB_HPAnzeige->Step = 1;
			this->pB_HPAnzeige->TabIndex = 46;
			this->pB_HPAnzeige->Value = 100;
			// 
			// T_ShootE
			// 
			this->T_ShootE->Interval = 10;
			this->T_ShootE->Tick += gcnew System::EventHandler(this, &Form1::T_ShootE_Tick);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(-2, 1);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(791, 550);
			this->listBox1->TabIndex = 47;
			this->listBox1->Visible = false;
			// 
			// tlP_Highscore
			// 
			this->tlP_Highscore->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tlP_Highscore->ColumnCount = 3;
			this->tlP_Highscore->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				22.44489F)));
			this->tlP_Highscore->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				77.55511F)));
			this->tlP_Highscore->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				194)));
			this->tlP_Highscore->Controls->Add(this->label42, 0, 4);
			this->tlP_Highscore->Controls->Add(this->label41, 1, 4);
			this->tlP_Highscore->Controls->Add(this->l_HL05, 0, 4);
			this->tlP_Highscore->Controls->Add(this->l_HL04, 1, 3);
			this->tlP_Highscore->Controls->Add(this->label38, 0, 3);
			this->tlP_Highscore->Controls->Add(this->l_HL03, 1, 2);
			this->tlP_Highscore->Controls->Add(this->label36, 0, 2);
			this->tlP_Highscore->Controls->Add(this->l_HL02, 1, 1);
			this->tlP_Highscore->Controls->Add(this->label34, 0, 1);
			this->tlP_Highscore->Controls->Add(this->label30, 0, 0);
			this->tlP_Highscore->Controls->Add(this->label43, 2, 3);
			this->tlP_Highscore->Controls->Add(this->label44, 2, 1);
			this->tlP_Highscore->Controls->Add(this->label45, 2, 2);
			this->tlP_Highscore->Controls->Add(this->l_HL01, 1, 0);
			this->tlP_Highscore->Controls->Add(this->label46, 2, 0);
			this->tlP_Highscore->Location = System::Drawing::Point(60, 67);
			this->tlP_Highscore->Name = L"tlP_Highscore";
			this->tlP_Highscore->RowCount = 5;
			this->tlP_Highscore->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 44.70588F)));
			this->tlP_Highscore->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 55.29412F)));
			this->tlP_Highscore->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 78)));
			this->tlP_Highscore->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 85)));
			this->tlP_Highscore->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 89)));
			this->tlP_Highscore->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 6)));
			this->tlP_Highscore->Size = System::Drawing::Size(659, 393);
			this->tlP_Highscore->TabIndex = 48;
			// 
			// label42
			// 
			this->label42->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(3, 303);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(98, 90);
			this->label42->TabIndex = 11;
			this->label42->Text = L"5.";
			this->label42->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label41
			// 
			this->label41->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(467, 303);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(189, 90);
			this->label41->TabIndex = 10;
			this->label41->Text = L"Punkte";
			this->label41->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l_HL05
			// 
			this->l_HL05->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->l_HL05->AutoSize = true;
			this->l_HL05->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_HL05->Location = System::Drawing::Point(107, 303);
			this->l_HL05->Name = L"l_HL05";
			this->l_HL05->Size = System::Drawing::Size(354, 90);
			this->l_HL05->TabIndex = 9;
			this->l_HL05->Text = L"0";
			this->l_HL05->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l_HL04
			// 
			this->l_HL04->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->l_HL04->AutoSize = true;
			this->l_HL04->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_HL04->Location = System::Drawing::Point(107, 218);
			this->l_HL04->Name = L"l_HL04";
			this->l_HL04->Size = System::Drawing::Size(354, 85);
			this->l_HL04->TabIndex = 8;
			this->l_HL04->Text = L"0";
			this->l_HL04->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label38
			// 
			this->label38->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(3, 218);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(98, 85);
			this->label38->TabIndex = 7;
			this->label38->Text = L"4.";
			this->label38->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l_HL03
			// 
			this->l_HL03->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->l_HL03->AutoSize = true;
			this->l_HL03->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_HL03->Location = System::Drawing::Point(107, 140);
			this->l_HL03->Name = L"l_HL03";
			this->l_HL03->Size = System::Drawing::Size(354, 78);
			this->l_HL03->TabIndex = 6;
			this->l_HL03->Text = L"0";
			this->l_HL03->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label36
			// 
			this->label36->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(3, 140);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(98, 78);
			this->label36->TabIndex = 5;
			this->label36->Text = L"3.";
			this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l_HL02
			// 
			this->l_HL02->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->l_HL02->AutoSize = true;
			this->l_HL02->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_HL02->Location = System::Drawing::Point(107, 63);
			this->l_HL02->Name = L"l_HL02";
			this->l_HL02->Size = System::Drawing::Size(354, 77);
			this->l_HL02->TabIndex = 4;
			this->l_HL02->Text = L"0";
			this->l_HL02->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label34
			// 
			this->label34->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(3, 63);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(98, 77);
			this->label34->TabIndex = 2;
			this->label34->Text = L"2.";
			this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label30
			// 
			this->label30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(3, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(98, 63);
			this->label30->TabIndex = 0;
			this->label30->Text = L"1.";
			this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label43
			// 
			this->label43->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(467, 218);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(189, 85);
			this->label43->TabIndex = 12;
			this->label43->Text = L"Punkte";
			this->label43->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label44
			// 
			this->label44->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(467, 63);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(189, 77);
			this->label44->TabIndex = 13;
			this->label44->Text = L"Punkte";
			this->label44->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label45
			// 
			this->label45->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(467, 140);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(189, 78);
			this->label45->TabIndex = 14;
			this->label45->Text = L"Punkte";
			this->label45->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l_HL01
			// 
			this->l_HL01->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->l_HL01->AutoSize = true;
			this->l_HL01->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_HL01->Location = System::Drawing::Point(107, 0);
			this->l_HL01->Name = L"l_HL01";
			this->l_HL01->Size = System::Drawing::Size(354, 63);
			this->l_HL01->TabIndex = 16;
			this->l_HL01->Text = L"0";
			this->l_HL01->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label46
			// 
			this->label46->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(467, 0);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(189, 63);
			this->label46->TabIndex = 15;
			this->label46->Text = L"Punkte";
			this->label46->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// T_Stat
			// 
			this->T_Stat->Interval = 1000;
			this->T_Stat->Tick += gcnew System::EventHandler(this, &Form1::T_Stat_Tick);
			// 
			// pB_DShoot01
			// 
			this->pB_DShoot01->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pB_DShoot01.Image")));
			this->pB_DShoot01->Location = System::Drawing::Point(369, 507);
			this->pB_DShoot01->Name = L"pB_DShoot01";
			this->pB_DShoot01->Size = System::Drawing::Size(2, 4);
			this->pB_DShoot01->TabIndex = 49;
			this->pB_DShoot01->TabStop = false;
			// 
			// pB_DShoot02
			// 
			this->pB_DShoot02->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pB_DShoot02.Image")));
			this->pB_DShoot02->Location = System::Drawing::Point(403, 507);
			this->pB_DShoot02->Name = L"pB_DShoot02";
			this->pB_DShoot02->Size = System::Drawing::Size(2, 4);
			this->pB_DShoot02->TabIndex = 50;
			this->pB_DShoot02->TabStop = false;
			// 
			// pB_Medi
			// 
			this->pB_Medi->BackColor = System::Drawing::Color::Transparent;
			this->pB_Medi->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pB_Medi.Image")));
			this->pB_Medi->Location = System::Drawing::Point(176, 3);
			this->pB_Medi->Name = L"pB_Medi";
			this->pB_Medi->Size = System::Drawing::Size(30, 30);
			this->pB_Medi->TabIndex = 51;
			this->pB_Medi->TabStop = false;
			// 
			// l_MediX
			// 
			this->l_MediX->AutoSize = true;
			this->l_MediX->BackColor = System::Drawing::Color::Transparent;
			this->l_MediX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_MediX->ForeColor = System::Drawing::Color::Red;
			this->l_MediX->Location = System::Drawing::Point(212, 9);
			this->l_MediX->Name = L"l_MediX";
			this->l_MediX->Size = System::Drawing::Size(21, 20);
			this->l_MediX->TabIndex = 52;
			this->l_MediX->Text = L"X";
			// 
			// l_MediA
			// 
			this->l_MediA->AutoSize = true;
			this->l_MediA->BackColor = System::Drawing::Color::Transparent;
			this->l_MediA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_MediA->ForeColor = System::Drawing::Color::Red;
			this->l_MediA->Location = System::Drawing::Point(239, 9);
			this->l_MediA->Name = L"l_MediA";
			this->l_MediA->Size = System::Drawing::Size(19, 20);
			this->l_MediA->TabIndex = 53;
			this->l_MediA->Text = L"0";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 562);
			this->Controls->Add(this->l_MediA);
			this->Controls->Add(this->l_MediX);
			this->Controls->Add(this->pB_Medi);
			this->Controls->Add(this->pB_DShoot02);
			this->Controls->Add(this->pB_DShoot01);
			this->Controls->Add(this->L_Score);
			this->Controls->Add(this->PB_Shoot0);
			this->Controls->Add(this->PB_ShootEH0);
			this->Controls->Add(this->PB_ShootEN0);
			this->Controls->Add(this->PB_ShootEN1);
			this->Controls->Add(this->PB_ShootEN2);
			this->Controls->Add(this->PB_ShootEH1);
			this->Controls->Add(this->PB_ShootEH2);
			this->Controls->Add(this->PB_ShootEN3);
			this->Controls->Add(this->PB_ShootEH3);
			this->Controls->Add(this->PB_ShootEN4);
			this->Controls->Add(this->M_Cred);
			this->Controls->Add(this->L_ScoreText);
			this->Controls->Add(this->PB_Player);
			this->Controls->Add(this->H_Exit);
			this->Controls->Add(this->H_Menue);
			this->Controls->Add(this->pB_HPAnzeige);
			this->Controls->Add(this->l_Coints);
			this->Controls->Add(this->L_HPAnzeigeI);
			this->Controls->Add(this->M_Header);
			this->Controls->Add(this->tC_Shop);
			this->Controls->Add(this->PB_EnemyN4);
			this->Controls->Add(this->tlP_Highscore);
			this->Controls->Add(this->M_NewG);
			this->Controls->Add(this->M_Shop);
			this->Controls->Add(this->M_Higscr);
			this->Controls->Add(this->M_Exit);
			this->Controls->Add(this->L_CoinsL);
			this->Controls->Add(this->PB_Layer1);
			this->Controls->Add(this->PB_EnemyH1);
			this->Controls->Add(this->PB_EnemyH0);
			this->Controls->Add(this->PB_EnemyH2);
			this->Controls->Add(this->PB_EnemyH3);
			this->Controls->Add(this->PB_EnemyN3);
			this->Controls->Add(this->PB_EnemyN2);
			this->Controls->Add(this->PB_EnemyN1);
			this->Controls->Add(this->PB_EnemyN0);
			this->Controls->Add(this->L_Shop);
			this->Controls->Add(this->PB_Hindernis2);
			this->Controls->Add(this->PB_Hindernis1);
			this->Controls->Add(this->PB_Hindernis3);
			this->Controls->Add(this->listBox1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Space Invader";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Shown += gcnew System::EventHandler(this, &Form1::Form1_Shown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_Player))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_Hindernis1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_Hindernis2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_Hindernis3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_Shoot0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_Layer1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_EnemyN0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_EnemyN1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_EnemyN2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_EnemyN3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_EnemyN4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_EnemyH0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_EnemyH1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_EnemyH2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_EnemyH3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_ShootEH0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_ShootEH1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_ShootEH2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_ShootEH3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_ShootEN0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_ShootEN1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_ShootEN2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_ShootEN3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_ShootEN4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L_Shop))->EndInit();
			this->tC_Shop->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->gB_SchadenGH->ResumeLayout(false);
			this->gB_SchadenGH->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tB_ScahdenGH))->EndInit();
			this->gB_SchadenG->ResumeLayout(false);
			this->gB_SchadenG->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tB_SchadenG))->EndInit();
			this->gB_SchadenP->ResumeLayout(false);
			this->gB_SchadenP->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tB_PlayerSchaden))->EndInit();
			this->gB_SchussGeG->ResumeLayout(false);
			this->gB_SchussGeG->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tB_GeschwindE))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->gB_SchussgeP->ResumeLayout(false);
			this->gB_SchussgeP->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tB_Schussge))->EndInit();
			this->gB_SchiffgeP->ResumeLayout(false);
			this->gB_SchiffgeP->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tB_Geschwind))->EndInit();
			this->gB_HPP->ResumeLayout(false);
			this->gB_HPP->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tB_HPP))->EndInit();
			this->gB_HgL->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->gB_Farben->ResumeLayout(false);
			this->gB_GQuali->ResumeLayout(false);
			this->tlP_Highscore->ResumeLayout(false);
			this->tlP_Highscore->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB_DShoot01))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB_DShoot02))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB_Medi))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {		//Ausführen beim Öffnen
				M_Header->Text="Menue";
				L_Shop->Visible=0;
				M_NewG->Visible=1;
				M_Header->Visible=1;
				//pB_CredLogo->Visible = 0;
				M_Higscr->Visible=1;
				M_Exit->Visible=1;
				M_Cred->Visible=1;
				M_Shop->Visible=1;
				//S_RaumUp->Visible=0;
				//S_SonI->Visible=0;
				PB_Player->Visible = 0;

				pB_Medi->Visible = false;
				l_MediX->Visible = false;
				l_MediA->Visible = false;

				tlP_Highscore->Visible = 0;
				
				pB_DShoot01->Visible = false;
				pB_DShoot02->Visible = false;

				gB_SchussGeG->Visible = false;
				gB_SchussGeG->Visible = false;
				gB_SchiffgeP->Visible = false;
				gB_SchussgeP->Visible = false;
				gB_SchadenP->Visible = false;
				gB_HPP->Visible = false;
				gB_SchadenG->Visible = false;
				gB_SchadenGH->Visible = false;
				gB_HgL->Visible = false;

				PB_Shoot0->Visible = 0;
				PB_Hindernis1->Visible = 0;
				PB_Hindernis2->Visible = 0;
				PB_Hindernis3->Visible = 0;

				PB_Shoot0->Visible = 0;
				
				PB_EnemyN0->Visible = 0;
				PB_EnemyN1->Visible = 0;
				PB_EnemyN2->Visible = 0;
				PB_EnemyN3->Visible = 0;
				PB_EnemyN4->Visible = 0;

				PB_EnemyH0->Visible = 0;
				PB_EnemyH1->Visible = 0;
				PB_EnemyH2->Visible = 0;
				PB_EnemyH3->Visible = 0;

				PB_ShootEH0->Visible = 0;
				PB_ShootEH1->Visible = 0;
				PB_ShootEH2->Visible = 0;
				PB_ShootEH3->Visible = 0;

				PB_ShootEN0->Visible = 0;
				PB_ShootEN1->Visible = 0;
				PB_ShootEN2->Visible = 0;
				PB_ShootEN3->Visible = 0;
				PB_ShootEN4->Visible = 0;

				L_Score->Visible = 0;
				L_ScoreText->Visible = 0;

				pB_HPAnzeige->Visible = 0;
				L_HPAnzeigeI->Visible = 0;

				T_Game->Enabled = false;

				tC_Shop->Visible = false;

				L_CoinsL->Visible = false;
				l_Coints->Visible = false;

				if (!SOpen())
				{
					if (FirstTry)
					{
						MessageBox::Show("Der Spielstand konnte nicht geladen werden", "Fehler");
						FirstTry = true;
					}
				}

				
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {	//Button Neues Spiel
			PB_Player->Visible = 1;
			T_Stat->Enabled = true;
			M_NewG->Visible=0;
			M_Header->Visible=0;
			//pB_CredLogo->Visible = 0;
			M_Higscr->Visible=0;
			M_Exit->Visible=0;
			M_Cred->Visible=0;
			M_Shop->Visible=0;
			tlP_Highscore->Visible = 0;
			l_MediA->Text = Convert::ToString(ShopValues.getMedipack());
			pB_Medi->Visible = true;
			l_MediX->Visible = true;
			l_MediA->Visible = true;

			Hindernis1.setvisible(true);
			Hindernis2.setvisible(true);
			Hindernis3.setvisible(true);

			EnemyN0.sethp(100);
			EnemyN1.sethp(100);
			EnemyN2.sethp(100);
			EnemyN3.sethp(100);
			EnemyN4.sethp(100);

			EnemyH0.sethp(200);
			EnemyH1.sethp(200);
			EnemyH2.sethp(200);
			EnemyH3.sethp(200);

			EnemyN0.setvisible(true);
			EnemyN1.setvisible(true);
			EnemyN2.setvisible(false);
			EnemyN3.setvisible(false);
			EnemyN4.setvisible(true);

			EnemyH0.setvisible(false);
			EnemyH1.setvisible(false);
			EnemyH2.setvisible(false);
			EnemyH3.setvisible(false);

			Game.sethp(100);
			Game.resetscore();

			PB_Player->Left = 356;

			PB_Hindernis1->Visible = 1;
			PB_Hindernis2->Visible = 1;
			PB_Hindernis3->Visible = 1;

			PB_EnemyN0->Visible = 1;
			PB_EnemyN1->Visible = 1;
			PB_EnemyN2->Visible = 1;
			PB_EnemyN3->Visible = 1;
			PB_EnemyN4->Visible = 1;

			PB_EnemyH0->Visible = 1;
			PB_EnemyH1->Visible = 1;
			PB_EnemyH2->Visible = 1;
			PB_EnemyH3->Visible = 1;

			PB_Player->Visible = 1;
			L_Score->Visible = 1;
			L_ScoreText->Visible = 1;

			pB_HPAnzeige->Visible = 1;
			L_HPAnzeigeI->Visible = 1;

			pB_HPAnzeige->Value = Game.gethp();


			if (Hindernis1.getvisivle() == false)
			{
				PB_Hindernis1->Visible = 0;
			}
			if (Hindernis2.getvisivle() == false)
			{
				PB_Hindernis2->Visible = 0;
			}
			if (Hindernis3.getvisivle() == false)
			{
				PB_Hindernis3->Visible = 0;
			}
			if (EnemyH0.getvisible() == false)
			{
				PB_EnemyH0->Visible = false;
			}
			if (EnemyH1.getvisible() == false)
			{
				PB_EnemyH1->Visible = 0;
			}
			if (EnemyH2.getvisible() == false)
			{
				PB_EnemyH2->Visible = 0;
			}
			if (EnemyH3.getvisible() == false)
			{
				PB_EnemyH3->Visible = 0;
			}
			if (EnemyN0.getvisible() == false)
			{
				PB_EnemyN0->Visible = false;
			}
			if (EnemyN1.getvisible() == false)
			{
				PB_EnemyN1->Visible = 0;
			}
			if (EnemyN2.getvisible() == false)
			{
				PB_EnemyN2->Visible = 0;
			}
			if (EnemyN3.getvisible() == false)
			{
				PB_EnemyN3->Visible = 0;
			}
			if (EnemyN4.getvisible() == false)
			{
				PB_EnemyN4->Visible = 0;
			}

			KeyPreview::set(true);
			Game.setstart();

			T_Game->Enabled = true;

			if (Game.getschiffskin() == 0)
			{
				System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
				this->PB_Player->Image = ((Image^)resources->GetObject("pictureBox11.Image"));
			}
			else
			{
				if (Game.getschiffskin() == 1)
				{
					System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
					this->PB_Player->Image = ((Image^)resources->GetObject("pictureBox12.Image"));
				}
				else {
					if (Game.getschiffskin() == 2)
					{
						System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
						this->PB_Player->Image = ((Image^)resources->GetObject("pictureBox13.Image"));
					}
				}
			}

			score = Game.getscore();
			L_Score->Text = score.ToString();
		}
	private: System::Void M_Exit_Click(System::Object^  sender, System::EventArgs^  e) {		//Button Beenden
		if (SClose())
		{
			Application::Exit();
		}
		else
		{
			MessageBox::Show("Es gab ein Fehler beim Speichern", "Fehler");
			Application::Exit();
		}
			 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {		//Button Credits
	if (!Game.getstart())
	{
		/*M_Header->Visible = 0;
		M_NewG->Visible = 0;
		M_Header->Visible = 0;
		M_Higscr->Visible = 0;
		M_Exit->Visible = 0;
		M_Cred->Visible = 0;
		M_Shop->Visible = 0;
		H_Exit->Visible = 1;
		H_Menue->Visible = 1;
		PB_Player->Visible = 0;
		pB_CredLogo->Visible = 0;*/
		creditsScreen->Show();
	}

		 }
private: System::Void M_Higscr_Click(System::Object^  sender, System::EventArgs^  e) {		//Button Highscore
	if (!Game.getstart())
	{
		//sortieren();
		M_Header->Text = "Highscore";
		M_NewG->Visible = 0;
		M_Header->Visible = 1;
		M_Higscr->Visible = 0;
		M_Exit->Visible = 0;
		M_Cred->Visible = 0;
		tlP_Highscore->Visible = 1;
		M_Shop->Visible = 0;
		H_Exit->Visible = 1;
		H_Menue->Visible = 1;
		PB_Player->Visible = 0;
		//pB_CredLogo->Visible = 0;

		l_HL01->Text = Convert::ToString(HScore[0]);
		l_HL02->Text = Convert::ToString(HScore[1]);
		l_HL03->Text = Convert::ToString(HScore[2]);
		l_HL04->Text = Convert::ToString(HScore[3]);
		l_HL05->Text = Convert::ToString(HScore[4]);
	}
		 }
private: System::Void H_Menue_Click(System::Object^  sender, System::EventArgs^  e) {		//Button Menue nur sichbar wenn in Highscore oder Shop
	if (!Game.getstart())
	{
		//S_RaumUp->Visible = 0;
		//S_SonI->Visible = 0;
		M_Header->Text = "Menue";
		M_NewG->Visible = 1;
		M_Header->Visible = 1;
		M_Higscr->Visible = 1;
		M_Exit->Visible = 1;
		M_Cred->Visible = 1;
		M_Shop->Visible = 1;
		H_Exit->Visible = 0;
		tlP_Highscore->Visible = 0;
		H_Menue->Visible = 0;
		PB_Player->Visible = 0;
		L_CoinsL->Visible = false;
		l_Coints->Visible = false;
		tC_Shop->Visible = 0;
		//pB_CredLogo->Visible = 0;
	}
		 }
private: System::Void H_Exit_Click(System::Object^  sender, System::EventArgs^  e) {		//Beenden Button nur sichtbar in Highscore und Shop
	if (SClose())
	{
		Application::Exit();
	}
	else
	{
		MessageBox::Show("Es gab ein Fehler beim Speichern", "Fehler");
		Application::Exit();
	}
		 }
private: System::Void M_Shop_Click(System::Object^  sender, System::EventArgs^  e) {		//Shop Button
	if (!Game.getstart())
	{
		M_Header->Text = "Shop";
		M_NewG->Visible = 0;
		M_Header->Visible = 1;
		//pB_CredLogo->Visible = 0;
		M_Higscr->Visible = 0;
		M_Exit->Visible = 0;
		M_Cred->Visible = 0;
		M_Shop->Visible = 0;
		H_Exit->Visible = 1;
		H_Menue->Visible = 1;
		tlP_Highscore->Visible = 0;
		M_Shop->Visible = 0;
		//S_RaumUp->Visible = 1;
		//S_SonI->Visible = 1;
		PB_Player->Visible = 0;
		L_CoinsL->Visible = true;
		l_Coints->Visible = true;

		l_Coints->Text = Convert::ToString(Game.getcoints());

		tB_HPP->Value = Game.gethp();
		l_HPP->Text = Convert::ToString(tB_HPP->Value);

		tB_SchadenG->Value = EnemyN0.getschaden();
		l_SchadenG->Text = Convert::ToString(tB_SchadenG->Value);

		tB_ScahdenGH->Value = EnemyH0.getschaden();
		l_SchadenGH->Text = Convert::ToString(tB_ScahdenGH->Value);

		tC_Shop->Visible = true;
		tB_Geschwind->Value = Game.getgeschwindigkeit();
		tB_GeschwindE->Value = Game.getschussgeschE();
		L_GeschwindE->Text = Convert::ToString(tB_GeschwindE->Value);
		L_Geschwind->Text = Convert::ToString(tB_Geschwind->Value);
		tB_Schussge->Value = Game.getschussgesch();
		L_Schussge->Text = Convert::ToString(tB_Schussge->Value);

		tB_PlayerSchaden->Value = Game.getschaden();
		l_PlayerSchaden->Text = Convert::ToString(tB_PlayerSchaden->Value);

		l_MedPreis->Text = MedipackPreis.ToString();
		l_H1Preis->Text = H1Preis.ToString();
		l_H2Preis->Text = H2Preis.ToString();
		l_H3Preis->Text = H3Preis.ToString();
		l_H4Preis->Text = H4Preis.ToString();

		if (ShopValues.getSchiffUpgrade1())
		{
			b_SU1K->Text= "Anwenden";
		}
		else
		{
			b_SU1K->Text = "Kaufen";
		}

		if (ShopValues.getSchiffUpgrade2())
		{
			b_SU2K->Text = "Anwenden";
		}
		else
		{
			b_SU2K->Text = "Kaufen";
		}

		if (ShopValues.getSchiffUpgrade3())
		{
			b_SU3K->Text = "Anwenden";
		}
		else
		{
			b_SU3K->Text = "Kaufen";
		}

		if (ShopValues.getSchiffUpgrade4())
		{
			b_SU4K->Text = "Anwenden";
		}
		else
		{
			b_SU4K->Text = "Kaufen";
		}

		if (ShopValues.getSchiffUpgrade5())
		{
			b_SU5K->Text = "Anwenden";
		}
		else
		{
			b_SU5K->Text = "Kaufen";
		}

		if (ShopValues.getHintergrund1())
		{
			b_HG01->Text = "Anwenden";
		}
		else
		{
			b_HG01->Text = "Kaufen";
		}
		if (ShopValues.getHintergrund2())
		{
			b_HG02->Text = "Anwenden";
		}
		else
		{
			b_HG02->Text = "Kaufen";
		}
		if (ShopValues.getHintergrund3())
		{
			b_HG03->Text = "Anwenden";
		}
		else
		{
			b_HG03->Text = "Kaufen";
		}
		if (ShopValues.getHintergrund4())
		{
			b_HG04->Text = "Anwenden";
		}
		else
		{
			b_HG04->Text = "Kaufen";
		}

		l_InMediA->Text = Convert::ToString(ShopValues.getMedipack());
		l_Time->Text = Convert::ToString(Game.gettime());

		if (ShopValues.getHintergrund1())
		{
			l_InH1A->Text = "1";
		}
		if (ShopValues.getHintergrund2())
		{
			l_InH2A->Text = "1";
		}
		if (ShopValues.getHintergrund3())
		{
			l_InH3A->Text = "1";
		}
		if (ShopValues.getHintergrund4())
		{
			l_InH4A->Text = "1";
		}


	}
		 }
private: System::Void L_Shop_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void M_Header_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Form1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	
	if ((e->KeyChar == 'a')&&(Game.getstart()) && (!Game.getpause())) //Nach Links
	{
		System::Diagnostics::Debug::WriteLine(L"a-Taste gerdrückt");
		if (PB_Player->Left>0)
		{
			System::Diagnostics::Debug::WriteLine(L"Spieler Raumschiff 15 nach links");
			PB_Player->Left -= Game.getgeschwindigkeit();
			Refresh();
		}
	}
	else if((e->KeyChar == 'd') && (Game.getstart()) && (!Game.getpause())) //Nach Rechts
	{
		System::Diagnostics::Debug::WriteLine(L"d-Taste gedrückt");
		if (PB_Player->Right<785)
		{
			System::Diagnostics::Debug::WriteLine(L"Spieler Raumschiff 15 nach rechts");
			PB_Player->Left += Game.getgeschwindigkeit();
			Refresh();
		}
	}
	else if (((e->KeyChar == ' ') || (e->KeyChar == 'w')) && (Game.getstart()) && (!Game.getpause()))			//Schuss Spiel trigger
	{
		System::Diagnostics::Debug::WriteLine(L"Schuss wurde gestartet");
		if (T_Shoot->Enabled == false)
		{
			try
			{
				SoundPlayer ^player = gcnew SoundPlayer();
				player->SoundLocation = "Shoot_sound.wav";
				player->Play();
			}
			catch (...)
			{
				System::Diagnostics::Debug::WriteLine(L"Sounds Kaputt");
			}
		}
		T_Shoot->Enabled = true;
		if (dShoot)
		{
			pB_DShoot01->Left = PB_Player->Left + 13;
			pB_DShoot02->Left = PB_Player->Left + 47;
			pB_DShoot01->Visible = true;
			pB_DShoot02->Visible = true;
		}
		else
		{
			PB_Shoot0->Left = PB_Player->Left + 28;
			PB_Shoot0->Visible = 1;
		}
		Refresh();
	}
	else if ((e->KeyChar == 'h') && (Game.getstart()))			//Medipack Spiel trigger
	{
		if (ShopValues.decMedipack())
		{
			Game.sethp(100);
			System::Diagnostics::Debug::WriteLine(L"Medipack wurde Genutzt");
			pB_HPAnzeige->Value = Game.gethp();
		}
		else
		{
			pB_HPAnzeige->Value = Game.gethp();
		}
		l_MediA->Text = Convert::ToString(ShopValues.getMedipack());
	}
	else if (e->KeyChar == 27)
	{
		if (SClose())
		{
			Application::Exit();
		}
		else
		{
			MessageBox::Show("Es gab ein Fehler beim Speichern", "Fehler");
			Application::Exit();
		}
	}
	else if (e->KeyChar == 'm')			//Menue Spiel trigger
	{
		T_Stat->Enabled = false;
		T_Game->Enabled = false;
		T_Shoot->Enabled = false;
		//S_RaumUp->Visible = 0;
		//S_SonI->Visible = 0;
		M_Header->Text = "Menue";
		M_NewG->Visible = 1;
		M_Header->Visible = 1;
		M_Higscr->Visible = 1;
		M_Exit->Visible = 1;
		M_Cred->Visible = 1;
		M_Shop->Visible = 1;
		H_Exit->Visible = 0;
		H_Menue->Visible = 0;
		PB_Player->Visible = 0;
		L_CoinsL->Visible = false;
		l_Coints->Visible = false;
		tC_Shop->Visible = 0;
		//pB_CredLogo->Visible = 0;
		PB_Hindernis1->Visible = 0;
		PB_Hindernis2->Visible = 0;
		PB_Hindernis3->Visible = 0;

		PB_ShootEH0->Visible = 0;
		PB_ShootEH1->Visible = 0;
		PB_ShootEH2->Visible = 0;
		PB_ShootEH3->Visible = 0;
		PB_ShootEN0->Visible = 0;
		PB_ShootEN1->Visible = 0;
		PB_ShootEN2->Visible = 0;
		PB_ShootEN3->Visible = 0;
		PB_ShootEN4->Visible = 0;

		pB_Medi->Visible = false;
		l_MediX->Visible = false;
		l_MediA->Visible = false;

		PB_EnemyN0->Visible = 0;
		PB_EnemyN1->Visible = 0;
		PB_EnemyN2->Visible = 0;
		PB_EnemyN3->Visible = 0;
		PB_EnemyN4->Visible = 0;

		PB_EnemyN0->Visible = 0;
		PB_EnemyN1->Visible = 0;
		PB_EnemyN2->Visible = 0;
		PB_EnemyN3->Visible = 0;
		PB_EnemyN4->Visible = 0;

		PB_EnemyH0->Visible = 0;
		PB_EnemyH1->Visible = 0;
		PB_EnemyH2->Visible = 0;
		PB_EnemyH3->Visible = 0;

		L_Score->Visible = 0;
		L_ScoreText->Visible = 0;

		pB_HPAnzeige->Visible = 0;
		L_HPAnzeigeI->Visible = 0;

		Hindernis1.setvisible(false);
		Hindernis2.setvisible(false);
		Hindernis3.setvisible(false);

		KeyPreview::set(false);
		Game.resetstart();
	}
	else if (e->KeyChar == 'p')				//Pause Spiel trigger
	{
		if (Game.getpause() == true)
		{
			Game.resetpause();
		}
		else
		{
			Game.setpause();
		}
		if (!Game.getpause())
		{

			if (Pause_Shoot)
			{
				PB_Shoot0->Visible = 1;
				T_Shoot->Enabled = true;
			}
			else
			{
				PB_Shoot0->Visible = 0;
				T_Shoot->Enabled = false;
			}
			System::Diagnostics::Debug::WriteLine(L"Spiel geht weiter");
			Game.resetpause();
			T_Game->Enabled = true;
			PB_Hindernis1->Visible = 1;
			PB_Hindernis2->Visible = 1;
			PB_Hindernis3->Visible = 1;
			T_Stat->Enabled = true;

			PB_EnemyN0->Visible = 1;
			PB_EnemyN1->Visible = 1;
			PB_EnemyN2->Visible = 1;
			PB_EnemyN3->Visible = 1;
			PB_EnemyN4->Visible = 1;

			pB_Medi->Visible = true;
			l_MediX->Visible = true;
			l_MediA->Visible = true;

			PB_EnemyH0->Visible = 1;
			PB_EnemyH1->Visible = 1;
			PB_EnemyH2->Visible = 1;
			PB_EnemyH3->Visible = 1;

			PB_Player->Visible = 1;
			L_Score->Visible = 1;
			L_ScoreText->Visible = 1;

			pB_HPAnzeige->Visible = 1;
			L_HPAnzeigeI->Visible = 1;

			if (Hindernis1.getvisivle() == false)
			{
				PB_Hindernis1->Visible = 0;
			}
			if (Hindernis2.getvisivle() == false)
			{
				PB_Hindernis2->Visible = 0;
			}
			if (Hindernis3.getvisivle() == false)
			{
				PB_Hindernis3->Visible = 0;
			}
			if (EnemyH0.getvisible() == false)
			{
				PB_EnemyH0->Visible = false;
			}
			if (EnemyH1.getvisible() == false)
			{
				PB_EnemyH1->Visible = 0;
			}
			if (EnemyH2.getvisible() == false)
			{
				PB_EnemyH2->Visible = 0;
			}
			if (EnemyH3.getvisible() == false)
			{
				PB_EnemyH3->Visible = 0;
			}
			if (EnemyN0.getvisible() == false)
			{
				PB_EnemyN0->Visible = false;
			}
			if (EnemyN1.getvisible() == false)
			{
				PB_EnemyN1->Visible = 0;
			}
			if (EnemyN2.getvisible() == false)
			{
				PB_EnemyN2->Visible = 0;
			}
			if (EnemyN3.getvisible() == false)
			{
				PB_EnemyN3->Visible = 0;
			}
			if (EnemyN4.getvisible() == false)
			{
				PB_EnemyN4->Visible = 0;
			}

			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("$this.BackgroundImage"));
		}
		else
		{
			if (T_Shoot->Enabled == true)
			{
				Pause_Shoot = true;
			}
			else
			{
				Pause_Shoot = false;
			}
			System::Diagnostics::Debug::WriteLine(L"Spiel hat Pause");
			Game.setpause();
			T_Game->Enabled = false;
			T_Shoot->Enabled = false;
			T_Stat->Enabled = false;
			PB_Hindernis1->Visible = 0;
			PB_Hindernis2->Visible = 0;
			PB_Hindernis3->Visible = 0;
			PB_EnemyN0->Visible = 0;
			PB_EnemyN1->Visible = 0;
			PB_EnemyN2->Visible = 0;
			PB_EnemyN3->Visible = 0;
			PB_EnemyN4->Visible = 0;
			PB_EnemyH0->Visible = 0;
			PB_EnemyH1->Visible = 0;
			PB_EnemyH2->Visible = 0;
			PB_EnemyH3->Visible = 0;
			pB_DShoot01->Visible = 0;
			pB_DShoot02->Visible = 0;
			pB_Medi->Visible = false;
			l_MediX->Visible = false;
			l_MediA->Visible = false;
			PB_ShootEH0->Visible = 0;
			PB_ShootEH1->Visible = 0;
			PB_ShootEH2->Visible = 0;
			PB_ShootEH3->Visible = 0;
			PB_EnemyN0->Visible = 0;
			PB_EnemyN1->Visible = 0;
			PB_EnemyN2->Visible = 0;
			PB_EnemyN3->Visible = 0;
			PB_EnemyN4->Visible = 0;
			PB_Player->Visible = 0;
			L_Score->Visible = 0;
			L_ScoreText->Visible = 0;
			pB_HPAnzeige->Visible = 0;
			L_HPAnzeigeI->Visible = 0;
			PB_Shoot0->Visible = 0;

			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("PauseScreen.Image"));

		}
	}
	else if (e->KeyChar == 'k')
	{
		if (iDeath)
		{
			Game.sethp(0);
			Game.resetstart();
		}
	}
}
private: System::Void T_Shoot_Tick(System::Object^  sender, System::EventArgs^  e) {			//Shoot Timer
	
	if (dShoot)
	{
		if (dShoot01E)
		{
			pB_DShoot01->Top -= Game.getschussgesch();
		}
		if (dShoot02E)
		{
			pB_DShoot02->Top -= Game.getschussgesch();
		}
		Refresh();
		if (dShoot01E)
		{
			y = pB_DShoot01->Top;
			x1 = pB_DShoot01->Left;
			x2 = pB_DShoot01->Right;

			if (colisionP(y, x1, x2))
			{
				pB_DShoot01->Visible = 0;
				pB_DShoot01->Top = 507;
				dShoot01E = false;
				try
				{
					SoundPlayer ^player = gcnew SoundPlayer();
					player->SoundLocation = "Treffer_sound.wav";
					player->Play();
				}
				catch (...)
				{
					System::Diagnostics::Debug::WriteLine(L"Sounds Kaputt");
				}
			}
		}
		if (dShoot02E)
		{
			y = pB_DShoot02->Top;
			x1 = pB_DShoot02->Left;
			x2 = pB_DShoot02->Right;

			if (colisionP(y, x1, x2))
			{
				pB_DShoot02->Visible = 0;
				pB_DShoot02->Top = 507;
				dShoot02E = false;
				try
				{
					SoundPlayer ^player = gcnew SoundPlayer();
					player->SoundLocation = "Treffer_sound.wav";
					player->Play();
				}
				catch (...)
				{
					System::Diagnostics::Debug::WriteLine(L"Sounds Kaputt");
				}
			}
		}
		if ((!dShoot01E) && (!dShoot02E))
		{
			T_Shoot->Enabled = false;
			dShoot01E = true;
			dShoot02E = true;
		}
	}
	else
	{
		PB_Shoot0->Top -= Game.getschussgesch();
		Refresh();

		y = PB_Shoot0->Top;
		x1 = PB_Shoot0->Left;
		x2 = PB_Shoot0->Right;

		if (colisionP(y, x1, x2))
		{
			PB_Shoot0->Visible = 0;
			PB_Shoot0->Top = 478;
			T_Shoot->Enabled = false;
			try
			{
				SoundPlayer ^player = gcnew SoundPlayer();
				player->SoundLocation = "Treffer_sound.wav";
				player->Play();
			}
			catch (...)
			{
				System::Diagnostics::Debug::WriteLine(L"Sounds Kaputt");
			}
		}
	}

	if (Hindernis1.getvisivle() == false)
	{
		PB_Hindernis1->Visible = 0;
	}
	if (Hindernis2.getvisivle() == false)
		{
			PB_Hindernis2->Visible = 0;
		}
	if (Hindernis3.getvisivle() == false)
	{
		PB_Hindernis3->Visible = 0;
	}
	if (EnemyH0.getvisible() == false)
	{
		PB_EnemyH0->Visible = false;
	}
	if (EnemyH1.getvisible() == false)
	{
		PB_EnemyH1->Visible = 0;
	}
	if (EnemyH2.getvisible() == false)
	{
		PB_EnemyH2->Visible = 0;
	}
	if (EnemyH3.getvisible() == false)
	{
		PB_EnemyH3->Visible = 0;
	}
	if (EnemyN0.getvisible() == false)
	{
		PB_EnemyN0->Visible = false;
	}
	if (EnemyN1.getvisible() == false)
	{
		PB_EnemyN1->Visible = 0;
	}
	if (EnemyN2.getvisible() == false)
	{
		PB_EnemyN2->Visible = 0;
	}
	if (EnemyN3.getvisible() == false)
	{
		PB_EnemyN3->Visible = 0;
	}
	if (EnemyN4.getvisible() == false)
	{
		PB_EnemyN4->Visible = 0;
	}
	
}



private: System::Void T_Game_Tick(System::Object^  sender, System::EventArgs^  e) {		//Game Timer
	KeyPreview::set(true);
	if (!Game.getstart())
	{
		T_Game->Enabled = false;
		T_Shoot->Enabled = false;
		T_ShootE->Enabled = false;
		T_Stat->Enabled = false;
		M_Header->Text = "Menue";
		L_Shop->Visible = 0;
		M_NewG->Visible = 1;
		M_Header->Visible = 1;
		//pB_CredLogo->Visible = 0;
		M_Higscr->Visible = 1;
		M_Exit->Visible = 1;
		M_Cred->Visible = 1;
		M_Shop->Visible = 1;
		//S_RaumUp->Visible=0;
		//S_SonI->Visible=0;
		PB_Player->Visible = 0;

		tlP_Highscore->Visible = 0;
		PB_Hindernis1->Visible = 0;
		PB_Hindernis2->Visible = 0;
		PB_Hindernis3->Visible = 0;
		PB_EnemyN0->Visible = 0;
		PB_EnemyN1->Visible = 0;
		PB_EnemyN2->Visible = 0;
		PB_EnemyN3->Visible = 0;
		PB_EnemyN4->Visible = 0;

		PB_EnemyH0->Visible = 0;
		PB_EnemyH1->Visible = 0;
		PB_EnemyH2->Visible = 0;
		PB_EnemyH3->Visible = 0;
		pB_Medi->Visible = false;
		l_MediX->Visible = false;
		l_MediA->Visible = false;
		PB_Shoot0->Visible = 0;
		pB_DShoot01->Visible = 0;
		pB_DShoot02->Visible = 0;

		PB_ShootEH0->Visible = 0;
		PB_ShootEH1->Visible = 0;
		PB_ShootEH2->Visible = 0;
		PB_ShootEH3->Visible = 0;

		PB_ShootEN0->Visible = 0;
		PB_ShootEN1->Visible = 0;
		PB_ShootEN2->Visible = 0;
		PB_ShootEN3->Visible = 0;
		PB_ShootEN4->Visible = 0;

		L_Score->Visible = 0;
		L_ScoreText->Visible = 0;

		pB_HPAnzeige->Visible = 0;
		L_HPAnzeigeI->Visible = 0;

		T_Game->Enabled = false;

		tC_Shop->Visible = false;

		L_CoinsL->Visible = false;
		l_Coints->Visible = false;

		EnemyN0.setvisible(false);
		EnemyN1.setvisible(false);
		EnemyN2.setvisible(false);
		EnemyN3.setvisible(false);
		EnemyN4.setvisible(false);

		EnemyH0.setvisible(false);
		EnemyH1.setvisible(false);
		EnemyH2.setvisible(false);
		EnemyH3.setvisible(false);

		MessageBox::Show("Sie haben "+Convert::ToString(cointcalculate())+" Coints gewonnen. Mit einem Score von "+Convert::ToString(Game.getscore()), "Abschlussbericht");
		sortieren();
	}
	else
	{
		score = Game.getscore();
		L_Score->Text = score.ToString();
		pB_HPAnzeige->Value = Game.gethp();
		Random ^zz = gcnew Random();
		zzahl = zz->Next(1, 5);
		//System::Diagnostics::Debug::WriteLine(L"1.Zufallszahl: {0}", zzahl);
		switch (zzahl)
		{
		case 1:
		{
			zzahlS = zz->Next(1, 10);
			//System::Diagnostics::Debug::WriteLine(L"2.Zufallszahl: {0}",zzahlS);
			switch (zzahlS)
			{
			case 1:
			{
				if (EnemyN0.getvisible())
				{
					Gegner1Shoot = true;
					T_ShootE->Enabled = true;
					break;
				}
			}

			case 2:
			{
				if (EnemyN1.getvisible())
				{
					Gegner2Shoot = true;
					T_ShootE->Enabled = true;
					break;
				}
			}

			case 3:
			{
				if (EnemyN2.getvisible())
				{
					Gegner3Shoot = true;
					T_ShootE->Enabled = true;
					break;
				}
			}

			case 4:
			{
				if (EnemyN3.getvisible())
				{
					Gegner4Shoot = true;
					T_ShootE->Enabled = true;
					break;
				}
			}

			case 5:
			{
				if (EnemyN4.getvisible())
				{
					Gegner5Shoot = true;
					T_ShootE->Enabled = true;
					break;
				}
			}

			case 6:
			{
				if (EnemyH0.getvisible())
				{
					Gegner6Shoot = true;
					T_ShootE->Enabled = true;
					break;
				}
			}

			case 7:
			{
				if (EnemyH1.getvisible())
				{
					Gegner7Shoot = true;
					T_ShootE->Enabled = true;
					break;
				}
			}
			case 8:
			{
				if (EnemyH2.getvisible())
				{
					Gegner8Shoot = true;
					T_ShootE->Enabled = true;
					break;
				}
			}
			case 9:
			{
				if (EnemyH3.getvisible())
				{
					Gegner9Shoot = true;
					T_ShootE->Enabled = true;
					break;
				}
			}


			}
			break;
		}
		case 4:
		{
			if (enemyCounter < 4)
			{
				zzahlG = zz->Next(1, 10);
				switch (zzahlG)
				{
				case 5: {
					zzahlG2 = zz->Next(1, 10);
					switch (zzahlG2)
					{
					case 1:
					{
						if (!EnemyN0.getvisible())
						{
							enemyCounter++;
							EnemyN0.sethp(100);
							EnemyN0.setvisible(true);
							break;
						}
					}
					case 2:
					{
						if (!EnemyN1.getvisible())
						{
							enemyCounter++;
							EnemyN1.sethp(100);
							EnemyN1.setvisible(true);
							break;
						}
					}
					case 3:
					{
						if (!EnemyN2.getvisible())
						{
							enemyCounter++;
							EnemyN2.sethp(100);
							EnemyN2.setvisible(true);
							break;
						}
					}
					case 4:
					{
						if (!EnemyN3.getvisible())
						{
							enemyCounter++;
							EnemyN3.sethp(100);
							EnemyN3.setvisible(true);
							break;
						}
					}
					case 5:
					{
						if (!EnemyN4.getvisible())
						{
							enemyCounter++;
							EnemyN4.sethp(100);
							EnemyN4.setvisible(true);
							break;
						}
					}
					case 6:
					{
						if(!EnemyH0.getvisible())
						{
							enemyCounter++;
							EnemyH0.sethp(100);
							EnemyH0.setvisible(true);
							break;
						}
					}
					case 7:
					{
						if (!EnemyH1.getvisible())
						{
							enemyCounter++;
							EnemyH1.sethp(200);
							EnemyH1.setvisible(true);
							break;
						}
					}
					case 8:
					{
						if (!EnemyH2.getvisible())
						{
							enemyCounter++;
							EnemyH2.sethp(200);
							EnemyH2.setvisible(true);
							break;
						}
					}
					case 9:
					{
						if (!EnemyH3.getvisible())
						{
							enemyCounter++;
							EnemyH3.sethp(200);
							EnemyH3.setvisible(true);
							break;
						}
					}
					}
				}
				default:
					break;
				}
			}
			break;
		}
		default:
		{
			break;
		}
		}
		PB_EnemyN0->Visible = 1;
		PB_EnemyN1->Visible = 1;
		PB_EnemyN2->Visible = 1;
		PB_EnemyN3->Visible = 1;
		PB_EnemyN4->Visible = 1;

		PB_EnemyH0->Visible = 1;
		PB_EnemyH1->Visible = 1;
		PB_EnemyH2->Visible = 1;
		PB_EnemyH3->Visible = 1;

		//PB_Player->Visible = 1;
		L_Score->Visible = 1;
		L_ScoreText->Visible = 1;

		pB_HPAnzeige->Visible = 1;
		L_HPAnzeigeI->Visible = 1;

		pB_HPAnzeige->Value = Game.gethp();


		if (Hindernis1.getvisivle() == false)
		{
			PB_Hindernis1->Visible = 0;
		}
		if (Hindernis2.getvisivle() == false)
		{
			PB_Hindernis2->Visible = 0;
		}
		if (Hindernis3.getvisivle() == false)
		{
			PB_Hindernis3->Visible = 0;
		}
		if (EnemyH0.getvisible() == false)
		{
			PB_EnemyH0->Visible = false;
		}
		if (EnemyH1.getvisible() == false)
		{
			PB_EnemyH1->Visible = 0;
		}
		if (EnemyH2.getvisible() == false)
		{
			PB_EnemyH2->Visible = 0;
		}
		if (EnemyH3.getvisible() == false)
		{
			PB_EnemyH3->Visible = 0;
		}
		if (EnemyN0.getvisible() == false)
		{
			PB_EnemyN0->Visible = false;
		}
		if (EnemyN1.getvisible() == false)
		{
			PB_EnemyN1->Visible = 0;
		}
		if (EnemyN2.getvisible() == false)
		{
			PB_EnemyN2->Visible = 0;
		}
		if (EnemyN3.getvisible() == false)
		{
			PB_EnemyN3->Visible = 0;
		}
		if (EnemyN4.getvisible() == false)
		{
			PB_EnemyN4->Visible = 0;
		}
	}
}
private: System::Void tB_Geschwind_Scroll(System::Object^  sender, System::EventArgs^  e) {		//tB_Geschwind Trackbar im Shop für player geschwindigkeit
	Game.setgeschwindigkeit(tB_Geschwind->Value);
	L_Geschwind->Text = Convert::ToString(tB_Geschwind->Value);

}
private: System::Void tB_Schussge_Scroll(System::Object^  sender, System::EventArgs^  e) {		//tb_Schussge Trackbar für eigene Schussgeschwindigkeit

	Game.setschussgesch(tB_Schussge->Value);
	L_Schussge->Text = Convert::ToString(tB_Schussge->Value);
}
private: System::Void b_CheatsSend_Click(System::Object^  sender, System::EventArgs^  e) {		//Einstellungen Cheats abschicken
	if (tB_Cheats->Text != "")
	{
		try {
			if (Cheats(Convert::ToInt32(tB_Cheats->Text)))
			{
				MessageBox::Show("Cheat wurde erfolgreich ausgeführt!", "Bestätigung");
				l_Coints->Text = Convert::ToString(Game.getcoints());
				if (AProbertyVis)
				{
					gB_SchussGeG->Visible = true;
					gB_SchiffgeP->Visible = true;
					gB_SchussgeP->Visible = true;
					gB_HgL->Visible = true;
					gB_SchadenP->Visible = true;
					gB_HPP->Visible = true;
					gB_SchadenG->Visible = true;
					gB_SchadenGH->Visible = true;
				}
				else
				{
					gB_SchussGeG->Visible = false;
					gB_SchiffgeP->Visible = false;
					gB_SchussgeP->Visible = false;
					gB_HgL->Visible = false;
					gB_SchadenP->Visible = false;
					gB_HPP->Visible = false;
					gB_SchadenG->Visible = false;
					gB_SchadenGH->Visible = false;
				}
				tB_Cheats->Text = "";
			}
			else
			{
				MessageBox::Show("Es ist ein Fehler aufgetretten beim ausführen des Cheats", "Fehler");
				tB_Cheats->Text = "";
			}
		}
		catch (...)
		{
			MessageBox::Show("Bitte nur Zahlen eintragen", "Fehler");
			tB_Cheats->Text = "";
		}
	}
	else
	{
		MessageBox::Show("Bitte tragen Sie etwas in das Cheatcode Fenster ein", "Fehler");
	}
}
private: System::Void b_Test_Click(System::Object^  sender, System::EventArgs^  e) {			//Shop Hintergrund 1
	if (!(ShopValues.getHintergrund1()))
	{
		if (Game.deccoints(H1Preis))
		{
			ShopValues.setHintergrund1(true);
			l_Coints->Text = Convert::ToString(Game.getcoints());
			MessageBox::Show("Hintergrundbild wurde gekauft", "Mitteilung");
			b_HG01->Text = "Anwenden";
			l_InH1A->Text = "1";
		}
		else
		{
			MessageBox::Show("Sie haben nicht genügend Guthaben um dieses Item zu kaufen", "Fehler");
		}
	}
	else
	{
		HGrund = 2;
		if (Quali == 0)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_5.Image"));
		}
		else if (Quali==1)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_5M.Image"));
		}
		else
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_5S.Image"));
		}
		MessageBox::Show("Hintergrundbild wurde angewendet", "Mitteilung");
	}
}
private: System::Void b_HG02_Click(System::Object^  sender, System::EventArgs^  e) {			//Shop Hintergrund 2
	if (!(ShopValues.getHintergrund2()))
	{
		if (Game.deccoints(H1Preis))
		{
			ShopValues.setHintergrund2(true);
			l_Coints->Text = Convert::ToString(Game.getcoints());
			MessageBox::Show("Hintergrundbild wurde gekauft", "Mitteilung");
			b_HG02->Text = "Anwenden";
			l_InH2A->Text = "1";
		}
		else
		{
			MessageBox::Show("Sie haben nicht genügend Guthaben um dieses Item zu kaufen", "Fehler");
		}
	}
	else
	{
		HGrund = 3;
		if (Quali == 0)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_6.Image"));
		}
		else if (Quali == 1)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_6M.Image"));
		}
		else
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_6S.Image"));
		}
		MessageBox::Show("Hintergrundbild wurde angewendet", "Mitteilung");
	}
}
private: System::Void b_HG03_Click(System::Object^  sender, System::EventArgs^  e) {		//Shop Hintergrunf 3
	if (!(ShopValues.getHintergrund3()))
	{
		if (Game.deccoints(H1Preis))
		{
			ShopValues.setHintergrund3(true);
			l_Coints->Text = Convert::ToString(Game.getcoints());
			MessageBox::Show("Hintergrundbild wurde gekauft", "Mitteilung");
			b_HG03->Text = "Anwenden";
			l_InH3A->Text = "1";
		}
		else
		{
			MessageBox::Show("Sie haben nicht genügend Guthaben um dieses Item zu kaufen", "Fehler");
		}
	}
	else
	{
		HGrund = 4;
		if (Quali == 0)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_7.Image"));
		}
		else if (Quali == 1)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_7M.Image"));
		}
		else
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_7S.Image"));
		}
		MessageBox::Show("Hintergrundbild wurde angewendet", "Mitteilung");
	}
}
private: System::Void b_HG04_Click(System::Object^  sender, System::EventArgs^  e) {			//Shop Hintergrund 4
	if (!(ShopValues.getHintergrund4()))
	{
		if (Game.deccoints(H1Preis))
		{
			ShopValues.setHintergrund4(true);
			l_Coints->Text = Convert::ToString(Game.getcoints());
			MessageBox::Show("Hintergrundbild wurde gekauft", "Mitteilung");
			b_HG04->Text = "Anwenden";
			l_InH4A->Text = "1";
		}
		else
		{
			MessageBox::Show("Sie haben nicht genügend Guthaben um dieses Item zu kaufen", "Fehler");
		}
	}
	else
	{
		HGrund = 5;
		if (Quali == 0)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_2.Image"));
		}
		else if (Quali == 1)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_2M.Image"));
		}
		else
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_2S.Image"));
		}
		MessageBox::Show("Hintergrundbild wurde angewendet", "Mitteilung");
	}
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {			//Einstellungen Hintergrund reset
	HGrund = 1;
	if (Quali == 0)
	{
		System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
		this->BackgroundImage = ((Image^)resources->GetObject("$this.BackgroundImage"));
	}
	else if (Quali == 1)
	{
		System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
		this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_4M.Image"));
	}
	else
	{
		System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
		this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_4S.Image"));
	}
	MessageBox::Show("Hintergrundbild wurde angewendet", "Mitteilung");
}
private: System::Void B_MedipackKaufen_Click(System::Object^  sender, System::EventArgs^  e) {			//Medipack kaufen klicken
	if (Game.deccoints(MedipackPreis))
	{
		ShopValues.incMedipack();
		l_Coints->Text = Convert::ToString(Game.getcoints());
		l_InMediA->Text = Convert::ToString(ShopValues.getMedipack());
	}
	else
	{
		MessageBox::Show("Sie haben nicht genügend Guthaben um dieses Item zu kaufen", "Fehler");
	}
}


private: System::Void b_SU1K_Click(System::Object^  sender, System::EventArgs^  e) {			//Shop Schiffsupgrade 1
	
	if (!(ShopValues.getSchiffUpgrade1()))
	{
		if (Game.deccoints(SU1))
		{
			ShopValues.setSchiffUpgrade1(true);
			l_Coints->Text = Convert::ToString(Game.getcoints());
			MessageBox::Show("Schiffupgrade wurde gekauft", "Mitteilung");
			b_SU1K->Text = "Anwenden";
		}
		else
		{
			MessageBox::Show("Sie haben nicht genügend Guthaben um dieses Upgrade zu kaufen", "Fehler");
		}
	}
	else
	{
		System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
		this->PB_Player->Image = ((Image^)resources->GetObject("picturebox11.Image"));
		ASU1();
		EinS = false;
		gB_SchussGeG->Visible = false;
		/*pB_HPAnzeige->Maximum(150);		//Fehlermeldung Bitte prüfen
		pB_HPAnzeige->Value(150);*/
		Game.setschiffskin(0);
		MessageBox::Show("Upgrade wurde angewendet", "Mitteilung");
	}
}
private: System::Void b_SU2K_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ShopValues.getSchiffUpgrade1())
	{
		if (!(ShopValues.getSchiffUpgrade2()))
		{
			if (Game.deccoints(SU2))
			{
				ShopValues.setSchiffUpgrade2(true);
				l_Coints->Text = Convert::ToString(Game.getcoints());
				MessageBox::Show("Schiffupgrade wurde gekauft", "Mitteilung");
				b_SU2K->Text = "Anwenden";
			}
			else
			{
				MessageBox::Show("Sie haben nicht genügend Guthaben um dieses Upgrade zu kaufen", "Fehler");
			}
		}
		else
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->PB_Player->Image = ((Image^)resources->GetObject("picturebox12.Image"));
			ASU2();
			EinS = false;
			gB_SchussGeG->Visible = false;
			Game.setschiffskin(1);
			MessageBox::Show("Upgrade wurde angewendet", "Mitteilung");
		}
	}
	else
	{
		MessageBox::Show("Bitte zuerst alle darüberliegenden Upgrades kaufen", "Fehler");
	}
}
private: System::Void b_SU3K_Click(System::Object^  sender, System::EventArgs^  e) {
	if ((ShopValues.getSchiffUpgrade1()==true) && (ShopValues.getSchiffUpgrade2()==true))
	{
		if (!(ShopValues.getSchiffUpgrade3()))
		{
			if (Game.deccoints(SU3))
			{
				ShopValues.setSchiffUpgrade3(true);
				l_Coints->Text = Convert::ToString(Game.getcoints());
				MessageBox::Show("Schiffupgrade wurde gekauft", "Mitteilung");
				b_SU3K->Text = "Anwenden";
			}
			else
			{
				MessageBox::Show("Sie haben nicht genügend Guthaben um dieses Upgrade zu kaufen", "Fehler");
			}
		}
		else
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->PB_Player->Image = ((Image^)resources->GetObject("pictureBox13.Image"));
			ASU3();
			EinS = false;
			gB_SchussGeG->Visible = false;
			Game.setschiffskin(2);
			MessageBox::Show("Upgrade wurde angewendet", "Mitteilung");
		}
	}
	else
	{
		MessageBox::Show("Bitte zuerst alle darüberliegenden Upgrades kaufen", "Fehler");
	}
}
private: System::Void b_SU4K_Click(System::Object^  sender, System::EventArgs^  e) {
	if ((ShopValues.getSchiffUpgrade1()==true) && (ShopValues.getSchiffUpgrade2()==true) && (ShopValues.getSchiffUpgrade3()==true))
	{
		if (!(ShopValues.getSchiffUpgrade4()))
		{
			if (Game.deccoints(SU4))
			{
				ShopValues.setSchiffUpgrade4(true);
				l_Coints->Text = Convert::ToString(Game.getcoints());
				MessageBox::Show("Schiffupgrade wurde gekauft", "Mitteilung");
				b_SU4K->Text = "Anwenden";
			}
			else
			{
				MessageBox::Show("Sie haben nicht genügend Guthaben um dieses Upgrade zu kaufen", "Fehler");
			}
		}
		else
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->PB_Player->Image = ((Image^)resources->GetObject("pictureBox14.Image"));
			ASU4();
			EinS = false;
			gB_SchussGeG->Visible = false;
			Game.setschiffskin(2);
			MessageBox::Show("Upgrade wurde angewendet", "Mitteilung");
		}
	}
	else
	{
		MessageBox::Show("Bitte zuerst alle darüberliegenden Upgrades kaufen", "Fehler");
	}
}
private: System::Void b_SU5K_Click(System::Object^  sender, System::EventArgs^  e) {
	if ((ShopValues.getSchiffUpgrade1()==true) && (ShopValues.getSchiffUpgrade2()==true) && (ShopValues.getSchiffUpgrade3()==true) && (ShopValues.getSchiffUpgrade4()==true))
	{
		if (!(ShopValues.getSchiffUpgrade5()))
		{
			if (Game.deccoints(SU5))
			{
				ShopValues.setSchiffUpgrade5(true);
				l_Coints->Text = Convert::ToString(Game.getcoints());
				MessageBox::Show("Schiffupgrade wurde gekauft", "Mitteilung");
				b_SU5K->Text = "Anwenden";
			}
			else
			{
				MessageBox::Show("Sie haben nicht genügend Guthaben um dieses Upgrade zu kaufen", "Fehler");
			}
		}
		else
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->PB_Player->Image = ((Image^)resources->GetObject("pictureBox14.Image"));
			ASU5();
			EinS = true;
			gB_SchussGeG->Visible = true;
			gB_SchussGeG->Visible = true;
			gB_SchiffgeP->Visible = true;
			gB_SchussgeP->Visible = true;
			gB_HgL->Visible = true;
			gB_SchadenP->Visible = true;
			gB_HPP->Visible = true;
			gB_SchadenG->Visible = true;
			gB_SchadenGH->Visible = true;
			Game.setschiffskin(2);
			MessageBox::Show("Upgrade wurde angewendet", "Mitteilung");
		}
	}
	else
	{
		MessageBox::Show("Bitte zuerst alle darüberliegenden Upgrades kaufen", "Fehler");
	}
}
private: System::Void tabPage3_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {			//Warning in den Einstellungen
	if (Warning)
	{
		Warning = !Warning;
		MessageBox::Show("Mit diesen Einstellungen können Sie das Spiel stark verändern bis zu seiner vollkommenenFunktionslosigkeit. Bitte passen Sie auf welche Einstellungen Sie tätigen und informieren Sie sich im Quellcode welche Auswirkungen diese Änderung hat.", "Warnung!!!");
	}
}
private: System::Void button1_Click_2(System::Object^  sender, System::EventArgs^  e) {		//Hintergrund Löschen
	System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
	this->BackgroundImage = ((Image^)resources->GetObject(""));
	MessageBox::Show("Hintergrundbild wurde gelöscht", "Mitteilung");
}
private: System::Void Form1_Shown(System::Object^  sender, System::EventArgs^  e) {
	Startscreen ^sb = Startscreen::Create();
	sb->Close();
}
private: System::Void T_ShootE_Tick(System::Object^  sender, System::EventArgs^  e) {		//Shoot Timer Enemy
	if (Gegner1Shoot)
	{
		PB_ShootEN0->Visible = true;
		PB_ShootEN0->Top += Game.getschussgeschE();
		schadenE = EnemyN0.getschaden();
		yE = PB_ShootEN0->Top;
		x1E = PB_ShootEN0->Left;
		x2E = PB_ShootEN0->Right;
		x1P = PB_Player->Left;
		x2P = PB_Player->Right;
		if (colisionE(yE,x1E,x2E,x1P,x2P, schadenE))
		{
			PB_ShootEN0->Visible = 0;
			PB_ShootEN0->Top = 109;
			Gegner1Shoot = false;
			if (!(Gegner1Shoot && Gegner2Shoot && Gegner3Shoot && Gegner4Shoot && Gegner5Shoot && Gegner6Shoot && Gegner7Shoot))
			{
				T_ShootE->Enabled = false;
			}
			try
			{
				SoundPlayer ^player = gcnew SoundPlayer();
				player->SoundLocation = "Treffer_sound.wav";
				player->Play();
			}
			catch (...)
			{
				System::Diagnostics::Debug::WriteLine(L"Sounds Kaputt");
			}
		}
	}
	if (Gegner2Shoot)
	{
		PB_ShootEN1->Visible = true;
		PB_ShootEN1->Top += Game.getschussgeschE();
		schadenE = EnemyN1.getschaden();
		yE = PB_ShootEN1->Top;
		x1E = PB_ShootEN1->Left;
		x2E = PB_ShootEN1->Right;
		x1P = PB_Player->Left;
		x2P = PB_Player->Right;
		if (colisionE(yE, x1E, x2E, x1P, x2P, schadenE))
		{
			PB_ShootEN1->Visible = 0;
			PB_ShootEN1->Top = 109;
			Gegner2Shoot = false;
			if (!(Gegner1Shoot && Gegner2Shoot && Gegner3Shoot && Gegner4Shoot && Gegner5Shoot && Gegner6Shoot && Gegner7Shoot))
			{
				T_ShootE->Enabled = false;
			}
			try
			{
				SoundPlayer ^player = gcnew SoundPlayer();
				player->SoundLocation = "Treffer_sound.wav";
				player->Play();
			}
			catch (...)
			{
				System::Diagnostics::Debug::WriteLine(L"Sounds Kaputt");
			}
		}

	}
	if (Gegner3Shoot)
	{
		PB_ShootEN2->Visible = true;
		PB_ShootEN2->Top += Game.getschussgeschE();
		schadenE = EnemyN2.getschaden();
		yE = PB_ShootEN2->Top;
		x1E = PB_ShootEN2->Left;
		x2E = PB_ShootEN2->Right;
		x1P = PB_Player->Left;
		x2P = PB_Player->Right;
		if (colisionE(yE, x1E, x2E, x1P, x2P, schadenE))
		{
			PB_ShootEN2->Visible = 0;
			PB_ShootEN2->Top = 109;
			Gegner3Shoot = false;
			if (!(Gegner1Shoot && Gegner2Shoot && Gegner3Shoot && Gegner4Shoot && Gegner5Shoot && Gegner6Shoot && Gegner7Shoot))
			{
				T_ShootE->Enabled = false;
			}
			try
			{
				SoundPlayer ^player = gcnew SoundPlayer();
				player->SoundLocation = "Treffer_sound.wav";
				player->Play();
			}
			catch (...)
			{
				System::Diagnostics::Debug::WriteLine(L"Sounds Kaputt");
			}
		}


	}
	if (Gegner4Shoot)
	{
		PB_ShootEN3->Visible = true;
		PB_ShootEN3->Top += Game.getschussgeschE();
		schadenE = EnemyN3.getschaden();
		yE = PB_ShootEN3->Top;
		x1E = PB_ShootEN3->Left;
		x2E = PB_ShootEN3->Right;
		x1P = PB_Player->Left;
		x2P = PB_Player->Right;
		if (colisionE(yE, x1E, x2E, x1P, x2P, schadenE))
		{
			PB_ShootEN3->Visible = 0;
			PB_ShootEN3->Top = 109;
			Gegner4Shoot = false;
			if (!(Gegner1Shoot && Gegner2Shoot && Gegner3Shoot && Gegner4Shoot && Gegner5Shoot && Gegner6Shoot && Gegner7Shoot))
			{
				T_ShootE->Enabled = false;
			}
			try
			{
				SoundPlayer ^player = gcnew SoundPlayer();
				player->SoundLocation = "Treffer_sound.wav";
				player->Play();
			}
			catch (...)
			{
				System::Diagnostics::Debug::WriteLine(L"Sounds Kaputt");
			}
		}
	}
	if (Gegner5Shoot)
	{
		PB_ShootEN4->Visible = true;
		PB_ShootEN4->Top += Game.getschussgeschE();
		schadenE = EnemyN4.getschaden();
		yE = PB_ShootEN4->Top;
		x1E = PB_ShootEN4->Left;
		x2E = PB_ShootEN4->Right;
		x1P = PB_Player->Left;
		x2P = PB_Player->Right;
		if (colisionE(yE, x1E, x2E, x1P, x2P, schadenE))
		{
			PB_ShootEN4->Visible = 0;
			PB_ShootEN4->Top = 109;
			Gegner5Shoot = false;
			if (!(Gegner1Shoot && Gegner2Shoot && Gegner3Shoot && Gegner4Shoot && Gegner5Shoot && Gegner6Shoot && Gegner7Shoot))
			{
				T_ShootE->Enabled = false;
			}
			try
			{
				SoundPlayer ^player = gcnew SoundPlayer();
				player->SoundLocation = "Treffer_sound.wav";
				player->Play();
			}
			catch (...)
			{
				System::Diagnostics::Debug::WriteLine(L"Sounds Kaputt");
			}
		}
	}
	if (Gegner6Shoot)
	{
		PB_ShootEH0->Visible = true;
		PB_ShootEH0->Top += Game.getschussgeschE();
		schadenE = EnemyH0.getschaden();
		yE = PB_ShootEH0->Top;
		x1E = PB_ShootEH0->Left;
		x2E = PB_ShootEH0->Right;
		x1P = PB_Player->Left;
		x2P = PB_Player->Right;
		if (colisionE(yE, x1E, x2E, x1P, x2P, schadenE))
		{
			PB_ShootEH0->Visible = 0;
			PB_ShootEH0->Top = 195;
			Gegner6Shoot = false;
			if (!(Gegner1Shoot && Gegner2Shoot && Gegner3Shoot && Gegner4Shoot && Gegner5Shoot && Gegner6Shoot && Gegner7Shoot))
			{
				T_ShootE->Enabled = false;
			}
			try
			{
				SoundPlayer ^player = gcnew SoundPlayer();
				player->SoundLocation = "Treffer_sound.wav";
				player->Play();
			}
			catch (...)
			{
				System::Diagnostics::Debug::WriteLine(L"Sounds Kaputt");
			}
		}
	}
	if (Gegner7Shoot)
	{
		PB_ShootEH1->Visible = true;
		PB_ShootEH1->Top += Game.getschussgeschE();
		schadenE = EnemyH1.getschaden();
		yE = PB_ShootEH1->Top;
		x1E = PB_ShootEH1->Left;
		x2E = PB_ShootEH1->Right;
		x1P = PB_Player->Left;
		x2P = PB_Player->Right;
		if (colisionE(yE, x1E, x2E, x1P, x2P, schadenE))
		{
			PB_ShootEH1->Visible = 0;
			PB_ShootEH1->Top = 195;
			Gegner7Shoot = false;
			if (!(Gegner1Shoot && Gegner2Shoot && Gegner3Shoot && Gegner4Shoot && Gegner5Shoot && Gegner6Shoot && Gegner7Shoot))
			{
				T_ShootE->Enabled = false;
			}
			try
			{
				SoundPlayer ^player = gcnew SoundPlayer();
				player->SoundLocation = "Treffer_sound.wav";
				player->Play();
			}
			catch (...)
			{
				System::Diagnostics::Debug::WriteLine(L"Sounds Kaputt");
			}
		}
	}
		if (Gegner8Shoot)
		{
			PB_ShootEH2->Visible = true;
			PB_ShootEH2->Top += Game.getschussgeschE();
			schadenE = EnemyH2.getschaden();
			yE = PB_ShootEH2->Top;
			x1E = PB_ShootEH2->Left;
			x2E = PB_ShootEH2->Right;
			x1P = PB_Player->Left;
			x2P = PB_Player->Right;
			if (colisionE(yE, x1E, x2E, x1P, x2P, schadenE))
			{
				PB_ShootEH2->Visible = 0;
				PB_ShootEH2->Top = 195;
				Gegner8Shoot = false;
				if (!(Gegner1Shoot && Gegner2Shoot && Gegner3Shoot && Gegner4Shoot && Gegner5Shoot && Gegner6Shoot && Gegner7Shoot))
				{
					T_ShootE->Enabled = false;
				}
				try
				{
					SoundPlayer ^player = gcnew SoundPlayer();
					player->SoundLocation = "Treffer_sound.wav";
					player->Play();
				}
				catch (...)
				{
					System::Diagnostics::Debug::WriteLine(L"Sounds Kaputt");
				}
		}
			
	}
		if (Gegner9Shoot)
		{
			PB_ShootEH3->Visible = true;
			PB_ShootEH3->Top += Game.getschussgeschE();
			schadenE = EnemyH3.getschaden();
			yE = PB_ShootEH3->Top;
			x1E = PB_ShootEH3->Left;
			x2E = PB_ShootEH3->Right;
			x1P = PB_Player->Left;
			x2P = PB_Player->Right;
			if (colisionE(yE, x1E, x2E, x1P, x2P, schadenE))
			{
				PB_ShootEH3->Visible = 0;
				PB_ShootEH3->Top = 195;
				Gegner9Shoot = false;
				if (!(Gegner1Shoot && Gegner2Shoot && Gegner3Shoot && Gegner4Shoot && Gegner5Shoot && Gegner6Shoot && Gegner7Shoot))
				{
					T_ShootE->Enabled = false;
				}
				try
				{
					SoundPlayer ^player = gcnew SoundPlayer();
					player->SoundLocation = "Treffer_sound.wav";
					player->Play();
				}
				catch (...)
				{
					System::Diagnostics::Debug::WriteLine(L"Sounds Kaputt");
				}
			}
		}
	if (Hindernis1.getvisivle() == false)
	{
		PB_Hindernis1->Visible = 0;
	}
	if (Hindernis2.getvisivle() == false)
	{
		PB_Hindernis2->Visible = 0;
	}
	if (Hindernis3.getvisivle() == false)
	{
		PB_Hindernis3->Visible = 0;
	}
}
private: System::Void tB_GeschwindE_Scroll(System::Object^  sender, System::EventArgs^  e) {
	Game.setschussgeschE(tB_GeschwindE->Value);
	L_GeschwindE->Text = Convert::ToString(tB_GeschwindE->Value);
}
private: System::Void T_Stat_Tick(System::Object^  sender, System::EventArgs^  e) {
	stime();
}
private: System::Void tB_PlayerSchaden_Scroll(System::Object^  sender, System::EventArgs^  e) {
	Game.setschaden(tB_PlayerSchaden->Value);
	l_PlayerSchaden->Text = Convert::ToString(tB_PlayerSchaden->Value);
}
private: System::Void tB_HPP_Scroll(System::Object^  sender, System::EventArgs^  e) {
	Game.sethp(tB_HPP->Value);
	l_HPP->Text = Convert::ToString(tB_HPP->Value);
}
private: System::Void tB_SchadenG_Scroll(System::Object^  sender, System::EventArgs^  e) {
	EnemyN0.setschaden(tB_SchadenG->Value);
	EnemyN1.setschaden(tB_SchadenG->Value);
	EnemyN2.setschaden(tB_SchadenG->Value);
	EnemyN3.setschaden(tB_SchadenG->Value);
	EnemyN4.setschaden(tB_SchadenG->Value);
	l_SchadenG->Text = Convert::ToString(tB_SchadenG->Value);
}
private: System::Void tB_ScahdenGH_Scroll(System::Object^  sender, System::EventArgs^  e) {
	EnemyH0.setschaden(tB_ScahdenGH->Value);
	EnemyH1.setschaden(tB_ScahdenGH->Value);
	EnemyH2.setschaden(tB_ScahdenGH->Value);
	EnemyH3.setschaden(tB_ScahdenGH->Value);
	l_SchadenGH->Text = Convert::ToString(tB_ScahdenGH->Value);
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {			//Qualität ändert sich
	if (cB_Quali->Text == "High")
	{
		Quali = 0;
		if (HGrund == 1)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("$this.BackgroundImage"));
		}
		else if (HGrund == 2)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_5.Image"));
		}
		else if (HGrund == 3)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_6.Image"));
		}
		else if (HGrund == 4)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_7.Image"));
		}
		else
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_2.Image"));
		}
	}
	else if (cB_Quali->Text == "Medium")
	{
		Quali = 1;
		if (HGrund == 1)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_4M.Image"));
		}
		else if (HGrund == 2)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_5M.Image"));
		}
		else if (HGrund == 3)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_6M.Image"));
		}
		else if (HGrund == 4)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_7M.Image"));
		}
		else
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_2M.Image"));
		}
	}
	else
	{
		Quali = 2;
		if (HGrund == 1)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_4S.Image"));
		}
		else if (HGrund == 2)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_5S.Image"));
		}
		else if (HGrund == 3)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_6S.Image"));
		}
		else if (HGrund == 4)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_7S.Image"));
		}
		else
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BackgroundImage = ((Image^)resources->GetObject("Hintergrundbild_2S.Image"));
		}
	}


}
private: System::Void cB_Farben_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
	this->BackgroundImage = ((Image^)resources->GetObject(" "));
	if (cB_Farben->Text == "Schwarz")
	{
		this->BackColor = System::Drawing::Color::Black;
	}
	else if (cB_Farben->Text == "Weiß")
	{
		this->BackColor = System::Drawing::Color::White;
	}
	else if (cB_Farben->Text == "Blau")
	{
		this->BackColor = System::Drawing::Color::Blue;
	}
	else if (cB_Farben->Text == "Grün")
	{
		this->BackColor = System::Drawing::Color::Green;
	}
	else if (cB_Farben->Text == "Gelb")
	{
		this->BackColor = System::Drawing::Color::Yellow;
	}
	else if (cB_Farben->Text == "Orange")
	{
		this->BackColor = System::Drawing::Color::Orange;
	}
	else if (cB_Farben->Text == "Rot")
	{
		this->BackColor = System::Drawing::Color::Red;
	}
}
};
}