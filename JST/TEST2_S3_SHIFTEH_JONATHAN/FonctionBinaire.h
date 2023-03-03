#ifndef FONCTIONBINAIRE_H
#define FONCTIONBINAIRE_H

//-- librairie standart --// 
#include <string>

//-- d�finition ou constante --// 
#define LIMITVALDECIMAL 1

//-- �num�ration --// 
enum e_FonctionBinaire { AND = 1, OR} ;   //choixFonctBin;

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
     int sortie;

    //-- m�thode --// 
     std::string ConversionBinaire(int valConvert);

private:
    //-- attributs --// 
    int limitMaxValue;

	//-- m�thode --// 
};

#endif // FonctionBinaire_h
