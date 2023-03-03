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
#include <math.h>



//-- librairie personnelle --// 
#include "FonctionBinaire.h"

void FonctionBinaire::InsererValeur()
{
    int A, B;
    //-- message utilisateur --// 
    std::cout << "Veuillez inserer le nombre de digit voulue : "; 
    
    //-- r�cup�ration de la valeur --// 
    std::cin >> nbDigit;
    //-- cr�ation du nombre limite que peut inserer l'utilisateur --// 
    limitMaxValue = pow(2, nbDigit) - 1;

    //-- message utilisateur --//
	//-- MAJ de l'entree A 	
    std::cout << "\nVeuillez inserer une valeur entre 0 et " << limitMaxValue << " : "; 	// � compl�ter 
    std::cin >> A;
    std::cout << std::endl;
    //-- rendre la valeur en mode absolue --// 
    A = abs(A);
    //-- test sur la valeur --//
    if (A > limitMaxValue) A = limitMaxValue;
    if (A == 0) A = 1;
    entreeA = A;

    //-- message utilisateur --//
	//-- MAJ de l'entree B 	
    std::cout << "Veuillez inserer une valeur entre 0 et " << limitMaxValue << " : ";  	// � compl�ter 
    std::cin >> B;
    std::cout << std::endl;
    //-- rendre la valeur en mode absolue --// 
    B = abs(B);
    //-- test sur la valeur --//
    
    if (B > limitMaxValue) B = limitMaxValue;
    if (B == 0) B = 1;
    entreeB = B;
}


std::string FonctionBinaire::ConversionBinaire(int valConvert)
{
    //-- d�claration d'objet --// 
    
    //-- d�claration de variable --//
    std::string chaine;

    //-- boucle de convertion --// 


    // Obtenu de Chat GPT : 
    //////////////////////////////////////////////////////////////////////////////////////////
    while (valConvert > 0) {
        chaine = (valConvert % 2 == 0 ? "0" : "1") + chaine; // ajout du bit correspondant
        valConvert /= 2; // division enti�re pour passer au bit suivant
    }
    //////////////////////////////////////////////////////////////////////////////////////////

        //-- r�cuperation de l'info binaire --//
        
        //-- MAJ de la valeur � convertir --// 
        
        //-- utilisation  de la table ASCII --// 
        
	// retour de la cha�ne de caract�re => object string
    return chaine;
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

}
FonctionBinaire::~FonctionBinaire()
{

}


