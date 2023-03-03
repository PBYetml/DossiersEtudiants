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
#include <cmath>
#include <string>

//-- librairie personnelle --// 
#include "FonctionBinaire.h"

double maxVal;


void FonctionBinaire::InsererValeur()
{
    //-- message utilisateur --// 
    std::cout << "veuillez inserer le nombre de digit voulue : "; 
    
    //-- r�cup�ration de la valeur --// 
    std::cin >> maxVal;
    //-- cr�ation du nombre limite que peut inserer l'utilisateur --//
    maxVal = pow(2, maxVal) - 1;
    
    //-- message utilisateur --//
	//-- MAJ de l'entree A 	
    std::cout << "\nveuillez inserer une valeur entre 0 et " << maxVal; 	// � compl�ter
    std::cin >> EntreeA;
    
    //-- rendre la valeur en mode absolue --//
    EntreeA = abs(EntreeA);

    //-- test sur la valeur --//
    if(EntreeA > maxVal)
    {
        EntreeA = maxVal;
    }
    else if(EntreeA == 0)
    {
        EntreeA++;
    }

    //-- message utilisateur --//
	//-- MAJ de l'entree B 	
    std::cout << "veuillez inserer une valeur entre 0 et  " << maxVal;  	// � compl�ter
    std::cin >> EntreeB;
    
    //-- rendre la valeur en mode absolue --//
    EntreeB = abs(EntreeB);

    //-- test sur la valeur --//
    if(EntreeB > maxVal)
    {
        EntreeB = maxVal;
    }
    else if(EntreeB == 0)
    {
        EntreeB++;
    }
}

/*std::string FonctionBinaire::ConversionBinaire()
{
    //-- d�claration d'objet --// 
    
    //-- d�claration de variable --//

    //-- boucle de convertion --// 

        //-- r�cuperation de l'info binaire --//
        
        //-- MAJ de la valeur � convertir --// 
        
        //-- utilisation  de la table ASCII --// 
        
	// retour de la cha�ne de caract�re => object string
    //return(valBinaire);
}*/


//-- FONCTION NON DEFINIE --// 
void FonctionBinaire::OperationBinaire()
{
    
}

void FonctionBinaire::AfficherInfo()
{


}



