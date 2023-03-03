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
#include <string>

//-- librairie personnelle --// 
#include "FonctionBinaire.h"

FonctionBinaire::FonctionBinaire()
{
	FonctionBinaire::EntreeA = 0;
	FonctionBinaire::EntreeB = 0;
	FonctionBinaire::Sortie = 0;
	FonctionBinaire::nbDigit = 0;
	FonctionBinaire::limitMaxValue = 0;
}

FonctionBinaire::~FonctionBinaire()
{
}

void FonctionBinaire::InsererValeur()
{
	//uint16_t nbDigitMax = 0;
    //-- message utilisateur --// 
    std::cout << "veuillez inserer le nombre de digit voulue : "; 
    

	//-- r�cup�ration de la valeur --// 
	std::cin >> FonctionBinaire::nbDigit;
	//-- cr�ation du nombre limite que peut inserer l'utilisateur --// 
	FonctionBinaire::limitMaxValue = pow(2,nbDigit);


	//-- message utilisateur --//
	//-- MAJ de l'entree A 	
	std::cout << "\nveuillez inserer une valeur entre 0 et " << FonctionBinaire::limitMaxValue << "\n"; 	// � compl�ter 

    //-- rendre la valeur en mode absolue --// 
	std::cin >> FonctionBinaire::EntreeA;
	FonctionBinaire::EntreeA = abs(FonctionBinaire::EntreeA);
    //-- test sur la valeur --//
	if ((FonctionBinaire::EntreeA > FonctionBinaire::limitMaxValue)|| (FonctionBinaire::EntreeA < 0))
		FonctionBinaire::EntreeA = FonctionBinaire::limitMaxValue;

    //-- message utilisateur --//
	//-- MAJ de l'entree B 	
    std::cout << "veuillez inserer une valeur entre 0 et " << FonctionBinaire::limitMaxValue << "\n";  	// � compl�ter 

    //-- rendre la valeur en mode absolue --// 
	std::cin >> FonctionBinaire::EntreeB;
	FonctionBinaire::EntreeB = abs(FonctionBinaire::EntreeB);

    //-- test sur la valeur --//
	if ((FonctionBinaire::EntreeB > FonctionBinaire::limitMaxValue) || (FonctionBinaire::EntreeB < 0))
		FonctionBinaire::EntreeB = FonctionBinaire::limitMaxValue;
}


std::string FonctionBinaire::ConversionBinaire(int valConvert)
{
	// D�claration de var�ables
	int i = FonctionBinaire::nbDigit;
	//-- d�claration d'objet --// 
	std::string binaryString = "";
	//-- boucle de convertion --// 
	// Convertit tout en string selon le nombre de digits sp�cifi�
	for (i - 1; i >= 0; i--) {
		//-- r�cuperation de l'info binaire --//
		// Ajoute 1 ou 0 au string en fonction de la valeur du LSB
		binaryString += ((valConvert & (1 << i)) != 0) ? "1" : "0";
	}
	// retour de la cha�ne de caract�re => object string
	return binaryString;
}


//-- FONCTION NON DEFINIE --// 
void FonctionBinaire::OperationBinaire()
{
    
}


void FonctionBinaire::AfficherInfo()
{

}



