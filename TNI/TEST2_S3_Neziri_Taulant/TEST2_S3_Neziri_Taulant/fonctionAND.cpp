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



void fonctionAND::AfficherInfo()
{
    //-- d�claration d'objet --// 


    //-- d�claration de variables --// 
    int ValBinA;
    int ValBinB;
    int ValSortie;

    //-- message utilisateur --// 
    std::cout << std::endl;
    std::cout << "RESULTAT FONCTION AND \n" << std::endl;

    //-- construction de l'afficahge --// 
	//-- pour la mise en forme de l'afficahge utilisation des fonction suivantes : setiosflags(std::ios::left/right), resetiosflags(std::ios::right), std::setw(9) 
    
	//-- entree A --//
    //-- info litteral --//
    std::cout << " A " <<  " | ";

    //-- info d�cimal --//
    std::cout << "" << entreeA << " | ";
    //-- info binaire --// 
    //-- appel de la m�thode de convertion binaire --//
    ValBinA = entreeA;
   // ConversionBinaire(ValBinA);

    //-- affichage de la valeur en binaire --// 
    std::cout << "" << ValBinA << std::endl;

    //-- entree B --// 
    //-- info litteral --//
    std::cout << " B " << " | ";

    //-- info d�cimal --//
    std::cout << "" << entreeB << " | ";
    //-- info binaire --// 
    //-- appel de la m�thode de convertion binaire --//
    ValBinB = entreeB;
   // ConversionBinaire(entreeB);

    //-- affichage de la valeur en binaire --// 
    std::cout << "" << ValBinB << std::endl;


    //-- Sortie --// 
    //-- info litteral --//
    std::cout << " Sortie "  << " | ";

    //-- info d�cimal --//
    std::cout << "" << sortie << " | ";
    //-- info binaire --// 
    //-- appel de la m�thode de convertion binaire --//
    ValSortie = sortie;
    //ConversionBinaire(ValSortie);

    //-- affichage de la valeur en binaire --// 
    std::cout << "" << ValSortie << std::endl;
}

void fonctionAND::OperationBinaire()
{
	// operation binaire entre AND entre deux valeur

}

//Constructeur de AND
fonctionAND::fonctionAND()
{
}

//D�structeur de AND
fonctionAND::~fonctionAND()
{
}