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
    int tempUserValue = 0;

    //-- message utilisateur --// 
    std::cout << "Veuillez inserer le nombre de digit voulue : ";

    //-- récupération de la valeur --//
    std::cin >> tempUserValue;

    //-- Limitation de la valeur --//
    if (tempUserValue <= 0)
        tempUserValue = 1;
    if (tempUserValue > 31)
        tempUserValue = 31;

    //-- Sauvegarde de la valeur --//
    this->nbDigit = tempUserValue;
    
    //-- création du nombre limite que peut inserer l'utilisateur --//
    this->limitMaxValue = int(pow(2, this->nbDigit) - 1);

    //-- message utilisateur --//
	//-- MAJ de l'entree A 	--//
    std::cout << "\nveuillez inserer une valeur entre 0 et " << this->limitMaxValue << " : ";

    std::cin >> tempUserValue;

    //-- rendre la valeur en mode absolue --// 
    tempUserValue = abs(tempUserValue);

    //-- test sur la valeur --//
    if (tempUserValue > this->limitMaxValue)
    {
        tempUserValue = this->limitMaxValue;
    }
    else if (tempUserValue == 0)
    {
        tempUserValue = 1;
    }

    //-- sauvegarde de la valeur --//
    this->entreeA = tempUserValue;

    //-- message utilisateur --//
	//-- MAJ de l'entree B 	--//
    std::cout << "\nveuillez inserer une valeur entre 0 et " << this->limitMaxValue << " : ";

    std::cin >> tempUserValue;

    //-- rendre la valeur en mode absolue --// 
    tempUserValue = abs(tempUserValue);

    //-- test sur la valeur --//
    if (tempUserValue > this->limitMaxValue)
    {
        tempUserValue = this->limitMaxValue;
    }
    else if (tempUserValue == 0)
    {
        tempUserValue = 1;
    }

    //-- sauvegarde de la valeur --//
    this->entreeB = tempUserValue;

}


std::string FonctionBinaire::ConversionBinaire(int valConvert)
{
    //-- déclaration d'objet --// 
    std::string strBinaire = "";
    
    //-- déclaration de variable --//
    int quotient = valConvert;
    int reste = 0;
    char charBinaire;

    //-- boucle de convertion --//
    //-- Conversion binaire par division par 2 successives --//
    while (quotient > 0)
    {
        reste = quotient % 2;

        //-- Conversion de binaire à charactère --//
        charBinaire = reste + '0';

        //-- Ajout du caractère à la chaine --//
        strBinaire = strBinaire + charBinaire;

        quotient = quotient / 2;
    }
        
	// retour de la chaîne de caractère => object string
    return strBinaire;
}


//-- FONCTION NON DEFINIE --// 
void FonctionBinaire::OperationBinaire()
{

}

void FonctionBinaire::AfficherInfo()
{

}



