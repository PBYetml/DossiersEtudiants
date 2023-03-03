#ifndef FonctionBinaire_h
#define FonctionBinaire_h

//-- librairie standart --// 
#include <string>

//-- d�finition ou constante --// 
#define LIMITVALDECIMAL 1

//-- �num�ration --// 
enum e_FonctionBinaire { AND    = 1, 
                         OR     = 2};

class FonctionBinaire {

 public:
	 //-- attribut --//
     e_FonctionBinaire choixFonction;
 
 
     //-- m�thodes --// 
     virtual void AfficherInfo();
     virtual void OperationBinaire();

     void InsererValeur();


 protected:
    //-- attribut --//
    int entreeA, entreeB;
    int nbDigit;
    int sortie;

    //-- m�thode --//
    std::string ConversionBinaire(int valConvert);


private:
    //-- attributs --//
    int limitMaxValue;

	//-- m�thode --// 
};

#endif // FonctionBinaire_h
