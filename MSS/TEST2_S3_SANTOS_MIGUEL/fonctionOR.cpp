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

using namespace std;

void fonctionOR::AfficherInfo()
{
    //-- d�claration d'objet --// 
    std::string binaireA;
    std::string binaireB;
    std::string binaireS;

    //-- d�claration de variable --//
    const uint8_t largeurCol = 10;

    //-- message utilisateur --// 
    std::cout << std::endl;
    std::cout << "RESULTAT FONCTION OR \n" << std::endl;

    //-- Conversion des valeurs d�cimal en binaire --//
    binaireA = ConversionBinaire(this->entreeA);
    binaireB = ConversionBinaire(this->entreeB);
    binaireS = ConversionBinaire(this->sortie);

    //-- construction de l'affichage --//    

    //-- Entr�e A --//
    cout << setiosflags(ios::left);
    cout << setw(largeurCol) << " A " << " | ";
    cout << setw(largeurCol) << this->entreeA << " | ";
    cout << resetiosflags(ios::left);

    cout << setiosflags(ios::right);
    cout << setw(this->nbDigit) << binaireA << endl;
    cout << resetiosflags(ios::right);

    //-- Entr�e B --//
    cout << setiosflags(ios::left);
    cout << setw(largeurCol) << " B " << " | ";
    cout << setw(largeurCol) << this->entreeB << " | ";
    cout << resetiosflags(ios::left);

    cout << setiosflags(ios::right);
    cout << setw(this->nbDigit) << binaireB << endl;
    cout << resetiosflags(ios::right);

    //-- Sortie --//
    cout << setiosflags(ios::left);
    cout << setw(largeurCol) << " Sortie " << " | ";
    cout << setw(largeurCol) << this->sortie << " | ";
    cout << resetiosflags(ios::left);

    cout << setiosflags(ios::right);
    cout << setw(this->nbDigit) << binaireS << endl;
    cout << resetiosflags(ios::right);

}

void fonctionOR::OperationBinaire()
{
    //-- operation binaire OR entre deux valeurs --//
    this->sortie = this->entreeA || this->entreeB;   
}

