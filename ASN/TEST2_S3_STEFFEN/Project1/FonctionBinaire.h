#ifndef FonctionBinaire_h
#define FonctionBinaire_h

//-- librairie standart --// 
#include <string>

//-- d�finition ou constante --// 
#define LIMITVALDECIMAL 1

//-- �num�ration --// 
enum e_FonctionBinaire { AND = 1, OR, XOR } ;   //choixFonctBin;

class FonctionBinaire{

 public:
	 //-- attribut --//
     

     //-- m�thode --//
     FonctionBinaire();
     ~FonctionBinaire();
     void InsererValeur();
     virtual void AfficherInfo();
     virtual void OperationBinaire();


 protected:
    //-- attribut --// 
    int EntreeA;
    int EntreeB;
    int nbDigit;
    int Sortie;
    //-- m�thode --//
    std::string ConversionBinaire(int valConvert);


private:
    //-- attributs --//
    int limitMaxValue;

	//-- m�thode --//                                                               
};

#endif // FonctionBinaire_h
