//Henri Fortin
//2017-05-01
//Main.cpp
//Programme qui lire les résultats d'étudiants d'une classe et renvoie

#include <iostream>
#include "Fonction.h"
#include "DosGraph.h"

using namespace std;

void main()
{
	setTitre("Bulletin");
	setScreen(20, 74);
	
	bool quitter = false;
	while (!quitter) //Boucle à changer
	{
		afficherMenu();
		switch (lireValiderMenu())
		{
		case '1': //Saisir enregistrement
			afficherEnregistrement();
			break;
		case '2'://Affciher écran

			break;
		case '3': //Afficher fichier

			break;
		case '4': //Quitter
			quitter = true;
			break;
		}
		_getch();
	}
}