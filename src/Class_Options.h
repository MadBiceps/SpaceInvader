#pragma once
#include "Class_Enemy.h"
#include "Class_UpgradeSystem.h"
#include "Class_Hindernis.h"
#include "Funktion.h"

class Options
{
private:
	int hp;				//Gibt die aktuellen Lebenspunkte des Spielers an
	int schaden;		//Gibt den aktuellen Schaden an, denn der Spieler gibt
	int coints;			//Gibt die aktuell besitzenden Coints an
	bool start;			//Wird gesetzt beim drücken des Spielbuttons
	bool pause;			//Wirb bei Pause gesetzt
	int score;		//Spielpunkte
	int geschwindigkeit;
	int schussgesch;
	int schussgeschE;
	char schiffskin;
	double time;


public:
	Options(void);
	~Options(void);
	void inctime(void);
	double gettime(void);
	void settime(double);
	void sethp(int);
	int gethp(void);
	bool hit(int);
	void setcoints(int);
	bool deccoints(int);
	bool inccoints(int);
	int getcoints(void);
	void setschaden(int);
	int getschaden(void);
	void setstart(void);
	void resetstart(void);
	bool getstart(void);
	void incscore(void);
	int getscore(void);
	void resetscore(void);
	void scorehit(int);
	void setgeschwindigkeit(int);
	int getgeschwindigkeit(void);
	void setschussgesch(int);
	int getschussgesch(void);
	void setschiffskin(char);
	char getschiffskin(void);
	void setpause(void);
	void resetpause(void);
	bool getpause(void);
	void setschussgeschE(int);
	int getschussgeschE(void);

};

void Options::inctime(void)
{
	time++;
}

double Options::gettime(void)
{
	return time;
}

void Options::settime(double time)
{
	this->time = time;
}

void Options::setschussgeschE(int schussgeschE)
{

	this->schussgeschE = schussgeschE;
}

int Options::getschussgeschE(void)
{
	return schussgeschE;
}

void Options::resetpause(void)
{
	pause = false;
}

void Options::setpause(void)
{
	pause = true;
}

bool Options::getpause(void)
{
	return pause;
}

void Options::resetscore(void)
{
	score = 0;
}

char Options::getschiffskin(void)
{
	return schiffskin;
}

bool Options::inccoints(int coints)
{
	bool fehler = false;
	try
	{
		this->coints += coints;
	}
	catch (...)
	{
		fehler = true;
		return 0;			//Bei 0 ist ein Fehler aufgetretten
	}
	if (!fehler)
	{
		return 1;			//Bei 1 alles OK
	}
}

void Options::setschiffskin(char schiffskin)
{
	this->schiffskin = schiffskin;
}

bool Options::deccoints(int betrag)
{
	if (!(betrag > coints))
	{
		coints = coints - betrag;
		return 1;					//Bei erfolgreicher Transaktion rückgabe 1
	}
	else
	{
		return 0;				//Bei erfolgloser Transaktion rückgabe 0
	}
}

void Options::setschussgesch(int schussgesch)
{
	this->schussgesch = schussgesch;
}

int Options::getschussgesch(void)
{
	return schussgesch;
}

void Options::setgeschwindigkeit(int geschwindigkeit)
{
	this->geschwindigkeit = geschwindigkeit;
}

int Options::getgeschwindigkeit(void)
{
	return geschwindigkeit;
}

void Options::scorehit(int hit)
{
	score = score + hit;
}

int Options::getscore(void)
{
	return score;
}

void Options::incscore(void)
{
	score++;
}

void Options::setstart(void)
{
	start = true;
}

bool Options::getstart(void)
{
	return start;
}

void Options::resetstart(void)
{
	start = false;
}

Options::Options(void)
{
	hp = 100;
	schaden = 20;
	coints = 0;
	start = false;
	geschwindigkeit = 15;
	schussgesch = 40;
	schussgeschE = 20;
	pause = false;
}

Options::~Options(void)
{

}

void Options::sethp(int hp)
{
	this->hp = hp;
}

int Options::gethp(void)
{
	return hp;
}

bool Options::hit(int hit)
{
	if ((hp - hit) > 0)
	{
		hp = hp - hit;
		return 1;
	}
	else
	{
		return 0;
	}
}

void Options::setcoints(int coints)
{
		this->coints = coints;
}

int Options::getcoints(void)
{
	return coints;
}

void Options::setschaden(int schaden)
{
	this->schaden = schaden;
}

int Options::getschaden(void)
{
	return schaden;
}