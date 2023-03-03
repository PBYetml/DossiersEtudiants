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

     void ConversionBinaire();
     void InsererValeur();

 protected:
    //-- attribut --// 
     int entreeA;
     int entreeB;
     int nbDigit;
     int sortie;

    //-- m�thode --// 
    

private:
    //-- attributs --// 
    double limitMaxValue;

	//-- m�thode --// 

};

#endif // FonctionBinaire_h
