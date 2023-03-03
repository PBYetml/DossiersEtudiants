#ifndef FonctionBinaire_h
#define FonctionBinaire_h

//-- librairie standart --// 
#include <string>

//-- d�finition ou constante --// 
#define LIMITVALDECIMAL 1

//-- �num�ration --// 
enum e_FonctionBinaire {AND = 1, OR = 2} ;   //choixFonctBin;

class FonctionBinaire {

 public:
	 //-- attribut --// 
 
 
     //-- m�thode --// 
     virtual void AfficherInfo();
     virtual void OperationBinaire(); 
     void InsererValeur();
     std::string ConversionBinaire(int valConvert);

     FonctionBinaire();
     ~FonctionBinaire();

 protected:
    //-- attribut --// 
     int entreeA;
     int entreeB;
     int nbDigit;
     int sortie;
    //-- m�thode --// 


private:
    //-- attributs --// 
    int limitMaxValue;
	//-- m�thode --// 
};

#endif // FonctionBinaire_h
