//-----------------------------------------------------------------------------------//
// Nom du projet 		: Fonctions Binaires 
// Nom du fichier 		: main.cpp
// Date de création 	: 19.01.2021
// Date de modification : 20.01.2021
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : ce programme est relié au test n°1 C++ - SLO2
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
//----------------------------------------------------------------------------------//

//-- librairie standart --// 
#include <iostream>		//-- utilisation des entrées / sorties 
#include <iomanip>		//-- lib pour la partie affichage 

//-- librairie personnelle --// 
#include "FonctionBinaire.h"
#include "fonctionAND.h"
#include "fonctionOR.h"


//-- utilisataion du namespace std --// 
using namespace std; 

//-- programme principale --// 
int main()
{
	//-- déclaration d'objet allocation statique --// 

	//-- déclaration d'objet allocation dynamique --// 
	FonctionBinaire *Resolution = new FonctionBinaire();
	fonctionAND *ResolutionAND = new fonctionAND();
	fonctionOR *ResolutionOR = new fonctionOR();

	//-- déclaration de variable --// 
	char finProgramme;
	char ChoixFonction;


	do
	{
		//-- message utilisateur : choix de la foncion binaire --//
		//-- pour les mise en forme : utilisation la fonction "setw"
		cout << "Veuillez choisir une fonction binaire : 1) pour une fonction AND" << endl;
		cout << setw(63) << "2) pour une fonction OR" << endl;
		cout << setw(64) << "3) pour une fonction XOR" << endl;

		//-- récupération choix utilisateur --// 
		cin >> ChoixFonction;

		//-- MAJ de l'objet en fonction du choix de l'utilisateur --// 
		if (ChoixFonction == 1)
		{
			Resolution = ResolutionAND;
		}
		else if (ChoixFonction == 2)
		{
			Resolution = ResolutionOR;
		}
		else if (ChoixFonction == 3)
		{
			Resolution = ResolutionOR;
		}

		// Le choix ne fonctionne pas, mais si Resolution = ResolutionOR; est fait en dehors du if cela fonctionne

		//Resolution = ResolutionAND;

		//-- demande de valeur d'entrée (nb de digit, valeur A, valeur B)
		Resolution->InsererValeur();

		//-- execution de la fonctionBinaire choisie --//
		Resolution->OperationBinaire();

		//-- afficher le  resultat 
		Resolution->AfficherInfo();

		//-- message utilisateur : continuer le programmme --// 
		cout << "\nVoulez-vous continuer le programme [o/n] : "; 
		cin >> finProgramme; 

	} while ((finProgramme == 'o') || (finProgramme == 'O')); 

	//-- fin de programme --// 
	return 0; 
}