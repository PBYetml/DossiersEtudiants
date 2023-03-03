#ifndef FonctionBinaire_h
#define FonctionBinaire_h

//-- librairie standart --// 
#include <string>
using namespace std;

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


 protected:
    //-- attribut --// 
	 int entreeA;
	 int entreeB;
	 int nbDigit;
	 int Sortie;
    //-- m�thode --// 
	string ConversionBinaire (int valConvert);

private:
    //-- attributs --// 
	int limitMaxValue;
	//-- m�thode --// 
};

#endif // FonctionBinaire_h
