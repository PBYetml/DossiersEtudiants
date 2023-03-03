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
#include "FonctionAND.h"
#include "FonctionOR.h"


//-- utilisataion du namespace std --// 
using namespace std; 

//-- programme principale --// 
int main()
{
	//-- d�claration d'objet allocation statique --// 

	//-- d�claration d'objet allocation dynamique --// 
	FonctionBinaire* Resolution;

	//-- d�claration de variable --// 
	char finProgramme = 0;
	uint8_t choixUtilisateur = 0;
	int Val = 0;

	do
	{
		//-- message utilisateur : choix de la foncion binaire --//
		//-- pour les mise en forme : utilisation la fonction "swet"
		cout << "Veuillez choisir une fonction binaire : 1) pour une fonction AND" << endl;
		cout << "                                        2) pour une fonction OR " << endl << flush;


		//-- r�cup�ration choix utilisateur --// 
		cin >> choixUtilisateur;

		//-- MAJ de l'objet en fonction du choix de l'utilistaeur --// 

		//////////////////////////////////////////////////////////////
		//Je n'arrive pas a utiliser la notion du polymorphisme mais,
		//le reste du code donc toute les fonctions notamment pour le
		//AND et OR fonctionnes correctement si je les mets dans les
		//fonction non d�finie de FonctionBinaire.cpp.
		//////////////////////////////////////////////////////////////

		if(choixUtilisateur == 1) Resolution = new fonctionAND;
		else if (choixUtilisateur == 2) Resolution = new fonctionOR::FonctionBinaire;
		
		//-- demande de valeur d'entr�e (nb de digit, valeur A, valeur B)
		//-- a d�commenter ci-dessous !!!
		Resolution->InsererValeur();

		//-- exectuion de la fonctionBinaire choisie --//	
		Resolution->OperationBinaire();

		//-- afficher le  resultat 
		Resolution->AfficherInfo();

		//-- message utilisateur : continuer le programmme --// 
		std::cout << "\nVoulez-vous continuer le programme [o/n] : "; 
		std::cin >> finProgramme; 

	} while ((finProgramme == 'o') || (finProgramme == 'O')); 

	//-- fin de programme --// 
	return 0; 
}