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
	 /* Constructor an destructor */
	 FonctionBinaire();
	 virtual ~FonctionBinaire();

     virtual void AfficherInfo();
     virtual void OperationBinaire(); 

	 void InsererValeur();


 protected:
    //-- attribut --// 
	/* Public attributes */
	int EntreeA;
	int EntreeB;
	int Sortie;
	int nbDigit;

	//-- essai PBY -> le 29.03.2023
	static int test3; 

    //-- m�thode --// 
	std::string ConversionBinaire(int valConvert);

private:
    //-- attributs --// 
	int limitMaxValue;

	//-- m�thode --// 
};

#endif // FonctionBinaire_h
