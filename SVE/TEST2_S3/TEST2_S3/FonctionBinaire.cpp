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
#include <math.h>       //-- librairie pour effectuer des operations mathematique
#include <string>     //-- librairie string

//-- librairie personnelle --// 
#include "FonctionBinaire.h"

void FonctionBinaire::InsererValue()
{
    //-- message utilisateur --// 
    std::cout << "veuillez inserer le nombre de digit voulue : "; 
    
    //-- récupération de la valeur --// 
    std::cin >> NbDigit;

    //-- création du nombre limite que peut inserer l'utilisateur --// 
    limitMaxValue = (pow(2, NbDigit)-1);

    //-- message utilisateur --//
	//-- MAJ de l'entree A 	
    std::cout << "\nMAJ de l'entree A";
    std::cout << "\nveuillez inserer une valeur entre 0 et " << limitMaxValue << std::endl; 	// à complèter 

    //-- rendre la valeur en mode absolue --// 
    std::cin >> EntreeA;
    EntreeA = abs(EntreeA);

    //-- test sur la valeur --//
    if (EntreeA > limitMaxValue)
    {
        EntreeA = limitMaxValue;
    }
    if (EntreeA < 0)
    {
        //valeur positive -> ok
    }
    if (EntreeA == 0)
    {
        EntreeA = 1;
    }

    //-- message utilisateur --//
	//-- MAJ de l'entree B 	
    std::cout << "\nMAJ de l'entree B";
    std::cout << "\nveuillez inserer une valeur entre 0 et  " << limitMaxValue << std::endl;  	// à complèter 

    //-- rendre la valeur en mode absolue --// 
    std::cin >> EntreeB;
    EntreeB = abs(EntreeB);

    //-- test sur la valeur --//
    if (EntreeB > limitMaxValue)
    {
        EntreeB = limitMaxValue;
    }
    if (EntreeB < 0)
    {
        //valeur positive -> ok
    }
    if (EntreeB == 0)
    {
        EntreeB = 1;
    }
    
}


void FonctionBinaire::ConversionBinaire(int ValConvert)
{
    //-- déclaration d'objet --// 
    //FonctionBinaire myfonctionBinaire;

    //-- déclaration de variable --//
    char *valBinaire;
    
    //-- boucle de convertion --// 

        //-- récuperation de l'info binaire --//
        //valBinaire = itoa(ValConvert);

        //-- MAJ de la valeur à convertir --// 
        //string str = string(valBinaire);

        //-- utilisation  de la table ASCII --// 
        
	// retour de la chaîne de caractère => object string
    return /*valBinaire*/;
}


//-- FONCTION NON DEFINIE --// 
void FonctionBinaire::OperationBinaire(void)
{
    
}

void FonctionBinaire::AfficherInfo()
{

}



