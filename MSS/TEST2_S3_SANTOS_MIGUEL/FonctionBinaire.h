#ifndef FonctionBinaire_h
#define FonctionBinaire_h

//-- librairie standart --// 
#include <string>

//-- définition ou constante --// 
#define LIMITVALDECIMAL 1

//-- énumération --// 
enum e_FonctionBinaire { AND    = 1, 
                         OR     = 2};

class FonctionBinaire {

 public:
	 //-- attribut --//
     e_FonctionBinaire choixFonction;
 
 
     //-- méthodes --// 
     virtual void AfficherInfo();
     virtual void OperationBinaire();

     void InsererValeur();


 protected:
    //-- attribut --//
    int entreeA, entreeB;
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
