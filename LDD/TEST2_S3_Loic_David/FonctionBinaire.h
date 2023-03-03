#ifndef FonctionBinaire_h
#define FonctionBinaire_h

//-- librairie standart --// 
#include <string>

//-- d�finition ou constante --// 
#define LIMITVALDECIMAL 1

//-- �num�ration --// 
enum e_FonctionBinaire { AND = 1, OR, XOR } ;   //choixFonctBin;

class FonctionBinaire {

 public:
	 //-- attribut --// 
 
 
     //-- m�thode --// 
     virtual void AfficherInfo();
     virtual void OperationBinaire(); 
	 void InsererValeur();
	 FonctionBinaire();
	 ~FonctionBinaire();
 


 protected:
    //-- attribut --// 
	 int entreeA;
	 int entreeB;
	 int nbDigit;
	 int sortie;
	 int limitMaxValue;
    //-- m�thode --// 
	 std::string ConversionBinaire(int ValConvert);

private:
    //-- attributs --// 

	//-- m�thode --// 
};

#endif // FonctionBinaire_h
