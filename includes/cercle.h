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
  	virtual void afficher(ostream & s);
	  
private :
	int rayon;
};