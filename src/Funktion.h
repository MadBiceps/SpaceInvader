#pragma once
#include "Class_Enemy.h"
#include "Class_Options.h"
#include "Class_UpgradeSystem.h"
#include "Class_Hindernis.h"
#include <Windows.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include "Form1.h"


#define HITN 25
#define HITH 100

FILE *fp;

Options Game;
UpgradeSystem ShopValues;
Hindernis Hindernis1;
Hindernis Hindernis2;
Hindernis Hindernis3;

EnemyN EnemyH0(400, 25, false);
EnemyN EnemyH1(400, 25, false);
EnemyN EnemyH2(400, 25, false);
EnemyN EnemyH3(400, 25, false);

EnemyN EnemyN0(200, 10, false);
EnemyN EnemyN1(200, 10, true);
EnemyN EnemyN2(200, 10, true);
EnemyN EnemyN3(200, 10, false);
EnemyN EnemyN4(200, 10, true);

int enemyCounter = 3;

bool hit;
bool hitE;

bool dShoot = false;

bool AProbertyVis = false;

int SCoints;
char SSkin;
bool SSU1;
bool SSU2;
bool SSU3;
bool SSU4;
bool SSU5;
bool iDeath = false;

bool dShoot01E = true;
bool dShoot02E = true;

bool SH1;
bool SH2;
bool SH3;
bool SH4;

int timez = 60;

double time;

int Hpos = 0;
int change = 0;
int pos1 = 0;
int hilf1 = 0;
int HGrund = 1;
int Quali = 0;
int hs;
int coin;

int SMedi;
int SMulti;

bool FirstTry = false;

int HScore[5] = { 0,0,0,0,0 };

