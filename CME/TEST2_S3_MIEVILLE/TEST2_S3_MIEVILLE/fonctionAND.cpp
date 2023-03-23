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
#include <bitset>
//-- librairie personnelle --// 
#include "fonctionAND.h"



void fonctionAND::AfficherInfo()
{
    //-- déclaration d'objet --// 


    //-- déclaration de variables --// 

    //-- message utilisateur --// 
    std::cout << std::endl;
    std::cout << "RESULTAT FONCTION AND \n" << std::endl;

    //-- construction de l'afficahge --// 
	//-- pour la mise en forme de l'afficahge utilisation des fonction suivantes : setiosflags(std::ios::left/right), resetiosflags(std::ios::right), std::setw(9) 
    
	//-- entree A --//
    //-- info litteral --//
    std::cout << " A "<< std::setw(9) <<  " | " << std::setw(9);

	//-- info décimal --//
	std::cout << EntreeA << std::setw(9) << " | " << std::setw(9);
	//-- info binaire --// 
	//-- appel de la méthode de convertion binaire --//
	std::bitset<8> (EntreeA); // convertir la valeur en binaire
	//-- affichage de la valeur en binaire --// 
	std::cout << EntreeA << std::endl;


    //-- entree B --// 
    //-- info litteral --//
    std::cout << " B " << " | " << std::setw(9);

	//-- info décimal --//
	std::cout << EntreeB << std::setw(9) << " | " << std::setw(9);
	//-- info binaire --// 

	//-- appel de la méthode de convertion binaire --//
	std::bitset<8> EntreeB; // convertir la valeur en binaire
	//-- affichage de la valeur en binaire --// 
	std::cout << EntreeB << std::endl;


	//-- Sortie --// 
	//-- info litteral --//
	std::cout << " Sortie " << std::setw(9) << " | " << std::setw(9);

	//-- info décimal --//
	std::cout << Sortie << " | " << std::setw(9);
	//-- info binaire --// 

	//-- appel de la méthode de convertion binaire --//
	std::bitset<8> Sortie;

	//-- affichage de la valeur en binaire --// 
	std::cout << Sortie << std::endl;

}

void fonctionAND::OperationBinaire()
{
	// operation binaire entre AND entre deux valeur
	Sortie = EntreeA && EntreeB;

}

fonctionAND::fonctionAND() 
{

}
fonctionAND::~fonctionAND() 
{

}