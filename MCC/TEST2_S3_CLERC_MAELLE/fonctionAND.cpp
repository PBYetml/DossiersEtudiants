//-----------------------------------------------------------------------------------//
// Nom du projet 		: Fonctions Binaires 
// Nom du fichier 		: FonctionAND.cpp
// Date de création 	: 19.01.2021
// Date de modification : 20.01.2021
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : ce programme est relié au test n°2 C++ - SLO2
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
//----------------------------------------------------------------------------------//

//-- librairie standart --// 
#include <iostream>		//-- utilisation des entrées / sorties 
#include <iomanip>		//-- lib pour la partie affichage 

//-- utilisataion du namespace std --// 
using namespace std;

//-- librairie personnelle --// 
#include "fonctionAND.h"



void fonctionAND::AfficherInfo()
{
    //-- déclaration d'objet --// 
	string EntreeA_binaire;
	string EntreeB_binaire;
	string Sortie_binaire;

    //-- déclaration de variables --// 

    //-- message utilisateur --// 
    cout << endl;
    cout << "RESULTAT FONCTION AND \n" << endl;

    //-- construction de l'affichage --// 
	//-- pour la mise en forme de l'affichage utilisation des fonction suivantes : setiosflags(std::ios::left/right), resetiosflags(std::ios::right), std::setw(9) 
    
	//-- entree A --//
    //-- info litteral --//
	cout << " A " << setw(20) << " | ";

    //-- info décimal --//
	cout << setw(8) << EntreeA << " | ";

    //-- info binaire --// 
    //-- appel de la méthode de convertion binaire --//
	EntreeA_binaire = FonctionBinaire::ConversionBinaire(EntreeA);

    //-- affichage de la valeur en binaire --// 
	cout << EntreeA_binaire << endl;


    //-- entree B --// 
    //-- info litteral --//
	cout << " B " << setw(20) << " | ";

    //-- info décimal --//
	cout << setw(8) << EntreeB << " | ";

    //-- info binaire --// 
    //-- appel de la méthode de convertion binaire --//
	EntreeB_binaire = FonctionBinaire::ConversionBinaire(EntreeB);

    //-- affichage de la valeur en binaire --// 
	cout << EntreeB_binaire << endl;



    //-- Sortie --// 

	//-- info litteral --//
	cout << " Sortie " << setw(15) << " | ";

	//-- info décimal --//
	cout << setw(8) << Sortie << " | ";

	//-- info binaire --// 
	//-- appel de la méthode de convertion binaire --//
	Sortie_binaire = FonctionBinaire::ConversionBinaire(Sortie);

	//-- affichage de la valeur en binaire --// 
	cout << Sortie_binaire << endl;

}

void fonctionAND::OperationBinaire()
{
	// operation binaire entre AND entre deux valeur
	Sortie = EntreeA & EntreeB;

}

//-- Constructeur et destructeur --// 
fonctionAND::fonctionAND()
{

}

fonctionAND::~fonctionAND()
{

}

