//-----------------------------------------------------------------------------------//
// Nom du projet 		: Fonctions Binaires 
// Nom du fichier 		: main.cpp
// Date de création 	: 19.01.2021
// Date de modification : 20.01.2021
//
// Auteur 				: Philou (Ph. Bovey)
// Modif				: Caroline Miéville
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
	char finProgramme;
	int val;
	//-- déclaration d'objet allocation dynamique --// 
	FonctionBinaire *Resolution; 

	//-- déclaration de variable --// 


	do
	{
		//-- message utilisateur : choix de la foncion binaire --//
		//-- pour les mise en forme : utilisation la fonction "swet"
		

		//-- récupération choix utilisateur --// 
		cout << "Veuiller choisir une fonction Binaire:" << endl << " 1) pour une fonction AND" << endl
			<< "2) pour une fonction OR" << endl;
		cin >> val;

		//-- MAJ de l'objet en fonction du choix de l'utilistaeur --// 
		if (val == 1)
		{
			Resolution = new fonctionAND(); //polymorphysme
		}
		else if (val == 2)
		{
			Resolution = new fonctionOR(); //polymorphysme
		}
		else
		{
			cout << "Erreur lors du choix précédent" << endl;
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