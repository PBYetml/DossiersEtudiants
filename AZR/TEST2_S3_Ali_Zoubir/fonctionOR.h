#ifndef fonctionOR_h
#define fonctionOR_h

#include "FonctionBinaire.h"


class fonctionOR : public FonctionBinaire {

 public:
	 /* Constructor and destructor */
	 fonctionOR();
	 ~fonctionOR();

	 /* Affiche les r�sultats de l'op�ration */
	 void AfficherInfo();
	 /* Effectue l'op�ration */
	 void OperationBinaire();


};

#endif // fonctionOR_h
