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
    
    //-- r�cup�ration de la valeur --// 
    cin >> nbDigit;
    //-- cr�ation du nombre limite que peut inserer l'utilisateur --// 
    limitMaxValue = pow(2.0, nbDigit) - 1;


    //-- message utilisateur --//
	//-- MAJ de l'entree A 	
    cout << "\nveuillez inserer une valeur entre 0 et "; 	// � compl�ter 

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
    cout << "veuillez inserer une valeur entre 0 et  ";  	// � compl�ter 

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
    //-- d�claration d'objet --// 
    
    //-- d�claration de variable --//
    const int n = 8; //variable pour taille d'un mot binaire

    //-- boucle de convertion --// 
    ValBinaire = bitset<n>(ValConvert).to_string();

        //-- r�cuperation de l'info binaire --//

        //-- MAJ de la valeur � convertir --// 

        //-- utilisation  de la table ASCII --// 

    

    
    // retour de la cha�ne de caract�re => object string
    return (ValBinaire);
}

//-- FONCTION NON DEFINIE --// 
void FonctionBinaire::OperationBinaire()
{
    
}

void FonctionBinaire::AfficherInfo()
{

}



