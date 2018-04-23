#pragma once
#include "DosGraph.h"
//Henri Fortin
//2017-05-01
//Fonction.cpp

void afficherMenu(){
	setTextBackgroundColor(BLANC, BLANC);
	clearScreen();
	setTextBackgroundColor(NOIR, BLANC);
	setXY(35, 1);
	cout << "MENU";
	setXY(3, 4);
	cout << "1) Saisir les r\x82ultats d'un \x82leve \n";
	setX(3);
	cout << "2) Afficher la liste de classe (ecran) \n";
	setX(3);
	cout << "3) afficher la liste de classe (fichier) \n";
	setX(3);
	cout << "4) Quitter";
}

char lireValiderMenu(){
	bool valide = false;
	char option;
	while (!valide)
	{
		option = _getch();
		if (option >= '1' && option <= '4')
			valide = true;
	}
	return option;
}

void afficherEnregistrement(){
	setTextBackgroundColor(BLANC, BLANC);
	clearScreen();
	setTextBackgroundColor(NOIR, BLANC);
	setXY(21, 1);
	cout << "R\x82sultats scolaires  -  BULLETIN";

	setTextColor(ROUGE); //Astérisque (*)
	setXY(3, 4);
	cout << "*\n";
	setX(3);
	cout << "*\n";
	setX(3);
	cout << "*";
	setXY(3, 9);
	cout << "*\n" << endl;
	setX(3);
	cout << "*";
	setXY(3, 15);
	cout << "* Champs obligatoires";

	setTextColor(NOIR); //Texte générale
	setXY(4, 4);
	cout << "Pr\x82nom         :\n";
	setX(4);
	cout << "Nom            :\n";
	setX(4);
	cout << "T\x82l\x82phone #1   :\n";
	setX(4);
	cout << "T\x82l\x82phone #2   :\n";
	setX(4);
	cout << "Courriel       :\n";
	setX(4);
	cout << "Code premanent :";
	setXY(4, 11);
	cout << "Note #1:";
	setX(21);
	cout << "#2:";
	setX(33);
	cout << "#3:";
	setX(46);
	cout << "#4:";
	setXY(4, 13);
	cout << "Note finale:";
}