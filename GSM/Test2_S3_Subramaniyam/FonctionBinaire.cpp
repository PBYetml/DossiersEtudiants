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
    std::cout << "veuillez inserer le nombre de digit voulue :  "; 
    
    //-- récupération de la valeur --// 

	std::cin >> nbDigit;
	


    //-- création du nombre limite que peut inserer l'utilisateur --// 

	if (nbDigit > 16)
	{
		nbDigit = 16;
	}

	if (nbDigit < 0)
	{
		nbDigit = nbDigit * (-1);
	}
	if (nbDigit = 0)
	{
		nbDigit = 1;
	}

    //-- message utilisateur --//
	//-- MAJ de l'entree A 	
    std::cout << "veuillez inserer une valeur entre 0 et 65535 \n"; 	// à complèter 


    //-- rendre la valeur en mode absolue --// 

	std::cin >> abs(entreeA);


    //-- test sur la valeur --//




    //-- message utilisateur --//
	//-- MAJ de l'entree B 	
    std::cout << "veuillez inserer une valeur entre 0 et 65535 \n ";  	// à complèter 
	
    //-- rendre la valeur en mode absolue --// 
	std::cin >> entreeB
    //-- test sur la valeur --//

}


void FonctionBinaire::ConversionBinaire(char valBinaire)
{
    //-- déclaration d'objet --// 

	int valConvert;
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

FonctionBinaire::FonctionBinaire()
{

	std::cout << "Constructeur de FonctionBinaire " << std::endl;
}
FonctionBinaire::~FonctionBinaire()
{


}

