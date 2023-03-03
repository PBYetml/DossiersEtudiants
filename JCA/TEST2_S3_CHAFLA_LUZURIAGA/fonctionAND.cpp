//-----------------------------------------------------------------------------------//
// Nom du projet 		: Fonctions Binaires 
// Nom du fichier 		: FonctionAND.cpp
// Date de cr�ation 	: 19.01.2021
// Date de modification : 20.01.2021
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : ce programme est reli� au test n�2 C++ - SLO2
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
//----------------------------------------------------------------------------------//

//-- librairie standart --// 
#include <iostream>		//-- utilisation des entr�es / sorties 
#include <iomanip>		//-- lib pour la partie affichage 
using namespace std;

//-- librairie personnelle --// 
#include "fonctionAND.h"



void fonctionAND::AfficherInfo()
{
    //-- d�claration d'objet --// 
    //-- d�claration de variables --// 
	int valCv = 0;

    //-- message utilisateur --// 
    cout << endl;
    cout << "RESULTAT FONCTION AND \n" << endl;

    //-- construction de l'afficahge --// 
	//-- pour la mise en forme de l'afficahge utilisation des fonction suivantes : setiosflags(std::ios::left/right), resetiosflags(std::ios::right), std::setw(9) 
	cout << setw(9);
	//-- entree A --//
    //-- info litteral --//
    cout << " A " << " | ";
	//-- appel de la m�thode de convertion binaire --//
	ConversionBinaire(valCv);
    //-- info binaire --// 
 
    //-- affichage de la valeur en binaire --// 
	cout << " %d  " << " | " << ConversionBinaire(valCv);

    //-- entree B --// 
    //-- info litteral --//
    cout << " B " << " | ";

	//-- info d�cimal --//
	cout << " %d " << " | " << valCv;

    //-- info binaire --// 

	//-- appel de la m�thode de convertion binaire --//
	 ConversionBinaire(valCv);
	//-- affichage de la valeur en binaire --// 
	cout << " %d  " << " | " << ConversionBinaire(valCv);


    //-- Sortie --// 
    //-- info litteral --//
    cout << " Sortie "  << " | ";

	//-- info d�cimal --//
	cout << " %d " << " | " << valCv;

    //-- info binaire --// 

	//-- appel de la m�thode de convertion binaire --//
	 ConversionBinaire(valCv);

   //-- affichage de la valeur en binaire --// 
	cout << " %d  " << " | " << ConversionBinaire(valCv);


}

void fonctionAND::OperationBinaire()
{
	// operation binaire entre AND entre deux valeur

	Sortie = entreeA * entreeB;
}

