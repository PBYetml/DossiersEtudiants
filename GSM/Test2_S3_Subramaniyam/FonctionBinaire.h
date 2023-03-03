#ifndef FonctionBinaire_h
#define FonctionBinaire_h

//-- librairie standart --// 
#include <cstring>
#include <string>

//-- définition ou constante --// 
#define LIMITVALDECIMAL 1

//-- énumération --// 
enum e_FonctionBinaire { AND = 1, OR, XOR } ;   //choixFonctBin;

class FonctionBinaire {

 public:
	 //-- attribut --// 

	 int m_valConvert;
 
 
     //-- méthode --// 
     virtual int AfficherInfo();
     virtual void OperationBinaire(); 
	 void InsererValeur();
	 FonctionBinaire();
	 virtual ~FonctionBinaire();
	 

 protected:
    //-- attribut --// 
	 int entreeA;
	 int entreeB;
	 int nbDigit;
	 int sortie;


    //-- méthode --// 
	int ConversionBinaire  (char valBinaire);

private:
    //-- attributs --// 
	int limitMaxValue;


	//-- méthode --// 
};

#endif // FonctionBinaire_h
