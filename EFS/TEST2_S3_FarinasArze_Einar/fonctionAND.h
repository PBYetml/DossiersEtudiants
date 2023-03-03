#ifndef fonctionAND_h
#define fonctionAND_h

#include "FonctionBinaire.h"


class fonctionAND : public FonctionBinaire {

 public:
	 //-- attribut --//

	 //-- méthode --// 
	 virtual void AfficherInfo();
	 virtual void OperationBinaire();
	 fonctionAND();
	 ~fonctionAND();
};

#endif // fonctionAND_h
