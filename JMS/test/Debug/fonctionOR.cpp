//-----------------------------------------------------------------------------------//
// Nom du projet 		: Fonctions Binaires 
// Nom du fichier 		: FonctionOR.cpp
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
#include "fonctionOR.h"

void fonctionOR::AfficherInfo()
{
    //-- déclaration d'objet --// 
	fonctionOR myfonctionOR;

    //-- déclaration de variables --// 
	std::string Value;
    //-- message utilisateur --// 
    std::cout << std::endl;
    std::cout << "RESULTAT FONCTION OR \n" << std::endl;

    //-- construction de l'afficahge --// 
	//-- pour la mise en forme de l'afficahge utilisation des fonction suivantes : setiosflags(std::ios::left/right), resetiosflags(std::ios::right), std::setw(9) 
    
	//-- entree A --//
	std::cout << std::setiosflags(std::ios::left);
	std::cout << " A " << std::setw(9) << " | ";
	resetiosflags(std::ios::right);
	//-- info décimal --//
	std::cout << myfonctionOR.entreeA << std::setw(9) << " | ";
	resetiosflags(std::ios::right);
	//-- info binaire --// 
	//-- appel de la méthode de convertion binaire --//
	myfonctionOR.ConversionBinaire(myfonctionOR.entreeA, Value);
	//-- affichage de la valeur en binaire --// 
	std::cout << Value << std::setw(9) << " | " << std::endl;

	//-- entree B --// 
	//-- info litteral --//
	std::cout << std::setiosflags(std::ios::left);
	std::cout << " B " << std::setw(9) << " | ";
	resetiosflags(std::ios::right);
	//-- info décimal --//
	std::cout << myfonctionOR.entreeB << std::setw(9) << " | ";
	resetiosflags(std::ios::right);
	//-- info binaire --// 
	//-- appel de la méthode de convertion binaire --//
	myfonctionOR.ConversionBinaire(myfonctionOR.entreeB, Value);
	//-- affichage de la valeur en binaire --// 
	std::cout << Value << std::setw(9) << " | " << std::endl;

	//-- Sortie --// 
	//-- info litteral --//
	std::cout << std::setiosflags(std::ios::left);
	std::cout << " Sortie " << std::setw(9) << " | ";
	resetiosflags(std::ios::right);
	//-- info décimal --//
	std::cout << myfonctionOR.sortie << std::setw(9) << " | ";
	resetiosflags(std::ios::right);
	//-- info binaire --// 
	//-- appel de la méthode de convertion binaire --//
	myfonctionOR.ConversionBinaire(myfonctionOR.sortie, Value);
	//-- affichage de la valeur en binaire --// 
	std::cout << Value << std::setw(9) << " | " << std::endl;

}

void fonctionOR::OperationBinaire()
{
	//-- déclaration d'objet --// 
	fonctionOR myfonctionOR;
	//-- déclaration de variables --// 
	std::string A, B;
	//-- appel de la méthode de convertion binaire --//
	myfonctionOR.ConversionBinaire(myfonctionOR.sortie, A);
	myfonctionOR.ConversionBinaire(myfonctionOR.sortie, B);
	// operation binaire entre OR entre deux valeur
	// myfonctionOR.sortie = A || B;
    
}

