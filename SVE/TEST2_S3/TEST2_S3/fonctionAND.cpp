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

    //-- message utilisateur --// 
    std::cout << std::endl;
    std::cout << "RESULTAT FONCTION AND \n" << std::endl;

    //-- construction de l'afficahge --// 
	//-- pour la mise en forme de l'afficahge utilisation des fonction suivantes : setiosflags(std::ios::left/right), resetiosflags(std::ios::right), std::setw(9) 
    
	//-- entree A --//
    //-- info litteral --//
    std::cout << " A " << " | ";

    //-- info d�cimal --//
    std::cout << EntreeA << " | ";

    //-- info binaire --// 
    //-- appel de la m�thode de convertion binaire --//
    //myfonctionBinaire->ConversionBinaire(EntreeA);

    //-- affichage de la valeur en binaire --// 
    //std::cout << myfonctionBinaire->valBinaire << std::enl;

    //-- entree B --// 
    //-- info litteral --//
    std::cout << " B " << " | ";

    //-- info d�cimal --//
    std::cout << EntreeB << " | ";
    //-- info binaire --// 

    //-- appel de la m�thode de convertion binaire --//
    //myfonctionBinaire->ConversionBinaire(EntreeB);

    //-- affichage de la valeur en binaire --// 
    //std::cout << myfonctionBinaire->valBinaire << std::enl;


    //-- Sortie --// 
    //-- info litteral --//
    std::cout << " Sortie "  << " | ";

    //-- info d�cimal --//
    std::cout << Sortie << " | ";
    //-- info binaire --// 

    //-- appel de la m�thode de convertion binaire --//
    //myfonctionBinaire->ConversionBinaire(Sortie);

    //-- affichage de la valeur en binaire --// 
    //std::cout << myfonctionBinaire->valBinaire << std::enl;
}

void fonctionAND::OperationBinaire()
{
	// operation binaire entre AND entre deux valeur
    Sortie = EntreeA & EntreeB;
}
//Constructeur
fonctionAND::fonctionAND()
{

}

//Destructeur
fonctionAND::~fonctionAND()
{

}