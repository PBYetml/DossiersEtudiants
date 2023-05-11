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


//-- utilisataion du namespace std --// 
using namespace std; 

//-- programme principale --// 
int main()
{
	//-- déclaration d'objet allocation statique --// 

	//-- déclaration d'objet allocation dynamique --// 
	FonctionBinaire *Resolution = new FonctionBinaire();
	//FonctionBinaire *Resolution = new fonctionAND;
	//FonctionBinaire *Resolution = new fonctionOR;

	//-- déclaration de variable --//
	int choixFonctBin;
	char finProgramme; 


	do
	{
		//-- message utilisateur : choix de la foncion binaire --//
		//-- pour les mise en forme : utilisation la fonction "set"
		cout << "Veuillez inserer le nombre de digit voulue :";



		//-- récupération choix utilisateur --// 
		cin >> choixFonctBin; 


		//-- MAJ de l'objet en fonction du choix de l'utilistaeur --//
		switch(choixFonctBin)
		{
		/*case AND: Resolution;
			break;

		case OR: Resolution;
			break;

			case XOR:
			break;
		*/
			default:
			break;
		}

		 


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