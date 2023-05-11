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
    std::string binaryValueA;
    std::string binaryValueB;
    std::string binaryValueS;


    //-- d�claration de variables --//
    const uint8_t widthColumn = 7;

    //-- message utilisateur --// 
    std::cout << std::endl;
    std::cout << "RESULTAT FONCTION AND \n" << std::endl;

    //-- construction de l'afficahge --//
    binaryValueA = ConversionBinaire(this->EntreeA);
    binaryValueB = ConversionBinaire(this->EntreeB);
    binaryValueS = ConversionBinaire(this->Sortie);

	//-- pour la mise en forme de l'afficahge utilisation des fonction suivantes : setiosflags(std::ios::left/right), resetiosflags(std::ios::right), std::setw(9) 
    
	//-- entree A --//
    //-- info litteral --//
    std::cout << " A " << " | " << EntreeA << " | ";

    //-- info d�cimal --//

    //-- info binaire --// 
    //-- appel de la m�thode de convertion binaire --//
    

    //-- affichage de la valeur en binaire --// 


    //-- entree B --// 
    //-- info litteral --//
    std::cout << " B " << " | " << EntreeB << " | ";

    //-- info d�cimal --//

    //-- info binaire --// 

    //-- appel de la m�thode de convertion binaire --//

    //-- affichage de la valeur en binaire --//




    //-- Sortie --// 
    //-- info litteral --//
    std::cout << " Sortie "  << " | " << Sortie << " | ";

    //-- info d�cimal --//

    //-- info binaire --// 

    //-- appel de la m�thode de convertion binaire --//


    //-- affichage de la valeur en binaire --// 

}

void fonctionAND::OperationBinaire()
{
	// operation binaire AND entre deux valeur
    Sortie = EntreeA & EntreeB;
}

