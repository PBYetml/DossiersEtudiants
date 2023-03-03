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
	 void InsererValeur();
     virtual void AfficherInfo();
     virtual void OperationBinaire(); 
	 FonctionBinaire();
	 ~FonctionBinaire();


 protected:
    //-- attribut --// 
	 int EntreeA;
	 int EntreeB;
	 int Sortie;
	 int nbDigit; //

    //-- méthode --// 
	 std::string ConversionBinaire(int valeur);


private:
    //-- attributs --// 
	int LimitMaxValue;

	//-- méthode --// 
};

#endif // FonctionBinaire_h
