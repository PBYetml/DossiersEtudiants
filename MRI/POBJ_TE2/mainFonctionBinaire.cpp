//-----------------------------------------------------------------------------------//
// Nom du projet 		: Fonctions Binaires 
// Nom du fichier 		: main.cpp
// Date de cr�ation 	: 19.01.2021
// Date de modification : 20.01.2021
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : ce programme est reli� au test n�1 C++ - SLO2
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
//----------------------------------------------------------------------------------//

//-- librairie standart --// 
#include <iostream>		//-- utilisation des entr�es / sorties 
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
	//-- d�claration d'objet allocation statique --// 
	fonctionAND maFonctionAND;
	fonctionOR maFonctionOR;
	//-- d�claration d'objet allocation dynamique --// 
	FonctionBinaire *Resolution = new FonctionBinaire();

	//-- d�claration de variable --// 
	char finProgramme;
	int choixFonction;
	e_FonctionBinaire fonctionSelctionnee;

	do
	{
		//-- message utilisateur : choix de la foncion binaire --//
		//-- pour les mise en forme : utilisation la fonction "swet"
		cout << "Choisissez une fonction binaire : 1 = AND, 2 = OR : ";
		//-- r�cup�ration choix utilisateur --// 
		cin >> choixFonction;
		cout << endl;
		//-- MAJ de l'objet en fonction du choix de l'utilistaeur --// 
		fonctionSelctionnee = (e_FonctionBinaire)choixFonction;
		//-- demande de valeur d'entr�e (nb de digit, valeur A, valeur B)
		//-- a d�commenter ci-dessous !!!
		if (choixFonction == OR) maFonctionOR.InsererValeur();
		if (choixFonction == AND) maFonctionAND.InsererValeur();
		//Resolution->InsererValeur();

		//-- exectuion de la fonctionBinaire choisie --//
		//-- a d�commenter ci-dessous !!!		
		if (choixFonction == OR) maFonctionOR.OperationBinaire();
		if (choixFonction == AND) maFonctionAND.OperationBinaire();
		//Resolution->OperationBinaire();

		//-- afficher le  resultat 
		//-- a d�commenter ci-dessous !!!
		if (choixFonction == OR) maFonctionOR.AfficherInfo();
		if (choixFonction == AND) maFonctionAND.AfficherInfo();
		//Resolution->AfficherInfo();

		//-- message utilisateur : continuer le programmme --// 
		std::cout << "\nVoulez-vous continuer le programme [o/n] : "; 
		std::cin >> finProgramme; 

	} while ((finProgramme == 'o') || (finProgramme == 'O')); 

	delete Resolution;
	//-- fin de programme --// 
	return 0; 
}