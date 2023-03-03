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
     void InsererValue();
     

 protected:
    //-- attribut --// 
     int EntreeA;
     int EntreeB;
     int NbDigit;
     int Sortie;
    //-- m�thode --// 
     void ConversionBinaire(int ValConvert);

private:
    //-- attributs --// 
    int limitMaxValue;
	//-- m�thode --// 
};

#endif // FonctionBinaire_h
