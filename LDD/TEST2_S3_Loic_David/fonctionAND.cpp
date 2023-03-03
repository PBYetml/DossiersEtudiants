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
#include <string>
//-- librairie personnelle --// 
#include "fonctionAND.h"

using namespace std;



void fonctionAND::AfficherInfo()
{
    //-- déclaration d'objet --// 


    //-- déclaration de variables --// 
	string value_aff;
    //-- message utilisateur --// 
    std::cout << std::endl;
    std::cout << "RESULTAT FONCTION AND \n" << std::endl;

    //-- construction de l'afficahge --// 
	//-- pour la mise en forme de l'afficahge utilisation des fonction suivantes : setiosflags(std::ios::left/right), resetiosflags(std::ios::right), std::setw(9) 
    
	//-- entree A --//
    //-- info litteral --//
    std::cout << " A " <<  " | ";

    //-- info décimal --//
	cout << entreeA << " | "; 
    //-- info binaire --// 
    //-- appel de la méthode de convertion binaire --//
	value_aff = ConversionBinaire(entreeA);
    //-- affichage de la valeur en binaire --// 
	cout << value_aff << "\n";

    //-- entree B --// 
    //-- info litteral --//
    std::cout << " B "  " | ";

    //-- info décimal --//
	cout << entreeB << " | ";
    //-- info binaire --// 

    //-- appel de la méthode de convertion binaire --//
	value_aff = ConversionBinaire(entreeB);
    //-- affichage de la valeur en binaire --// 
	cout << value_aff << "\n";


    //-- Sortie --// 
    //-- info litteral --//
    std::cout << " Sortie "  << " | ";

    //-- info décimal --//
	cout << sortie;
    //-- info binaire --// 
	cout << " | ";
    //-- appel de la méthode de convertion binaire --//
	value_aff = ConversionBinaire(sortie);
	//-- affichage de la valeur en binaire --// 
	cout << value_aff << "\n";
}

void fonctionAND::OperationBinaire()
{
	// operation binaire entre AND entre deux valeur
	sortie = entreeA && entreeB;
}

