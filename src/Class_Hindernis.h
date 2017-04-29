#pragma once
#include "Class_Enemy.h"
#include "Class_Options.h"
#include "Class_UpgradeSystem.h"
#include "Funktion.h"

class Hindernis
{
private:
	int Hp;
	bool visible;


public:
	Hindernis(void);
	~Hindernis(void);
	void hit(int);
	bool getvisivle(void);
	void setvisible(bool);
};

Hindernis::Hindernis(void)
{
	Hp = 100;
}

Hindernis::~Hindernis(void)
{

}

void Hindernis::hit(int schaden)
{
	Hp = Hp - schaden;
	if (Hp <= 0)
	{
		visible = false;
	}
}

bool Hindernis::getvisivle(void)
{
	return visible;
}

void Hindernis::setvisible(bool visible)
{
	this->visible = visible;
}
