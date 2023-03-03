#ifndef FonctionBinaire_h
#define FonctionBinaire_h

//-- librairie standart --// 
#include <cstring>
#include <string>

//-- d�finition ou constante --// 
#define LIMITVALDECIMAL 1

//-- �num�ration --// 
enum e_FonctionBinaire { AND = 1, OR, XOR } ;   //choixFonctBin;

class FonctionBinaire {

 public:
	 //-- attribut --// 

	 int m_valConvert;
 
 
     //-- m�thode --// 
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


    //-- m�thode --// 
	int ConversionBinaire  (char valBinaire);

private:
    //-- attributs --// 
	int limitMaxValue;


	//-- m�thode --// 
};

#endif // FonctionBinaire_h
