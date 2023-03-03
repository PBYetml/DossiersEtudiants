//-----------------------------------------------------------------------------------//
// Nom du projet 		: Fonctions Binaires 
// Nom du fichier 		: FonctionOR.cpp
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
#include "fonctionOR.h"

fonctionOR::fonctionOR() : FonctionBinaire()
{
}

fonctionOR::~fonctionOR()
{
}

void fonctionOR::AfficherInfo()
{
    //-- d�claration d'objet --// 


    //-- d�claration de variables --// 

    //-- message utilisateur --// 
    std::cout << std::endl;
    std::cout << "RESULTAT FONCTION OR \n" << std::endl;

    //-- construction de l'afficahge --// 
	//-- pour la mise en forme de l'afficahge utilisation des fonction suivantes : setiosflags(std::ios::left/right), resetiosflags(std::ios::right), std::setw(9) 
    
	//-- entree A --//
    //-- info litteral --//
    std::cout << " A " << std::setw(8) << " | " << std::setw(4);

    //-- info d�cimal --//
	std::cout << fonctionOR::EntreeA << " | " << std::setw(4);
    //-- info binaire --// 
    //-- appel de la m�thode de convertion binaire --//
    //-- affichage de la valeur en binaire --// 
	std::cout << fonctionOR::ConversionBinaire(fonctionOR::EntreeA) << std::endl;

    //-- entree B --// 
    //-- info litteral --//
    std::cout << " B " << std::setw(8) << " | " << std::setw(4);

    //-- info d�cimal --//
	std::cout << fonctionOR::EntreeB << " | " << std::setw(4);
    //-- info binaire --// 
    //-- appel de la m�thode de convertion binaire --//
    //-- affichage de la valeur en binaire --// 
	std::cout << fonctionOR::ConversionBinaire(fonctionOR::EntreeB) << std::endl;



    //-- Sortie --// 
    //-- info litteral --//
    std::cout << " Sortie " << std::setw(2) << " | " << std::setw(4);

    //-- info d�cimal --//
	std::cout << fonctionOR::Sortie << " | " << std::setw(4);
    //-- info binaire --// 
    //-- appel de la m�thode de convertion binaire --//
    //-- affichage de la valeur en binaire --// 
	std::cout << fonctionOR::ConversionBinaire(fonctionOR::Sortie) << std::endl;

}

void fonctionOR::OperationBinaire()
{
	// operation binaire entre AND entre deux valeur
	fonctionOR::Sortie = (fonctionOR::EntreeA | fonctionOR::EntreeB);
}

