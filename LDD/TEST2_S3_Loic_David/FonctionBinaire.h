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
	 int entreeA;
	 int entreeB;
	 int nbDigit;
	 int sortie;
	 int limitMaxValue;
    //-- méthode --// 
	 std::string ConversionBinaire(int ValConvert);

private:
    //-- attributs --// 

	//-- méthode --// 
};

#endif // FonctionBinaire_h
