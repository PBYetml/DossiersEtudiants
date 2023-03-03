//-----------------------------------------------------------------------------------//
// Nom du projet 		: Fonctions Binaires 
// Nom du fichier 		: main.cpp
// Date de création 	: 19.01.2021
// Date de modification : 20.01.2021
//
// Auteur 				: Taulant Neziri
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
	FonctionBinaire * Resolution; 

	//-- déclaration de variable --// 
	int finProgramme;
	int Choixutilisateur;

	do
	{
		//-- message utilisateur : choix de la foncion binaire --//
		//-- pour les mise en forme : utilisation la fonction "swet"
		cout << "Veuillez choisir une fonction binaire :" << endl;
		cout << "1) pour une fonction AND" << endl;
		cout << "2) pour une fonction OR" << endl;

		//-- récupération choix utilisateur --// 
		cin >> Choixutilisateur;

		//-- MAJ de l'objet en fonction du choix de l'utilisateur --// 
		if (Choixutilisateur == 0)
		{
			Resolution->InsererValeur();
			Resolution->ConversionBinaire();
			Resolution->OperationBinaire();
			Resolution->AfficherInfo();
		}

		if (Choixutilisateur == 1)
		{
			Resolution->InsererValeur();
			Resolution->ConversionBinaire();
			Resolution->OperationBinaire();
			Resolution->AfficherInfo();
		}


		//-- message utilisateur : continuer le programmme --// 
		std::cout << "\nVoulez-vous continuer le programme [o/n] : "; 
		std::cin >> finProgramme; 

	} while ((finProgramme == 'o') || (finProgramme == 'O')); 


	//-- fin de programme --// 
	return 0; 
}