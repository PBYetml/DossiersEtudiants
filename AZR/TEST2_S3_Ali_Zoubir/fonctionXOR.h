#ifndef fonctionXOR_h
#define fonctionXOR_h

#include "FonctionBinaire.h"


class fonctionXOR : public FonctionBinaire {

 public:
	 /* Constructor and destructor */
	 fonctionXOR();
	 ~fonctionXOR();

	 /* Affiche les r�sultats de l'op�ration */
	 void AfficherInfo();
	 /* Effectue l'op�ration */
	 void OperationBinaire();


};

#endif // fonctionOR_h
