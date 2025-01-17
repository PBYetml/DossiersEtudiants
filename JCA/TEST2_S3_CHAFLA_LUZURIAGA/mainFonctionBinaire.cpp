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
	 int UserChoose;
	 int Choix;
	//-- d�claration d'objet allocation dynamique --// 
	FonctionBinaire *Resolution = 0; 

	//-- d�claration de variable --// 
	char finProgramme;

	do
	{
		//-- message utilisateur : choix de la foncion binaire --//
		//-- pour les mise en forme : utilisation la fonction "swet"
		cout << setw(24);
		cout << "Veulliez choisir une fonction binaire : " << endl;
		cout << "1) pour une fonction AND" << endl;
		cout << "2) pour une fonction OR" << endl;
		cout << "3) pour une fonction XOR" << endl;

		//-- r�cup�ration choix utilisateur --// 
		cin >> Choix;
		//-- MAJ de l'objet en fonction du choix de l'utilistaeur --// 
		UserChoose = Choix;
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
		cout << "\nVoulez-vous continuer le programme [o/n] : "; 
		cin >> finProgramme; 

	} while ((finProgramme == 'o') || (finProgramme == 'O')); 

	//-- fin de programme --// 
	return 0; 
}