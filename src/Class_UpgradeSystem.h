#pragma once
#include "Class_Enemy.h"
#include "Class_Options.h"
#include "Class_Hindernis.h"
#include "Funktion.h"


class UpgradeSystem
{
private:
	bool SchiffUpgrade1;
	bool SchiffUpgrade2;
	bool SchiffUpgrade3;
	bool SchiffUpgrade4;
	bool SchiffUpgrade5;

	bool Hintergrund1;
	bool Hintergrund2;
	bool Hintergrund3;
	bool Hintergrund4;

	int Medipacks;
	int Multiplikator;


public:

	UpgradeSystem(void);
	~UpgradeSystem(void);

	void setHintergrund1(bool);
	bool getHintergrund1(void);

	void setHintergrund2(bool);
	bool getHintergrund2(void);

	void setHintergrund3(bool);
	bool getHintergrund3(void);

	void setHintergrund4(bool);
	bool getHintergrund4(void);

	void setSchiffUpgrade1(bool);
	bool getSchiffUpgrade1(void);

	void setSchiffUpgrade2(bool);
	bool getSchiffUpgrade2(void);

	void setSchiffUpgrade3(bool);
	bool getSchiffUpgrade3(void);

	void setSchiffUpgrade4(bool);
	bool getSchiffUpgrade4(void);

	void setSchiffUpgrade5(bool);
	bool getSchiffUpgrade5(void);

	void setMedipack(int);
	int getMedipack(void);
	void incMedipack(void);
	bool decMedipack(void);

	void setMultiplikator(int);
	int getMultiplikator(void);

};

bool UpgradeSystem::decMedipack(void)
{
	if (Medipacks > 0)
	{
		Medipacks--;
		return 1;
	}
	else
	{
		return 0;
	}
}

void UpgradeSystem::setHintergrund1(bool Hintergrund1)
{
	this->Hintergrund1 = Hintergrund1;
}

bool UpgradeSystem::getHintergrund1(void)
{
	return Hintergrund1;
}

void UpgradeSystem::setHintergrund2(bool Hintergrund2)
{
	this->Hintergrund2 = Hintergrund2;
}

bool UpgradeSystem::getHintergrund2(void)
{
	return Hintergrund2;
}

void UpgradeSystem::setHintergrund3(bool Hintergrund3)
{
	this->Hintergrund3 = Hintergrund3;
}

bool UpgradeSystem::getHintergrund3(void)
{
	return Hintergrund3;
}

void UpgradeSystem::setHintergrund4(bool Hintergrund4)
{
	this->Hintergrund4 = Hintergrund4;
}

bool UpgradeSystem::getHintergrund4(void)
{
	return Hintergrund4;
}

void UpgradeSystem::incMedipack(void)
{
	Medipacks++;
}

UpgradeSystem::UpgradeSystem(void)
{
	SchiffUpgrade1 = false;
	SchiffUpgrade2 = false;
	SchiffUpgrade3 = false;

	Hintergrund1 = false;
	Hintergrund2 = false;
	Hintergrund3 = false;
	Hintergrund4 = false;

	Medipacks = 0;
	Multiplikator = 1;
}

UpgradeSystem::~UpgradeSystem(void)
{

}

void UpgradeSystem::setSchiffUpgrade1(bool SchiffUpgrade1)
{
	this->SchiffUpgrade1 = SchiffUpgrade1;
}

bool UpgradeSystem::getSchiffUpgrade1(void)
{
	return SchiffUpgrade1;
}

void UpgradeSystem::setSchiffUpgrade2(bool SchiffUpgrade2)
{
	this->SchiffUpgrade2 = SchiffUpgrade2;
}

bool UpgradeSystem::getSchiffUpgrade2(void)
{
	return SchiffUpgrade2;
}

void UpgradeSystem::setSchiffUpgrade3(bool SchiffUpgrade3)
{
	this->SchiffUpgrade3 = SchiffUpgrade3;
}

bool UpgradeSystem::getSchiffUpgrade3(void)
{
	return SchiffUpgrade3;
}

void UpgradeSystem::setSchiffUpgrade4(bool SchiffUpgrade4)
{
	this->SchiffUpgrade4 = SchiffUpgrade4;
}

bool UpgradeSystem::getSchiffUpgrade4(void)
{
	return SchiffUpgrade4;
}

void UpgradeSystem::setSchiffUpgrade5(bool SchiffUpgrade5)
{
	this->SchiffUpgrade5 = SchiffUpgrade5;
}

bool UpgradeSystem::getSchiffUpgrade5(void)
{
	return SchiffUpgrade5;
}

void UpgradeSystem::setMedipack(int Medipacks)
{
	this->Medipacks = Medipacks;
}

int UpgradeSystem::getMedipack(void)
{
	return(Medipacks);
}

void UpgradeSystem::setMultiplikator(int Multiplikator)
{
	this->Multiplikator = Multiplikator;
}

int UpgradeSystem::getMultiplikator(void)
{
	return(Multiplikator);
}

