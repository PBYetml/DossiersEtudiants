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

//-- librairie personnelle --// 
#include "fonctionAND.h"
#include "FonctionBinaire.h"

using namespace std;

void fonctionAND::AfficherInfo()
{
    //-- d�claration d'objet --// 


    //-- d�claration de variables --// 
    string valBinA;
    string valBinB;

    //-- message utilisateur --// 
    cout << endl;
    cout << "RESULTAT FONCTION AND \n" << endl;

    //-- construction de l'afficahge --// 
	//-- pour la mise en forme de l'affichage utilisation des fonction suivantes : setiosflags(std::ios::left/right), resetiosflags(std::ios::right), std::setw(9) 
    
	//-- entree A --//
    //-- info litteral --//
    cout << " A " <<  " | ";

    //-- info d�cimal --//
    cout << entreeA;
    //-- info binaire --// 
    cout << valBinA;

    //-- appel de la m�thode de convertion binaire --//
    ConversionBinaire(entreeA, valBinA);

    //-- affichage de la valeur en binaire --// 
    cout << valBinA << endl;

    //-- entree B --// 
    //-- info litteral --//
    cout << " B " << " | ";

    //-- info d�cimal --//
    cout << entreeB;
    //-- info binaire --// 
    cout << valBinB;
    //-- appel de la m�thode de convertion binaire --//
    ConversionBinaire(entreeB, valBinB);

    //-- affichage de la valeur en binaire --// 
    cout << valBinB << endl;


    //-- Sortie --// 
    //-- info litteral --//
    cout << " Sortie "  << " | ";

    //-- info d�cimal --//

    //-- info binaire --// 

    //-- appel de la m�thode de convertion binaire --//
    ConversionBinaire(sortie, valBinA);

    //-- affichage de la valeur en binaire --// 
    //cout << sortieAND << endl;
}

void fonctionAND::OperationBinaire()
{
	// operation binaire entre AND entre deux valeurs

}

