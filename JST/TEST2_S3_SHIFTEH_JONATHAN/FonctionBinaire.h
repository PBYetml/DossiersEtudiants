#ifndef FONCTIONBINAIRE_H
#define FONCTIONBINAIRE_H

//-- librairie standart --// 
#include <string>

//-- définition ou constante --// 
#define LIMITVALDECIMAL 1

//-- énumération --// 
enum e_FonctionBinaire { AND = 1, OR} ;   //choixFonctBin;

class FonctionBinaire {

 public:
	 //-- attribut --// 
 
 
     //-- méthode --// 
     virtual void AfficherInfo();
     virtual void OperationBinaire(); 

     void InsererValeur();


 protected:
    //-- attribut --// 
     int entreeA;
     int entreeB;
     int nbDigit;
     int sortie;

    //-- méthode --// 
     std::string ConversionBinaire(int valConvert);

private:
    //-- attributs --// 
    int limitMaxValue;

	//-- méthode --// 
};

#endif // FonctionBinaire_h
