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
#include <string>
#include <math.h>
using namespace std;


//-- librairie personnelle --// 
#include "FonctionBinaire.h"


void FonctionBinaire::InsererValeur()
{
	double ValABS;
    //-- message utilisateur --// 
    cout << "Veuillez inserer le nombre de digit voulue : "; 
    //-- récupération de la valeur --// 
	cin >> nbDigit;
    //-- création du nombre limite que peut inserer l'utilisateur --// 
	ValABS = ((pow(2, nbDigit) - 1));
	limitMaxValue = abs(ValABS);
    //-- message utilisateur --//
	//-- MAJ de l'entree A 	
    cout << "\n veuillez inserer une valeur entre 0 et %d " << limitMaxValue << endl; 	

    //-- rendre la valeur en mode absolue --// 
	if (nbDigit > limitMaxValue) {

		nbDigit = limitMaxValue;
	}
	if (nbDigit < limitMaxValue) {

		int abs(nbDigit);
	}
	if (nbDigit == 0) {

		nbDigit = 1;
	}
    //-- test sur la valeur --//
	entreeA = nbDigit;

    //-- message utilisateur --//
	//-- MAJ de l'entree B 	
	cout << "veuillez inserer une valeur entre 0 et %d " << limitMaxValue << endl;

    //-- rendre la valeur en mode absolue --// 
	if (nbDigit > limitMaxValue) {

		nbDigit = limitMaxValue;
	}
	if (nbDigit < limitMaxValue) {

		int abs(nbDigit);
	}
	if (nbDigit == 0) {

		nbDigit = 1;
	}

    //-- test sur la valeur --//
	entreeB = nbDigit;
}


string FonctionBinaire:: ConversionBinaire (int valConvert)
{

    //-- déclaration de variable --//
	string valBinaire;
    //-- boucle de convertion --// 
	while (valConvert != 0)
	{
		valBinaire += (valConvert % 2 == 0 ? "0" : "1");
		valConvert /= 2;
	}
	return valBinaire;


}


//-- FONCTION NON DEFINIE --// 
void FonctionBinaire::OperationBinaire()
{
    
}

void FonctionBinaire::AfficherInfo()
{

}



