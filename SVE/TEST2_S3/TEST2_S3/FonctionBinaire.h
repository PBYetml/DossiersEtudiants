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
     void InsererValue();
     

 protected:
    //-- attribut --// 
     int EntreeA;
     int EntreeB;
     int NbDigit;
     int Sortie;
    //-- méthode --// 
     void ConversionBinaire(int ValConvert);

private:
    //-- attributs --// 
    int limitMaxValue;
	//-- méthode --// 
};

#endif // FonctionBinaire_h
