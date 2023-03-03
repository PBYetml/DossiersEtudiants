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
#include <cstdlib>      //-- librairie système 
#include <cmath>
//-- librairie personnelle --// 
#include "fonctionAND.h"



void fonctionAND::AfficherInfo()
{
    //-- déclaration d'objet --// 
	fonctionAND myfonctionAND;

    //-- déclaration de variables --// 
	std::string Value;
    //-- message utilisateur --// 
    std::cout << std::endl;
    std::cout << "RESULTAT FONCTION AND \n" << std::endl;

    //-- construction de l'afficahge --// 
	//-- pour la mise en forme de l'afficahge utilisation des fonction suivantes : setiosflags(std::ios::left/right), resetiosflags(std::ios::right), std::setw(9) 
    
	//-- entree A --//
    //-- info litteral --//
	std::cout << std::setiosflags(std::ios::left);
    std::cout << " A " << std::setw(9) << " | ";
	resetiosflags(std::ios::right);
    //-- info décimal --//
	std::cout << myfonctionAND.entreeA << std::setw(9) << " | ";
	resetiosflags(std::ios::right);
    //-- info binaire --// 
    //-- appel de la méthode de convertion binaire --//
	myfonctionAND.ConversionBinaire(myfonctionAND.entreeA,Value);
    //-- affichage de la valeur en binaire --// 
	std::cout << Value << std::setw(9) << " | " << std::endl;

    //-- entree B --// 
    //-- info litteral --//
	std::cout << std::setiosflags(std::ios::left);
    std::cout << " B " << std::setw(9) << " | ";
	resetiosflags(std::ios::right);
    //-- info décimal --//
	std::cout << myfonctionAND.entreeB << std::setw(9) << " | ";
	resetiosflags(std::ios::right);
    //-- info binaire --// 
    //-- appel de la méthode de convertion binaire --//
	myfonctionAND.ConversionBinaire(myfonctionAND.entreeB, Value);
    //-- affichage de la valeur en binaire --// 
	std::cout << Value << std::setw(9) << " | " << std::endl;

    //-- Sortie --// 
    //-- info litteral --//
	std::cout << std::setiosflags(std::ios::left);
    std::cout << " Sortie "  << std::setw(9) << " | ";
	resetiosflags(std::ios::right);
    //-- info décimal --//
	std::cout << myfonctionAND.sortie << std::setw(9) << " | ";
	resetiosflags(std::ios::right);
    //-- info binaire --// 
    //-- appel de la méthode de convertion binaire --//
	myfonctionAND.ConversionBinaire(myfonctionAND.sortie, Value);
    //-- affichage de la valeur en binaire --// 
	std::cout << Value << std::setw(9) << " | " << std::endl;
}

void fonctionAND::OperationBinaire()
{
	//-- déclaration d'objet --// 
	fonctionAND myfonctionAND;
	//-- déclaration de variables --// 
	std::string A, B;
	//-- appel de la méthode de convertion binaire --//
	myfonctionAND.ConversionBinaire(myfonctionAND.sortie, A);
	myfonctionAND.ConversionBinaire(myfonctionAND.sortie, B);
	// operation binaire entre AND entre deux valeur
	//myfonctionAND.sortie = A & B ;

}

