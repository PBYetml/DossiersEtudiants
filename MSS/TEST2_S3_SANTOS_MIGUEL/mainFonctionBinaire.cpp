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

	//-- déclaration de variable --//
	char finProgramme;
	uint8_t choixUtilisateur = 0;

	do
	{
		//-- Securité sur le choix de l'utilisateur --//
		do
		{
			//-- message utilisateur : choix de la foncion binaire --//
			//-- pour les mise en forme : utilisation la fonction "swet"
			cout << setw(55) << " Veuillez choisir une fonction binaire : 1) Fonction AND" << endl;
			cout << setw(55) << "2) Fonction OR" << endl;

			//-- récupération choix utilisateur --//
			cin >> choixUtilisateur;

			//-- MAJ de l'objet en fonction du choix de l'utilistaeur --//
			
			switch (choixUtilisateur)
			{
				case '1':
					delete Resolution;
					Resolution = new fonctionAND;
					break;

				case '2':
					delete Resolution;
					Resolution = new fonctionOR;
					break;

				default:
					cout << "Veuillez entrer une valeur valide svp !" << endl << endl ;
					choixUtilisateur = 0;
					break;
			}
		} while (choixUtilisateur == 0);

		//-- demande de valeur d'entrée (nb de digit, valeur A, valeur B)
		Resolution->InsererValeur();

		//-- exectuion de la fonctionBinaire choisie --//		
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