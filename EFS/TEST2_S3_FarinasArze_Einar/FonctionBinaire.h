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
	 int16_t entreeA;
	 int16_t entreeB;
	 int16_t nbDigit;
	 int16_t sortie;

    //-- m�thode --// 
	 std::string ConversionBinaire(int16_t valConvert);
	 //void ConversionBinaire(int16_t valConvert);
 private:
    //-- attributs --// 
	 int16_t limitMaxValue;
	 //-- m�thode --// 
};

#endif // FonctionBinaire_h