bool colisionP(int y, int x1, int x2)
{
	hit = false;
	if (y <= 0)
	{
		hit = true;
		return true;
		System::Diagnostics::Debug::WriteLine(L"Shoot oben hinaus");
	}
	else if (y <= 433)									//Hindernistreffer Abfragen
	{
		if ((x2 >= 125) && (x1 <= 225) && (Hindernis1.getvisivle() == true))	//Hindernis 1
		{
			System::Diagnostics::Debug::WriteLine(L"Hindernis1 hab hit bekommen");
			Hindernis1.hit(Game.getschaden());
			if (Hindernis1.getvisivle() == false)
			{
				System::Diagnostics::Debug::WriteLine(L"Hindernis1 wurde zerstört");
			}
			hit = true;
			return true;
		}
		else if ((x2 >= 341) && (x1 <= 441) && (Hindernis2.getvisivle() == true))		//Hindernis 2
		{
			Hindernis2.hit(Game.getschaden());
			System::Diagnostics::Debug::WriteLine(L"Hindernis2 hab hit bekommen");
			if (Hindernis2.getvisivle() == false)
			{
				System::Diagnostics::Debug::WriteLine(L"Hindernis2 wurde zerstört");
			}
			hit = true;
			return true;

		}
		else if ((x2 >= 551) && (x1 <= 651) && (Hindernis3.getvisivle() == true))		//Hindernis 3
		{
			Hindernis3.hit(Game.getschaden());
			System::Diagnostics::Debug::WriteLine(L"Hindernis3 hab hit bekommen");
			if (Hindernis3.getvisivle() == false)
			{
				System::Diagnostics::Debug::WriteLine(L"Hindernis3 wurde zerstört");
			}
			hit = true;
			return true;
		}
	}
	if (y <= 195)				//Gegner Layer 0
	{
		if ((x2 >= 154) && (x1 <= 215) && (EnemyH0.getvisible() == true))	//Treffer abfrage EnemyH0
		{
			EnemyH0.hit(Game.getschaden());
			System::Diagnostics::Debug::WriteLine(L"EnemyH0 hab hit bekommen");
			if (EnemyH0.getvisible() == false)
			{
				Game.scorehit(HITH);	//Extra Punkte fürs Töten des Gegners
				enemyCounter--;
				System::Diagnostics::Debug::WriteLine(L"EnemyH0 ist zerstört");
			}
			hit = true;
			return true;
		}
		else if ((x2 >= 292) && (x1 <= 353) && (EnemyH1.getvisible() == true))	//Treffer abfrage EnemyH1
		{
			EnemyH1.hit(Game.getschaden());
			System::Diagnostics::Debug::WriteLine(L"EnemyH1 hab hit bekommen");
			if (EnemyH1.getvisible() == false)
			{
				Game.scorehit(HITH);
				enemyCounter--;//Extra Punkte fürs Töten des Gegners
				System::Diagnostics::Debug::WriteLine(L"EnemyH1 ist zerstört");
			}
			hit = true;
			return true;
		}
		else if ((x2 >= 429) && (x1 <= 490) && (EnemyH2.getvisible() == true))	//Treffer abfrage EnemyH2
		{
			EnemyH2.hit(Game.getschaden());
			System::Diagnostics::Debug::WriteLine(L"EnemyH2hab hit bekommen");
			if (EnemyH2.getvisible() == false)
			{
				Game.scorehit(HITH);
				enemyCounter--;//Extra Punkte fürs Töten des Gegners
				System::Diagnostics::Debug::WriteLine(L"EnemyH2 ist zerstört");
			}
			hit = true;
			return true;
		}
		else if ((x2 >= 577) && (x1 <= 638) && (EnemyH3.getvisible() == true))	//Treffer abfrage EnemyH3
		{
			EnemyH3.hit(Game.getschaden());
			System::Diagnostics::Debug::WriteLine(L"EnemyH3hab hit bekommen");
			if (EnemyH3.getvisible() == false)
			{
				Game.scorehit(HITH);
				enemyCounter--;//Extra Punkte fürs Töten des Gegners
				System::Diagnostics::Debug::WriteLine(L"EnemyH3 ist zerstört");
			}
			hit = true;
			return true;
		}
	}
	if (y <= 109)
	{
		if ((x2 >= 95) && (x1 <= 156) && (EnemyN0.getvisible() == true))			//Treffer abfrage EnemyN0
		{
			EnemyN0.hit(Game.getschaden());
			System::Diagnostics::Debug::WriteLine(L"EnemyN0 hab hit bekommen");
			if (EnemyN0.getvisible() == false)
			{
				Game.scorehit(HITN);																				//Extra Punkte fürs Töten des Gegners
				enemyCounter--;
				System::Diagnostics::Debug::WriteLine(L"EnemyN0 ist zerstört");
			}
			hit = true;
			return true;
		}
		else if ((x2 >= 221) && (x1 <= 282) && (EnemyN1.getvisible() == true))	//Treffer abfrage EnemyN1
		{
			EnemyN1.hit(Game.getschaden());
			System::Diagnostics::Debug::WriteLine(L"EnemyN1 hab hit bekommen");
			if (EnemyN1.getvisible() == false)
			{
				Game.scorehit(HITN);																		//Extra Punkte fürs Töten des Gegners
				enemyCounter--;
				System::Diagnostics::Debug::WriteLine(L"EnemyN1 ist zerstört");
			}
			hit = true;
			return true;
		}
		else if ((x2 >= 355) && (x1 <= 416) && (EnemyN2.getvisible() == true))	//Treffer abfrage EnemyN2
		{
			EnemyN2.hit(Game.getschaden());
			System::Diagnostics::Debug::WriteLine(L"EnemyN2 hab hit bekommen");
			if (EnemyN2.getvisible() == false)
			{
				Game.scorehit(HITN);																				//Extra Punkte fürs Töten des Gegners
				enemyCounter--;
				System::Diagnostics::Debug::WriteLine(L"EnemyN2 ist zerstört");
			}
			hit = true;
			return true;
		}
		else if ((x2 >= 494) && (x1 <= 535) && (EnemyN3.getvisible() == true))	//Treffer abfrage EnemyN3
		{
			EnemyN3.hit(Game.getschaden());
			System::Diagnostics::Debug::WriteLine(L"EnemyN3 hab hit bekommen");
			if (EnemyN3.getvisible() == false)
			{
				Game.scorehit(HITN);																	//Extra Punkte fürs Töten des Gegners
				enemyCounter--;
				System::Diagnostics::Debug::WriteLine(L"EnemyN3 ist zerstört");
			}
			hit = true;
			return true;
		}
		else if ((x2 >= 637) && (x1 <= 698) && (EnemyN4.getvisible() == true))	//Treffer abfrage EnemyN4
		{
			EnemyN4.hit(Game.getschaden());
			System::Diagnostics::Debug::WriteLine(L"EnemyN4 hab hit bekommen");
			if (EnemyN4.getvisible() == false)
			{
				Game.scorehit(HITN);																		//Extra Punkte fürs Töten des Gegners
				enemyCounter--;
				System::Diagnostics::Debug::WriteLine(L"EnemyN4 ist zerstört");
			}
			hit = true;
			return true;
		}
	}
	if (!hit)
	{
		return false;
	}
}

