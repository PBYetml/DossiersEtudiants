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


//-- librairie personnelle --// 
#include "FonctionBinaire.h"

void FonctionBinaire::InsererValeur()
{
    //-- message utilisateur --// 
    std::cout << "veuillez inserer le nombre de digit voulue :  "; 
    
    //-- r�cup�ration de la valeur --// 

	std::cin >> nbDigit;
	


    //-- cr�ation du nombre limite que peut inserer l'utilisateur --// 

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
    std::cout << "veuillez inserer une valeur entre 0 et 65535 \n"; 	// � compl�ter 


    //-- rendre la valeur en mode absolue --// 

	std::cin >> abs(entreeA);


    //-- test sur la valeur --//




    //-- message utilisateur --//
	//-- MAJ de l'entree B 	
    std::cout << "veuillez inserer une valeur entre 0 et 65535 \n ";  	// � compl�ter 
	
    //-- rendre la valeur en mode absolue --// 
	std::cin >> entreeB
    //-- test sur la valeur --//

}


void FonctionBinaire::ConversionBinaire(char valBinaire)
{
    //-- d�claration d'objet --// 

	int valConvert;
    //-- d�claration de variable --//

    //-- boucle de convertion --// 

        //-- r�cuperation de l'info binaire --//
        
        //-- MAJ de la valeur � convertir --// 
        
        //-- utilisation  de la table ASCII --// 
        
	// retour de la cha�ne de caract�re => object string

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

