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
#include <cmath>
//-- librairie personnelle --// 
#include "FonctionBinaire.h"
#include "fonctionAND.h"
#include "fonctionOR.h"

using namespace std;

void FonctionBinaire::InsererValeur()
{
    //-- message utilisateur --// 
   cout << "veuillez inserer le nombre de digit voulue : "; 
    
    //-- récupération de la valeur --// 
   cin >> nbDigit;
    //-- création du nombre limite que peut inserer l'utilisateur --// 
   limitMaxValue = pow(2, nbDigit);
   limitMaxValue = limitMaxValue - 1;
    //-- message utilisateur --//
	//-- MAJ de l'entree A 	
    cout << "\nveuillez inserer une valeur entre 0 et "<< limitMaxValue<< endl; 	// à complèter 
	cin >> EntreeA;
    //-- rendre la valeur en mode absolue --// 
	EntreeA = abs(EntreeA);
    //-- test sur la valeur --//
	if (EntreeA > limitMaxValue)
	{
		EntreeA = limitMaxValue;
	}
	else if (EntreeA < 0)
	{
		EntreeA = (~EntreeA) + 1;
	}
	else if (EntreeA == 0)
	{
		EntreeA = 1;
	}
    //-- message utilisateur --//
	//-- MAJ de l'entree B 	
    cout << "veuillez inserer une valeur entre 0 et  " << limitMaxValue << endl;  	// à complèter 
	cin >> EntreeB;
    //-- rendre la valeur en mode absolue --// 
	EntreeB = abs(EntreeB);
    //-- test sur la valeur --//
	if (EntreeB > limitMaxValue)
	{
		EntreeB = limitMaxValue;
	}
	else if (EntreeB < 0)
	{
		EntreeB = (~EntreeB) + 1;
	}
	else if (EntreeB == 0)
	{
		EntreeB = 1;
	}
}


string FonctionBinaire::ConversionBinaire(int valConvert)
{
	
    //-- déclaration d'objet --// 
	string valBinaire;
    //-- déclaration de variable --//

    //-- boucle de convertion --// 

        //-- récuperation de l'info binaire --//
        
        //-- MAJ de la valeur à convertir --// 
        
        //-- utilisation  de la table ASCII --// 
        
	// retour de la chaîne de caractère => object string
	return valBinaire;
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