bool colisionE(int y, int x1, int x2, int x1P, int x2P, int schadenE)
{
	hitE = false;
	if (y >= 433)									//Hindernistreffer Abfragen
	{
		if ((x2 >= 125) && (x1 <= 225) && (Hindernis1.getvisivle() == true))	//Hindernis 1
		{
			System::Diagnostics::Debug::WriteLine(L"Hindernis1 hab hit bekommen");
			Hindernis1.hit(schadenE);
			if (Hindernis1.getvisivle() == false)
			{
				System::Diagnostics::Debug::WriteLine(L"Hindernis1 wurde zerstört");
			}
			hitE = true;
			return true;
		}
		else if ((x2 >= 341) && (x1 <= 441) && (Hindernis2.getvisivle() == true))		//Hindernis 2
		{
			Hindernis2.hit(schadenE);
			System::Diagnostics::Debug::WriteLine(L"Hindernis2 hab hit bekommen");
			if (Hindernis2.getvisivle() == false)
			{
				System::Diagnostics::Debug::WriteLine(L"Hindernis2 wurde zerstört");
			}
			hitE = true;
			return true;

		}
		else if ((x2 >= 551) && (x1 <= 651) && (Hindernis3.getvisivle() == true))		//Hindernis 3
		{
			Hindernis3.hit(schadenE);
			System::Diagnostics::Debug::WriteLine(L"Hindernis3 hab hit bekommen");
			if (Hindernis3.getvisivle() == false)
			{
				System::Diagnostics::Debug::WriteLine(L"Hindernis3 wurde zerstört");
			}
			hitE = true;
			return true;
		}
	}
	if (y >= 463)
	{
		System::Diagnostics::Debug::WriteLine(L"PlayerLayer erreicht");
		if ((x2 <= x2P) && (x1 >= x1P))
		{
			System::Diagnostics::Debug::WriteLine(L"Player hat hit bekommen");
			if (!Game.hit(schadenE))
			{
				Game.resetstart();
			}
			return true;
		}
	}
	if (y >= 542)
	{
		System::Diagnostics::Debug::WriteLine(L"Shoot oben hinaus");
		hitE = true;
		return true;
	}

	if (!hitE)
	{
		return false;
	}
}

bool SOpen(void)			//Rückgabe 1 alles ok beim Laden 0 wenn es einen Ladefehler gab
{
	//Hier Laden des Savegame machen
	fp = fopen("SaveFile.dat", "r");
	if (fp != 0)
	{
		fseek(fp, 0, SEEK_SET);
		try
		{
			rewind(fp);
			fread(&SCoints, sizeof(int), 1, fp);
			fread(&SSkin, sizeof(char), 1, fp);
			fread(&SSU1, sizeof(bool), 1, fp);
			fread(&SSU2, sizeof(bool), 1, fp);
			fread(&SSU3, sizeof(bool), 1, fp);
			fread(&SSU4, sizeof(bool), 1, fp);
			fread(&SSU5, sizeof(bool), 1, fp);

			fread(&SH1, sizeof(bool), 1, fp);
			fread(&SH2, sizeof(bool), 1, fp);
			fread(&SH3, sizeof(bool), 1, fp);
			fread(&SH4, sizeof(bool), 1, fp);

			fread(&SMedi, sizeof(int), 1, fp);
			fread(&SMulti, sizeof(int), 1, fp);
			fread(&time, sizeof(double), 1, fp);

			fread(&FirstTry, sizeof(bool), 1, fp);


			Game.setcoints(SCoints);
			Game.setschiffskin(SSkin);
			ShopValues.setSchiffUpgrade1(SSU1);
			ShopValues.setSchiffUpgrade2(SSU2);
			ShopValues.setSchiffUpgrade3(SSU3);
			ShopValues.setSchiffUpgrade4(SSU4);
			ShopValues.setSchiffUpgrade5(SSU5);

			ShopValues.setHintergrund1(SH1);
			ShopValues.setHintergrund2(SH2);
			ShopValues.setHintergrund3(SH3);
			ShopValues.setHintergrund4(SH4);

			Game.settime(time);

			ShopValues.setMedipack(SMedi);
			ShopValues.setMultiplikator(SMulti);
		}
		catch (...)
		{
			System::Diagnostics::Debug::WriteLine(L"Die Datei hat keine sachen zum Lesen");
		}

		fclose(fp);

		try
		{
			fp = fopen("Highscore.dat", "r");
			if (fp != 0)
			{
				for (int z = 0; z <= 4; z++)
				{
					fread(&HScore[z], sizeof(int), 1, fp);
				}
				rewind(fp);
				fclose(fp);
			}
		}
		catch (...)
		{
			System::Diagnostics::Debug::WriteLine(L"Die Datei hat keine sachen zum Lesen");
		}
		return 1;
	}
	else
	{
		return 0;
	}
}

