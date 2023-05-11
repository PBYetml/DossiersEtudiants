//-----------------------------------------------------------------------------------//
// Nom du projet 		: Fonctions Binaires 
// Nom du fichier 		: FonctionBinaire.cpp
// Date de création 	: 19.01.2021
// Date de modification : 20.01.2021
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : ce programme est relié au test n°1 C++ - SLO2
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
//----------------------------------------------------------------------------------//

//-- librairie standart --// 
#include <iostream>		//-- utilisation des entrées / sorties 
#include <iomanip>		//-- lib pour la partie affichage 
#include <cstdlib>      //-- librairie système
#include <cmath>
#include <string>

//-- librairie personnelle --// 
#include "FonctionBinaire.h"

double maxVal;

FonctionBinaire::FonctionBinaire()
{}

FonctionBinaire::~FonctionBinaire()
{}



void FonctionBinaire::InsererValeur()
{
    //-- message utilisateur --// 
    std::cout << "veuillez inserer le nombre de digit voulue : "; 
    
    //-- récupération de la valeur --// 
    std::cin >> maxVal;
    //-- création du nombre limite que peut inserer l'utilisateur --//
    maxVal = pow(2, maxVal) - 1;
    
    //-- message utilisateur --//
	//-- MAJ de l'entree A 	
    std::cout << "\nveuillez inserer une valeur entre 0 et " << maxVal; 	// à complèter
    std::cin >> EntreeA;
    
    //-- rendre la valeur en mode absolue --//
    EntreeA = abs(EntreeA);

    //-- test sur la valeur --//
    if(EntreeA > maxVal)
    {
        EntreeA = maxVal;
    }
    else if(EntreeA == 0)
    {
        EntreeA++;
    }

    //-- message utilisateur --//
	//-- MAJ de l'entree B 	
    std::cout << "veuillez inserer une valeur entre 0 et  " << maxVal;  	// à complèter
    std::cin >> EntreeB;
    
    //-- rendre la valeur en mode absolue --//
    EntreeB = abs(EntreeB);

    //-- test sur la valeur --//
    if(EntreeB > maxVal)
    {
        EntreeB = maxVal;
    }
    else if(EntreeB == 0)
    {
        EntreeB++;
    }
}

std::string FonctionBinaire::ConversionBinaire(int valConvert)
{
    //-- déclaration d'objet --//
    std::string strValBinaire;
    
    //-- déclaration de variable --//
    int leftover = 0;
    char caracter;

    //-- boucle de convertion --//
    while (valConvert > 0)
    {
        //-- conversion de l'info binaire à charactère --//
        leftover = valConvert % 2;

        //-- utilisation  de la table ASCII --// 
        caracter = leftover + '0';

        //-- MAJ de la valeur à convertir --//
        strValBinaire += caracter;
        valConvert /= 2;
    }
	// retour de la chaîne de caractère => object string
    return(strValBinaire);
}


//-- FONCTION NON DEFINIE --// 
void FonctionBinaire::OperationBinaire()
{
    
}

void FonctionBinaire::AfficherInfo()
{


}



