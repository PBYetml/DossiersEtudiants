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


//-- librairie personnelle --// 
#include "FonctionBinaire.h"



void FonctionBinaire::InsererValeur()
{
    //-- message utilisateur --// 
    std::cout << "veuillez inserer le nombre de digit voulue : "; 
    
    //-- récupération de la valeur --// 
    std::cin >> nbDigit;

    //-- création du nombre limite que peut inserer l'utilisateur --// 
    limitMaxValue = pow(2, nbDigit) - 1;

    //-- message utilisateur --//
	//-- MAJ de l'entree A 	
    std::cout << "\nveuillez inserer une valeur entre 0 et " << limitMaxValue << std::endl; 	// à complèter 

    //-- rendre la valeur en mode absolue --// 
    std::cin >> entreeA;    //Récupération de l'entrée A
    sortie = abs(entreeA);  //Récupération de la valeur absolue

    //-- test sur la valeur --//
    if (entreeA > limitMaxValue)
    {
        std::cout << "Le nombre que vous avez rentre est trop grand";
    }

    //-- message utilisateur --//
	//-- MAJ de l'entree B 	
    std::cout << "\nveuillez inserer une valeur entre 0 et " << limitMaxValue << std::endl; 	// à complèter 

    //-- rendre la valeur en mode absolue --// 
    std::cin >> entreeB;        //Récupération de l'entrée B
    sortie = abs(entreeB);      //Récupération de la valeur absolue

    //-- test sur la valeur --//
    if (entreeB > limitMaxValue)
    {
        std::cout << "Le nombre que vous avez rentré est trop grand";
    }
}


void FonctionBinaire::ConversionBinaire(void)
{
    //-- déclaration d'objet --// 
    
    //-- déclaration de variable --//

    //-- boucle de convertion --// 
      
        //-- récuperation de l'info binaire --//
        
        //-- MAJ de la valeur à convertir --// 
        
        //-- utilisation  de la table ASCII --// 
        
	// retour de la chaîne de caractère => object string

}


//-- FONCTION NON DEFINIE --// 
void FonctionBinaire::OperationBinaire()
{
    
}

void FonctionBinaire::AfficherInfo()
{
   
}
