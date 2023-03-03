#ifndef fonctionOR_h
#define fonctionOR_h

#include "FonctionBinaire.h"


class fonctionOR : public FonctionBinaire {

 public:
	 /* Constructor and destructor */
	 fonctionOR();
	 ~fonctionOR();

	 /* Affiche les résultats de l'opération */
	 void AfficherInfo();
	 /* Effectue l'opération */
	 void OperationBinaire();


};

#endif // fonctionOR_h
