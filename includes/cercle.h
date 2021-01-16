#include <iostream>
#include <cmath>
#include "forme.h"

using namespace std;

class Cercle: public Forme{
public :
	Cercle(int rayon = 1);
	~Cercle();

	virtual double aire();
	void setRayon(int newR);
	int getRayon()const;
<<<<<<< HEAD
	virtual void afficher(ostream & s);

=======
  	virtual void afficher(ostream & s);
	  
>>>>>>> 2aa4b086627df30c7a3c5b3ef14c7bf250374a9e
private :
	int rayon;
};