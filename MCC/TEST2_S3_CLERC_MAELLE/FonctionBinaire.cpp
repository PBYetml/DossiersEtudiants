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
#include <cstdlib>      //-- librairie système #include <string>
#include <bitset>

//-- utilisataion du namespace std --// 
using namespace std;

//-- librairie personnelle --// 
#include "FonctionBinaire.h"

void FonctionBinaire::InsererValeur()
{
    //-- message utilisateur --// 
    cout << "veuillez inserer le nombre de digit voulue : "; 
    
    //-- récupération de la valeur --// 
	cin >> nbDigit;

    //-- création du nombre limite que peut inserer l'utilisateur --// 
	LimitMaxValue = pow(2, nbDigit) - 1;

    //-- message utilisateur --//
	//-- MAJ de l'entree A 	
    cout << "\nveuillez inserer une valeur entre 0 et " << LimitMaxValue << endl;
	cin >> EntreeA;

    //-- rendre la valeur en mode absolue --// 
	EntreeA = abs(EntreeA);

    //-- test sur la valeur --//
	if (EntreeA > (LimitMaxValue))
	{
		EntreeA = LimitMaxValue;
	}
	else if (EntreeA == 0)
	{
		EntreeA = 1;
	}

    //-- message utilisateur --//
	//-- MAJ de l'entree B 	
    cout << "veuillez inserer une valeur entre 0 et  " << LimitMaxValue << endl;
	cin >> EntreeB;

    //-- rendre la valeur en mode absolue --// 
	EntreeB = abs(EntreeB);

	//-- test sur la valeur --//
	if (EntreeB > (LimitMaxValue))
	{
		EntreeB = LimitMaxValue;
	}
	else if (EntreeB == 0)
	{
		EntreeB = 1;
	}
}


std::string FonctionBinaire::ConversionBinaire(int valeur)
{
	std::string binary = std::bitset<10>(valeur).to_string();
        
	// retour de la chaîne de caractère => object string
	return binary;
}


//-- FONCTION NON DEFINIE --// 
void FonctionBinaire::OperationBinaire()
{
    
}

void FonctionBinaire::AfficherInfo()
{

}


//-- Constructeur et destructeur --// 
FonctionBinaire::FonctionBinaire()
{

}

FonctionBinaire::~FonctionBinaire()
{

}