bool SClose(void)			//Rückgabe 1 alles ok bei 0 Fehler beim speichern		//Noch MSG Box mit ja oder nein machen bei allen beenden Button....
{
	//Hier Saven der einstellungen machen....
	SCoints = Game.getcoints();
	SSkin = Game.getschiffskin();
	SSU1 = ShopValues.getSchiffUpgrade1();
	SSU2 = ShopValues.getSchiffUpgrade2();
	SSU3 = ShopValues.getSchiffUpgrade3();
	SSU4 = ShopValues.getSchiffUpgrade4();
	SSU5 = ShopValues.getSchiffUpgrade5();

	time = Game.gettime();

	SH1 = ShopValues.getHintergrund1();
	SH2 = ShopValues.getHintergrund2();
	SH3 = ShopValues.getHintergrund3();
	SH4 = ShopValues.getHintergrund4();

	SMedi = ShopValues.getMedipack();
	SMulti = ShopValues.getMultiplikator();
	fp = fopen("SaveFile.dat", "w");
	if (fp != 0)
	{

		fseek(fp, 0, SEEK_SET);
		fwrite(&SCoints, sizeof(int), 1, fp);
		fwrite(&SSkin, sizeof(char), 1, fp);
		fwrite(&SSU1, sizeof(bool), 1, fp);
		fwrite(&SSU2, sizeof(bool), 1, fp);
		fwrite(&SSU3, sizeof(bool), 1, fp);
		fwrite(&SSU4, sizeof(bool), 1, fp);
		fwrite(&SSU5, sizeof(bool), 1, fp);

		fwrite(&SH1, sizeof(bool), 1, fp);
		fwrite(&SH2, sizeof(bool), 1, fp);
		fwrite(&SH3, sizeof(bool), 1, fp);
		fwrite(&SH4, sizeof(bool), 1, fp);

		fwrite(&SMedi, sizeof(int), 1, fp);
		fwrite(&SMulti, sizeof(int), 1, fp);
		fwrite(&time, sizeof(double), 1, fp);

		fwrite(&FirstTry, sizeof(bool), 1, fp);
		rewind(fp);
		fclose(fp);
		fp = fopen("Highscore.dat", "w");
		if (fp != 0)
		{
			for (int z = 0; z <= 4; z++)
			{
				fwrite(&HScore[z], sizeof(int), 1, fp);
			}
			rewind(fp);
			fclose(fp);
		}
		return 1;
	}
	else
	{
		return 0;
	}
}

void ASU1(void)		//Anwenden von Schiffsupgrade 1
{
	Game.sethp(150);
	ShopValues.setMultiplikator(2);
	Game.setschaden(50);
	dShoot = false;
}

void ASU2(void)		//Anwenden von Schiffsupgrade 2
{
	Game.sethp(200);
	ShopValues.setMultiplikator(3);
	Game.setschaden(80);
	dShoot = false;
}

void ASU3(void)		//Anwenden von Schiffsupgrade 3
{
	Game.sethp(250);
	Game.setschaden(100);
}

void ASU4(void)		//Anwenden von Schiffsupgrade Doppelschüsse
{
	Game.sethp(300);
	ShopValues.setMultiplikator(4);
	Game.setschaden(150);
	dShoot = true;
}

void ASU5(void)		//Anwenden von Schiffsupgrade Gegner selber einstellen
{
	Game.sethp(500);
	ShopValues.setMultiplikator(5);
	Game.setschaden(500);
	dShoot = true;
}

