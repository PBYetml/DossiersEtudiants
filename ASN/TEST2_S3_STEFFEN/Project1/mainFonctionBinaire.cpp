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


//-- utilisataion du namespace std --// 
using namespace std; 

//-- programme principale --// 
int main()
{
	//-- d�claration d'objet allocation statique --// 

	//-- d�claration d'objet allocation dynamique --// 
	FonctionBinaire *Resolution = new FonctionBinaire();
	//FonctionBinaire *Resolution = new fonctionAND;
	//FonctionBinaire *Resolution = new fonctionOR;

	//-- d�claration de variable --//
	int choixFonctBin;
	char finProgramme; 


	do
	{
		do
		{
			//-- message utilisateur : choix de la foncion binaire --//
			cout << "Veuillez choisir une fonction binaire: 1) Fonction AND" << endl;
			cout << "2) Fonction OR" << endl;

			//-- r�cup�ration choix utilisateur --// 
			cin >> choixFonctBin;

			//-- MAJ de l'objet en fonction du choix de l'utilistaeur --//
			switch (choixFonctBin)
			{
			case '1':
				Resolution = new fonction;
				break;
			case '2':
				Resolution = new;
				break;
			default:
				cout << "Veuillez choisir une fonction binaire dans la liste !" << endl << endl << endl;
				choixFonctBin = 0;
				break;
			}
		} while (choixFonctBin == 0);

		//-- demande de valeur d'entr�e (nb de digit, valeur A, valeur B)
		//-- a d�commenter ci-dessous !!!
		Resolution->InsererValeur();

		//-- exectuion de la fonctionBinaire choisie --//
		//-- a d�commenter ci-dessous !!!		
		Resolution->OperationBinaire();

		//-- afficher le  resultat 
		//-- a d�commenter ci-dessous !!!
		Resolution->AfficherInfo();

		//-- message utilisateur : continuer le programmme --// 
		std::cout << "\nVoulez-vous continuer le programme [o/n] : "; 
		std::cin >> finProgramme; 

	} while ((finProgramme == 'o') || (finProgramme == 'O')); 

	//-- fin de programme --// 
	return 0; 
}