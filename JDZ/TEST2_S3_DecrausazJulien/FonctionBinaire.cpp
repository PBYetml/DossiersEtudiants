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

#include <iostream>
#include <math.h>
#include <bitset>
//-- librairie personnelle --// 
#include "FonctionBinaire.h"

using namespace std;


void FonctionBinaire::InsererValeur()
{
    //-- message utilisateur --// 
    cout << "veuillez inserer le nombre de digit voulu : "; 
    
    //-- récupération de la valeur --// 
    cin >> nbDigit;
    //-- création du nombre limite que peut inserer l'utilisateur --// 
    limitMaxValue = pow(2.0, nbDigit) - 1;


    //-- message utilisateur --//
	//-- MAJ de l'entree A 	
    cout << "\nveuillez inserer une valeur entre 0 et "; 	// à complèter 

    cin >> entreeA;
    //-- rendre la valeur en mode absolue --// 
    entreeA = abs(entreeA);

    //-- test sur la valeur --//
    if (entreeA > limitMaxValue)
    {
        entreeA = limitMaxValue;
    }

    else if (entreeA == 0)
    {
        entreeA = 1;
    }

    //-- message utilisateur --//
	//-- MAJ de l'entree B 	
    cout << "veuillez inserer une valeur entre 0 et  ";  	// à complèter 

    cin >> entreeB;
    //-- rendre la valeur en mode absolue --// 
    entreeB = abs(entreeB);

    //-- test sur la valeur --//
    if (entreeB > limitMaxValue)
    {
        entreeB = limitMaxValue;
    }

    else if (entreeB == 0)
    {
        entreeB = 1;
    }
}



string FonctionBinaire::ConversionBinaire(int ValConvert, string ValBinaire)
{
    //-- déclaration d'objet --// 
    
    //-- déclaration de variable --//
    const int n = 8; //variable pour taille d'un mot binaire

    //-- boucle de convertion --// 
    ValBinaire = bitset<n>(ValConvert).to_string();

        //-- récuperation de l'info binaire --//

        //-- MAJ de la valeur à convertir --// 

        //-- utilisation  de la table ASCII --// 

    

    
    // retour de la chaîne de caractère => object string
    return (ValBinaire);
}

//-- FONCTION NON DEFINIE --// 
void FonctionBinaire::OperationBinaire()
{
    
}

void FonctionBinaire::AfficherInfo()
{

}



