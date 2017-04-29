#pragma once
#include "Class_Options.h"
#include "Class_UpgradeSystem.h"
#include "Class_Hindernis.h"
#include "Funktion.h"

class EnemyN
{
private:
	int hp;
	int schaden;
	bool visible;

public:
	int gethp(void);
	void sethp(int);
	void hit(int);

	int getschaden(void);
	void setschaden(int);

	bool getvisible(void);
	void setvisible(bool);

	EnemyN(void);
	EnemyN(int, int, bool);
};

EnemyN::EnemyN(int hp, int schaden, bool visible)
{
	this->hp = hp;
	this->schaden = schaden;
	this->visible = visible;
}

EnemyN::EnemyN(void)
{
	hp = 100;
	schaden = 25;
	visible = true;
}

int EnemyN::gethp(void)
{
	return hp;
}

void EnemyN::sethp(int hp)
{
	this->hp = hp;
}

void EnemyN::hit(int hit)
{
	hp = hp - hit;
	if (hp <= 0)
	{
		visible = false;
	}
}

int EnemyN::getschaden(void)
{
	return schaden;
}

void EnemyN::setschaden(int schaden)
{
	this->schaden = schaden;
}

bool EnemyN::getvisible(void)
{
	return visible;
}

void EnemyN::setvisible(bool visible)
{
	this->visible = visible;
}
