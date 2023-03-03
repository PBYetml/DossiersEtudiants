//-----------------------------------------------------------------------------------//
// Nom du projet 		: Fonctions Binaires 
// Nom du fichier 		: FonctionBinaire.cpp
// Date de cr�ation 	: 19.01.2021
// Date de modification : 20.01.2021
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : ce programme est reli� au test n�1 C++ - SLO2
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
//----------------------------------------------------------------------------------//

//-- librairie standart --// 
#include <iostream>		//-- utilisation des entr�es / sorties 
#include <iomanip>		//-- lib pour la partie affichage 
#include <cstdlib>      //-- librairie syst�me 
#include <string>
//#include <math>


//-- librairie personnelle --// 
#include "FonctionBinaire.h"

void FonctionBinaire::InsererValeur()
{
    int NbrAbsA = 0;
    int NbrAbsB = 0;

    //-- message utilisateur --// 
    std::cout << "veuillez inserer le nombre de digit voulue : " << std::flush; 
    
    //-- r�cup�ration de la valeur --// 
    std::cin >> nbDigit;

    //-- cr�ation du nombre limite que peut inserer l'utilisateur --// 
    limitMaxValue = pow(2, nbDigit) - 1;

    //-- message utilisateur --//
	//-- MAJ de l'entree A 	
    std::cout << "\nveuillez inserer une valeur entre 0 et " << limitMaxValue << " : " << std::flush;
    std::cin >> entreeA;

    //-- rendre la valeur en mode absolue --// 
    NbrAbsA = abs(entreeA);

    //-- test sur la valeur --//
    if (NbrAbsA > limitMaxValue) NbrAbsA = limitMaxValue + 1;
    else if (NbrAbsA == 0) NbrAbsA = 1;
    entreeA = NbrAbsA;

    //-- message utilisateur --//
	//-- MAJ de l'entree B 	
    std::cout << "veuillez inserer une valeur entre 0 et " << limitMaxValue << " : " << std::flush;
    std::cin >> entreeB;

    //-- rendre la valeur en mode absolue --// 
    NbrAbsB = abs(entreeB);

    //-- test sur la valeur --//
    if (NbrAbsB > limitMaxValue) NbrAbsB = limitMaxValue + 1;
    else if (NbrAbsB == 0) NbrAbsB = 1;
    entreeB = NbrAbsB;
}


std::string FonctionBinaire::ConversionBinaire(int valConvert)
{
    //-- d�claration d'objet --// 
    std::string valBinaire = "";

    //-- d�claration de variable --//

    //-- boucle de convertion --// 
    while (valConvert > 0)
    {   
        //-- r�cuperation de l'info binaire --//
        valBinaire = std::to_string(valConvert % 2) + valBinaire;   //std::to_string => fonction pour convertir en chaine de caract�re

        //-- MAJ de la valeur � convertir --// 
        valConvert /= 2;

        //-- utilisation  de la table ASCII --// 
        //
    }
	// retour de la cha�ne de caract�re => object string
    return valBinaire;
}


//-- FONCTION NON DEFINIE --// 
void FonctionBinaire::OperationBinaire()
{

}

void FonctionBinaire::AfficherInfo()
{
    
}



