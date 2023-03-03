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
	int user;
    //-- message utilisateur --// 
    std::cout << "veuillez inserer le nombre de digit voulue : "; 
    
    //-- r�cup�ration de la valeur --// 
	std::cin >> nbDigit;
    //-- cr�ation du nombre limite que peut inserer l'utilisateur --// 
	limitMaxValue =(2^nbDigit - 1);
    //-- message utilisateur --//
	//-- MAJ de l'entree A 	
	std::cout << "\nveuillez inserer une valeur entre 0 et " << limitMaxValue << std::endl;
	//-- r�cup�ration de la valeur --// 
	std::cin >> user;
    //-- rendre la valeur en mode absolue --// 
	
    //-- test sur la valeur --//
	if (user > limitMaxValue)
		user = limitMaxValue;
	if (user < 0)
		user = (0 - user);
	if (user == 0)
		user = 1;
	entreeA = user;

    //-- message utilisateur --//
	//-- MAJ de l'entree B 	
	std::cout << "veuillez inserer une valeur entre 0 et  " << limitMaxValue << std::endl;
	//-- r�cup�ration de la valeur --// 
	std::cin >> user;
    //-- rendre la valeur en mode absolue --// 

    //-- test sur la valeur --//
	if (user > limitMaxValue)
		user = limitMaxValue;
	if (user < 0)
		user = (0 - user);
	if (user == 0)
		user = 1;
	entreeB = user;
}


void FonctionBinaire::ConversionBinaire(int valConvert, std::string valBinaire)
{
    //-- d�claration d'objet --// 
	FonctionBinaire myFonctionBinaire;
    //-- d�claration de variable --//
	std::string ValueSave;
    //-- boucle de convertion --// 

        //-- r�cuperation de l'info binaire --//
		valConvert = myFonctionBinaire.entreeA;
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



