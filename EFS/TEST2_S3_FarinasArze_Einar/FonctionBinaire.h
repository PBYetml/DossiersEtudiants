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
	 int16_t entreeA;
	 int16_t entreeB;
	 int16_t nbDigit;
	 int16_t sortie;

    //-- méthode --// 
	 std::string ConversionBinaire(int16_t valConvert);
	 //void ConversionBinaire(int16_t valConvert);
 private:
    //-- attributs --// 
	 int16_t limitMaxValue;
	 //-- méthode --// 
};

#endif // FonctionBinaire_h
