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
	//-- pour la mise en forme de l'affichage utilisation des fonction suivantes : setiosflags(std::ios::left/right), resetiosflags(std::ios::right), std::setw(9) 
	
	//-- entree A --//
    //-- info litteral --//
    std::cout << " A " << std::setw(10) << " | ";

    //-- info d�cimal --//
	 std::cout << std::setiosflags(std::ios::right) << entreeA << std::setw(10) << " | ";

    //-- info binaire --// 
	 
    //-- appel de la m�thode de convertion binaire --//
	 OperationBinaire();
    //-- affichage de la valeur en binaire --// 
	 std::cout << sortie << resetiosflags(std::ios::right);

    //-- entree B --// 
    //-- info litteral --//
    std::cout << " B " << std::setw(10) << " | ";

    //-- info d�cimal --//

    //-- info binaire --// 

    //-- appel de la m�thode de convertion binaire --//

    //-- affichage de la valeur en binaire --// 



    //-- Sortie --// 
    //-- info litteral --//
    std::cout << " Sortie "  << " | ";

    //-- info d�cimal --//

    //-- info binaire --// 

    //-- appel de la m�thode de convertion binaire --//


    //-- affichage de la valeur en binaire --// 

}

void fonctionAND::OperationBinaire()
{
	// operation binaire entre AND entre deux valeur

}

