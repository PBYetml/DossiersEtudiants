#ifndef FonctionBinaire_h
#define FonctionBinaire_h

//-- librairie standart --// 
#include <string>

using namespace std;

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

 protected:
    //-- attribut --// 
     int entreeA = 0;
     int entreeB = 0;
     int nbDigit = 0;
     int sortie = 0;

    //-- méthode --// 

    string ConversionBinaire(int ValConvert, string ValBinaire);

private:
    //-- attributs --// 
    int limitMaxValue;

	//-- méthode --// 
};

#endif // FonctionBinaire_h
