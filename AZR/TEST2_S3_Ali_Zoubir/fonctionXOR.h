#ifndef fonctionXOR_h
#define fonctionXOR_h

#include "FonctionBinaire.h"


class fonctionXOR : public FonctionBinaire {

 public:
	 /* Constructor and destructor */
	 fonctionXOR();
	 ~fonctionXOR();

	 /* Affiche les résultats de l'opération */
	 void AfficherInfo();
	 /* Effectue l'opération */
	 void OperationBinaire();


};

#endif // fonctionOR_h
