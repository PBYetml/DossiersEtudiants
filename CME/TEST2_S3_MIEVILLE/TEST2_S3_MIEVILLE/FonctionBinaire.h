#ifndef FonctionBinaire_h
#define FonctionBinaire_h

//-- librairie standart --// 
#include <string>

//-- définition ou constante --// 
#define LIMITVALDECIMAL 1

//-- énumération --// 
enum e_FonctionBinaire { AND = 1, OR, XOR } ;   //choixFonctBin;

class FonctionBinaire {

 public:
	 //-- attribut --// 
	 
	 
 
     //-- méthode --// 
     virtual void AfficherInfo();
     virtual void OperationBinaire(); 
	 void InsererValeur();
	 FonctionBinaire();
	 ~FonctionBinaire();

 protected:
    //-- attribut --// 
	 int EntreeA;
	 int EntreeB;
	 int Sortie;
	 int nbDigit;
    //-- méthode --// 
	 std::string ConversionBinaire(int valConvert);

private:
    //-- attributs --// 
	int limitMaxValue;
	//-- méthode --// 
};

#endif // FonctionBinaire_h
