#ifndef fonctionAND_h
#define fonctionAND_h

#include "FonctionBinaire.h"


class fonctionAND : public FonctionBinaire {

 public:
	 //-- attribut --//

	 //-- m�thode --// 
	 virtual void AfficherInfo();
	 virtual void OperationBinaire();
	 fonctionAND();
	 ~fonctionAND();
};

#endif // fonctionAND_h
