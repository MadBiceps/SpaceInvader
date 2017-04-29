// 151123_SpaceInvader.cpp: Hauptprojektdatei.

#include "stdafx.h"
#include "Form1.h"
#include "Startscreen.h"
//#include "Class_Enemy.h"
//#include "Class_Options.h"
//#include "Class_UpgradeSystem.h"
//#include "Class_Hindernis.h"
//#include "Funktion.h"

using namespace My151123_SpaceInvader;

//<----------------------------------------->
//				Selfmade
//<----------------------------------------->

//<----------------------------------------->
//				Selfmade ende
//<----------------------------------------->

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Aktivieren visueller Effekte von Windows XP, bevor Steuerelemente erstellt werden
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	Startscreen ^sb = Startscreen::Create();
	sb->Show();

	// Hauptfenster erstellen und ausführen
	Application::Run(gcnew Form1());

	//<----------------------------------------->
	//				Selfmade
	//<----------------------------------------->



	//<----------------------------------------->
	//				Selfmade ende
	//<----------------------------------------->


	return 0;
}