bool Cheats(unsigned int code)
{
	switch (code)
	{
	case 5850:
	{
		ShopValues.setMedipack(50);
		return 1;
		break;
	}
	case 5801:
	{
		ShopValues.incMedipack();
		return 1;
		break;
	}
	case 3830:
	{
		Game.setcoints(30000);
		return 1;
		break;
	}
	case 3810:
	{
		Game.setcoints(100);
		return 1;
		break;
	}
	case 3801:
	{
		Game.setcoints(Game.getcoints() + 1);
		return 1;
		break;
	}
	case 2401:
	{
		ShopValues.setSchiffUpgrade1(true);
		return 1;
		break;
	}
	case 2402:
	{
		ShopValues.setSchiffUpgrade2(true);
		return 1;
		break;
	}
	case 2403:
	{
		ShopValues.setSchiffUpgrade3(true);
		return 1;
		break;
	}
	case 2404:
	{
		ShopValues.setSchiffUpgrade4(true);
		return 1;
		break;
	}
	case 5300:
	{
		Game.setschiffskin(0);
		return 1;
		break;
	}
	case 5301:
	{
		Game.setschiffskin(1);
		return 1;
		break;
	}
	case 5302:
	{
		Game.setschiffskin(2);
		return 1;
		break;
	}
	case 2300:
	{
		dShoot = false;
		return 1;
		break;
	}
	case 2301:
	{
		dShoot = true;
		return 1;
		break;
	}
	case 2997:
	{
		AProbertyVis = true;
		return 1;
		break;
	}
	case 2797:
	{
		AProbertyVis = false;
		return 1;
		break;
	}
	case 7777:
	{
		if (iDeath)
		{
			iDeath = false;
		}
		else
		{
			iDeath = true;
		}
		return 1;
		break;
	}
	case 0000:		//Reset Coints
	{
		Game.setcoints(0);
	}
	default: return 0;
	}
}

	void sortieren(void)													//Möglicherweise Bauerprogrammierung aber ich mach des nach gescheiter die
	{																	//syntaks gefällt mir so noch nicht. Ich wollte jetzt einfach nur das des funktioniert.
		Hpos = 4;
		if (hs >= HScore[Hpos])
		{
			Hpos--;
			if (hs >= HScore[Hpos])
			{
				Hpos--;
				if (hs >= HScore[Hpos])
				{
					Hpos--;
					if (hs >= HScore[Hpos])
					{
						Hpos--;
						if (hs >= HScore[Hpos])
						{
							Hpos = 0;
							HScore[Hpos + 4] = HScore[Hpos + 3];
							HScore[Hpos + 3] = HScore[Hpos + 2];
							HScore[Hpos + 2] = HScore[Hpos + 1];
							HScore[Hpos + 1] = HScore[Hpos];
							HScore[Hpos] = hs;
						}
						else
						{
							Hpos = 0;
							HScore[Hpos + 4] = HScore[Hpos + 3];
							HScore[Hpos + 3] = HScore[Hpos + 2];
							HScore[Hpos + 2] = HScore[Hpos + 1];
							HScore[Hpos + 1] = hs;
						}
					}
					else
					{
						Hpos = 0;
						HScore[Hpos + 4] = HScore[Hpos + 3];
						HScore[Hpos + 3] = HScore[Hpos + 2];
						HScore[Hpos + 2] = hs;
					}
				}
				else
				{
					Hpos = 0;
					HScore[Hpos + 4] = HScore[Hpos + 3];
					HScore[Hpos + 3] = hs;
				}
			}
			else
			{
				Hpos = 0;
				HScore[Hpos + 4] = hs;
			}
		}
}
		/*return HScore[Hpos];*/

		/*
		for (Hpos; Hpos <= 4; Hpos++)
		{
		HScore[Hpos] = HScore[Hpos + 1];
		return HScore[Hpos];
		}
		return HScore[Hpos];
		*/

		/*
		for (Hpos = 4; Hpos >= 0; Hpos--)
		{
		if (HScore[Hpos]<=hs)
		{
		HScore[Hpos] = HScore[Hpos + 1];
		HScore[Hpos + 1] = hs;
		return HScore[Hpos + 1];
		}
		}
		*/

	int cointcalculate(void)
	{
		hs = Game.getscore();
		coin = (hs*ShopValues.getMultiplikator()) / 100;
		if (Game.inccoints(coin))
		{
			System::Diagnostics::Debug::WriteLine(L"Coints wurden gebucht");
		}
		return coin;
	}

	void stime(void)
	{
		timez--;
		if (timez == 0)
		{
			Game.inctime();
			timez = 60;
		}

	}
