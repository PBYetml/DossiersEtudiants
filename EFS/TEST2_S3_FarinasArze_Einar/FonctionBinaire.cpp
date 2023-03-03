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

void FonctionBinaire::InsererValeur()
{
	 // 
    //-- message utilisateur --// 
    std::cout << "veuillez inserer le nombre de digit voulue : "; 
    
    //-- r�cup�ration de la valeur --// 
	 std::cin >> nbDigit;
    //-- cr�ation du nombre limite que peut inserer l'utilisateur --// 
	 limitMaxValue = (2 ^ nbDigit) - 1;
    //-- message utilisateur --//
	//-- MAJ de l'entree A 	
    std::cout << "\nveuillez inserer une valeur entre 0 et " << limitMaxValue; 	// � compl�ter 
	 std::cin >> entreeA;
    //-- rendre la valeur en mode absolue --// 
	 if (entreeA < 0)
	 {
		 entreeA = entreeA * -1;
	 }
    //-- test sur la valeur --//
	 else if (entreeA == 0)
	 {
		 entreeA = 1;
	 }
	 else if (entreeA > limitMaxValue)
	 {
		 entreeA = limitMaxValue;
	 }

    //-- message utilisateur --//
	//-- MAJ de l'entree B 	
    std::cout << "veuillez inserer une valeur entre 0 et  " << limitMaxValue;  	// � compl�ter 
	 std::cin >> entreeB;
    //-- rendre la valeur en mode absolue --// 
	 if (entreeB < 0)
	 {
		 entreeB = entreeB * -1;
	 }
	 //-- test sur la valeur --//
	 if (entreeB == 0)
	 {
		 entreeB = 1;
	 }
	 else if (entreeB > limitMaxValue)
	 {
		 entreeB = limitMaxValue;
	 }
}


std::string FonctionBinaire::ConversionBinaire(int16_t valConvert)
//void FonctionBinaire::ConversionBinaire(int16_t valConvert, std::string *Texte)
{
    //-- d�claration d'objet --// 
	 std::string ValBinaire;
    //-- d�claration de variable --//
	 int16_t RestValue;
    //-- boucle de convertion --// 
	 while (valConvert > 0)
	 {
		 //-- r�cuperation de l'info binaire --//
		 RestValue = valConvert % 2;
		 //-- MAJ de la valeur � convertir --// 
		 valConvert = valConvert / 2;
		 //-- utilisation  de la table ASCII --// 
		 //if (RestValue != 0)
		 //{
		//	 ValBinaire = '1';
		 //}
		 //else
		 //{
		//	 ValBinaire = '0';
		 //}
	 }
	// retour de la cha�ne de caract�re => object string
	 return ValBinaire;
}


//-- FONCTION NON DEFINIE --// 
void FonctionBinaire::OperationBinaire()
{
    
}

void FonctionBinaire::AfficherInfo()
{

}



