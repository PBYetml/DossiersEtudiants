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
#include <algorithm>
//-- librairie personnelle --// 
#include "FonctionBinaire.h"
using namespace std;

void FonctionBinaire::InsererValeur()
{
    //-- message utilisateur --// 
    std::cout << "veuillez inserer le nombre de digit voulue :  "; 
    
    //-- r�cup�ration de la valeur --// 
	std::cin >> nbDigit;
    //-- cr�ation du nombre limite que peut inserer l'utilisateur --// 

	if (nbDigit > 32)
	{
		nbDigit = 32;
	}
	limitMaxValue = pow(2, nbDigit) - 1;
    //-- message utilisateur --//
	//-- MAJ de l'entree A 	
    std::cout << "\nveuillez inserer une valeur entre 0 et "<< limitMaxValue << " : "; 	// � compl�ter 
	std::cin >> entreeA;
    //-- rendre la valeur en mode absolue --// 
	if (entreeA > limitMaxValue)
	{
		entreeA = limitMaxValue;
	}
	if (entreeA < 0)
	{
		entreeA = entreeA*-1;
	}
	if (entreeA == 0)
	{
		entreeA = 1;
	}
	
    //-- test sur la valeur --//


    //-- message utilisateur --//
	//-- MAJ de l'entree B 	
    std::cout << "veuillez inserer une valeur entre 0 et  " << limitMaxValue << " : ";  	// � compl�ter 
	std::cin >> entreeB;
    //-- rendre la valeur en mode absolue --// 
	if (entreeB > limitMaxValue)
	{
		entreeB = limitMaxValue;
	}
	if (entreeB < 0)
	{
		entreeB = entreeB * -1;
	}
	if (entreeB == 0)
	{
		entreeB = 1;
	}
    //-- test sur la valeur --//

}


std::string FonctionBinaire::ConversionBinaire(int ValConvert)
{
    //-- d�claration d'objet --// 
    
    //-- d�claration de variable --//
	std::string CharChain;
	char Value; 
    //-- boucle de convertion --// 
	while (ValConvert != 0)
	{
		//-- r�cuperation de l'info binaire --//
		if (ValConvert % 2 == 0)
		{
			Value = '0';
		}
		else
		{
			Value = '1';
		}
		//-- MAJ de la valeur � convertir --// 
		ValConvert = ValConvert / 2;
		//-- utilisation  de la table ASCII --// 
		CharChain.insert(CharChain.length(), 1, Value);
		
	}
	reverse(CharChain.begin(), CharChain.end());
	// retour de la cha�ne de caract�re => object string
	return CharChain;
}
//constructeur 
FonctionBinaire::FonctionBinaire()
{

}
FonctionBinaire::~FonctionBinaire()
{

}


//-- FONCTION NON DEFINIE --// 
void FonctionBinaire::OperationBinaire()
{
    


}

void FonctionBinaire::AfficherInfo()
{



}



