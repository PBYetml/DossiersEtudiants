#ifndef fonctionOR_h
#define fonctionOR_h

#include "FonctionBinaire.h"


class fonctionOR : public FonctionBinaire {

 public:
	 //-- attribut --//

	 //-- m�thode --// 
	 virtual void AfficherInfo();
	 virtual void OperationBinaire();
	 fonctionOR();
	 ~fonctionOR();
};

#endif // fonctionOR_h
