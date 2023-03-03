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
#include "FonctionAND.h"
#include "FonctionOR.h"

//-- utilisataion du namespace std --// 
using namespace std; 

//-- programme principale --// 
int main()
{
	//-- déclaration d'objet allocation statique --// 

	//-- déclaration d'objet allocation dynamique --// 
	FonctionBinaire* Resolution = new FonctionBinaire; 
	
	//-- déclaration de variable --// 
	int8_t UserFonction;
	int8_t finProgramme;

	do
	{
		//-- message utilisateur : choix de la foncion binaire --//
		//-- pour les mise en forme : utilisation la fonction "swet"
		std::cout << "Veuillez choisir une fonction binaires : 1) pour une fonction AND" << std::endl;
		std::cout << std::setw(10) << " " << std::setw(0) << "2) pour une fonction OR";


		//-- récupération choix utilisateur --// 
		std::cin >> UserFonction;

		//-- MAJ de l'objet en fonction du choix de l'utilistaeur --// 
		if (UserFonction == 1)
		{
			fonctionAND* Operator = new fonctionAND;
		}
		else if (UserFonction == 2)
		{
			fonctionOR* Operator = new fonctionOR;
		}
		// Saut à la linge
		std::cout << std::endl;
		//-- demande de valeur d'entrée (nb de digit, valeur A, valeur B)
		//-- a décommenter ci-dessous !!!
		Resolution->InsererValeur();
		//-- exectuion de la fonctionBinaire choisie --//
		//-- a décommenter ci-dessous !!!		
		Resolution->OperationBinaire();

		//-- afficher le  resultat 
		//-- a décommenter ci-dessous !!!
		Resolution->AfficherInfo();

		//-- message utilisateur : continuer le programmme --// 
		std::cout << "\nVoulez-vous continuer le programme [o/n] : "; 
		std::cin >> finProgramme; 

	} while ((finProgramme == 'o') || (finProgramme == 'O')); 

	//-- fin de programme --// 
	return 0; 
}