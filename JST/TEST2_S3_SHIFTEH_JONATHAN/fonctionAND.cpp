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

//-- librairie personnelle --// 
#include "fonctionAND.h"



void fonctionAND::AfficherInfo()
{
    //-- déclaration d'objet --// 

    //-- déclaration de variables --// 
    std::string ValBin = "";

    //-- message utilisateur --// 
    std::cout << std::endl;
    std::cout << "RESULTAT FONCTION AND \n" << std::endl;

    //-- construction de l'afficahge --// 
	//-- pour la mise en forme de l'afficahge utilisation des fonction suivantes : setiosflags(std::ios::left/right), resetiosflags(std::ios::right), std::setw(9) 

	//-- entree A --//
    //-- info litteral --//
    std::cout << setiosflags(std::ios::left);
    std::cout << std::setw(9) << " A " << " | ";
    std::cout << resetiosflags(std::ios::left);
    std::cout << setiosflags(std::ios::right);

    //-- info décimal --//
    std::cout << std::setw(9) << entreeA << " | ";

    //-- info binaire --//
    //-- appel de la méthode de convertion binaire --//
    ValBin = ConversionBinaire(entreeA);

    //-- affichage de la valeur en binaire --// 
    std::cout << std::setw(9) << ValBin;
    std::cout << resetiosflags(std::ios::right);
    std::cout << std::endl;


    //-- entree B --// 
    //-- info litteral --//
    std::cout << setiosflags(std::ios::left);
    std::cout << std::setw(9) << " B " << " | ";
    std::cout << resetiosflags(std::ios::left);
    std::cout << setiosflags(std::ios::right);

    //-- info décimal --//
    std::cout << std::setw(9) << entreeB << " | ";

    //-- info binaire --// 
    //-- appel de la méthode de convertion binaire --//
    ValBin = ConversionBinaire(entreeB);

    //-- affichage de la valeur en binaire --// 
    std::cout << std::setw(9) << ValBin;
    std::cout << resetiosflags(std::ios::right);
    std::cout << std::endl;


    //-- Sortie --// 
    //-- info litteral --//
    std::cout << setiosflags(std::ios::left);
    std::cout << std::setw(9)  << " Sortie " << " | ";
    std::cout << resetiosflags(std::ios::left);
    std::cout << setiosflags(std::ios::right);

    //-- info décimal --//
    std::cout << std::setw(9) << sortie << " | ";

    //-- info binaire --// 
    //-- appel de la méthode de convertion binaire --//
    ValBin = ConversionBinaire(sortie);

    //-- affichage de la valeur en binaire --// 
    std::cout << std::setw(9) << ValBin;
    std::cout << resetiosflags(std::ios::right);
    std::cout << std::endl;
}

void fonctionAND::OperationBinaire()
{
	// operation binaire entre AND entre deux valeur
    sortie = entreeA & entreeB;
}

